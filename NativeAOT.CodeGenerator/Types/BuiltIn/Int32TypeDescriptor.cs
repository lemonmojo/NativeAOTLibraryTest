using NativeAOT.Core;

namespace NativeAOT.CodeGenerator.Types.BuiltIn;

public partial class BuiltInTypeDescriptors
{
    public static TypeDescriptor Int32TypeDescriptor
    {
        get {
            var descriptor = new TypeDescriptor(typeof(int), new() {
                { CodeLanguage.CSharpUnmanaged, "int" },
                { CodeLanguage.C, "int32_t" },
                { CodeLanguage.Swift, "Int32" }
            });
        
            return descriptor;
        }
    }
}