using NativeAOT.CodeGenerator.Extensions;

namespace NativeAOT.CodeGenerator.Types;

public class TypeDescriptor
{
    public Type ManagedType { get; }

    public bool IsPrimitive => ManagedType.IsPrimitive;
    public bool IsReferenceType => ManagedType.IsReferenceType();
    public bool IsStruct => ManagedType.IsStruct();
    public bool IsValueType => ManagedType.IsValueType;
    public bool IsEnum => ManagedType.IsEnum;
    public bool IsBool => ManagedType.IsBoolean();
    public bool IsVoid => ManagedType.IsVoid();
    public bool IsDelegate => ManagedType.IsDelegate();
    public bool IsManagedPointer => ManagedType.IsPointer;
    public bool RequiresNativePointer => !IsVoid && !IsEnum && !IsPrimitive && !IsBool; 

    private readonly Dictionary<CodeLanguage, string> m_typeNames;
    private readonly Dictionary<LanguagePair, string> m_typeConversions;
    private readonly string? m_returnValueOnException;

    public TypeDescriptor(
        Type managedType,
        string? returnValueOnException = null,
        Dictionary<CodeLanguage, string>? typeNames = null,
        Dictionary<LanguagePair, string>? typeConversions = null
    )
    {
        ManagedType = managedType;

        m_returnValueOnException = returnValueOnException;
        
        if (typeNames == null) {
            typeNames = new();
        }

        if (!typeNames.ContainsKey(CodeLanguage.CSharp)) {
            string csharpTypeName = managedType.GetFullNameOrName();
            
            typeNames[CodeLanguage.CSharp] = csharpTypeName;
        }

        m_typeNames = typeNames;

        if (typeConversions == null) {
            typeConversions = new();
        }
        
        m_typeConversions = typeConversions;
    }

    public void SetTypeName(string typeName, CodeLanguage language)
    {
        m_typeNames[language] = typeName;
    }

    public string GetTypeName(CodeLanguage language, bool includeModifiers)
    {
        return GetTypeName(language, includeModifiers, false);
    }
    
    public string GetTypeName(CodeLanguage language, bool includeModifiers, bool isOutParameter)
    {
        string typeName;
        
        if (m_typeNames.TryGetValue(language, out string? tempTypeName)) {
            typeName = tempTypeName;
        } else {
            typeName = GenerateTypeName(language);

            m_typeNames[language] = typeName;
        }

        if (includeModifiers) {
            typeName = AddModifiersToTypeName(
                typeName,
                language,
                isOutParameter
            );
        }

        return typeName;
    }

    private string AddModifiersToTypeName(
        string typeName,
        CodeLanguage language,
        bool isOutParameter
    )
    {
        if (!RequiresNativePointer &&
            !isOutParameter) {
            return typeName;
        }

        string typeNameWithModifiers;

        switch (language) {
            case CodeLanguage.CSharpUnmanaged:
                if (RequiresNativePointer && 
                    isOutParameter) {
                    typeNameWithModifiers = $"{typeName}**";
                } else {
                    typeNameWithModifiers = $"{typeName}*";
                }
                
                break;
            case CodeLanguage.C:
                if (RequiresNativePointer && 
                    isOutParameter) {
                    typeNameWithModifiers = $"{typeName}*";
                } else {
                    typeNameWithModifiers = $"{typeName}";
                }
                
                break;
            default:
                throw new NotImplementedException();
        }

        return typeNameWithModifiers;
    }

    private string GenerateTypeName(CodeLanguage language)
    {
        switch (language) {
            case CodeLanguage.CSharpUnmanaged:
                if (RequiresNativePointer) {
                    return "void";
                } else {
                    return ManagedType.GetFullNameOrName();
                }
            case CodeLanguage.C:
                string typeName = ManagedType.GetFullNameOrName();
                string cTypeName;
                
                if (IsReferenceType ||
                    IsStruct) {
                    cTypeName = $"{typeName.Replace('.', '_')}_t";    
                } else if (IsEnum) {
                    cTypeName = typeName.Replace('.', '_');
                } else {
                    throw new Exception("Unknown kind of type");
                }

                return cTypeName;
            default:
                throw new NotImplementedException();
        }
    }

    public string? GetTypeConversion(
        CodeLanguage sourceLanguage,
        CodeLanguage targetLanguage
    )
    {
        LanguagePair languagePair = new(sourceLanguage, targetLanguage);
        
        m_typeConversions.TryGetValue(
            languagePair,
            out string? typeConversion
        );

        if (typeConversion == null) {
            typeConversion = GenerateTypeConversion(sourceLanguage, targetLanguage);

            if (typeConversion != null) {
                m_typeConversions[languagePair] = typeConversion;
            }
        }

        return typeConversion;
    }

    private string? GenerateTypeConversion(
        CodeLanguage sourceLanguage,
        CodeLanguage targetLanguage
    )
    {
        if (!RequiresNativePointer) {
            return null;
        }

        if (sourceLanguage == CodeLanguage.CSharpUnmanaged &&
            targetLanguage == CodeLanguage.CSharp) {
            string conversion = "InteropUtils.GetInstance<" + ManagedType.GetFullNameOrName() + ">({0})";

            return conversion;
        } else if (sourceLanguage == CodeLanguage.CSharp &&
                   targetLanguage == CodeLanguage.CSharpUnmanaged) {
            string conversion = "{0}.AllocateGCHandleAndGetAddress()";

            return conversion;
        } else {
            throw new Exception("Unknown language pair");
        }
    }

    public string? GetReturnValueOnException()
    {
        if (m_returnValueOnException != null) {
            return m_returnValueOnException;
        }

        if (RequiresNativePointer) {
            return "null";
        }

        return null;
    }
}