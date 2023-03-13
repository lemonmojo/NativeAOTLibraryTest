namespace NativeAOT.CodeGenerator.Types.BuiltIn;

public partial class BuiltInTypeDescriptors
{
    public static TypeDescriptor Int16TypeDescriptor
    {
        get {
            var descriptor = new TypeDescriptor(
                typeof(short),
                "-1",
                new() {
                    { CodeLanguage.CSharpUnmanaged, "short" },
                    { CodeLanguage.C, "int16_t" },
                    { CodeLanguage.Swift, "Int16" }
                }
            );
        
            return descriptor;
        }
    }
}