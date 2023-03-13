namespace NativeAOT.CodeGenerator.Types.BuiltIn;

public partial class BuiltInTypeDescriptors
{
    public static TypeDescriptor Int8TypeDescriptor
    {
        get {
            var descriptor = new TypeDescriptor(
                typeof(sbyte),
                "-1",
                new() {
                    { CodeLanguage.CSharpUnmanaged, "sbyte" },
                    { CodeLanguage.C, "int8_t" },
                    { CodeLanguage.Swift, "Int8" }
                }
            );
        
            return descriptor;
        }
    }
}