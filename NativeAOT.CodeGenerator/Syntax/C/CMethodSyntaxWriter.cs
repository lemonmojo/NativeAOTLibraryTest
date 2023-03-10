using System.Reflection;
using System.Text;

using NativeAOT.CodeGenerator.Extensions;
using NativeAOT.CodeGenerator.Generator;
using NativeAOT.CodeGenerator.Types;

namespace NativeAOT.CodeGenerator.Syntax.C;

public class CMethodSyntaxWriter: ICSyntaxWriter, IMethodSyntaxWriter
{
    public string Write(object @object, State state)
    {
        return Write((MethodInfo)@object, state);
    }

    public string Write(MethodInfo method, State state)
    {
        TypeDescriptorRegistry typeDescriptorRegistry = TypeDescriptorRegistry.Shared;
        
        Result cSharpUnmanagedResult = state.CSharpUnmanagedResult ?? throw new Exception("No CSharpUnmanagedResult provided");
        GeneratedMember cSharpGeneratedMember = cSharpUnmanagedResult.GetGeneratedMember(method) ?? throw new Exception("No C# generated member");

        bool mayThrow = cSharpGeneratedMember.MayThrow;
        const MethodKind methodKind = MethodKind.Normal;

        bool isStaticMethod = method.IsStatic;
        string methodName = method.Name;

        Type declaringType = method.DeclaringType ?? throw new Exception("No declaring type");;
        Type returnType = method.ReturnType;
        IEnumerable<ParameterInfo> parameters = method.GetParameters();

        string methodCode = WriteMethod(
            method,
            methodKind,
            methodName,
            isStaticMethod,
            mayThrow,
            declaringType,
            returnType,
            parameters,
            typeDescriptorRegistry,
            state
        );

        return methodCode;
    }

    protected string WriteMethod(
        MemberInfo memberInfo,
        MethodKind methodKind,
        string methodName,
        bool isStaticMethod,
        bool mayThrow,
        Type declaringType,
        Type returnOrSetterType,
        IEnumerable<ParameterInfo> parameters,
        TypeDescriptorRegistry typeDescriptorRegistry,
        State state
    )
    {
        Result cSharpUnmanagedResult = state.CSharpUnmanagedResult ?? throw new Exception("No CSharpUnmanagedResult provided");
        GeneratedMember cSharpGeneratedMember = cSharpUnmanagedResult.GetGeneratedMember(memberInfo) ?? throw new Exception("No C# generated member");
        
        string methodNameC = cSharpGeneratedMember.GetGeneratedName(CodeLanguage.CSharpUnmanaged) ?? throw new Exception("No native name");
        
        state.AddGeneratedMember(
            memberInfo,
            mayThrow,
            methodNameC,
            CodeLanguage.C
        );
        
        TypeDescriptor returnOrSetterTypeDescriptor = returnOrSetterType.GetTypeDescriptor(typeDescriptorRegistry);
        string cReturnOrSetterTypeName = returnOrSetterTypeDescriptor.GetTypeName(CodeLanguage.C, true);
        
        string cReturnOrSetterTypeNameWithComment = methodKind != MethodKind.PropertySetter 
            ? $"{cReturnOrSetterTypeName} /* {returnOrSetterType.GetFullNameOrName()} */"
            : "void /* System.Void */";
        
        Type? setterType = methodKind == MethodKind.PropertySetter 
            ? returnOrSetterType
            : null;
        
        string methodSignatureParameters = WriteParameters(
            methodKind,
            setterType,
            mayThrow,
            isStaticMethod,
            declaringType,
            parameters,
            typeDescriptorRegistry
        );
        
        StringBuilder sb = new();
        
        sb.AppendLine($"{cReturnOrSetterTypeNameWithComment}\n{methodNameC}(\n\t{methodSignatureParameters}\n);");
        
        return sb.ToString();
    }
    
    protected string WriteParameters(
        MethodKind methodKind,
        Type? setterType,
        bool mayThrow,
        bool isStatic,
        Type declaringType,
        IEnumerable<ParameterInfo> parameters,
        TypeDescriptorRegistry typeDescriptorRegistry
    )
    {
        List<string> parameterList = new();

        if (!isStatic) {
            TypeDescriptor declaringTypeDescriptor = declaringType.GetTypeDescriptor(typeDescriptorRegistry);
            string declaringTypeName = declaringTypeDescriptor.GetTypeName(CodeLanguage.C, true);
            string selfParameterName = "self";
            string parameterString = $"{declaringTypeName} /* {declaringType.GetFullNameOrName()} */ {selfParameterName}";

            parameterList.Add(parameterString);
        }

        if (methodKind == MethodKind.PropertySetter) {
            if (setterType == null) {
                throw new Exception("Setter Type may not be null");
            }
            
            TypeDescriptor setterTypeDescriptor = setterType.GetTypeDescriptor(typeDescriptorRegistry);
            string unmanagedSetterTypeName = setterTypeDescriptor.GetTypeName(CodeLanguage.CSharpUnmanaged, true);
    
            string parameterString = $"{unmanagedSetterTypeName} /* {setterType.GetFullNameOrName()} */ value";
            parameterList.Add(parameterString);
        } else {
            foreach (var parameter in parameters) {
                Type parameterType = parameter.ParameterType;
                TypeDescriptor parameterTypeDescriptor = parameterType.GetTypeDescriptor(typeDescriptorRegistry);
                string unmanagedParameterTypeName = parameterTypeDescriptor.GetTypeName(CodeLanguage.C, true);

                string parameterString = $"{unmanagedParameterTypeName} /* {parameterType.GetFullNameOrName()} */ {parameter.Name}";
                parameterList.Add(parameterString);
            }
        }

        if (mayThrow) {
            Type exceptionType = typeof(Exception);
            TypeDescriptor outExceptionTypeDescriptor = exceptionType.GetTypeDescriptor(typeDescriptorRegistry);
            string outExceptionTypeName = outExceptionTypeDescriptor.GetTypeName(CodeLanguage.C, true, true);
            string outExceptionParameterName = "outException";

            string outExceptionParameterString = $"{outExceptionTypeName} /* {exceptionType.GetFullNameOrName()} */ {outExceptionParameterName}"; 
            parameterList.Add(outExceptionParameterString);
        }

        string parametersString = string.Join(",\n\t", parameterList);

        return parametersString;
    }
}