using System.Reflection;
using System.Text;
using NativeAOT.CodeGenerator.Extensions;
using NativeAOT.CodeGenerator.Generator;
using NativeAOT.CodeGenerator.Types;
using Settings = NativeAOT.CodeGenerator.Generator.C.Settings;

namespace NativeAOT.CodeGenerator.Syntax.C;

public class CTypeSyntaxWriter: ICSyntaxWriter, ITypeSyntaxWriter
{
    public Settings Settings { get; }
    
    private readonly Dictionary<MemberTypes, ICSyntaxWriter> m_syntaxWriters = new() {
        { MemberTypes.Constructor, new CConstructorSyntaxWriter() },
        { MemberTypes.Property, new CPropertySyntaxWriter() },
        { MemberTypes.Method, new CMethodSyntaxWriter() },
        { MemberTypes.Field, new CFieldSyntaxWriter() },
        { MemberTypes.Event, new CEventSyntaxWriter() }
    };
    
    private IDestructorSyntaxWriter m_destructorSyntaxWriter = new CDestructorSyntaxWriter();
    
    public CTypeSyntaxWriter(Settings settings)
    {
        Settings = settings ?? throw new ArgumentNullException(nameof(settings));
    }
    
    public string Write(object @object, State state)
    {
        return Write((Type)@object, state);
    }

    public string Write(Type type, State state)
    {
        TypeDescriptorRegistry typeDescriptorRegistry = TypeDescriptorRegistry.Shared;
        
        Result cSharpUnmanagedResult = state.CSharpUnmanagedResult ?? throw new Exception("No CSharpUnmanagedResult provided");
        
        if (type.IsPrimitive ||
            type.IsPointer ||
            type.IsByRef) {
            // No need to generate C code for those kinds of types

            return string.Empty;
        }

        string? fullTypeName = type.FullName;

        if (fullTypeName == null) {
            return $"// Type \"{type.Name}\" was skipped. Reason: It has no full name.";
        }
        
        string cTypeName = fullTypeName.CTypeName();

        StringBuilder sb = new();

        if (type.IsEnum) {
            string enumdefCode = WriteEnumDef(
                type,
                cTypeName,
                typeDescriptorRegistry
            );

            sb.AppendLine(enumdefCode);
        } else {
            string typedefCode = WriteTypeDef(cTypeName);
            
            sb.AppendLine(typedefCode);
        }
        
        return sb.ToString();
    }

    private string WriteTypeDef(string cTypeName)
    {
        return $"typedef void* {cTypeName}_t;";
    }

    private string WriteEnumDef(
        Type type,
        string cTypeName,
        TypeDescriptorRegistry typeDescriptorRegistry
    )
    {
        StringBuilder sb = new();

        Type underlyingType = type.GetEnumUnderlyingType();
        TypeDescriptor underlyingTypeDescriptor = underlyingType.GetTypeDescriptor(typeDescriptorRegistry);

        string underlyingTypeName = underlyingTypeDescriptor.GetTypeName(CodeLanguage.C, false);

        sb.AppendLine($"typedef enum __attribute__((enum_extensibility(closed))): {underlyingTypeName} {{");

        var caseNames = type.GetEnumNames();
        var values = type.GetEnumValues();

        List<string> enumCases = new();

        foreach (var caseName in caseNames) {
            // CBoolYes = 1,
            // TODO: Value
            enumCases.Add($"\t{cTypeName}_{caseName} = 0 /* TODO: Value */");
        }

        string enumCasesString = string.Join(",\n", enumCases);

        sb.AppendLine(enumCasesString);
        
        sb.AppendLine($"}} {cTypeName};");
        
        return sb.ToString();
    }

    public string WriteMembers(Type type, State state)
    {
        Result cSharpUnmanagedResult = state.CSharpUnmanagedResult ?? throw new Exception("No CSharpUnmanagedResult provided");
        
        if (type.IsPrimitive ||
            type.IsPointer ||
            type.IsByRef) {
            // No need to generate C code for those kinds of types

            return string.Empty;
        }
        
        var cSharpMembers = cSharpUnmanagedResult.GeneratedTypes[type];

        StringBuilder sb = new();

        foreach (var cSharpMember in cSharpMembers) {
            var member = cSharpMember.Member;
            var memberType = member.MemberType;

            ICSyntaxWriter? syntaxWriter = GetSyntaxWriter(memberType);
            
            if (syntaxWriter == null) {
                if (Settings.EmitUnsupported) {
                    sb.AppendLine($"// TODO: Unsupported Member Type \"{memberType}\"");
                }
                    
                continue;
            }

            string memberCode = syntaxWriter.Write(member, state);

            sb.AppendLine(memberCode);
        }
        
        string destructorCode = m_destructorSyntaxWriter.Write(type, state);

        sb.AppendLine(destructorCode);
        sb.AppendLine();

        return sb.ToString();
    }
    
    private ICSyntaxWriter? GetSyntaxWriter(MemberTypes memberType)
    {
        m_syntaxWriters.TryGetValue(
            memberType,
            out ICSyntaxWriter? syntaxWriter
        );

        return syntaxWriter;
    }
}