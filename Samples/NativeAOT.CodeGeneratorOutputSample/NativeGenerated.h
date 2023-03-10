// Number of generated types: 159
// Number of generated members: 1077

#pragma mark - BEGIN Header
#ifndef TypeDefinitions_h
#define TypeDefinitions_h

#import <stdlib.h>

#pragma mark - END Header
#pragma mark - BEGIN Shared Code
#pragma mark - Common Types
typedef char* CString;

#pragma mark - Common Enums
typedef enum __attribute__((enum_extensibility(closed))): uint8_t {
    CBoolYes = 1,
    CBoolNo = 0
} CBool;

#pragma mark - END Shared Code
#pragma mark - BEGIN Unsupported Types
// Omitted due to settings

#pragma mark - END Unsupported Types
#pragma mark - BEGIN Type Definitions
typedef void* NativeAOT_CodeGeneratorInputSample_TestClass_t;

typedef void* System_Object_t;

typedef void* System_Type_t;

typedef void* System_Reflection_MemberInfo_t;

typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_Reflection_MemberTypes_Constructor = 0 /* TODO: Value */,
	System_Reflection_MemberTypes_Event = 0 /* TODO: Value */,
	System_Reflection_MemberTypes_Field = 0 /* TODO: Value */,
	System_Reflection_MemberTypes_Method = 0 /* TODO: Value */,
	System_Reflection_MemberTypes_Property = 0 /* TODO: Value */,
	System_Reflection_MemberTypes_TypeInfo = 0 /* TODO: Value */,
	System_Reflection_MemberTypes_Custom = 0 /* TODO: Value */,
	System_Reflection_MemberTypes_NestedType = 0 /* TODO: Value */,
	System_Reflection_MemberTypes_All = 0 /* TODO: Value */
} System_Reflection_MemberTypes;


typedef void* System_Enum_t;

typedef void* System_ValueType_t;



typedef void* System_String_t;

typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_StringComparison_CurrentCulture = 0 /* TODO: Value */,
	System_StringComparison_CurrentCultureIgnoreCase = 0 /* TODO: Value */,
	System_StringComparison_InvariantCulture = 0 /* TODO: Value */,
	System_StringComparison_InvariantCultureIgnoreCase = 0 /* TODO: Value */,
	System_StringComparison_Ordinal = 0 /* TODO: Value */,
	System_StringComparison_OrdinalIgnoreCase = 0 /* TODO: Value */
} System_StringComparison;


typedef void* System_Globalization_CultureInfo_t;

typedef void* System_Void_t;

typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_Globalization_CultureTypes_NeutralCultures = 0 /* TODO: Value */,
	System_Globalization_CultureTypes_SpecificCultures = 0 /* TODO: Value */,
	System_Globalization_CultureTypes_InstalledWin32Cultures = 0 /* TODO: Value */,
	System_Globalization_CultureTypes_AllCultures = 0 /* TODO: Value */,
	System_Globalization_CultureTypes_UserCustomCulture = 0 /* TODO: Value */,
	System_Globalization_CultureTypes_ReplacementCultures = 0 /* TODO: Value */,
	System_Globalization_CultureTypes_WindowsOnlyCultures = 0 /* TODO: Value */,
	System_Globalization_CultureTypes_FrameworkCultures = 0 /* TODO: Value */
} System_Globalization_CultureTypes;


typedef void* System_Globalization_CompareInfo_t;

typedef void* System_Reflection_Assembly_t;

typedef void* System_Reflection_AssemblyName_t;

typedef void* System_Version_t;


typedef void* System_IFormatProvider_t;

typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_Globalization_NumberStyles_None = 0 /* TODO: Value */,
	System_Globalization_NumberStyles_AllowLeadingWhite = 0 /* TODO: Value */,
	System_Globalization_NumberStyles_AllowTrailingWhite = 0 /* TODO: Value */,
	System_Globalization_NumberStyles_AllowLeadingSign = 0 /* TODO: Value */,
	System_Globalization_NumberStyles_Integer = 0 /* TODO: Value */,
	System_Globalization_NumberStyles_AllowTrailingSign = 0 /* TODO: Value */,
	System_Globalization_NumberStyles_AllowParentheses = 0 /* TODO: Value */,
	System_Globalization_NumberStyles_AllowDecimalPoint = 0 /* TODO: Value */,
	System_Globalization_NumberStyles_AllowThousands = 0 /* TODO: Value */,
	System_Globalization_NumberStyles_Number = 0 /* TODO: Value */,
	System_Globalization_NumberStyles_AllowExponent = 0 /* TODO: Value */,
	System_Globalization_NumberStyles_Float = 0 /* TODO: Value */,
	System_Globalization_NumberStyles_AllowCurrencySymbol = 0 /* TODO: Value */,
	System_Globalization_NumberStyles_Currency = 0 /* TODO: Value */,
	System_Globalization_NumberStyles_Any = 0 /* TODO: Value */,
	System_Globalization_NumberStyles_AllowHexSpecifier = 0 /* TODO: Value */,
	System_Globalization_NumberStyles_HexNumber = 0 /* TODO: Value */
} System_Globalization_NumberStyles;


typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_TypeCode_Empty = 0 /* TODO: Value */,
	System_TypeCode_Object = 0 /* TODO: Value */,
	System_TypeCode_DBNull = 0 /* TODO: Value */,
	System_TypeCode_Boolean = 0 /* TODO: Value */,
	System_TypeCode_Char = 0 /* TODO: Value */,
	System_TypeCode_SByte = 0 /* TODO: Value */,
	System_TypeCode_Byte = 0 /* TODO: Value */,
	System_TypeCode_Int16 = 0 /* TODO: Value */,
	System_TypeCode_UInt16 = 0 /* TODO: Value */,
	System_TypeCode_Int32 = 0 /* TODO: Value */,
	System_TypeCode_UInt32 = 0 /* TODO: Value */,
	System_TypeCode_Int64 = 0 /* TODO: Value */,
	System_TypeCode_UInt64 = 0 /* TODO: Value */,
	System_TypeCode_Single = 0 /* TODO: Value */,
	System_TypeCode_Double = 0 /* TODO: Value */,
	System_TypeCode_Decimal = 0 /* TODO: Value */,
	System_TypeCode_DateTime = 0 /* TODO: Value */,
	System_TypeCode_String = 0 /* TODO: Value */
} System_TypeCode;


typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_Reflection_ProcessorArchitecture_None = 0 /* TODO: Value */,
	System_Reflection_ProcessorArchitecture_MSIL = 0 /* TODO: Value */,
	System_Reflection_ProcessorArchitecture_X86 = 0 /* TODO: Value */,
	System_Reflection_ProcessorArchitecture_IA64 = 0 /* TODO: Value */,
	System_Reflection_ProcessorArchitecture_Amd64 = 0 /* TODO: Value */,
	System_Reflection_ProcessorArchitecture_Arm = 0 /* TODO: Value */
} System_Reflection_ProcessorArchitecture;


typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_Reflection_AssemblyContentType_Default = 0 /* TODO: Value */,
	System_Reflection_AssemblyContentType_WindowsRuntime = 0 /* TODO: Value */
} System_Reflection_AssemblyContentType;


typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_Reflection_AssemblyNameFlags_None = 0 /* TODO: Value */,
	System_Reflection_AssemblyNameFlags_PublicKey = 0 /* TODO: Value */,
	System_Reflection_AssemblyNameFlags_Retargetable = 0 /* TODO: Value */,
	System_Reflection_AssemblyNameFlags_EnableJITcompileOptimizer = 0 /* TODO: Value */,
	System_Reflection_AssemblyNameFlags_EnableJITcompileTracking = 0 /* TODO: Value */
} System_Reflection_AssemblyNameFlags;


typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_Configuration_Assemblies_AssemblyHashAlgorithm_None = 0 /* TODO: Value */,
	System_Configuration_Assemblies_AssemblyHashAlgorithm_MD5 = 0 /* TODO: Value */,
	System_Configuration_Assemblies_AssemblyHashAlgorithm_SHA1 = 0 /* TODO: Value */,
	System_Configuration_Assemblies_AssemblyHashAlgorithm_SHA256 = 0 /* TODO: Value */,
	System_Configuration_Assemblies_AssemblyHashAlgorithm_SHA384 = 0 /* TODO: Value */,
	System_Configuration_Assemblies_AssemblyHashAlgorithm_SHA512 = 0 /* TODO: Value */
} System_Configuration_Assemblies_AssemblyHashAlgorithm;


typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_Configuration_Assemblies_AssemblyVersionCompatibility_SameMachine = 0 /* TODO: Value */,
	System_Configuration_Assemblies_AssemblyVersionCompatibility_SameProcess = 0 /* TODO: Value */,
	System_Configuration_Assemblies_AssemblyVersionCompatibility_SameDomain = 0 /* TODO: Value */
} System_Configuration_Assemblies_AssemblyVersionCompatibility;


typedef void* System_Reflection_StrongNameKeyPair_t;

typedef void* System_IO_FileStream_t;

typedef void* System_IO_Stream_t;

typedef void* System_MarshalByRefObject_t;


typedef void* System_Threading_Tasks_Task_t;

typedef void* System_Threading_Tasks_TaskScheduler_t;

typedef void* System_AggregateException_t;

typedef void* System_Exception_t;

typedef void* System_Reflection_MethodBase_t;

typedef void* System_RuntimeMethodHandle_t;

typedef void* System_Runtime_Serialization_SerializationInfo_t;

typedef void* System_Runtime_Serialization_SerializationInfoEnumerator_t;

typedef void* System_Runtime_Serialization_SerializationEntry_t;


typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_Globalization_UnicodeCategory_UppercaseLetter = 0 /* TODO: Value */,
	System_Globalization_UnicodeCategory_LowercaseLetter = 0 /* TODO: Value */,
	System_Globalization_UnicodeCategory_TitlecaseLetter = 0 /* TODO: Value */,
	System_Globalization_UnicodeCategory_ModifierLetter = 0 /* TODO: Value */,
	System_Globalization_UnicodeCategory_OtherLetter = 0 /* TODO: Value */,
	System_Globalization_UnicodeCategory_NonSpacingMark = 0 /* TODO: Value */,
	System_Globalization_UnicodeCategory_SpacingCombiningMark = 0 /* TODO: Value */,
	System_Globalization_UnicodeCategory_EnclosingMark = 0 /* TODO: Value */,
	System_Globalization_UnicodeCategory_DecimalDigitNumber = 0 /* TODO: Value */,
	System_Globalization_UnicodeCategory_LetterNumber = 0 /* TODO: Value */,
	System_Globalization_UnicodeCategory_OtherNumber = 0 /* TODO: Value */,
	System_Globalization_UnicodeCategory_SpaceSeparator = 0 /* TODO: Value */,
	System_Globalization_UnicodeCategory_LineSeparator = 0 /* TODO: Value */,
	System_Globalization_UnicodeCategory_ParagraphSeparator = 0 /* TODO: Value */,
	System_Globalization_UnicodeCategory_Control = 0 /* TODO: Value */,
	System_Globalization_UnicodeCategory_Format = 0 /* TODO: Value */,
	System_Globalization_UnicodeCategory_Surrogate = 0 /* TODO: Value */,
	System_Globalization_UnicodeCategory_PrivateUse = 0 /* TODO: Value */,
	System_Globalization_UnicodeCategory_ConnectorPunctuation = 0 /* TODO: Value */,
	System_Globalization_UnicodeCategory_DashPunctuation = 0 /* TODO: Value */,
	System_Globalization_UnicodeCategory_OpenPunctuation = 0 /* TODO: Value */,
	System_Globalization_UnicodeCategory_ClosePunctuation = 0 /* TODO: Value */,
	System_Globalization_UnicodeCategory_InitialQuotePunctuation = 0 /* TODO: Value */,
	System_Globalization_UnicodeCategory_FinalQuotePunctuation = 0 /* TODO: Value */,
	System_Globalization_UnicodeCategory_OtherPunctuation = 0 /* TODO: Value */,
	System_Globalization_UnicodeCategory_MathSymbol = 0 /* TODO: Value */,
	System_Globalization_UnicodeCategory_CurrencySymbol = 0 /* TODO: Value */,
	System_Globalization_UnicodeCategory_ModifierSymbol = 0 /* TODO: Value */,
	System_Globalization_UnicodeCategory_OtherSymbol = 0 /* TODO: Value */,
	System_Globalization_UnicodeCategory_OtherNotAssigned = 0 /* TODO: Value */
} System_Globalization_UnicodeCategory;



typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_MidpointRounding_ToEven = 0 /* TODO: Value */,
	System_MidpointRounding_AwayFromZero = 0 /* TODO: Value */,
	System_MidpointRounding_ToZero = 0 /* TODO: Value */,
	System_MidpointRounding_ToNegativeInfinity = 0 /* TODO: Value */,
	System_MidpointRounding_ToPositiveInfinity = 0 /* TODO: Value */
} System_MidpointRounding;








typedef void* System_Decimal_t;

typedef void* System_DateTime_t;

typedef void* System_TimeSpan_t;

typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_Globalization_TimeSpanStyles_None = 0 /* TODO: Value */,
	System_Globalization_TimeSpanStyles_AssumeNegative = 0 /* TODO: Value */
} System_Globalization_TimeSpanStyles;


typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_DateTimeKind_Unspecified = 0 /* TODO: Value */,
	System_DateTimeKind_Utc = 0 /* TODO: Value */,
	System_DateTimeKind_Local = 0 /* TODO: Value */
} System_DateTimeKind;


typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_DayOfWeek_Sunday = 0 /* TODO: Value */,
	System_DayOfWeek_Monday = 0 /* TODO: Value */,
	System_DayOfWeek_Tuesday = 0 /* TODO: Value */,
	System_DayOfWeek_Wednesday = 0 /* TODO: Value */,
	System_DayOfWeek_Thursday = 0 /* TODO: Value */,
	System_DayOfWeek_Friday = 0 /* TODO: Value */,
	System_DayOfWeek_Saturday = 0 /* TODO: Value */
} System_DayOfWeek;


typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_Globalization_DateTimeStyles_None = 0 /* TODO: Value */,
	System_Globalization_DateTimeStyles_AllowLeadingWhite = 0 /* TODO: Value */,
	System_Globalization_DateTimeStyles_AllowTrailingWhite = 0 /* TODO: Value */,
	System_Globalization_DateTimeStyles_AllowInnerWhite = 0 /* TODO: Value */,
	System_Globalization_DateTimeStyles_AllowWhiteSpaces = 0 /* TODO: Value */,
	System_Globalization_DateTimeStyles_NoCurrentDateDefault = 0 /* TODO: Value */,
	System_Globalization_DateTimeStyles_AdjustToUniversal = 0 /* TODO: Value */,
	System_Globalization_DateTimeStyles_AssumeLocal = 0 /* TODO: Value */,
	System_Globalization_DateTimeStyles_AssumeUniversal = 0 /* TODO: Value */,
	System_Globalization_DateTimeStyles_RoundtripKind = 0 /* TODO: Value */
} System_Globalization_DateTimeStyles;


typedef void* System_DateOnly_t;

typedef void* System_TimeOnly_t;

typedef void* System_Globalization_Calendar_t;

typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_Globalization_CalendarAlgorithmType_Unknown = 0 /* TODO: Value */,
	System_Globalization_CalendarAlgorithmType_SolarCalendar = 0 /* TODO: Value */,
	System_Globalization_CalendarAlgorithmType_LunarCalendar = 0 /* TODO: Value */,
	System_Globalization_CalendarAlgorithmType_LunisolarCalendar = 0 /* TODO: Value */
} System_Globalization_CalendarAlgorithmType;


typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_Globalization_CalendarWeekRule_FirstDay = 0 /* TODO: Value */,
	System_Globalization_CalendarWeekRule_FirstFullWeek = 0 /* TODO: Value */,
	System_Globalization_CalendarWeekRule_FirstFourDayWeek = 0 /* TODO: Value */
} System_Globalization_CalendarWeekRule;


typedef void* System_Runtime_Serialization_IFormatterConverter_t;

typedef void* System_Runtime_Serialization_StreamingContext_t;

typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_Runtime_Serialization_StreamingContextStates_CrossProcess = 0 /* TODO: Value */,
	System_Runtime_Serialization_StreamingContextStates_CrossMachine = 0 /* TODO: Value */,
	System_Runtime_Serialization_StreamingContextStates_File = 0 /* TODO: Value */,
	System_Runtime_Serialization_StreamingContextStates_Persistence = 0 /* TODO: Value */,
	System_Runtime_Serialization_StreamingContextStates_Remoting = 0 /* TODO: Value */,
	System_Runtime_Serialization_StreamingContextStates_Other = 0 /* TODO: Value */,
	System_Runtime_Serialization_StreamingContextStates_Clone = 0 /* TODO: Value */,
	System_Runtime_Serialization_StreamingContextStates_CrossAppDomain = 0 /* TODO: Value */,
	System_Runtime_Serialization_StreamingContextStates_All = 0 /* TODO: Value */
} System_Runtime_Serialization_StreamingContextStates;



typedef void* System_RuntimeTypeHandle_t;

typedef void* System_ModuleHandle_t;

typedef void* System_RuntimeFieldHandle_t;

typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_Reflection_MethodAttributes_PrivateScope = 0 /* TODO: Value */,
	System_Reflection_MethodAttributes_ReuseSlot = 0 /* TODO: Value */,
	System_Reflection_MethodAttributes_Private = 0 /* TODO: Value */,
	System_Reflection_MethodAttributes_FamANDAssem = 0 /* TODO: Value */,
	System_Reflection_MethodAttributes_Assembly = 0 /* TODO: Value */,
	System_Reflection_MethodAttributes_Family = 0 /* TODO: Value */,
	System_Reflection_MethodAttributes_FamORAssem = 0 /* TODO: Value */,
	System_Reflection_MethodAttributes_Public = 0 /* TODO: Value */,
	System_Reflection_MethodAttributes_MemberAccessMask = 0 /* TODO: Value */,
	System_Reflection_MethodAttributes_UnmanagedExport = 0 /* TODO: Value */,
	System_Reflection_MethodAttributes_Static = 0 /* TODO: Value */,
	System_Reflection_MethodAttributes_Final = 0 /* TODO: Value */,
	System_Reflection_MethodAttributes_Virtual = 0 /* TODO: Value */,
	System_Reflection_MethodAttributes_HideBySig = 0 /* TODO: Value */,
	System_Reflection_MethodAttributes_NewSlot = 0 /* TODO: Value */,
	System_Reflection_MethodAttributes_VtableLayoutMask = 0 /* TODO: Value */,
	System_Reflection_MethodAttributes_CheckAccessOnOverride = 0 /* TODO: Value */,
	System_Reflection_MethodAttributes_Abstract = 0 /* TODO: Value */,
	System_Reflection_MethodAttributes_SpecialName = 0 /* TODO: Value */,
	System_Reflection_MethodAttributes_RTSpecialName = 0 /* TODO: Value */,
	System_Reflection_MethodAttributes_PinvokeImpl = 0 /* TODO: Value */,
	System_Reflection_MethodAttributes_HasSecurity = 0 /* TODO: Value */,
	System_Reflection_MethodAttributes_RequireSecObject = 0 /* TODO: Value */,
	System_Reflection_MethodAttributes_ReservedMask = 0 /* TODO: Value */
} System_Reflection_MethodAttributes;


typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_Reflection_MethodImplAttributes_IL = 0 /* TODO: Value */,
	System_Reflection_MethodImplAttributes_Managed = 0 /* TODO: Value */,
	System_Reflection_MethodImplAttributes_Native = 0 /* TODO: Value */,
	System_Reflection_MethodImplAttributes_OPTIL = 0 /* TODO: Value */,
	System_Reflection_MethodImplAttributes_CodeTypeMask = 0 /* TODO: Value */,
	System_Reflection_MethodImplAttributes_Runtime = 0 /* TODO: Value */,
	System_Reflection_MethodImplAttributes_ManagedMask = 0 /* TODO: Value */,
	System_Reflection_MethodImplAttributes_Unmanaged = 0 /* TODO: Value */,
	System_Reflection_MethodImplAttributes_NoInlining = 0 /* TODO: Value */,
	System_Reflection_MethodImplAttributes_ForwardRef = 0 /* TODO: Value */,
	System_Reflection_MethodImplAttributes_Synchronized = 0 /* TODO: Value */,
	System_Reflection_MethodImplAttributes_NoOptimization = 0 /* TODO: Value */,
	System_Reflection_MethodImplAttributes_PreserveSig = 0 /* TODO: Value */,
	System_Reflection_MethodImplAttributes_AggressiveInlining = 0 /* TODO: Value */,
	System_Reflection_MethodImplAttributes_AggressiveOptimization = 0 /* TODO: Value */,
	System_Reflection_MethodImplAttributes_InternalCall = 0 /* TODO: Value */,
	System_Reflection_MethodImplAttributes_MaxMethodImplVal = 0 /* TODO: Value */
} System_Reflection_MethodImplAttributes;


typedef void* System_Reflection_MethodBody_t;

typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_Reflection_CallingConventions_Standard = 0 /* TODO: Value */,
	System_Reflection_CallingConventions_VarArgs = 0 /* TODO: Value */,
	System_Reflection_CallingConventions_Any = 0 /* TODO: Value */,
	System_Reflection_CallingConventions_HasThis = 0 /* TODO: Value */,
	System_Reflection_CallingConventions_ExplicitThis = 0 /* TODO: Value */
} System_Reflection_CallingConventions;


typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_Reflection_BindingFlags_Default = 0 /* TODO: Value */,
	System_Reflection_BindingFlags_IgnoreCase = 0 /* TODO: Value */,
	System_Reflection_BindingFlags_DeclaredOnly = 0 /* TODO: Value */,
	System_Reflection_BindingFlags_Instance = 0 /* TODO: Value */,
	System_Reflection_BindingFlags_Static = 0 /* TODO: Value */,
	System_Reflection_BindingFlags_Public = 0 /* TODO: Value */,
	System_Reflection_BindingFlags_NonPublic = 0 /* TODO: Value */,
	System_Reflection_BindingFlags_FlattenHierarchy = 0 /* TODO: Value */,
	System_Reflection_BindingFlags_InvokeMethod = 0 /* TODO: Value */,
	System_Reflection_BindingFlags_CreateInstance = 0 /* TODO: Value */,
	System_Reflection_BindingFlags_GetField = 0 /* TODO: Value */,
	System_Reflection_BindingFlags_SetField = 0 /* TODO: Value */,
	System_Reflection_BindingFlags_GetProperty = 0 /* TODO: Value */,
	System_Reflection_BindingFlags_SetProperty = 0 /* TODO: Value */,
	System_Reflection_BindingFlags_PutDispProperty = 0 /* TODO: Value */,
	System_Reflection_BindingFlags_PutRefDispProperty = 0 /* TODO: Value */,
	System_Reflection_BindingFlags_ExactBinding = 0 /* TODO: Value */,
	System_Reflection_BindingFlags_SuppressChangeType = 0 /* TODO: Value */,
	System_Reflection_BindingFlags_OptionalParamBinding = 0 /* TODO: Value */,
	System_Reflection_BindingFlags_IgnoreReturn = 0 /* TODO: Value */,
	System_Reflection_BindingFlags_DoNotWrapExceptions = 0 /* TODO: Value */
} System_Reflection_BindingFlags;


typedef void* System_Reflection_Binder_t;

typedef void* System_Reflection_FieldInfo_t;

typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_Reflection_FieldAttributes_PrivateScope = 0 /* TODO: Value */,
	System_Reflection_FieldAttributes_Private = 0 /* TODO: Value */,
	System_Reflection_FieldAttributes_FamANDAssem = 0 /* TODO: Value */,
	System_Reflection_FieldAttributes_Assembly = 0 /* TODO: Value */,
	System_Reflection_FieldAttributes_Family = 0 /* TODO: Value */,
	System_Reflection_FieldAttributes_FamORAssem = 0 /* TODO: Value */,
	System_Reflection_FieldAttributes_Public = 0 /* TODO: Value */,
	System_Reflection_FieldAttributes_FieldAccessMask = 0 /* TODO: Value */,
	System_Reflection_FieldAttributes_Static = 0 /* TODO: Value */,
	System_Reflection_FieldAttributes_InitOnly = 0 /* TODO: Value */,
	System_Reflection_FieldAttributes_Literal = 0 /* TODO: Value */,
	System_Reflection_FieldAttributes_NotSerialized = 0 /* TODO: Value */,
	System_Reflection_FieldAttributes_HasFieldRVA = 0 /* TODO: Value */,
	System_Reflection_FieldAttributes_SpecialName = 0 /* TODO: Value */,
	System_Reflection_FieldAttributes_RTSpecialName = 0 /* TODO: Value */,
	System_Reflection_FieldAttributes_HasFieldMarshal = 0 /* TODO: Value */,
	System_Reflection_FieldAttributes_PinvokeImpl = 0 /* TODO: Value */,
	System_Reflection_FieldAttributes_HasDefault = 0 /* TODO: Value */,
	System_Reflection_FieldAttributes_ReservedMask = 0 /* TODO: Value */
} System_Reflection_FieldAttributes;


typedef void* System_Reflection_PropertyInfo_t;

typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_Reflection_PropertyAttributes_None = 0 /* TODO: Value */,
	System_Reflection_PropertyAttributes_SpecialName = 0 /* TODO: Value */,
	System_Reflection_PropertyAttributes_RTSpecialName = 0 /* TODO: Value */,
	System_Reflection_PropertyAttributes_HasDefault = 0 /* TODO: Value */,
	System_Reflection_PropertyAttributes_Reserved2 = 0 /* TODO: Value */,
	System_Reflection_PropertyAttributes_Reserved3 = 0 /* TODO: Value */,
	System_Reflection_PropertyAttributes_Reserved4 = 0 /* TODO: Value */,
	System_Reflection_PropertyAttributes_ReservedMask = 0 /* TODO: Value */
} System_Reflection_PropertyAttributes;


typedef void* System_Reflection_MethodInfo_t;

typedef void* System_Reflection_ParameterInfo_t;

typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_Reflection_ParameterAttributes_None = 0 /* TODO: Value */,
	System_Reflection_ParameterAttributes_In = 0 /* TODO: Value */,
	System_Reflection_ParameterAttributes_Out = 0 /* TODO: Value */,
	System_Reflection_ParameterAttributes_Lcid = 0 /* TODO: Value */,
	System_Reflection_ParameterAttributes_Retval = 0 /* TODO: Value */,
	System_Reflection_ParameterAttributes_Optional = 0 /* TODO: Value */,
	System_Reflection_ParameterAttributes_HasDefault = 0 /* TODO: Value */,
	System_Reflection_ParameterAttributes_HasFieldMarshal = 0 /* TODO: Value */,
	System_Reflection_ParameterAttributes_Reserved3 = 0 /* TODO: Value */,
	System_Reflection_ParameterAttributes_Reserved4 = 0 /* TODO: Value */,
	System_Reflection_ParameterAttributes_ReservedMask = 0 /* TODO: Value */
} System_Reflection_ParameterAttributes;


typedef void* System_Reflection_ICustomAttributeProvider_t;

typedef void* System_Collections_IDictionary_t;

typedef void* System_Collections_ICollection_t;

typedef void* System_Array_t;

typedef void* System_Collections_IComparer_t;

typedef void* System_Collections_IEnumerator_t;

typedef void* System_Collections_IDictionaryEnumerator_t;

typedef void* System_Collections_DictionaryEntry_t;

typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_Threading_Tasks_TaskStatus_Created = 0 /* TODO: Value */,
	System_Threading_Tasks_TaskStatus_WaitingForActivation = 0 /* TODO: Value */,
	System_Threading_Tasks_TaskStatus_WaitingToRun = 0 /* TODO: Value */,
	System_Threading_Tasks_TaskStatus_Running = 0 /* TODO: Value */,
	System_Threading_Tasks_TaskStatus_WaitingForChildrenToComplete = 0 /* TODO: Value */,
	System_Threading_Tasks_TaskStatus_RanToCompletion = 0 /* TODO: Value */,
	System_Threading_Tasks_TaskStatus_Canceled = 0 /* TODO: Value */,
	System_Threading_Tasks_TaskStatus_Faulted = 0 /* TODO: Value */
} System_Threading_Tasks_TaskStatus;


typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_Threading_Tasks_TaskCreationOptions_None = 0 /* TODO: Value */,
	System_Threading_Tasks_TaskCreationOptions_PreferFairness = 0 /* TODO: Value */,
	System_Threading_Tasks_TaskCreationOptions_LongRunning = 0 /* TODO: Value */,
	System_Threading_Tasks_TaskCreationOptions_AttachedToParent = 0 /* TODO: Value */,
	System_Threading_Tasks_TaskCreationOptions_DenyChildAttach = 0 /* TODO: Value */,
	System_Threading_Tasks_TaskCreationOptions_HideScheduler = 0 /* TODO: Value */,
	System_Threading_Tasks_TaskCreationOptions_RunContinuationsAsynchronously = 0 /* TODO: Value */
} System_Threading_Tasks_TaskCreationOptions;


typedef void* System_Threading_Tasks_TaskFactory_t;

typedef void* System_Threading_CancellationToken_t;

typedef void* System_Threading_WaitHandle_t;

typedef void* Microsoft_Win32_SafeHandles_SafeWaitHandle_t;

typedef void* Microsoft_Win32_SafeHandles_SafeHandleZeroOrMinusOneIsInvalid_t;

typedef void* System_Runtime_InteropServices_SafeHandle_t;

typedef void* System_Runtime_ConstrainedExecution_CriticalFinalizerObject_t;

typedef void* System_Threading_CancellationTokenRegistration_t;

typedef void* System_Threading_Tasks_ValueTask_t;

typedef void* System_Runtime_CompilerServices_ValueTaskAwaiter_t;

typedef void* System_Runtime_CompilerServices_ConfiguredValueTaskAwaitable_t;

typedef void* System_Runtime_CompilerServices_ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter_t;

typedef void* System_Threading_Tasks_Sources_IValueTaskSource_t;

typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_Threading_Tasks_Sources_ValueTaskSourceStatus_Pending = 0 /* TODO: Value */,
	System_Threading_Tasks_Sources_ValueTaskSourceStatus_Succeeded = 0 /* TODO: Value */,
	System_Threading_Tasks_Sources_ValueTaskSourceStatus_Faulted = 0 /* TODO: Value */,
	System_Threading_Tasks_Sources_ValueTaskSourceStatus_Canceled = 0 /* TODO: Value */
} System_Threading_Tasks_Sources_ValueTaskSourceStatus;


typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_Threading_Tasks_Sources_ValueTaskSourceOnCompletedFlags_None = 0 /* TODO: Value */,
	System_Threading_Tasks_Sources_ValueTaskSourceOnCompletedFlags_UseSchedulingContext = 0 /* TODO: Value */,
	System_Threading_Tasks_Sources_ValueTaskSourceOnCompletedFlags_FlowExecutionContext = 0 /* TODO: Value */
} System_Threading_Tasks_Sources_ValueTaskSourceOnCompletedFlags;


typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_Threading_Tasks_TaskContinuationOptions_None = 0 /* TODO: Value */,
	System_Threading_Tasks_TaskContinuationOptions_PreferFairness = 0 /* TODO: Value */,
	System_Threading_Tasks_TaskContinuationOptions_LongRunning = 0 /* TODO: Value */,
	System_Threading_Tasks_TaskContinuationOptions_AttachedToParent = 0 /* TODO: Value */,
	System_Threading_Tasks_TaskContinuationOptions_DenyChildAttach = 0 /* TODO: Value */,
	System_Threading_Tasks_TaskContinuationOptions_HideScheduler = 0 /* TODO: Value */,
	System_Threading_Tasks_TaskContinuationOptions_LazyCancellation = 0 /* TODO: Value */,
	System_Threading_Tasks_TaskContinuationOptions_RunContinuationsAsynchronously = 0 /* TODO: Value */,
	System_Threading_Tasks_TaskContinuationOptions_NotOnRanToCompletion = 0 /* TODO: Value */,
	System_Threading_Tasks_TaskContinuationOptions_NotOnFaulted = 0 /* TODO: Value */,
	System_Threading_Tasks_TaskContinuationOptions_OnlyOnCanceled = 0 /* TODO: Value */,
	System_Threading_Tasks_TaskContinuationOptions_NotOnCanceled = 0 /* TODO: Value */,
	System_Threading_Tasks_TaskContinuationOptions_OnlyOnFaulted = 0 /* TODO: Value */,
	System_Threading_Tasks_TaskContinuationOptions_OnlyOnRanToCompletion = 0 /* TODO: Value */,
	System_Threading_Tasks_TaskContinuationOptions_ExecuteSynchronously = 0 /* TODO: Value */
} System_Threading_Tasks_TaskContinuationOptions;


typedef void* System_IAsyncResult_t;

typedef void* System_Runtime_CompilerServices_TaskAwaiter_t;

typedef void* System_Runtime_CompilerServices_ConfiguredTaskAwaitable_t;

typedef void* System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_t;

typedef void* System_Runtime_CompilerServices_YieldAwaitable_t;

typedef void* System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_t;

typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_IO_SeekOrigin_Begin = 0 /* TODO: Value */,
	System_IO_SeekOrigin_Current = 0 /* TODO: Value */,
	System_IO_SeekOrigin_End = 0 /* TODO: Value */
} System_IO_SeekOrigin;


typedef void* Microsoft_Win32_SafeHandles_SafeFileHandle_t;

typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_IO_FileAccess_Read = 0 /* TODO: Value */,
	System_IO_FileAccess_Write = 0 /* TODO: Value */,
	System_IO_FileAccess_ReadWrite = 0 /* TODO: Value */
} System_IO_FileAccess;


typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_IO_FileMode_CreateNew = 0 /* TODO: Value */,
	System_IO_FileMode_Create = 0 /* TODO: Value */,
	System_IO_FileMode_Open = 0 /* TODO: Value */,
	System_IO_FileMode_OpenOrCreate = 0 /* TODO: Value */,
	System_IO_FileMode_Truncate = 0 /* TODO: Value */,
	System_IO_FileMode_Append = 0 /* TODO: Value */
} System_IO_FileMode;


typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_IO_FileShare_None = 0 /* TODO: Value */,
	System_IO_FileShare_Read = 0 /* TODO: Value */,
	System_IO_FileShare_Write = 0 /* TODO: Value */,
	System_IO_FileShare_ReadWrite = 0 /* TODO: Value */,
	System_IO_FileShare_Delete = 0 /* TODO: Value */,
	System_IO_FileShare_Inheritable = 0 /* TODO: Value */
} System_IO_FileShare;


typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_IO_FileOptions_WriteThrough = 0 /* TODO: Value */,
	System_IO_FileOptions_None = 0 /* TODO: Value */,
	System_IO_FileOptions_Encrypted = 0 /* TODO: Value */,
	System_IO_FileOptions_DeleteOnClose = 0 /* TODO: Value */,
	System_IO_FileOptions_SequentialScan = 0 /* TODO: Value */,
	System_IO_FileOptions_RandomAccess = 0 /* TODO: Value */,
	System_IO_FileOptions_Asynchronous = 0 /* TODO: Value */
} System_IO_FileOptions;


typedef void* System_IO_FileStreamOptions_t;

typedef void* System_Reflection_ManifestResourceInfo_t;

typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_Reflection_ResourceLocation_Embedded = 0 /* TODO: Value */,
	System_Reflection_ResourceLocation_ContainedInAnotherAssembly = 0 /* TODO: Value */,
	System_Reflection_ResourceLocation_ContainedInManifestFile = 0 /* TODO: Value */
} System_Reflection_ResourceLocation;


typedef void* System_Reflection_Module_t;

typedef void* System_Guid_t;

typedef enum __attribute__((enum_extensibility(closed))): uint8_t {
	System_Security_SecurityRuleSet_None = 0 /* TODO: Value */,
	System_Security_SecurityRuleSet_Level1 = 0 /* TODO: Value */,
	System_Security_SecurityRuleSet_Level2 = 0 /* TODO: Value */
} System_Security_SecurityRuleSet;


typedef void* System_Text_Rune_t;

typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_Buffers_OperationStatus_Done = 0 /* TODO: Value */,
	System_Buffers_OperationStatus_DestinationTooSmall = 0 /* TODO: Value */,
	System_Buffers_OperationStatus_NeedMoreData = 0 /* TODO: Value */,
	System_Buffers_OperationStatus_InvalidData = 0 /* TODO: Value */
} System_Buffers_OperationStatus;


typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_Globalization_CompareOptions_None = 0 /* TODO: Value */,
	System_Globalization_CompareOptions_IgnoreCase = 0 /* TODO: Value */,
	System_Globalization_CompareOptions_IgnoreNonSpace = 0 /* TODO: Value */,
	System_Globalization_CompareOptions_IgnoreSymbols = 0 /* TODO: Value */,
	System_Globalization_CompareOptions_IgnoreKanaType = 0 /* TODO: Value */,
	System_Globalization_CompareOptions_IgnoreWidth = 0 /* TODO: Value */,
	System_Globalization_CompareOptions_OrdinalIgnoreCase = 0 /* TODO: Value */,
	System_Globalization_CompareOptions_StringSort = 0 /* TODO: Value */,
	System_Globalization_CompareOptions_Ordinal = 0 /* TODO: Value */
} System_Globalization_CompareOptions;


typedef void* System_Globalization_SortKey_t;

typedef void* System_Globalization_SortVersion_t;

typedef void* System_Globalization_TextInfo_t;

typedef void* System_Globalization_NumberFormatInfo_t;

typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_Globalization_DigitShapes_Context = 0 /* TODO: Value */,
	System_Globalization_DigitShapes_None = 0 /* TODO: Value */,
	System_Globalization_DigitShapes_NativeNational = 0 /* TODO: Value */
} System_Globalization_DigitShapes;


typedef void* System_Globalization_DateTimeFormatInfo_t;

typedef void* System_CharEnumerator_t;

typedef void* System_Text_StringRuneEnumerator_t;

typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_Text_NormalizationForm_FormC = 0 /* TODO: Value */,
	System_Text_NormalizationForm_FormD = 0 /* TODO: Value */,
	System_Text_NormalizationForm_FormKC = 0 /* TODO: Value */,
	System_Text_NormalizationForm_FormKD = 0 /* TODO: Value */
} System_Text_NormalizationForm;


typedef void* System_Text_CompositeFormat_t;

typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_StringSplitOptions_None = 0 /* TODO: Value */,
	System_StringSplitOptions_RemoveEmptyEntries = 0 /* TODO: Value */,
	System_StringSplitOptions_TrimEntries = 0 /* TODO: Value */
} System_StringSplitOptions;


typedef void* System_Text_Encoding_t;

typedef void* System_Text_EncodingProvider_t;

typedef void* System_Text_EncoderFallback_t;

typedef void* System_Text_EncoderFallbackBuffer_t;

typedef void* System_Text_DecoderFallback_t;

typedef void* System_Text_DecoderFallbackBuffer_t;

typedef void* System_Text_Decoder_t;

typedef void* System_Text_Encoder_t;

typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_Reflection_GenericParameterAttributes_None = 0 /* TODO: Value */,
	System_Reflection_GenericParameterAttributes_Covariant = 0 /* TODO: Value */,
	System_Reflection_GenericParameterAttributes_Contravariant = 0 /* TODO: Value */,
	System_Reflection_GenericParameterAttributes_VarianceMask = 0 /* TODO: Value */,
	System_Reflection_GenericParameterAttributes_ReferenceTypeConstraint = 0 /* TODO: Value */,
	System_Reflection_GenericParameterAttributes_NotNullableValueTypeConstraint = 0 /* TODO: Value */,
	System_Reflection_GenericParameterAttributes_DefaultConstructorConstraint = 0 /* TODO: Value */,
	System_Reflection_GenericParameterAttributes_SpecialConstraintMask = 0 /* TODO: Value */
} System_Reflection_GenericParameterAttributes;


typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_Reflection_TypeAttributes_NotPublic = 0 /* TODO: Value */,
	System_Reflection_TypeAttributes_AutoLayout = 0 /* TODO: Value */,
	System_Reflection_TypeAttributes_AnsiClass = 0 /* TODO: Value */,
	System_Reflection_TypeAttributes_Class = 0 /* TODO: Value */,
	System_Reflection_TypeAttributes_Public = 0 /* TODO: Value */,
	System_Reflection_TypeAttributes_NestedPublic = 0 /* TODO: Value */,
	System_Reflection_TypeAttributes_NestedPrivate = 0 /* TODO: Value */,
	System_Reflection_TypeAttributes_NestedFamily = 0 /* TODO: Value */,
	System_Reflection_TypeAttributes_NestedAssembly = 0 /* TODO: Value */,
	System_Reflection_TypeAttributes_NestedFamANDAssem = 0 /* TODO: Value */,
	System_Reflection_TypeAttributes_VisibilityMask = 0 /* TODO: Value */,
	System_Reflection_TypeAttributes_NestedFamORAssem = 0 /* TODO: Value */,
	System_Reflection_TypeAttributes_SequentialLayout = 0 /* TODO: Value */,
	System_Reflection_TypeAttributes_ExplicitLayout = 0 /* TODO: Value */,
	System_Reflection_TypeAttributes_LayoutMask = 0 /* TODO: Value */,
	System_Reflection_TypeAttributes_Interface = 0 /* TODO: Value */,
	System_Reflection_TypeAttributes_ClassSemanticsMask = 0 /* TODO: Value */,
	System_Reflection_TypeAttributes_Abstract = 0 /* TODO: Value */,
	System_Reflection_TypeAttributes_Sealed = 0 /* TODO: Value */,
	System_Reflection_TypeAttributes_SpecialName = 0 /* TODO: Value */,
	System_Reflection_TypeAttributes_RTSpecialName = 0 /* TODO: Value */,
	System_Reflection_TypeAttributes_Import = 0 /* TODO: Value */,
	System_Reflection_TypeAttributes_Serializable = 0 /* TODO: Value */,
	System_Reflection_TypeAttributes_WindowsRuntime = 0 /* TODO: Value */,
	System_Reflection_TypeAttributes_UnicodeClass = 0 /* TODO: Value */,
	System_Reflection_TypeAttributes_AutoClass = 0 /* TODO: Value */,
	System_Reflection_TypeAttributes_StringFormatMask = 0 /* TODO: Value */,
	System_Reflection_TypeAttributes_CustomFormatClass = 0 /* TODO: Value */,
	System_Reflection_TypeAttributes_HasSecurity = 0 /* TODO: Value */,
	System_Reflection_TypeAttributes_ReservedMask = 0 /* TODO: Value */,
	System_Reflection_TypeAttributes_BeforeFieldInit = 0 /* TODO: Value */,
	System_Reflection_TypeAttributes_CustomFormatMask = 0 /* TODO: Value */
} System_Reflection_TypeAttributes;


typedef void* System_Runtime_InteropServices_StructLayoutAttribute_t;

typedef void* System_Attribute_t;

typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_Runtime_InteropServices_LayoutKind_Sequential = 0 /* TODO: Value */,
	System_Runtime_InteropServices_LayoutKind_Explicit = 0 /* TODO: Value */,
	System_Runtime_InteropServices_LayoutKind_Auto = 0 /* TODO: Value */
} System_Runtime_InteropServices_LayoutKind;


typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_Runtime_InteropServices_CharSet_None = 0 /* TODO: Value */,
	System_Runtime_InteropServices_CharSet_Ansi = 0 /* TODO: Value */,
	System_Runtime_InteropServices_CharSet_Unicode = 0 /* TODO: Value */,
	System_Runtime_InteropServices_CharSet_Auto = 0 /* TODO: Value */
} System_Runtime_InteropServices_CharSet;


typedef void* System_Reflection_ConstructorInfo_t;

typedef void* System_Reflection_EventInfo_t;

typedef enum __attribute__((enum_extensibility(closed))): int32_t {
	System_Reflection_EventAttributes_None = 0 /* TODO: Value */,
	System_Reflection_EventAttributes_SpecialName = 0 /* TODO: Value */,
	System_Reflection_EventAttributes_RTSpecialName = 0 /* TODO: Value */,
	System_Reflection_EventAttributes_ReservedMask = 0 /* TODO: Value */
} System_Reflection_EventAttributes;


typedef void* System_Reflection_InterfaceMapping_t;


#pragma mark - END Type Definitions
#pragma mark - BEGIN APIs
void /* System.Void */
NativeAOT_CodeGeneratorInputSample_TestClass_SayHello(
	NativeAOT_CodeGeneratorInputSample_TestClass_t /* NativeAOT.CodeGeneratorInputSample.TestClass */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
NativeAOT_CodeGeneratorInputSample_TestClass_SayHello1(
	NativeAOT_CodeGeneratorInputSample_TestClass_t /* NativeAOT.CodeGeneratorInputSample.TestClass */ self,
	const CString /* System.String */ name,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
NativeAOT_CodeGeneratorInputSample_TestClass_GetHello(
	NativeAOT_CodeGeneratorInputSample_TestClass_t /* NativeAOT.CodeGeneratorInputSample.TestClass */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
NativeAOT_CodeGeneratorInputSample_TestClass_GetDate(
	NativeAOT_CodeGeneratorInputSample_TestClass_t /* NativeAOT.CodeGeneratorInputSample.TestClass */ self,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
NativeAOT_CodeGeneratorInputSample_TestClass_Add(
	NativeAOT_CodeGeneratorInputSample_TestClass_t /* NativeAOT.CodeGeneratorInputSample.TestClass */ self,
	int32_t /* System.Int32 */ number1,
	int32_t /* System.Int32 */ number2,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
NativeAOT_CodeGeneratorInputSample_TestClass_Divide(
	NativeAOT_CodeGeneratorInputSample_TestClass_t /* NativeAOT.CodeGeneratorInputSample.TestClass */ self,
	int32_t /* System.Int32 */ number1,
	int32_t /* System.Int32 */ number2,
	System_Exception_t* /* System.Exception */ outException
);

NativeAOT_CodeGeneratorInputSample_TestClass_t /* NativeAOT.CodeGeneratorInputSample.TestClass */
NativeAOT_CodeGeneratorInputSample_TestClass_Create(
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ NativeAOT_CodeGeneratorInputSample_TestClass_Destroy(NativeAOT_CodeGeneratorInputSample_TestClass_t /* NativeAOT.CodeGeneratorInputSample.TestClass */ self);



System_Type_t /* System.Type */
System_Object_GetType(
	System_Object_t /* System.Object */ self,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Object_ToString(
	System_Object_t /* System.Object */ self,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Object_Equals(
	System_Object_t /* System.Object */ self,
	System_Object_t /* System.Object */ obj,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Object_Equals1(
	System_Object_t /* System.Object */ objA,
	System_Object_t /* System.Object */ objB,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Object_ReferenceEquals(
	System_Object_t /* System.Object */ objA,
	System_Object_t /* System.Object */ objB,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Object_GetHashCode(
	System_Object_t /* System.Object */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_Object_Create(
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Object_Destroy(System_Object_t /* System.Object */ self);



System_Type_t /* System.Type */
System_Type_GetType(
	const CString /* System.String */ typeName,
	CBool /* System.Boolean */ throwOnError,
	CBool /* System.Boolean */ ignoreCase,
	System_Exception_t* /* System.Exception */ outException
);

System_Type_t /* System.Type */
System_Type_GetType1(
	const CString /* System.String */ typeName,
	CBool /* System.Boolean */ throwOnError,
	System_Exception_t* /* System.Exception */ outException
);

System_Type_t /* System.Type */
System_Type_GetType2(
	const CString /* System.String */ typeName,
	System_Exception_t* /* System.Exception */ outException
);

System_Type_t /* System.Type */
System_Type_GetTypeFromHandle(
	System_RuntimeTypeHandle_t /* System.RuntimeTypeHandle */ handle,
	System_Exception_t* /* System.Exception */ outException
);

System_Type_t /* System.Type */
System_Type_GetType3(
	System_Type_t /* System.Type */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Type_t /* System.Type */
System_Type_GetElementType(
	System_Type_t /* System.Type */ self,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Type_GetArrayRank(
	System_Type_t /* System.Type */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Type_t /* System.Type */
System_Type_GetGenericTypeDefinition(
	System_Type_t /* System.Type */ self,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Type_IsAssignableTo(
	System_Type_t /* System.Type */ self,
	System_Type_t /* System.Type */ targetType,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_EventInfo_t /* System.Reflection.EventInfo */
System_Type_GetEvent(
	System_Type_t /* System.Type */ self,
	const CString /* System.String */ name,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_EventInfo_t /* System.Reflection.EventInfo */
System_Type_GetEvent1(
	System_Type_t /* System.Type */ self,
	const CString /* System.String */ name,
	System_Reflection_BindingFlags /* System.Reflection.BindingFlags */ bindingAttr,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_FieldInfo_t /* System.Reflection.FieldInfo */
System_Type_GetField(
	System_Type_t /* System.Type */ self,
	const CString /* System.String */ name,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_FieldInfo_t /* System.Reflection.FieldInfo */
System_Type_GetField1(
	System_Type_t /* System.Type */ self,
	const CString /* System.String */ name,
	System_Reflection_BindingFlags /* System.Reflection.BindingFlags */ bindingAttr,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_MemberInfo_t /* System.Reflection.MemberInfo */
System_Type_GetMemberWithSameMetadataDefinitionAs(
	System_Type_t /* System.Type */ self,
	System_Reflection_MemberInfo_t /* System.Reflection.MemberInfo */ member,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_MethodInfo_t /* System.Reflection.MethodInfo */
System_Type_GetMethod(
	System_Type_t /* System.Type */ self,
	const CString /* System.String */ name,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_MethodInfo_t /* System.Reflection.MethodInfo */
System_Type_GetMethod1(
	System_Type_t /* System.Type */ self,
	const CString /* System.String */ name,
	System_Reflection_BindingFlags /* System.Reflection.BindingFlags */ bindingAttr,
	System_Exception_t* /* System.Exception */ outException
);

System_Type_t /* System.Type */
System_Type_GetNestedType(
	System_Type_t /* System.Type */ self,
	const CString /* System.String */ name,
	System_Exception_t* /* System.Exception */ outException
);

System_Type_t /* System.Type */
System_Type_GetNestedType1(
	System_Type_t /* System.Type */ self,
	const CString /* System.String */ name,
	System_Reflection_BindingFlags /* System.Reflection.BindingFlags */ bindingAttr,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_PropertyInfo_t /* System.Reflection.PropertyInfo */
System_Type_GetProperty(
	System_Type_t /* System.Type */ self,
	const CString /* System.String */ name,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_PropertyInfo_t /* System.Reflection.PropertyInfo */
System_Type_GetProperty1(
	System_Type_t /* System.Type */ self,
	const CString /* System.String */ name,
	System_Reflection_BindingFlags /* System.Reflection.BindingFlags */ bindingAttr,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_PropertyInfo_t /* System.Reflection.PropertyInfo */
System_Type_GetProperty2(
	System_Type_t /* System.Type */ self,
	const CString /* System.String */ name,
	System_Type_t /* System.Type */ returnType,
	System_Exception_t* /* System.Exception */ outException
);

System_RuntimeTypeHandle_t /* System.RuntimeTypeHandle */
System_Type_GetTypeHandle(
	System_Object_t /* System.Object */ o,
	System_Exception_t* /* System.Exception */ outException
);

System_TypeCode /* System.TypeCode */
System_Type_GetTypeCode(
	System_Type_t /* System.Type */ type,
	System_Exception_t* /* System.Exception */ outException
);

System_Type_t /* System.Type */
System_Type_GetTypeFromCLSID(
	System_Guid_t /* System.Guid */ clsid,
	System_Exception_t* /* System.Exception */ outException
);

System_Type_t /* System.Type */
System_Type_GetTypeFromCLSID1(
	System_Guid_t /* System.Guid */ clsid,
	CBool /* System.Boolean */ throwOnError,
	System_Exception_t* /* System.Exception */ outException
);

System_Type_t /* System.Type */
System_Type_GetTypeFromCLSID2(
	System_Guid_t /* System.Guid */ clsid,
	const CString /* System.String */ server,
	System_Exception_t* /* System.Exception */ outException
);

System_Type_t /* System.Type */
System_Type_GetTypeFromCLSID3(
	System_Guid_t /* System.Guid */ clsid,
	const CString /* System.String */ server,
	CBool /* System.Boolean */ throwOnError,
	System_Exception_t* /* System.Exception */ outException
);

System_Type_t /* System.Type */
System_Type_GetTypeFromProgID(
	const CString /* System.String */ progID,
	System_Exception_t* /* System.Exception */ outException
);

System_Type_t /* System.Type */
System_Type_GetTypeFromProgID1(
	const CString /* System.String */ progID,
	CBool /* System.Boolean */ throwOnError,
	System_Exception_t* /* System.Exception */ outException
);

System_Type_t /* System.Type */
System_Type_GetTypeFromProgID2(
	const CString /* System.String */ progID,
	const CString /* System.String */ server,
	System_Exception_t* /* System.Exception */ outException
);

System_Type_t /* System.Type */
System_Type_GetTypeFromProgID3(
	const CString /* System.String */ progID,
	const CString /* System.String */ server,
	CBool /* System.Boolean */ throwOnError,
	System_Exception_t* /* System.Exception */ outException
);

System_Type_t /* System.Type */
System_Type_GetInterface(
	System_Type_t /* System.Type */ self,
	const CString /* System.String */ name,
	System_Exception_t* /* System.Exception */ outException
);

System_Type_t /* System.Type */
System_Type_GetInterface1(
	System_Type_t /* System.Type */ self,
	const CString /* System.String */ name,
	CBool /* System.Boolean */ ignoreCase,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_InterfaceMapping_t /* System.Reflection.InterfaceMapping */
System_Type_GetInterfaceMap(
	System_Type_t /* System.Type */ self,
	System_Type_t /* System.Type */ interfaceType,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Type_IsInstanceOfType(
	System_Type_t /* System.Type */ self,
	System_Object_t /* System.Object */ o,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Type_IsEquivalentTo(
	System_Type_t /* System.Type */ self,
	System_Type_t /* System.Type */ other,
	System_Exception_t* /* System.Exception */ outException
);

System_Type_t /* System.Type */
System_Type_GetEnumUnderlyingType(
	System_Type_t /* System.Type */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Array_t /* System.Array */
System_Type_GetEnumValues(
	System_Type_t /* System.Type */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Array_t /* System.Array */
System_Type_GetEnumValuesAsUnderlyingType(
	System_Type_t /* System.Type */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Type_t /* System.Type */
System_Type_MakeArrayType(
	System_Type_t /* System.Type */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Type_t /* System.Type */
System_Type_MakeArrayType1(
	System_Type_t /* System.Type */ self,
	int32_t /* System.Int32 */ rank,
	System_Exception_t* /* System.Exception */ outException
);

System_Type_t /* System.Type */
System_Type_MakeByRefType(
	System_Type_t /* System.Type */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Type_t /* System.Type */
System_Type_MakePointerType(
	System_Type_t /* System.Type */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Type_t /* System.Type */
System_Type_MakeGenericMethodParameter(
	int32_t /* System.Int32 */ position,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Type_ToString(
	System_Type_t /* System.Type */ self,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Type_Equals(
	System_Type_t /* System.Type */ self,
	System_Object_t /* System.Object */ o,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Type_GetHashCode(
	System_Type_t /* System.Type */ self,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Type_Equals1(
	System_Type_t /* System.Type */ self,
	System_Type_t /* System.Type */ o,
	System_Exception_t* /* System.Exception */ outException
);

System_Type_t /* System.Type */
System_Type_ReflectionOnlyGetType(
	const CString /* System.String */ typeName,
	CBool /* System.Boolean */ throwIfNotFound,
	CBool /* System.Boolean */ ignoreCase,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Type_IsEnumDefined(
	System_Type_t /* System.Type */ self,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Type_GetEnumName(
	System_Type_t /* System.Type */ self,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Type_IsSubclassOf(
	System_Type_t /* System.Type */ self,
	System_Type_t /* System.Type */ c,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Type_IsAssignableFrom(
	System_Type_t /* System.Type */ self,
	System_Type_t /* System.Type */ c,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Type_Destroy(System_Type_t /* System.Type */ self);



CBool /* System.Boolean */
System_Reflection_MemberInfo_HasSameMetadataDefinitionAs(
	System_Reflection_MemberInfo_t /* System.Reflection.MemberInfo */ self,
	System_Reflection_MemberInfo_t /* System.Reflection.MemberInfo */ other,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Reflection_MemberInfo_IsDefined(
	System_Reflection_MemberInfo_t /* System.Reflection.MemberInfo */ self,
	System_Type_t /* System.Type */ attributeType,
	CBool /* System.Boolean */ inherit,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Reflection_MemberInfo_Equals(
	System_Reflection_MemberInfo_t /* System.Reflection.MemberInfo */ self,
	System_Object_t /* System.Object */ obj,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Reflection_MemberInfo_GetHashCode(
	System_Reflection_MemberInfo_t /* System.Reflection.MemberInfo */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Reflection_MemberInfo_Destroy(System_Reflection_MemberInfo_t /* System.Reflection.MemberInfo */ self);



void /* System.Void */ System_Reflection_MemberTypes_Destroy(System_Reflection_MemberTypes /* System.Reflection.MemberTypes */ self);



const CString /* System.String */
System_Enum_GetName(
	System_Type_t /* System.Type */ enumType,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_Type_t /* System.Type */
System_Enum_GetUnderlyingType(
	System_Type_t /* System.Type */ enumType,
	System_Exception_t* /* System.Exception */ outException
);

System_Array_t /* System.Array */
System_Enum_GetValues(
	System_Type_t /* System.Type */ enumType,
	System_Exception_t* /* System.Exception */ outException
);

System_Array_t /* System.Array */
System_Enum_GetValuesAsUnderlyingType(
	System_Type_t /* System.Type */ enumType,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Enum_HasFlag(
	System_Enum_t /* System.Enum */ self,
	System_Enum_t /* System.Enum */ flag,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Enum_IsDefined(
	System_Type_t /* System.Type */ enumType,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_Enum_Parse(
	System_Type_t /* System.Type */ enumType,
	const CString /* System.String */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_Enum_Parse1(
	System_Type_t /* System.Type */ enumType,
	const CString /* System.String */ value,
	CBool /* System.Boolean */ ignoreCase,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Enum_Equals(
	System_Enum_t /* System.Enum */ self,
	System_Object_t /* System.Object */ obj,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Enum_GetHashCode(
	System_Enum_t /* System.Enum */ self,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Enum_CompareTo(
	System_Enum_t /* System.Enum */ self,
	System_Object_t /* System.Object */ target,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Enum_ToString(
	System_Enum_t /* System.Enum */ self,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Enum_ToString1(
	System_Enum_t /* System.Enum */ self,
	const CString /* System.String */ format,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Enum_ToString2(
	System_Enum_t /* System.Enum */ self,
	System_IFormatProvider_t /* System.IFormatProvider */ provider,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Enum_ToString3(
	System_Enum_t /* System.Enum */ self,
	const CString /* System.String */ format,
	System_IFormatProvider_t /* System.IFormatProvider */ provider,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Enum_Format(
	System_Type_t /* System.Type */ enumType,
	System_Object_t /* System.Object */ value,
	const CString /* System.String */ format,
	System_Exception_t* /* System.Exception */ outException
);

System_TypeCode /* System.TypeCode */
System_Enum_GetTypeCode(
	System_Enum_t /* System.Enum */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_Enum_ToObject(
	System_Type_t /* System.Type */ enumType,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_Enum_ToObject1(
	System_Type_t /* System.Type */ enumType,
	int8_t /* System.SByte */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_Enum_ToObject2(
	System_Type_t /* System.Type */ enumType,
	int16_t /* System.Int16 */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_Enum_ToObject3(
	System_Type_t /* System.Type */ enumType,
	int32_t /* System.Int32 */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_Enum_ToObject4(
	System_Type_t /* System.Type */ enumType,
	uint8_t /* System.Byte */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_Enum_ToObject5(
	System_Type_t /* System.Type */ enumType,
	uint16_t /* System.UInt16 */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_Enum_ToObject6(
	System_Type_t /* System.Type */ enumType,
	uint32_t /* System.UInt32 */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_Enum_ToObject7(
	System_Type_t /* System.Type */ enumType,
	int64_t /* System.Int64 */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_Enum_ToObject8(
	System_Type_t /* System.Type */ enumType,
	uint64_t /* System.UInt64 */ value,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Enum_Destroy(System_Enum_t /* System.Enum */ self);



CBool /* System.Boolean */
System_ValueType_Equals(
	System_ValueType_t /* System.ValueType */ self,
	System_Object_t /* System.Object */ obj,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_ValueType_GetHashCode(
	System_ValueType_t /* System.ValueType */ self,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_ValueType_ToString(
	System_ValueType_t /* System.ValueType */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_ValueType_Destroy(System_ValueType_t /* System.ValueType */ self);





const CString /* System.String */
System_String_Intern(
	const CString /* System.String */ str,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_IsInterned(
	const CString /* System.String */ str,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_String_Compare(
	const CString /* System.String */ strA,
	const CString /* System.String */ strB,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_String_Compare1(
	const CString /* System.String */ strA,
	const CString /* System.String */ strB,
	CBool /* System.Boolean */ ignoreCase,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_String_Compare2(
	const CString /* System.String */ strA,
	const CString /* System.String */ strB,
	System_StringComparison /* System.StringComparison */ comparisonType,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_String_Compare3(
	const CString /* System.String */ strA,
	const CString /* System.String */ strB,
	System_Globalization_CultureInfo_t /* System.Globalization.CultureInfo */ culture,
	System_Globalization_CompareOptions /* System.Globalization.CompareOptions */ options,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_String_Compare4(
	const CString /* System.String */ strA,
	const CString /* System.String */ strB,
	CBool /* System.Boolean */ ignoreCase,
	System_Globalization_CultureInfo_t /* System.Globalization.CultureInfo */ culture,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_String_Compare5(
	const CString /* System.String */ strA,
	int32_t /* System.Int32 */ indexA,
	const CString /* System.String */ strB,
	int32_t /* System.Int32 */ indexB,
	int32_t /* System.Int32 */ length,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_String_Compare6(
	const CString /* System.String */ strA,
	int32_t /* System.Int32 */ indexA,
	const CString /* System.String */ strB,
	int32_t /* System.Int32 */ indexB,
	int32_t /* System.Int32 */ length,
	CBool /* System.Boolean */ ignoreCase,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_String_Compare7(
	const CString /* System.String */ strA,
	int32_t /* System.Int32 */ indexA,
	const CString /* System.String */ strB,
	int32_t /* System.Int32 */ indexB,
	int32_t /* System.Int32 */ length,
	CBool /* System.Boolean */ ignoreCase,
	System_Globalization_CultureInfo_t /* System.Globalization.CultureInfo */ culture,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_String_Compare8(
	const CString /* System.String */ strA,
	int32_t /* System.Int32 */ indexA,
	const CString /* System.String */ strB,
	int32_t /* System.Int32 */ indexB,
	int32_t /* System.Int32 */ length,
	System_Globalization_CultureInfo_t /* System.Globalization.CultureInfo */ culture,
	System_Globalization_CompareOptions /* System.Globalization.CompareOptions */ options,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_String_Compare9(
	const CString /* System.String */ strA,
	int32_t /* System.Int32 */ indexA,
	const CString /* System.String */ strB,
	int32_t /* System.Int32 */ indexB,
	int32_t /* System.Int32 */ length,
	System_StringComparison /* System.StringComparison */ comparisonType,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_String_CompareOrdinal(
	const CString /* System.String */ strA,
	const CString /* System.String */ strB,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_String_CompareOrdinal1(
	const CString /* System.String */ strA,
	int32_t /* System.Int32 */ indexA,
	const CString /* System.String */ strB,
	int32_t /* System.Int32 */ indexB,
	int32_t /* System.Int32 */ length,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_String_CompareTo(
	const CString /* System.String */ self,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_String_CompareTo1(
	const CString /* System.String */ self,
	const CString /* System.String */ strB,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_String_EndsWith(
	const CString /* System.String */ self,
	const CString /* System.String */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_String_EndsWith1(
	const CString /* System.String */ self,
	const CString /* System.String */ value,
	System_StringComparison /* System.StringComparison */ comparisonType,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_String_EndsWith2(
	const CString /* System.String */ self,
	const CString /* System.String */ value,
	CBool /* System.Boolean */ ignoreCase,
	System_Globalization_CultureInfo_t /* System.Globalization.CultureInfo */ culture,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_String_EndsWith3(
	const CString /* System.String */ self,
	uint8_t /* System.Char */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_String_Equals(
	const CString /* System.String */ self,
	System_Object_t /* System.Object */ obj,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_String_Equals1(
	const CString /* System.String */ self,
	const CString /* System.String */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_String_Equals2(
	const CString /* System.String */ self,
	const CString /* System.String */ value,
	System_StringComparison /* System.StringComparison */ comparisonType,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_String_Equals3(
	const CString /* System.String */ a,
	const CString /* System.String */ b,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_String_Equals4(
	const CString /* System.String */ a,
	const CString /* System.String */ b,
	System_StringComparison /* System.StringComparison */ comparisonType,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_String_GetHashCode(
	const CString /* System.String */ self,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_String_GetHashCode1(
	const CString /* System.String */ self,
	System_StringComparison /* System.StringComparison */ comparisonType,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_String_StartsWith(
	const CString /* System.String */ self,
	const CString /* System.String */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_String_StartsWith1(
	const CString /* System.String */ self,
	const CString /* System.String */ value,
	System_StringComparison /* System.StringComparison */ comparisonType,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_String_StartsWith2(
	const CString /* System.String */ self,
	const CString /* System.String */ value,
	CBool /* System.Boolean */ ignoreCase,
	System_Globalization_CultureInfo_t /* System.Globalization.CultureInfo */ culture,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_String_StartsWith3(
	const CString /* System.String */ self,
	uint8_t /* System.Char */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_String_Clone(
	const CString /* System.String */ self,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_Copy(
	const CString /* System.String */ str,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_String_IsNullOrEmpty(
	const CString /* System.String */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_String_IsNullOrWhiteSpace(
	const CString /* System.String */ value,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_ToString(
	const CString /* System.String */ self,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_ToString1(
	const CString /* System.String */ self,
	System_IFormatProvider_t /* System.IFormatProvider */ provider,
	System_Exception_t* /* System.Exception */ outException
);

System_CharEnumerator_t /* System.CharEnumerator */
System_String_GetEnumerator(
	const CString /* System.String */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Text_StringRuneEnumerator_t /* System.Text.StringRuneEnumerator */
System_String_EnumerateRunes(
	const CString /* System.String */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_TypeCode /* System.TypeCode */
System_String_GetTypeCode(
	const CString /* System.String */ self,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_String_IsNormalized(
	const CString /* System.String */ self,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_String_IsNormalized1(
	const CString /* System.String */ self,
	System_Text_NormalizationForm /* System.Text.NormalizationForm */ normalizationForm,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_Normalize(
	const CString /* System.String */ self,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_Normalize1(
	const CString /* System.String */ self,
	System_Text_NormalizationForm /* System.Text.NormalizationForm */ normalizationForm,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_Concat(
	System_Object_t /* System.Object */ arg0,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_Concat1(
	System_Object_t /* System.Object */ arg0,
	System_Object_t /* System.Object */ arg1,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_Concat2(
	System_Object_t /* System.Object */ arg0,
	System_Object_t /* System.Object */ arg1,
	System_Object_t /* System.Object */ arg2,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_Concat3(
	const CString /* System.String */ str0,
	const CString /* System.String */ str1,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_Concat4(
	const CString /* System.String */ str0,
	const CString /* System.String */ str1,
	const CString /* System.String */ str2,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_Concat5(
	const CString /* System.String */ str0,
	const CString /* System.String */ str1,
	const CString /* System.String */ str2,
	const CString /* System.String */ str3,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_Format(
	const CString /* System.String */ format,
	System_Object_t /* System.Object */ arg0,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_Format1(
	const CString /* System.String */ format,
	System_Object_t /* System.Object */ arg0,
	System_Object_t /* System.Object */ arg1,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_Format2(
	const CString /* System.String */ format,
	System_Object_t /* System.Object */ arg0,
	System_Object_t /* System.Object */ arg1,
	System_Object_t /* System.Object */ arg2,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_Format3(
	System_IFormatProvider_t /* System.IFormatProvider */ provider,
	const CString /* System.String */ format,
	System_Object_t /* System.Object */ arg0,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_Format4(
	System_IFormatProvider_t /* System.IFormatProvider */ provider,
	const CString /* System.String */ format,
	System_Object_t /* System.Object */ arg0,
	System_Object_t /* System.Object */ arg1,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_Format5(
	System_IFormatProvider_t /* System.IFormatProvider */ provider,
	const CString /* System.String */ format,
	System_Object_t /* System.Object */ arg0,
	System_Object_t /* System.Object */ arg1,
	System_Object_t /* System.Object */ arg2,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_Insert(
	const CString /* System.String */ self,
	int32_t /* System.Int32 */ startIndex,
	const CString /* System.String */ value,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_PadLeft(
	const CString /* System.String */ self,
	int32_t /* System.Int32 */ totalWidth,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_PadLeft1(
	const CString /* System.String */ self,
	int32_t /* System.Int32 */ totalWidth,
	uint8_t /* System.Char */ paddingChar,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_PadRight(
	const CString /* System.String */ self,
	int32_t /* System.Int32 */ totalWidth,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_PadRight1(
	const CString /* System.String */ self,
	int32_t /* System.Int32 */ totalWidth,
	uint8_t /* System.Char */ paddingChar,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_Remove(
	const CString /* System.String */ self,
	int32_t /* System.Int32 */ startIndex,
	int32_t /* System.Int32 */ count,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_Remove1(
	const CString /* System.String */ self,
	int32_t /* System.Int32 */ startIndex,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_Replace(
	const CString /* System.String */ self,
	const CString /* System.String */ oldValue,
	const CString /* System.String */ newValue,
	CBool /* System.Boolean */ ignoreCase,
	System_Globalization_CultureInfo_t /* System.Globalization.CultureInfo */ culture,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_Replace1(
	const CString /* System.String */ self,
	const CString /* System.String */ oldValue,
	const CString /* System.String */ newValue,
	System_StringComparison /* System.StringComparison */ comparisonType,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_Replace2(
	const CString /* System.String */ self,
	uint8_t /* System.Char */ oldChar,
	uint8_t /* System.Char */ newChar,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_Replace3(
	const CString /* System.String */ self,
	const CString /* System.String */ oldValue,
	const CString /* System.String */ newValue,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_ReplaceLineEndings(
	const CString /* System.String */ self,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_ReplaceLineEndings1(
	const CString /* System.String */ self,
	const CString /* System.String */ replacementText,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_Substring(
	const CString /* System.String */ self,
	int32_t /* System.Int32 */ startIndex,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_Substring1(
	const CString /* System.String */ self,
	int32_t /* System.Int32 */ startIndex,
	int32_t /* System.Int32 */ length,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_ToLower(
	const CString /* System.String */ self,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_ToLower1(
	const CString /* System.String */ self,
	System_Globalization_CultureInfo_t /* System.Globalization.CultureInfo */ culture,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_ToLowerInvariant(
	const CString /* System.String */ self,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_ToUpper(
	const CString /* System.String */ self,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_ToUpper1(
	const CString /* System.String */ self,
	System_Globalization_CultureInfo_t /* System.Globalization.CultureInfo */ culture,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_ToUpperInvariant(
	const CString /* System.String */ self,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_Trim(
	const CString /* System.String */ self,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_Trim1(
	const CString /* System.String */ self,
	uint8_t /* System.Char */ trimChar,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_TrimStart(
	const CString /* System.String */ self,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_TrimStart1(
	const CString /* System.String */ self,
	uint8_t /* System.Char */ trimChar,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_TrimEnd(
	const CString /* System.String */ self,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_TrimEnd1(
	const CString /* System.String */ self,
	uint8_t /* System.Char */ trimChar,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_String_Contains(
	const CString /* System.String */ self,
	const CString /* System.String */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_String_Contains1(
	const CString /* System.String */ self,
	const CString /* System.String */ value,
	System_StringComparison /* System.StringComparison */ comparisonType,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_String_Contains2(
	const CString /* System.String */ self,
	uint8_t /* System.Char */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_String_Contains3(
	const CString /* System.String */ self,
	uint8_t /* System.Char */ value,
	System_StringComparison /* System.StringComparison */ comparisonType,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_String_IndexOf(
	const CString /* System.String */ self,
	uint8_t /* System.Char */ value,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_String_IndexOf1(
	const CString /* System.String */ self,
	uint8_t /* System.Char */ value,
	int32_t /* System.Int32 */ startIndex,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_String_IndexOf2(
	const CString /* System.String */ self,
	uint8_t /* System.Char */ value,
	System_StringComparison /* System.StringComparison */ comparisonType,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_String_IndexOf3(
	const CString /* System.String */ self,
	uint8_t /* System.Char */ value,
	int32_t /* System.Int32 */ startIndex,
	int32_t /* System.Int32 */ count,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_String_IndexOf4(
	const CString /* System.String */ self,
	const CString /* System.String */ value,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_String_IndexOf5(
	const CString /* System.String */ self,
	const CString /* System.String */ value,
	int32_t /* System.Int32 */ startIndex,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_String_IndexOf6(
	const CString /* System.String */ self,
	const CString /* System.String */ value,
	int32_t /* System.Int32 */ startIndex,
	int32_t /* System.Int32 */ count,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_String_IndexOf7(
	const CString /* System.String */ self,
	const CString /* System.String */ value,
	System_StringComparison /* System.StringComparison */ comparisonType,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_String_IndexOf8(
	const CString /* System.String */ self,
	const CString /* System.String */ value,
	int32_t /* System.Int32 */ startIndex,
	System_StringComparison /* System.StringComparison */ comparisonType,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_String_IndexOf9(
	const CString /* System.String */ self,
	const CString /* System.String */ value,
	int32_t /* System.Int32 */ startIndex,
	int32_t /* System.Int32 */ count,
	System_StringComparison /* System.StringComparison */ comparisonType,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_String_LastIndexOf(
	const CString /* System.String */ self,
	uint8_t /* System.Char */ value,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_String_LastIndexOf1(
	const CString /* System.String */ self,
	uint8_t /* System.Char */ value,
	int32_t /* System.Int32 */ startIndex,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_String_LastIndexOf2(
	const CString /* System.String */ self,
	uint8_t /* System.Char */ value,
	int32_t /* System.Int32 */ startIndex,
	int32_t /* System.Int32 */ count,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_String_LastIndexOf3(
	const CString /* System.String */ self,
	const CString /* System.String */ value,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_String_LastIndexOf4(
	const CString /* System.String */ self,
	const CString /* System.String */ value,
	int32_t /* System.Int32 */ startIndex,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_String_LastIndexOf5(
	const CString /* System.String */ self,
	const CString /* System.String */ value,
	int32_t /* System.Int32 */ startIndex,
	int32_t /* System.Int32 */ count,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_String_LastIndexOf6(
	const CString /* System.String */ self,
	const CString /* System.String */ value,
	System_StringComparison /* System.StringComparison */ comparisonType,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_String_LastIndexOf7(
	const CString /* System.String */ self,
	const CString /* System.String */ value,
	int32_t /* System.Int32 */ startIndex,
	System_StringComparison /* System.StringComparison */ comparisonType,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_String_LastIndexOf8(
	const CString /* System.String */ self,
	const CString /* System.String */ value,
	int32_t /* System.Int32 */ startIndex,
	int32_t /* System.Int32 */ count,
	System_StringComparison /* System.StringComparison */ comparisonType,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_String_Create(
	uint8_t /* System.Char */ c,
	int32_t /* System.Int32 */ count,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_String_Destroy(const CString /* System.String */ self);



void /* System.Void */ System_StringComparison_Destroy(System_StringComparison /* System.StringComparison */ self);



System_Globalization_CultureInfo_t /* System.Globalization.CultureInfo */
System_Globalization_CultureInfo_CreateSpecificCulture(
	const CString /* System.String */ name,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Globalization_CultureInfo_Equals(
	System_Globalization_CultureInfo_t /* System.Globalization.CultureInfo */ self,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_CultureInfo_GetHashCode(
	System_Globalization_CultureInfo_t /* System.Globalization.CultureInfo */ self,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Globalization_CultureInfo_ToString(
	System_Globalization_CultureInfo_t /* System.Globalization.CultureInfo */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_Globalization_CultureInfo_GetFormat(
	System_Globalization_CultureInfo_t /* System.Globalization.CultureInfo */ self,
	System_Type_t /* System.Type */ formatType,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Globalization_CultureInfo_ClearCachedData(
	System_Globalization_CultureInfo_t /* System.Globalization.CultureInfo */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Globalization_CultureInfo_t /* System.Globalization.CultureInfo */
System_Globalization_CultureInfo_GetConsoleFallbackUICulture(
	System_Globalization_CultureInfo_t /* System.Globalization.CultureInfo */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_Globalization_CultureInfo_Clone(
	System_Globalization_CultureInfo_t /* System.Globalization.CultureInfo */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Globalization_CultureInfo_t /* System.Globalization.CultureInfo */
System_Globalization_CultureInfo_ReadOnly(
	System_Globalization_CultureInfo_t /* System.Globalization.CultureInfo */ ci,
	System_Exception_t* /* System.Exception */ outException
);

System_Globalization_CultureInfo_t /* System.Globalization.CultureInfo */
System_Globalization_CultureInfo_GetCultureInfo(
	int32_t /* System.Int32 */ culture,
	System_Exception_t* /* System.Exception */ outException
);

System_Globalization_CultureInfo_t /* System.Globalization.CultureInfo */
System_Globalization_CultureInfo_GetCultureInfo1(
	const CString /* System.String */ name,
	System_Exception_t* /* System.Exception */ outException
);

System_Globalization_CultureInfo_t /* System.Globalization.CultureInfo */
System_Globalization_CultureInfo_GetCultureInfo2(
	const CString /* System.String */ name,
	const CString /* System.String */ altName,
	System_Exception_t* /* System.Exception */ outException
);

System_Globalization_CultureInfo_t /* System.Globalization.CultureInfo */
System_Globalization_CultureInfo_GetCultureInfo3(
	const CString /* System.String */ name,
	CBool /* System.Boolean */ predefinedOnly,
	System_Exception_t* /* System.Exception */ outException
);

System_Globalization_CultureInfo_t /* System.Globalization.CultureInfo */
System_Globalization_CultureInfo_GetCultureInfoByIetfLanguageTag(
	const CString /* System.String */ name,
	System_Exception_t* /* System.Exception */ outException
);

System_Globalization_CultureInfo_t /* System.Globalization.CultureInfo */
System_Globalization_CultureInfo_Create1(
	const CString /* System.String */ name,
	System_Exception_t* /* System.Exception */ outException
);

System_Globalization_CultureInfo_t /* System.Globalization.CultureInfo */
System_Globalization_CultureInfo_Create2(
	const CString /* System.String */ name,
	CBool /* System.Boolean */ useUserOverride,
	System_Exception_t* /* System.Exception */ outException
);

System_Globalization_CultureInfo_t /* System.Globalization.CultureInfo */
System_Globalization_CultureInfo_Create3(
	int32_t /* System.Int32 */ culture,
	System_Exception_t* /* System.Exception */ outException
);

System_Globalization_CultureInfo_t /* System.Globalization.CultureInfo */
System_Globalization_CultureInfo_Create4(
	int32_t /* System.Int32 */ culture,
	CBool /* System.Boolean */ useUserOverride,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Globalization_CultureInfo_Destroy(System_Globalization_CultureInfo_t /* System.Globalization.CultureInfo */ self);



void /* System.Void */ System_Void_Destroy(void /* System.Void */ self);



void /* System.Void */ System_Globalization_CultureTypes_Destroy(System_Globalization_CultureTypes /* System.Globalization.CultureTypes */ self);



System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */
System_Globalization_CompareInfo_GetCompareInfo(
	int32_t /* System.Int32 */ culture,
	System_Reflection_Assembly_t /* System.Reflection.Assembly */ assembly,
	System_Exception_t* /* System.Exception */ outException
);

System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */
System_Globalization_CompareInfo_GetCompareInfo1(
	const CString /* System.String */ name,
	System_Reflection_Assembly_t /* System.Reflection.Assembly */ assembly,
	System_Exception_t* /* System.Exception */ outException
);

System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */
System_Globalization_CompareInfo_GetCompareInfo2(
	int32_t /* System.Int32 */ culture,
	System_Exception_t* /* System.Exception */ outException
);

System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */
System_Globalization_CompareInfo_GetCompareInfo3(
	const CString /* System.String */ name,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Globalization_CompareInfo_IsSortable(
	uint8_t /* System.Char */ ch,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Globalization_CompareInfo_IsSortable1(
	const CString /* System.String */ text,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Globalization_CompareInfo_IsSortable2(
	System_Text_Rune_t /* System.Text.Rune */ value,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_CompareInfo_Compare(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	const CString /* System.String */ string1,
	const CString /* System.String */ string2,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_CompareInfo_Compare1(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	const CString /* System.String */ string1,
	const CString /* System.String */ string2,
	System_Globalization_CompareOptions /* System.Globalization.CompareOptions */ options,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_CompareInfo_Compare2(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	const CString /* System.String */ string1,
	int32_t /* System.Int32 */ offset1,
	int32_t /* System.Int32 */ length1,
	const CString /* System.String */ string2,
	int32_t /* System.Int32 */ offset2,
	int32_t /* System.Int32 */ length2,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_CompareInfo_Compare3(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	const CString /* System.String */ string1,
	int32_t /* System.Int32 */ offset1,
	const CString /* System.String */ string2,
	int32_t /* System.Int32 */ offset2,
	System_Globalization_CompareOptions /* System.Globalization.CompareOptions */ options,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_CompareInfo_Compare4(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	const CString /* System.String */ string1,
	int32_t /* System.Int32 */ offset1,
	const CString /* System.String */ string2,
	int32_t /* System.Int32 */ offset2,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_CompareInfo_Compare5(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	const CString /* System.String */ string1,
	int32_t /* System.Int32 */ offset1,
	int32_t /* System.Int32 */ length1,
	const CString /* System.String */ string2,
	int32_t /* System.Int32 */ offset2,
	int32_t /* System.Int32 */ length2,
	System_Globalization_CompareOptions /* System.Globalization.CompareOptions */ options,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Globalization_CompareInfo_IsPrefix(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	const CString /* System.String */ source,
	const CString /* System.String */ prefix,
	System_Globalization_CompareOptions /* System.Globalization.CompareOptions */ options,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Globalization_CompareInfo_IsPrefix1(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	const CString /* System.String */ source,
	const CString /* System.String */ prefix,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Globalization_CompareInfo_IsSuffix(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	const CString /* System.String */ source,
	const CString /* System.String */ suffix,
	System_Globalization_CompareOptions /* System.Globalization.CompareOptions */ options,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Globalization_CompareInfo_IsSuffix1(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	const CString /* System.String */ source,
	const CString /* System.String */ suffix,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_CompareInfo_IndexOf(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	const CString /* System.String */ source,
	uint8_t /* System.Char */ value,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_CompareInfo_IndexOf1(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	const CString /* System.String */ source,
	const CString /* System.String */ value,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_CompareInfo_IndexOf2(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	const CString /* System.String */ source,
	uint8_t /* System.Char */ value,
	System_Globalization_CompareOptions /* System.Globalization.CompareOptions */ options,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_CompareInfo_IndexOf3(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	const CString /* System.String */ source,
	const CString /* System.String */ value,
	System_Globalization_CompareOptions /* System.Globalization.CompareOptions */ options,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_CompareInfo_IndexOf4(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	const CString /* System.String */ source,
	uint8_t /* System.Char */ value,
	int32_t /* System.Int32 */ startIndex,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_CompareInfo_IndexOf5(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	const CString /* System.String */ source,
	const CString /* System.String */ value,
	int32_t /* System.Int32 */ startIndex,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_CompareInfo_IndexOf6(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	const CString /* System.String */ source,
	uint8_t /* System.Char */ value,
	int32_t /* System.Int32 */ startIndex,
	System_Globalization_CompareOptions /* System.Globalization.CompareOptions */ options,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_CompareInfo_IndexOf7(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	const CString /* System.String */ source,
	const CString /* System.String */ value,
	int32_t /* System.Int32 */ startIndex,
	System_Globalization_CompareOptions /* System.Globalization.CompareOptions */ options,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_CompareInfo_IndexOf8(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	const CString /* System.String */ source,
	uint8_t /* System.Char */ value,
	int32_t /* System.Int32 */ startIndex,
	int32_t /* System.Int32 */ count,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_CompareInfo_IndexOf9(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	const CString /* System.String */ source,
	const CString /* System.String */ value,
	int32_t /* System.Int32 */ startIndex,
	int32_t /* System.Int32 */ count,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_CompareInfo_IndexOf10(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	const CString /* System.String */ source,
	uint8_t /* System.Char */ value,
	int32_t /* System.Int32 */ startIndex,
	int32_t /* System.Int32 */ count,
	System_Globalization_CompareOptions /* System.Globalization.CompareOptions */ options,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_CompareInfo_IndexOf11(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	const CString /* System.String */ source,
	const CString /* System.String */ value,
	int32_t /* System.Int32 */ startIndex,
	int32_t /* System.Int32 */ count,
	System_Globalization_CompareOptions /* System.Globalization.CompareOptions */ options,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_CompareInfo_LastIndexOf(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	const CString /* System.String */ source,
	uint8_t /* System.Char */ value,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_CompareInfo_LastIndexOf1(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	const CString /* System.String */ source,
	const CString /* System.String */ value,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_CompareInfo_LastIndexOf2(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	const CString /* System.String */ source,
	uint8_t /* System.Char */ value,
	System_Globalization_CompareOptions /* System.Globalization.CompareOptions */ options,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_CompareInfo_LastIndexOf3(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	const CString /* System.String */ source,
	const CString /* System.String */ value,
	System_Globalization_CompareOptions /* System.Globalization.CompareOptions */ options,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_CompareInfo_LastIndexOf4(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	const CString /* System.String */ source,
	uint8_t /* System.Char */ value,
	int32_t /* System.Int32 */ startIndex,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_CompareInfo_LastIndexOf5(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	const CString /* System.String */ source,
	const CString /* System.String */ value,
	int32_t /* System.Int32 */ startIndex,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_CompareInfo_LastIndexOf6(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	const CString /* System.String */ source,
	uint8_t /* System.Char */ value,
	int32_t /* System.Int32 */ startIndex,
	System_Globalization_CompareOptions /* System.Globalization.CompareOptions */ options,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_CompareInfo_LastIndexOf7(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	const CString /* System.String */ source,
	const CString /* System.String */ value,
	int32_t /* System.Int32 */ startIndex,
	System_Globalization_CompareOptions /* System.Globalization.CompareOptions */ options,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_CompareInfo_LastIndexOf8(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	const CString /* System.String */ source,
	uint8_t /* System.Char */ value,
	int32_t /* System.Int32 */ startIndex,
	int32_t /* System.Int32 */ count,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_CompareInfo_LastIndexOf9(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	const CString /* System.String */ source,
	const CString /* System.String */ value,
	int32_t /* System.Int32 */ startIndex,
	int32_t /* System.Int32 */ count,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_CompareInfo_LastIndexOf10(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	const CString /* System.String */ source,
	uint8_t /* System.Char */ value,
	int32_t /* System.Int32 */ startIndex,
	int32_t /* System.Int32 */ count,
	System_Globalization_CompareOptions /* System.Globalization.CompareOptions */ options,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_CompareInfo_LastIndexOf11(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	const CString /* System.String */ source,
	const CString /* System.String */ value,
	int32_t /* System.Int32 */ startIndex,
	int32_t /* System.Int32 */ count,
	System_Globalization_CompareOptions /* System.Globalization.CompareOptions */ options,
	System_Exception_t* /* System.Exception */ outException
);

System_Globalization_SortKey_t /* System.Globalization.SortKey */
System_Globalization_CompareInfo_GetSortKey(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	const CString /* System.String */ source,
	System_Globalization_CompareOptions /* System.Globalization.CompareOptions */ options,
	System_Exception_t* /* System.Exception */ outException
);

System_Globalization_SortKey_t /* System.Globalization.SortKey */
System_Globalization_CompareInfo_GetSortKey1(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	const CString /* System.String */ source,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Globalization_CompareInfo_Equals(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_CompareInfo_GetHashCode(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_CompareInfo_GetHashCode1(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	const CString /* System.String */ source,
	System_Globalization_CompareOptions /* System.Globalization.CompareOptions */ options,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Globalization_CompareInfo_ToString(
	System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Globalization_CompareInfo_Destroy(System_Globalization_CompareInfo_t /* System.Globalization.CompareInfo */ self);



System_Reflection_Assembly_t /* System.Reflection.Assembly */
System_Reflection_Assembly_Load(
	const CString /* System.String */ assemblyString,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_Assembly_t /* System.Reflection.Assembly */
System_Reflection_Assembly_LoadWithPartialName(
	const CString /* System.String */ partialName,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_Assembly_t /* System.Reflection.Assembly */
System_Reflection_Assembly_Load1(
	System_Reflection_AssemblyName_t /* System.Reflection.AssemblyName */ assemblyRef,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_Assembly_t /* System.Reflection.Assembly */
System_Reflection_Assembly_GetExecutingAssembly(
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_Assembly_t /* System.Reflection.Assembly */
System_Reflection_Assembly_GetCallingAssembly(
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_ManifestResourceInfo_t /* System.Reflection.ManifestResourceInfo */
System_Reflection_Assembly_GetManifestResourceInfo(
	System_Reflection_Assembly_t /* System.Reflection.Assembly */ self,
	const CString /* System.String */ resourceName,
	System_Exception_t* /* System.Exception */ outException
);

System_IO_Stream_t /* System.IO.Stream */
System_Reflection_Assembly_GetManifestResourceStream(
	System_Reflection_Assembly_t /* System.Reflection.Assembly */ self,
	const CString /* System.String */ name,
	System_Exception_t* /* System.Exception */ outException
);

System_IO_Stream_t /* System.IO.Stream */
System_Reflection_Assembly_GetManifestResourceStream1(
	System_Reflection_Assembly_t /* System.Reflection.Assembly */ self,
	System_Type_t /* System.Type */ type,
	const CString /* System.String */ name,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_AssemblyName_t /* System.Reflection.AssemblyName */
System_Reflection_Assembly_GetName(
	System_Reflection_Assembly_t /* System.Reflection.Assembly */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_AssemblyName_t /* System.Reflection.AssemblyName */
System_Reflection_Assembly_GetName1(
	System_Reflection_Assembly_t /* System.Reflection.Assembly */ self,
	CBool /* System.Boolean */ copiedName,
	System_Exception_t* /* System.Exception */ outException
);

System_Type_t /* System.Type */
System_Reflection_Assembly_GetType(
	System_Reflection_Assembly_t /* System.Reflection.Assembly */ self,
	const CString /* System.String */ name,
	System_Exception_t* /* System.Exception */ outException
);

System_Type_t /* System.Type */
System_Reflection_Assembly_GetType1(
	System_Reflection_Assembly_t /* System.Reflection.Assembly */ self,
	const CString /* System.String */ name,
	CBool /* System.Boolean */ throwOnError,
	System_Exception_t* /* System.Exception */ outException
);

System_Type_t /* System.Type */
System_Reflection_Assembly_GetType2(
	System_Reflection_Assembly_t /* System.Reflection.Assembly */ self,
	const CString /* System.String */ name,
	CBool /* System.Boolean */ throwOnError,
	CBool /* System.Boolean */ ignoreCase,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Reflection_Assembly_IsDefined(
	System_Reflection_Assembly_t /* System.Reflection.Assembly */ self,
	System_Type_t /* System.Type */ attributeType,
	CBool /* System.Boolean */ inherit,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_Reflection_Assembly_CreateInstance(
	System_Reflection_Assembly_t /* System.Reflection.Assembly */ self,
	const CString /* System.String */ typeName,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_Reflection_Assembly_CreateInstance1(
	System_Reflection_Assembly_t /* System.Reflection.Assembly */ self,
	const CString /* System.String */ typeName,
	CBool /* System.Boolean */ ignoreCase,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_Module_t /* System.Reflection.Module */
System_Reflection_Assembly_GetModule(
	System_Reflection_Assembly_t /* System.Reflection.Assembly */ self,
	const CString /* System.String */ name,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_Assembly_t /* System.Reflection.Assembly */
System_Reflection_Assembly_GetSatelliteAssembly(
	System_Reflection_Assembly_t /* System.Reflection.Assembly */ self,
	System_Globalization_CultureInfo_t /* System.Globalization.CultureInfo */ culture,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_Assembly_t /* System.Reflection.Assembly */
System_Reflection_Assembly_GetSatelliteAssembly1(
	System_Reflection_Assembly_t /* System.Reflection.Assembly */ self,
	System_Globalization_CultureInfo_t /* System.Globalization.CultureInfo */ culture,
	System_Version_t /* System.Version */ version,
	System_Exception_t* /* System.Exception */ outException
);

System_IO_FileStream_t /* System.IO.FileStream */
System_Reflection_Assembly_GetFile(
	System_Reflection_Assembly_t /* System.Reflection.Assembly */ self,
	const CString /* System.String */ name,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Reflection_Assembly_GetObjectData(
	System_Reflection_Assembly_t /* System.Reflection.Assembly */ self,
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ info,
	System_Runtime_Serialization_StreamingContext_t /* System.Runtime.Serialization.StreamingContext */ context,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Reflection_Assembly_ToString(
	System_Reflection_Assembly_t /* System.Reflection.Assembly */ self,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Reflection_Assembly_Equals(
	System_Reflection_Assembly_t /* System.Reflection.Assembly */ self,
	System_Object_t /* System.Object */ o,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Reflection_Assembly_GetHashCode(
	System_Reflection_Assembly_t /* System.Reflection.Assembly */ self,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Reflection_Assembly_CreateQualifiedName(
	const CString /* System.String */ assemblyName,
	const CString /* System.String */ typeName,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_Assembly_t /* System.Reflection.Assembly */
System_Reflection_Assembly_GetAssembly(
	System_Type_t /* System.Type */ type,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_Assembly_t /* System.Reflection.Assembly */
System_Reflection_Assembly_GetEntryAssembly(
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_Assembly_t /* System.Reflection.Assembly */
System_Reflection_Assembly_LoadFile(
	const CString /* System.String */ path,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_Assembly_t /* System.Reflection.Assembly */
System_Reflection_Assembly_LoadFrom(
	const CString /* System.String */ assemblyFile,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_Assembly_t /* System.Reflection.Assembly */
System_Reflection_Assembly_UnsafeLoadFrom(
	const CString /* System.String */ assemblyFile,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_Assembly_t /* System.Reflection.Assembly */
System_Reflection_Assembly_ReflectionOnlyLoad(
	const CString /* System.String */ assemblyString,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_Assembly_t /* System.Reflection.Assembly */
System_Reflection_Assembly_ReflectionOnlyLoadFrom(
	const CString /* System.String */ assemblyFile,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Reflection_Assembly_Destroy(System_Reflection_Assembly_t /* System.Reflection.Assembly */ self);



System_Object_t /* System.Object */
System_Reflection_AssemblyName_Clone(
	System_Reflection_AssemblyName_t /* System.Reflection.AssemblyName */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_AssemblyName_t /* System.Reflection.AssemblyName */
System_Reflection_AssemblyName_GetAssemblyName(
	const CString /* System.String */ assemblyFile,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Reflection_AssemblyName_ToString(
	System_Reflection_AssemblyName_t /* System.Reflection.AssemblyName */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Reflection_AssemblyName_GetObjectData(
	System_Reflection_AssemblyName_t /* System.Reflection.AssemblyName */ self,
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ info,
	System_Runtime_Serialization_StreamingContext_t /* System.Runtime.Serialization.StreamingContext */ context,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Reflection_AssemblyName_OnDeserialization(
	System_Reflection_AssemblyName_t /* System.Reflection.AssemblyName */ self,
	System_Object_t /* System.Object */ sender,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Reflection_AssemblyName_ReferenceMatchesDefinition(
	System_Reflection_AssemblyName_t /* System.Reflection.AssemblyName */ reference,
	System_Reflection_AssemblyName_t /* System.Reflection.AssemblyName */ definition,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_AssemblyName_t /* System.Reflection.AssemblyName */
System_Reflection_AssemblyName_Create(
	const CString /* System.String */ assemblyName,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_AssemblyName_t /* System.Reflection.AssemblyName */
System_Reflection_AssemblyName_Create1(
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Reflection_AssemblyName_Destroy(System_Reflection_AssemblyName_t /* System.Reflection.AssemblyName */ self);



System_Object_t /* System.Object */
System_Version_Clone(
	System_Version_t /* System.Version */ self,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Version_CompareTo(
	System_Version_t /* System.Version */ self,
	System_Object_t /* System.Object */ version,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Version_CompareTo1(
	System_Version_t /* System.Version */ self,
	System_Version_t /* System.Version */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Version_Equals(
	System_Version_t /* System.Version */ self,
	System_Object_t /* System.Object */ obj,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Version_Equals1(
	System_Version_t /* System.Version */ self,
	System_Version_t /* System.Version */ obj,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Version_GetHashCode(
	System_Version_t /* System.Version */ self,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Version_ToString(
	System_Version_t /* System.Version */ self,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Version_ToString1(
	System_Version_t /* System.Version */ self,
	int32_t /* System.Int32 */ fieldCount,
	System_Exception_t* /* System.Exception */ outException
);

System_Version_t /* System.Version */
System_Version_Parse(
	const CString /* System.String */ input,
	System_Exception_t* /* System.Exception */ outException
);

System_Version_t /* System.Version */
System_Version_Create(
	int32_t /* System.Int32 */ major,
	int32_t /* System.Int32 */ minor,
	int32_t /* System.Int32 */ build,
	int32_t /* System.Int32 */ revision,
	System_Exception_t* /* System.Exception */ outException
);

System_Version_t /* System.Version */
System_Version_Create1(
	int32_t /* System.Int32 */ major,
	int32_t /* System.Int32 */ minor,
	int32_t /* System.Int32 */ build,
	System_Exception_t* /* System.Exception */ outException
);

System_Version_t /* System.Version */
System_Version_Create2(
	int32_t /* System.Int32 */ major,
	int32_t /* System.Int32 */ minor,
	System_Exception_t* /* System.Exception */ outException
);

System_Version_t /* System.Version */
System_Version_Create3(
	const CString /* System.String */ version,
	System_Exception_t* /* System.Exception */ outException
);

System_Version_t /* System.Version */
System_Version_Create4(
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Version_Destroy(System_Version_t /* System.Version */ self);




System_Object_t /* System.Object */
System_IFormatProvider_GetFormat(
	System_IFormatProvider_t /* System.IFormatProvider */ self,
	System_Type_t /* System.Type */ formatType,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_IFormatProvider_Destroy(System_IFormatProvider_t /* System.IFormatProvider */ self);



void /* System.Void */ System_Globalization_NumberStyles_Destroy(System_Globalization_NumberStyles /* System.Globalization.NumberStyles */ self);



void /* System.Void */ System_TypeCode_Destroy(System_TypeCode /* System.TypeCode */ self);



void /* System.Void */ System_Reflection_ProcessorArchitecture_Destroy(System_Reflection_ProcessorArchitecture /* System.Reflection.ProcessorArchitecture */ self);



void /* System.Void */ System_Reflection_AssemblyContentType_Destroy(System_Reflection_AssemblyContentType /* System.Reflection.AssemblyContentType */ self);



void /* System.Void */ System_Reflection_AssemblyNameFlags_Destroy(System_Reflection_AssemblyNameFlags /* System.Reflection.AssemblyNameFlags */ self);



void /* System.Void */ System_Configuration_Assemblies_AssemblyHashAlgorithm_Destroy(System_Configuration_Assemblies_AssemblyHashAlgorithm /* System.Configuration.Assemblies.AssemblyHashAlgorithm */ self);



void /* System.Void */ System_Configuration_Assemblies_AssemblyVersionCompatibility_Destroy(System_Configuration_Assemblies_AssemblyVersionCompatibility /* System.Configuration.Assemblies.AssemblyVersionCompatibility */ self);



System_Reflection_StrongNameKeyPair_t /* System.Reflection.StrongNameKeyPair */
System_Reflection_StrongNameKeyPair_Create(
	System_IO_FileStream_t /* System.IO.FileStream */ keyPairFile,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_StrongNameKeyPair_t /* System.Reflection.StrongNameKeyPair */
System_Reflection_StrongNameKeyPair_Create1(
	const CString /* System.String */ keyPairContainer,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Reflection_StrongNameKeyPair_Destroy(System_Reflection_StrongNameKeyPair_t /* System.Reflection.StrongNameKeyPair */ self);



void /* System.Void */
System_IO_FileStream_Lock(
	System_IO_FileStream_t /* System.IO.FileStream */ self,
	int64_t /* System.Int64 */ position,
	int64_t /* System.Int64 */ length,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_IO_FileStream_Unlock(
	System_IO_FileStream_t /* System.IO.FileStream */ self,
	int64_t /* System.Int64 */ position,
	int64_t /* System.Int64 */ length,
	System_Exception_t* /* System.Exception */ outException
);

System_Threading_Tasks_Task_t /* System.Threading.Tasks.Task */
System_IO_FileStream_FlushAsync(
	System_IO_FileStream_t /* System.IO.FileStream */ self,
	System_Threading_CancellationToken_t /* System.Threading.CancellationToken */ cancellationToken,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_IO_FileStream_Flush1(
	System_IO_FileStream_t /* System.IO.FileStream */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_IO_FileStream_Flush2(
	System_IO_FileStream_t /* System.IO.FileStream */ self,
	CBool /* System.Boolean */ flushToDisk,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_IO_FileStream_SetLength(
	System_IO_FileStream_t /* System.IO.FileStream */ self,
	int64_t /* System.Int64 */ value,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_IO_FileStream_ReadByte(
	System_IO_FileStream_t /* System.IO.FileStream */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_IO_FileStream_WriteByte(
	System_IO_FileStream_t /* System.IO.FileStream */ self,
	uint8_t /* System.Byte */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_Threading_Tasks_ValueTask_t /* System.Threading.Tasks.ValueTask */
System_IO_FileStream_DisposeAsync(
	System_IO_FileStream_t /* System.IO.FileStream */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_IO_FileStream_CopyTo(
	System_IO_FileStream_t /* System.IO.FileStream */ self,
	System_IO_Stream_t /* System.IO.Stream */ destination,
	int32_t /* System.Int32 */ bufferSize,
	System_Exception_t* /* System.Exception */ outException
);

System_Threading_Tasks_Task_t /* System.Threading.Tasks.Task */
System_IO_FileStream_CopyToAsync(
	System_IO_FileStream_t /* System.IO.FileStream */ self,
	System_IO_Stream_t /* System.IO.Stream */ destination,
	int32_t /* System.Int32 */ bufferSize,
	System_Threading_CancellationToken_t /* System.Threading.CancellationToken */ cancellationToken,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_IO_FileStream_EndRead(
	System_IO_FileStream_t /* System.IO.FileStream */ self,
	System_IAsyncResult_t /* System.IAsyncResult */ asyncResult,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_IO_FileStream_EndWrite(
	System_IO_FileStream_t /* System.IO.FileStream */ self,
	System_IAsyncResult_t /* System.IAsyncResult */ asyncResult,
	System_Exception_t* /* System.Exception */ outException
);

int64_t /* System.Int64 */
System_IO_FileStream_Seek(
	System_IO_FileStream_t /* System.IO.FileStream */ self,
	int64_t /* System.Int64 */ offset,
	System_IO_SeekOrigin /* System.IO.SeekOrigin */ origin,
	System_Exception_t* /* System.Exception */ outException
);

System_IO_FileStream_t /* System.IO.FileStream */
System_IO_FileStream_Create(
	int /* System.IntPtr */ handle,
	System_IO_FileAccess /* System.IO.FileAccess */ access,
	System_Exception_t* /* System.Exception */ outException
);

System_IO_FileStream_t /* System.IO.FileStream */
System_IO_FileStream_Create1(
	int /* System.IntPtr */ handle,
	System_IO_FileAccess /* System.IO.FileAccess */ access,
	CBool /* System.Boolean */ ownsHandle,
	System_Exception_t* /* System.Exception */ outException
);

System_IO_FileStream_t /* System.IO.FileStream */
System_IO_FileStream_Create2(
	int /* System.IntPtr */ handle,
	System_IO_FileAccess /* System.IO.FileAccess */ access,
	CBool /* System.Boolean */ ownsHandle,
	int32_t /* System.Int32 */ bufferSize,
	System_Exception_t* /* System.Exception */ outException
);

System_IO_FileStream_t /* System.IO.FileStream */
System_IO_FileStream_Create3(
	int /* System.IntPtr */ handle,
	System_IO_FileAccess /* System.IO.FileAccess */ access,
	CBool /* System.Boolean */ ownsHandle,
	int32_t /* System.Int32 */ bufferSize,
	CBool /* System.Boolean */ isAsync,
	System_Exception_t* /* System.Exception */ outException
);

System_IO_FileStream_t /* System.IO.FileStream */
System_IO_FileStream_Create4(
	Microsoft_Win32_SafeHandles_SafeFileHandle_t /* Microsoft.Win32.SafeHandles.SafeFileHandle */ handle,
	System_IO_FileAccess /* System.IO.FileAccess */ access,
	System_Exception_t* /* System.Exception */ outException
);

System_IO_FileStream_t /* System.IO.FileStream */
System_IO_FileStream_Create5(
	Microsoft_Win32_SafeHandles_SafeFileHandle_t /* Microsoft.Win32.SafeHandles.SafeFileHandle */ handle,
	System_IO_FileAccess /* System.IO.FileAccess */ access,
	int32_t /* System.Int32 */ bufferSize,
	System_Exception_t* /* System.Exception */ outException
);

System_IO_FileStream_t /* System.IO.FileStream */
System_IO_FileStream_Create6(
	Microsoft_Win32_SafeHandles_SafeFileHandle_t /* Microsoft.Win32.SafeHandles.SafeFileHandle */ handle,
	System_IO_FileAccess /* System.IO.FileAccess */ access,
	int32_t /* System.Int32 */ bufferSize,
	CBool /* System.Boolean */ isAsync,
	System_Exception_t* /* System.Exception */ outException
);

System_IO_FileStream_t /* System.IO.FileStream */
System_IO_FileStream_Create7(
	const CString /* System.String */ path,
	System_IO_FileMode /* System.IO.FileMode */ mode,
	System_Exception_t* /* System.Exception */ outException
);

System_IO_FileStream_t /* System.IO.FileStream */
System_IO_FileStream_Create8(
	const CString /* System.String */ path,
	System_IO_FileMode /* System.IO.FileMode */ mode,
	System_IO_FileAccess /* System.IO.FileAccess */ access,
	System_Exception_t* /* System.Exception */ outException
);

System_IO_FileStream_t /* System.IO.FileStream */
System_IO_FileStream_Create9(
	const CString /* System.String */ path,
	System_IO_FileMode /* System.IO.FileMode */ mode,
	System_IO_FileAccess /* System.IO.FileAccess */ access,
	System_IO_FileShare /* System.IO.FileShare */ share,
	System_Exception_t* /* System.Exception */ outException
);

System_IO_FileStream_t /* System.IO.FileStream */
System_IO_FileStream_Create10(
	const CString /* System.String */ path,
	System_IO_FileMode /* System.IO.FileMode */ mode,
	System_IO_FileAccess /* System.IO.FileAccess */ access,
	System_IO_FileShare /* System.IO.FileShare */ share,
	int32_t /* System.Int32 */ bufferSize,
	System_Exception_t* /* System.Exception */ outException
);

System_IO_FileStream_t /* System.IO.FileStream */
System_IO_FileStream_Create11(
	const CString /* System.String */ path,
	System_IO_FileMode /* System.IO.FileMode */ mode,
	System_IO_FileAccess /* System.IO.FileAccess */ access,
	System_IO_FileShare /* System.IO.FileShare */ share,
	int32_t /* System.Int32 */ bufferSize,
	CBool /* System.Boolean */ useAsync,
	System_Exception_t* /* System.Exception */ outException
);

System_IO_FileStream_t /* System.IO.FileStream */
System_IO_FileStream_Create12(
	const CString /* System.String */ path,
	System_IO_FileMode /* System.IO.FileMode */ mode,
	System_IO_FileAccess /* System.IO.FileAccess */ access,
	System_IO_FileShare /* System.IO.FileShare */ share,
	int32_t /* System.Int32 */ bufferSize,
	System_IO_FileOptions /* System.IO.FileOptions */ options,
	System_Exception_t* /* System.Exception */ outException
);

System_IO_FileStream_t /* System.IO.FileStream */
System_IO_FileStream_Create13(
	const CString /* System.String */ path,
	System_IO_FileStreamOptions_t /* System.IO.FileStreamOptions */ options,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_IO_FileStream_Destroy(System_IO_FileStream_t /* System.IO.FileStream */ self);



void /* System.Void */
System_IO_Stream_CopyTo(
	System_IO_Stream_t /* System.IO.Stream */ self,
	System_IO_Stream_t /* System.IO.Stream */ destination,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_IO_Stream_CopyTo1(
	System_IO_Stream_t /* System.IO.Stream */ self,
	System_IO_Stream_t /* System.IO.Stream */ destination,
	int32_t /* System.Int32 */ bufferSize,
	System_Exception_t* /* System.Exception */ outException
);

System_Threading_Tasks_Task_t /* System.Threading.Tasks.Task */
System_IO_Stream_CopyToAsync(
	System_IO_Stream_t /* System.IO.Stream */ self,
	System_IO_Stream_t /* System.IO.Stream */ destination,
	System_Exception_t* /* System.Exception */ outException
);

System_Threading_Tasks_Task_t /* System.Threading.Tasks.Task */
System_IO_Stream_CopyToAsync1(
	System_IO_Stream_t /* System.IO.Stream */ self,
	System_IO_Stream_t /* System.IO.Stream */ destination,
	int32_t /* System.Int32 */ bufferSize,
	System_Exception_t* /* System.Exception */ outException
);

System_Threading_Tasks_Task_t /* System.Threading.Tasks.Task */
System_IO_Stream_CopyToAsync2(
	System_IO_Stream_t /* System.IO.Stream */ self,
	System_IO_Stream_t /* System.IO.Stream */ destination,
	System_Threading_CancellationToken_t /* System.Threading.CancellationToken */ cancellationToken,
	System_Exception_t* /* System.Exception */ outException
);

System_Threading_Tasks_Task_t /* System.Threading.Tasks.Task */
System_IO_Stream_CopyToAsync3(
	System_IO_Stream_t /* System.IO.Stream */ self,
	System_IO_Stream_t /* System.IO.Stream */ destination,
	int32_t /* System.Int32 */ bufferSize,
	System_Threading_CancellationToken_t /* System.Threading.CancellationToken */ cancellationToken,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_IO_Stream_Dispose(
	System_IO_Stream_t /* System.IO.Stream */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_IO_Stream_Close(
	System_IO_Stream_t /* System.IO.Stream */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Threading_Tasks_ValueTask_t /* System.Threading.Tasks.ValueTask */
System_IO_Stream_DisposeAsync(
	System_IO_Stream_t /* System.IO.Stream */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_IO_Stream_Flush(
	System_IO_Stream_t /* System.IO.Stream */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Threading_Tasks_Task_t /* System.Threading.Tasks.Task */
System_IO_Stream_FlushAsync(
	System_IO_Stream_t /* System.IO.Stream */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Threading_Tasks_Task_t /* System.Threading.Tasks.Task */
System_IO_Stream_FlushAsync1(
	System_IO_Stream_t /* System.IO.Stream */ self,
	System_Threading_CancellationToken_t /* System.Threading.CancellationToken */ cancellationToken,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_IO_Stream_EndRead(
	System_IO_Stream_t /* System.IO.Stream */ self,
	System_IAsyncResult_t /* System.IAsyncResult */ asyncResult,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_IO_Stream_EndWrite(
	System_IO_Stream_t /* System.IO.Stream */ self,
	System_IAsyncResult_t /* System.IAsyncResult */ asyncResult,
	System_Exception_t* /* System.Exception */ outException
);

int64_t /* System.Int64 */
System_IO_Stream_Seek(
	System_IO_Stream_t /* System.IO.Stream */ self,
	int64_t /* System.Int64 */ offset,
	System_IO_SeekOrigin /* System.IO.SeekOrigin */ origin,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_IO_Stream_SetLength(
	System_IO_Stream_t /* System.IO.Stream */ self,
	int64_t /* System.Int64 */ value,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_IO_Stream_ReadByte(
	System_IO_Stream_t /* System.IO.Stream */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_IO_Stream_WriteByte(
	System_IO_Stream_t /* System.IO.Stream */ self,
	uint8_t /* System.Byte */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_IO_Stream_t /* System.IO.Stream */
System_IO_Stream_Synchronized(
	System_IO_Stream_t /* System.IO.Stream */ stream,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_IO_Stream_Destroy(System_IO_Stream_t /* System.IO.Stream */ self);



System_Object_t /* System.Object */
System_MarshalByRefObject_GetLifetimeService(
	System_MarshalByRefObject_t /* System.MarshalByRefObject */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_MarshalByRefObject_InitializeLifetimeService(
	System_MarshalByRefObject_t /* System.MarshalByRefObject */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_MarshalByRefObject_Destroy(System_MarshalByRefObject_t /* System.MarshalByRefObject */ self);




void /* System.Void */
System_Threading_Tasks_Task_Start(
	System_Threading_Tasks_Task_t /* System.Threading.Tasks.Task */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Threading_Tasks_Task_Start1(
	System_Threading_Tasks_Task_t /* System.Threading.Tasks.Task */ self,
	System_Threading_Tasks_TaskScheduler_t /* System.Threading.Tasks.TaskScheduler */ scheduler,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Threading_Tasks_Task_RunSynchronously(
	System_Threading_Tasks_Task_t /* System.Threading.Tasks.Task */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Threading_Tasks_Task_RunSynchronously1(
	System_Threading_Tasks_Task_t /* System.Threading.Tasks.Task */ self,
	System_Threading_Tasks_TaskScheduler_t /* System.Threading.Tasks.TaskScheduler */ scheduler,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Threading_Tasks_Task_Dispose(
	System_Threading_Tasks_Task_t /* System.Threading.Tasks.Task */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Runtime_CompilerServices_TaskAwaiter_t /* System.Runtime.CompilerServices.TaskAwaiter */
System_Threading_Tasks_Task_GetAwaiter(
	System_Threading_Tasks_Task_t /* System.Threading.Tasks.Task */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Runtime_CompilerServices_ConfiguredTaskAwaitable_t /* System.Runtime.CompilerServices.ConfiguredTaskAwaitable */
System_Threading_Tasks_Task_ConfigureAwait(
	System_Threading_Tasks_Task_t /* System.Threading.Tasks.Task */ self,
	CBool /* System.Boolean */ continueOnCapturedContext,
	System_Exception_t* /* System.Exception */ outException
);

System_Runtime_CompilerServices_YieldAwaitable_t /* System.Runtime.CompilerServices.YieldAwaitable */
System_Threading_Tasks_Task_Yield(
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Threading_Tasks_Task_Wait(
	System_Threading_Tasks_Task_t /* System.Threading.Tasks.Task */ self,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Threading_Tasks_Task_Wait1(
	System_Threading_Tasks_Task_t /* System.Threading.Tasks.Task */ self,
	System_TimeSpan_t /* System.TimeSpan */ timeout,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Threading_Tasks_Task_Wait2(
	System_Threading_Tasks_Task_t /* System.Threading.Tasks.Task */ self,
	System_TimeSpan_t /* System.TimeSpan */ timeout,
	System_Threading_CancellationToken_t /* System.Threading.CancellationToken */ cancellationToken,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Threading_Tasks_Task_Wait3(
	System_Threading_Tasks_Task_t /* System.Threading.Tasks.Task */ self,
	System_Threading_CancellationToken_t /* System.Threading.CancellationToken */ cancellationToken,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Threading_Tasks_Task_Wait4(
	System_Threading_Tasks_Task_t /* System.Threading.Tasks.Task */ self,
	int32_t /* System.Int32 */ millisecondsTimeout,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Threading_Tasks_Task_Wait5(
	System_Threading_Tasks_Task_t /* System.Threading.Tasks.Task */ self,
	int32_t /* System.Int32 */ millisecondsTimeout,
	System_Threading_CancellationToken_t /* System.Threading.CancellationToken */ cancellationToken,
	System_Exception_t* /* System.Exception */ outException
);

System_Threading_Tasks_Task_t /* System.Threading.Tasks.Task */
System_Threading_Tasks_Task_WaitAsync(
	System_Threading_Tasks_Task_t /* System.Threading.Tasks.Task */ self,
	System_Threading_CancellationToken_t /* System.Threading.CancellationToken */ cancellationToken,
	System_Exception_t* /* System.Exception */ outException
);

System_Threading_Tasks_Task_t /* System.Threading.Tasks.Task */
System_Threading_Tasks_Task_WaitAsync1(
	System_Threading_Tasks_Task_t /* System.Threading.Tasks.Task */ self,
	System_TimeSpan_t /* System.TimeSpan */ timeout,
	System_Exception_t* /* System.Exception */ outException
);

System_Threading_Tasks_Task_t /* System.Threading.Tasks.Task */
System_Threading_Tasks_Task_WaitAsync2(
	System_Threading_Tasks_Task_t /* System.Threading.Tasks.Task */ self,
	System_TimeSpan_t /* System.TimeSpan */ timeout,
	System_Threading_CancellationToken_t /* System.Threading.CancellationToken */ cancellationToken,
	System_Exception_t* /* System.Exception */ outException
);

System_Threading_Tasks_Task_t /* System.Threading.Tasks.Task */
System_Threading_Tasks_Task_FromException(
	System_Exception_t /* System.Exception */ exception,
	System_Exception_t* /* System.Exception */ outException
);

System_Threading_Tasks_Task_t /* System.Threading.Tasks.Task */
System_Threading_Tasks_Task_FromCanceled(
	System_Threading_CancellationToken_t /* System.Threading.CancellationToken */ cancellationToken,
	System_Exception_t* /* System.Exception */ outException
);

System_Threading_Tasks_Task_t /* System.Threading.Tasks.Task */
System_Threading_Tasks_Task_Delay(
	System_TimeSpan_t /* System.TimeSpan */ delay,
	System_Exception_t* /* System.Exception */ outException
);

System_Threading_Tasks_Task_t /* System.Threading.Tasks.Task */
System_Threading_Tasks_Task_Delay1(
	System_TimeSpan_t /* System.TimeSpan */ delay,
	System_Threading_CancellationToken_t /* System.Threading.CancellationToken */ cancellationToken,
	System_Exception_t* /* System.Exception */ outException
);

System_Threading_Tasks_Task_t /* System.Threading.Tasks.Task */
System_Threading_Tasks_Task_Delay2(
	int32_t /* System.Int32 */ millisecondsDelay,
	System_Exception_t* /* System.Exception */ outException
);

System_Threading_Tasks_Task_t /* System.Threading.Tasks.Task */
System_Threading_Tasks_Task_Delay3(
	int32_t /* System.Int32 */ millisecondsDelay,
	System_Threading_CancellationToken_t /* System.Threading.CancellationToken */ cancellationToken,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Threading_Tasks_Task_Destroy(System_Threading_Tasks_Task_t /* System.Threading.Tasks.Task */ self);



System_Threading_Tasks_TaskScheduler_t /* System.Threading.Tasks.TaskScheduler */
System_Threading_Tasks_TaskScheduler_FromCurrentSynchronizationContext(
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Threading_Tasks_TaskScheduler_Destroy(System_Threading_Tasks_TaskScheduler_t /* System.Threading.Tasks.TaskScheduler */ self);



void /* System.Void */
System_AggregateException_GetObjectData(
	System_AggregateException_t /* System.AggregateException */ self,
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ info,
	System_Runtime_Serialization_StreamingContext_t /* System.Runtime.Serialization.StreamingContext */ context,
	System_Exception_t* /* System.Exception */ outException
);

System_Exception_t /* System.Exception */
System_AggregateException_GetBaseException(
	System_AggregateException_t /* System.AggregateException */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_AggregateException_t /* System.AggregateException */
System_AggregateException_Flatten(
	System_AggregateException_t /* System.AggregateException */ self,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_AggregateException_ToString(
	System_AggregateException_t /* System.AggregateException */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_AggregateException_t /* System.AggregateException */
System_AggregateException_Create(
	System_Exception_t* /* System.Exception */ outException
);

System_AggregateException_t /* System.AggregateException */
System_AggregateException_Create1(
	const CString /* System.String */ message,
	System_Exception_t* /* System.Exception */ outException
);

System_AggregateException_t /* System.AggregateException */
System_AggregateException_Create2(
	const CString /* System.String */ message,
	System_Exception_t /* System.Exception */ innerException,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_AggregateException_Destroy(System_AggregateException_t /* System.AggregateException */ self);



System_Exception_t /* System.Exception */
System_Exception_GetBaseException(
	System_Exception_t /* System.Exception */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Exception_GetObjectData(
	System_Exception_t /* System.Exception */ self,
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ info,
	System_Runtime_Serialization_StreamingContext_t /* System.Runtime.Serialization.StreamingContext */ context,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Exception_ToString(
	System_Exception_t /* System.Exception */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Type_t /* System.Type */
System_Exception_GetType(
	System_Exception_t /* System.Exception */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Exception_t /* System.Exception */
System_Exception_Create(
	System_Exception_t* /* System.Exception */ outException
);

System_Exception_t /* System.Exception */
System_Exception_Create1(
	const CString /* System.String */ message,
	System_Exception_t* /* System.Exception */ outException
);

System_Exception_t /* System.Exception */
System_Exception_Create2(
	const CString /* System.String */ message,
	System_Exception_t /* System.Exception */ innerException,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Exception_Destroy(System_Exception_t /* System.Exception */ self);



System_Reflection_MethodBase_t /* System.Reflection.MethodBase */
System_Reflection_MethodBase_GetMethodFromHandle(
	System_RuntimeMethodHandle_t /* System.RuntimeMethodHandle */ handle,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_MethodBase_t /* System.Reflection.MethodBase */
System_Reflection_MethodBase_GetMethodFromHandle1(
	System_RuntimeMethodHandle_t /* System.RuntimeMethodHandle */ handle,
	System_RuntimeTypeHandle_t /* System.RuntimeTypeHandle */ declaringType,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_MethodBase_t /* System.Reflection.MethodBase */
System_Reflection_MethodBase_GetCurrentMethod(
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_MethodImplAttributes /* System.Reflection.MethodImplAttributes */
System_Reflection_MethodBase_GetMethodImplementationFlags(
	System_Reflection_MethodBase_t /* System.Reflection.MethodBase */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_MethodBody_t /* System.Reflection.MethodBody */
System_Reflection_MethodBase_GetMethodBody(
	System_Reflection_MethodBase_t /* System.Reflection.MethodBase */ self,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Reflection_MethodBase_Equals(
	System_Reflection_MethodBase_t /* System.Reflection.MethodBase */ self,
	System_Object_t /* System.Object */ obj,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Reflection_MethodBase_GetHashCode(
	System_Reflection_MethodBase_t /* System.Reflection.MethodBase */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Reflection_MethodBase_Destroy(System_Reflection_MethodBase_t /* System.Reflection.MethodBase */ self);



void /* System.Void */
System_RuntimeMethodHandle_GetObjectData(
	System_RuntimeMethodHandle_t /* System.RuntimeMethodHandle */ self,
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ info,
	System_Runtime_Serialization_StreamingContext_t /* System.Runtime.Serialization.StreamingContext */ context,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_RuntimeMethodHandle_GetHashCode(
	System_RuntimeMethodHandle_t /* System.RuntimeMethodHandle */ self,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_RuntimeMethodHandle_Equals(
	System_RuntimeMethodHandle_t /* System.RuntimeMethodHandle */ self,
	System_Object_t /* System.Object */ obj,
	System_Exception_t* /* System.Exception */ outException
);

System_RuntimeMethodHandle_t /* System.RuntimeMethodHandle */
System_RuntimeMethodHandle_FromIntPtr(
	int /* System.IntPtr */ value,
	System_Exception_t* /* System.Exception */ outException
);

int /* System.IntPtr */
System_RuntimeMethodHandle_ToIntPtr(
	System_RuntimeMethodHandle_t /* System.RuntimeMethodHandle */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_RuntimeMethodHandle_Equals1(
	System_RuntimeMethodHandle_t /* System.RuntimeMethodHandle */ self,
	System_RuntimeMethodHandle_t /* System.RuntimeMethodHandle */ handle,
	System_Exception_t* /* System.Exception */ outException
);

int /* System.IntPtr */
System_RuntimeMethodHandle_GetFunctionPointer(
	System_RuntimeMethodHandle_t /* System.RuntimeMethodHandle */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_RuntimeMethodHandle_Destroy(System_RuntimeMethodHandle_t /* System.RuntimeMethodHandle */ self);



void /* System.Void */
System_Runtime_Serialization_SerializationInfo_SetType(
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ self,
	System_Type_t /* System.Type */ type,
	System_Exception_t* /* System.Exception */ outException
);

System_Runtime_Serialization_SerializationInfoEnumerator_t /* System.Runtime.Serialization.SerializationInfoEnumerator */
System_Runtime_Serialization_SerializationInfo_GetEnumerator(
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Runtime_Serialization_SerializationInfo_AddValue(
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ self,
	const CString /* System.String */ name,
	System_Object_t /* System.Object */ value,
	System_Type_t /* System.Type */ type,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Runtime_Serialization_SerializationInfo_AddValue1(
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ self,
	const CString /* System.String */ name,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Runtime_Serialization_SerializationInfo_AddValue2(
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ self,
	const CString /* System.String */ name,
	CBool /* System.Boolean */ value,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Runtime_Serialization_SerializationInfo_AddValue3(
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ self,
	const CString /* System.String */ name,
	uint8_t /* System.Char */ value,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Runtime_Serialization_SerializationInfo_AddValue4(
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ self,
	const CString /* System.String */ name,
	int8_t /* System.SByte */ value,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Runtime_Serialization_SerializationInfo_AddValue5(
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ self,
	const CString /* System.String */ name,
	uint8_t /* System.Byte */ value,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Runtime_Serialization_SerializationInfo_AddValue6(
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ self,
	const CString /* System.String */ name,
	int16_t /* System.Int16 */ value,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Runtime_Serialization_SerializationInfo_AddValue7(
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ self,
	const CString /* System.String */ name,
	uint16_t /* System.UInt16 */ value,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Runtime_Serialization_SerializationInfo_AddValue8(
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ self,
	const CString /* System.String */ name,
	int32_t /* System.Int32 */ value,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Runtime_Serialization_SerializationInfo_AddValue9(
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ self,
	const CString /* System.String */ name,
	uint32_t /* System.UInt32 */ value,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Runtime_Serialization_SerializationInfo_AddValue10(
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ self,
	const CString /* System.String */ name,
	int64_t /* System.Int64 */ value,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Runtime_Serialization_SerializationInfo_AddValue11(
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ self,
	const CString /* System.String */ name,
	uint64_t /* System.UInt64 */ value,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Runtime_Serialization_SerializationInfo_AddValue12(
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ self,
	const CString /* System.String */ name,
	float /* System.Single */ value,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Runtime_Serialization_SerializationInfo_AddValue13(
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ self,
	const CString /* System.String */ name,
	double /* System.Double */ value,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Runtime_Serialization_SerializationInfo_AddValue14(
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ self,
	const CString /* System.String */ name,
	System_Decimal_t /* System.Decimal */ value,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Runtime_Serialization_SerializationInfo_AddValue15(
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ self,
	const CString /* System.String */ name,
	System_DateTime_t /* System.DateTime */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_Runtime_Serialization_SerializationInfo_GetValue(
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ self,
	const CString /* System.String */ name,
	System_Type_t /* System.Type */ type,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Runtime_Serialization_SerializationInfo_GetBoolean(
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ self,
	const CString /* System.String */ name,
	System_Exception_t* /* System.Exception */ outException
);

uint8_t /* System.Char */
System_Runtime_Serialization_SerializationInfo_GetChar(
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ self,
	const CString /* System.String */ name,
	System_Exception_t* /* System.Exception */ outException
);

int8_t /* System.SByte */
System_Runtime_Serialization_SerializationInfo_GetSByte(
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ self,
	const CString /* System.String */ name,
	System_Exception_t* /* System.Exception */ outException
);

uint8_t /* System.Byte */
System_Runtime_Serialization_SerializationInfo_GetByte(
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ self,
	const CString /* System.String */ name,
	System_Exception_t* /* System.Exception */ outException
);

int16_t /* System.Int16 */
System_Runtime_Serialization_SerializationInfo_GetInt16(
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ self,
	const CString /* System.String */ name,
	System_Exception_t* /* System.Exception */ outException
);

uint16_t /* System.UInt16 */
System_Runtime_Serialization_SerializationInfo_GetUInt16(
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ self,
	const CString /* System.String */ name,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Runtime_Serialization_SerializationInfo_GetInt32(
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ self,
	const CString /* System.String */ name,
	System_Exception_t* /* System.Exception */ outException
);

uint32_t /* System.UInt32 */
System_Runtime_Serialization_SerializationInfo_GetUInt32(
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ self,
	const CString /* System.String */ name,
	System_Exception_t* /* System.Exception */ outException
);

int64_t /* System.Int64 */
System_Runtime_Serialization_SerializationInfo_GetInt64(
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ self,
	const CString /* System.String */ name,
	System_Exception_t* /* System.Exception */ outException
);

uint64_t /* System.UInt64 */
System_Runtime_Serialization_SerializationInfo_GetUInt64(
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ self,
	const CString /* System.String */ name,
	System_Exception_t* /* System.Exception */ outException
);

float /* System.Single */
System_Runtime_Serialization_SerializationInfo_GetSingle(
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ self,
	const CString /* System.String */ name,
	System_Exception_t* /* System.Exception */ outException
);

double /* System.Double */
System_Runtime_Serialization_SerializationInfo_GetDouble(
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ self,
	const CString /* System.String */ name,
	System_Exception_t* /* System.Exception */ outException
);

System_Decimal_t /* System.Decimal */
System_Runtime_Serialization_SerializationInfo_GetDecimal(
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ self,
	const CString /* System.String */ name,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_Runtime_Serialization_SerializationInfo_GetDateTime(
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ self,
	const CString /* System.String */ name,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Runtime_Serialization_SerializationInfo_GetString(
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ self,
	const CString /* System.String */ name,
	System_Exception_t* /* System.Exception */ outException
);

System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */
System_Runtime_Serialization_SerializationInfo_Create(
	System_Type_t /* System.Type */ type,
	System_Runtime_Serialization_IFormatterConverter_t /* System.Runtime.Serialization.IFormatterConverter */ converter,
	System_Exception_t* /* System.Exception */ outException
);

System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */
System_Runtime_Serialization_SerializationInfo_Create1(
	System_Type_t /* System.Type */ type,
	System_Runtime_Serialization_IFormatterConverter_t /* System.Runtime.Serialization.IFormatterConverter */ converter,
	CBool /* System.Boolean */ requireSameTokenInPartialTrust,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Runtime_Serialization_SerializationInfo_Destroy(System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ self);



CBool /* System.Boolean */
System_Runtime_Serialization_SerializationInfoEnumerator_MoveNext(
	System_Runtime_Serialization_SerializationInfoEnumerator_t /* System.Runtime.Serialization.SerializationInfoEnumerator */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Runtime_Serialization_SerializationInfoEnumerator_Reset(
	System_Runtime_Serialization_SerializationInfoEnumerator_t /* System.Runtime.Serialization.SerializationInfoEnumerator */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Runtime_Serialization_SerializationInfoEnumerator_Destroy(System_Runtime_Serialization_SerializationInfoEnumerator_t /* System.Runtime.Serialization.SerializationInfoEnumerator */ self);



void /* System.Void */ System_Runtime_Serialization_SerializationEntry_Destroy(System_Runtime_Serialization_SerializationEntry_t /* System.Runtime.Serialization.SerializationEntry */ self);




void /* System.Void */ System_Globalization_UnicodeCategory_Destroy(System_Globalization_UnicodeCategory /* System.Globalization.UnicodeCategory */ self);




void /* System.Void */ System_MidpointRounding_Destroy(System_MidpointRounding /* System.MidpointRounding */ self);









System_Decimal_t /* System.Decimal */
System_Decimal_FromOACurrency(
	int64_t /* System.Int64 */ cy,
	System_Exception_t* /* System.Exception */ outException
);

int64_t /* System.Int64 */
System_Decimal_ToOACurrency(
	System_Decimal_t /* System.Decimal */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_Decimal_t /* System.Decimal */
System_Decimal_Add(
	System_Decimal_t /* System.Decimal */ d1,
	System_Decimal_t /* System.Decimal */ d2,
	System_Exception_t* /* System.Exception */ outException
);

System_Decimal_t /* System.Decimal */
System_Decimal_Ceiling(
	System_Decimal_t /* System.Decimal */ d,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Decimal_Compare(
	System_Decimal_t /* System.Decimal */ d1,
	System_Decimal_t /* System.Decimal */ d2,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Decimal_CompareTo(
	System_Decimal_t /* System.Decimal */ self,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Decimal_CompareTo1(
	System_Decimal_t /* System.Decimal */ self,
	System_Decimal_t /* System.Decimal */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_Decimal_t /* System.Decimal */
System_Decimal_Divide(
	System_Decimal_t /* System.Decimal */ d1,
	System_Decimal_t /* System.Decimal */ d2,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Decimal_Equals(
	System_Decimal_t /* System.Decimal */ self,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Decimal_Equals1(
	System_Decimal_t /* System.Decimal */ self,
	System_Decimal_t /* System.Decimal */ value,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Decimal_GetHashCode(
	System_Decimal_t /* System.Decimal */ self,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Decimal_Equals2(
	System_Decimal_t /* System.Decimal */ d1,
	System_Decimal_t /* System.Decimal */ d2,
	System_Exception_t* /* System.Exception */ outException
);

System_Decimal_t /* System.Decimal */
System_Decimal_Floor(
	System_Decimal_t /* System.Decimal */ d,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Decimal_ToString(
	System_Decimal_t /* System.Decimal */ self,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Decimal_ToString1(
	System_Decimal_t /* System.Decimal */ self,
	const CString /* System.String */ format,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Decimal_ToString2(
	System_Decimal_t /* System.Decimal */ self,
	System_IFormatProvider_t /* System.IFormatProvider */ provider,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Decimal_ToString3(
	System_Decimal_t /* System.Decimal */ self,
	const CString /* System.String */ format,
	System_IFormatProvider_t /* System.IFormatProvider */ provider,
	System_Exception_t* /* System.Exception */ outException
);

System_Decimal_t /* System.Decimal */
System_Decimal_Parse(
	const CString /* System.String */ s,
	System_Exception_t* /* System.Exception */ outException
);

System_Decimal_t /* System.Decimal */
System_Decimal_Parse1(
	const CString /* System.String */ s,
	System_Globalization_NumberStyles /* System.Globalization.NumberStyles */ style,
	System_Exception_t* /* System.Exception */ outException
);

System_Decimal_t /* System.Decimal */
System_Decimal_Parse2(
	const CString /* System.String */ s,
	System_IFormatProvider_t /* System.IFormatProvider */ provider,
	System_Exception_t* /* System.Exception */ outException
);

System_Decimal_t /* System.Decimal */
System_Decimal_Parse3(
	const CString /* System.String */ s,
	System_Globalization_NumberStyles /* System.Globalization.NumberStyles */ style,
	System_IFormatProvider_t /* System.IFormatProvider */ provider,
	System_Exception_t* /* System.Exception */ outException
);

System_Decimal_t /* System.Decimal */
System_Decimal_Remainder(
	System_Decimal_t /* System.Decimal */ d1,
	System_Decimal_t /* System.Decimal */ d2,
	System_Exception_t* /* System.Exception */ outException
);

System_Decimal_t /* System.Decimal */
System_Decimal_Multiply(
	System_Decimal_t /* System.Decimal */ d1,
	System_Decimal_t /* System.Decimal */ d2,
	System_Exception_t* /* System.Exception */ outException
);

System_Decimal_t /* System.Decimal */
System_Decimal_Negate(
	System_Decimal_t /* System.Decimal */ d,
	System_Exception_t* /* System.Exception */ outException
);

System_Decimal_t /* System.Decimal */
System_Decimal_Round(
	System_Decimal_t /* System.Decimal */ d,
	System_Exception_t* /* System.Exception */ outException
);

System_Decimal_t /* System.Decimal */
System_Decimal_Round1(
	System_Decimal_t /* System.Decimal */ d,
	int32_t /* System.Int32 */ decimals,
	System_Exception_t* /* System.Exception */ outException
);

System_Decimal_t /* System.Decimal */
System_Decimal_Round2(
	System_Decimal_t /* System.Decimal */ d,
	System_MidpointRounding /* System.MidpointRounding */ mode,
	System_Exception_t* /* System.Exception */ outException
);

System_Decimal_t /* System.Decimal */
System_Decimal_Round3(
	System_Decimal_t /* System.Decimal */ d,
	int32_t /* System.Int32 */ decimals,
	System_MidpointRounding /* System.MidpointRounding */ mode,
	System_Exception_t* /* System.Exception */ outException
);

System_Decimal_t /* System.Decimal */
System_Decimal_Subtract(
	System_Decimal_t /* System.Decimal */ d1,
	System_Decimal_t /* System.Decimal */ d2,
	System_Exception_t* /* System.Exception */ outException
);

uint8_t /* System.Byte */
System_Decimal_ToByte(
	System_Decimal_t /* System.Decimal */ value,
	System_Exception_t* /* System.Exception */ outException
);

int8_t /* System.SByte */
System_Decimal_ToSByte(
	System_Decimal_t /* System.Decimal */ value,
	System_Exception_t* /* System.Exception */ outException
);

int16_t /* System.Int16 */
System_Decimal_ToInt16(
	System_Decimal_t /* System.Decimal */ value,
	System_Exception_t* /* System.Exception */ outException
);

double /* System.Double */
System_Decimal_ToDouble(
	System_Decimal_t /* System.Decimal */ d,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Decimal_ToInt32(
	System_Decimal_t /* System.Decimal */ d,
	System_Exception_t* /* System.Exception */ outException
);

int64_t /* System.Int64 */
System_Decimal_ToInt64(
	System_Decimal_t /* System.Decimal */ d,
	System_Exception_t* /* System.Exception */ outException
);

uint16_t /* System.UInt16 */
System_Decimal_ToUInt16(
	System_Decimal_t /* System.Decimal */ value,
	System_Exception_t* /* System.Exception */ outException
);

uint32_t /* System.UInt32 */
System_Decimal_ToUInt32(
	System_Decimal_t /* System.Decimal */ d,
	System_Exception_t* /* System.Exception */ outException
);

uint64_t /* System.UInt64 */
System_Decimal_ToUInt64(
	System_Decimal_t /* System.Decimal */ d,
	System_Exception_t* /* System.Exception */ outException
);

float /* System.Single */
System_Decimal_ToSingle(
	System_Decimal_t /* System.Decimal */ d,
	System_Exception_t* /* System.Exception */ outException
);

System_Decimal_t /* System.Decimal */
System_Decimal_Truncate(
	System_Decimal_t /* System.Decimal */ d,
	System_Exception_t* /* System.Exception */ outException
);

System_TypeCode /* System.TypeCode */
System_Decimal_GetTypeCode(
	System_Decimal_t /* System.Decimal */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Decimal_t /* System.Decimal */
System_Decimal_Clamp(
	System_Decimal_t /* System.Decimal */ value,
	System_Decimal_t /* System.Decimal */ min,
	System_Decimal_t /* System.Decimal */ max,
	System_Exception_t* /* System.Exception */ outException
);

System_Decimal_t /* System.Decimal */
System_Decimal_CopySign(
	System_Decimal_t /* System.Decimal */ value,
	System_Decimal_t /* System.Decimal */ sign,
	System_Exception_t* /* System.Exception */ outException
);

System_Decimal_t /* System.Decimal */
System_Decimal_Max(
	System_Decimal_t /* System.Decimal */ x,
	System_Decimal_t /* System.Decimal */ y,
	System_Exception_t* /* System.Exception */ outException
);

System_Decimal_t /* System.Decimal */
System_Decimal_Min(
	System_Decimal_t /* System.Decimal */ x,
	System_Decimal_t /* System.Decimal */ y,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Decimal_Sign(
	System_Decimal_t /* System.Decimal */ d,
	System_Exception_t* /* System.Exception */ outException
);

System_Decimal_t /* System.Decimal */
System_Decimal_Abs(
	System_Decimal_t /* System.Decimal */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Decimal_IsCanonical(
	System_Decimal_t /* System.Decimal */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Decimal_IsEvenInteger(
	System_Decimal_t /* System.Decimal */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Decimal_IsInteger(
	System_Decimal_t /* System.Decimal */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Decimal_IsNegative(
	System_Decimal_t /* System.Decimal */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Decimal_IsOddInteger(
	System_Decimal_t /* System.Decimal */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Decimal_IsPositive(
	System_Decimal_t /* System.Decimal */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_Decimal_t /* System.Decimal */
System_Decimal_MaxMagnitude(
	System_Decimal_t /* System.Decimal */ x,
	System_Decimal_t /* System.Decimal */ y,
	System_Exception_t* /* System.Exception */ outException
);

System_Decimal_t /* System.Decimal */
System_Decimal_MinMagnitude(
	System_Decimal_t /* System.Decimal */ x,
	System_Decimal_t /* System.Decimal */ y,
	System_Exception_t* /* System.Exception */ outException
);

System_Decimal_t /* System.Decimal */
System_Decimal_Create(
	int32_t /* System.Int32 */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_Decimal_t /* System.Decimal */
System_Decimal_Create1(
	uint32_t /* System.UInt32 */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_Decimal_t /* System.Decimal */
System_Decimal_Create2(
	int64_t /* System.Int64 */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_Decimal_t /* System.Decimal */
System_Decimal_Create3(
	uint64_t /* System.UInt64 */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_Decimal_t /* System.Decimal */
System_Decimal_Create4(
	float /* System.Single */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_Decimal_t /* System.Decimal */
System_Decimal_Create5(
	double /* System.Double */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_Decimal_t /* System.Decimal */
System_Decimal_Create6(
	int32_t /* System.Int32 */ lo,
	int32_t /* System.Int32 */ mid,
	int32_t /* System.Int32 */ hi,
	CBool /* System.Boolean */ isNegative,
	uint8_t /* System.Byte */ scale,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Decimal_Destroy(System_Decimal_t /* System.Decimal */ self);



System_DateTime_t /* System.DateTime */
System_DateTime_Add(
	System_DateTime_t /* System.DateTime */ self,
	System_TimeSpan_t /* System.TimeSpan */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_AddDays(
	System_DateTime_t /* System.DateTime */ self,
	double /* System.Double */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_AddHours(
	System_DateTime_t /* System.DateTime */ self,
	double /* System.Double */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_AddMilliseconds(
	System_DateTime_t /* System.DateTime */ self,
	double /* System.Double */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_AddMicroseconds(
	System_DateTime_t /* System.DateTime */ self,
	double /* System.Double */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_AddMinutes(
	System_DateTime_t /* System.DateTime */ self,
	double /* System.Double */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_AddMonths(
	System_DateTime_t /* System.DateTime */ self,
	int32_t /* System.Int32 */ months,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_AddSeconds(
	System_DateTime_t /* System.DateTime */ self,
	double /* System.Double */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_AddTicks(
	System_DateTime_t /* System.DateTime */ self,
	int64_t /* System.Int64 */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_AddYears(
	System_DateTime_t /* System.DateTime */ self,
	int32_t /* System.Int32 */ value,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_DateTime_Compare(
	System_DateTime_t /* System.DateTime */ t1,
	System_DateTime_t /* System.DateTime */ t2,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_DateTime_CompareTo(
	System_DateTime_t /* System.DateTime */ self,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_DateTime_CompareTo1(
	System_DateTime_t /* System.DateTime */ self,
	System_DateTime_t /* System.DateTime */ value,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_DateTime_DaysInMonth(
	int32_t /* System.Int32 */ year,
	int32_t /* System.Int32 */ month,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_DateTime_Equals(
	System_DateTime_t /* System.DateTime */ self,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_DateTime_Equals1(
	System_DateTime_t /* System.DateTime */ self,
	System_DateTime_t /* System.DateTime */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_DateTime_Equals2(
	System_DateTime_t /* System.DateTime */ t1,
	System_DateTime_t /* System.DateTime */ t2,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_FromBinary(
	int64_t /* System.Int64 */ dateData,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_FromFileTime(
	int64_t /* System.Int64 */ fileTime,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_FromFileTimeUtc(
	int64_t /* System.Int64 */ fileTime,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_FromOADate(
	double /* System.Double */ d,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_DateTime_IsDaylightSavingTime(
	System_DateTime_t /* System.DateTime */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_SpecifyKind(
	System_DateTime_t /* System.DateTime */ value,
	System_DateTimeKind /* System.DateTimeKind */ kind,
	System_Exception_t* /* System.Exception */ outException
);

int64_t /* System.Int64 */
System_DateTime_ToBinary(
	System_DateTime_t /* System.DateTime */ self,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_DateTime_GetHashCode(
	System_DateTime_t /* System.DateTime */ self,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_DateTime_IsLeapYear(
	int32_t /* System.Int32 */ year,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_Parse(
	const CString /* System.String */ s,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_Parse1(
	const CString /* System.String */ s,
	System_IFormatProvider_t /* System.IFormatProvider */ provider,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_Parse2(
	const CString /* System.String */ s,
	System_IFormatProvider_t /* System.IFormatProvider */ provider,
	System_Globalization_DateTimeStyles /* System.Globalization.DateTimeStyles */ styles,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_ParseExact(
	const CString /* System.String */ s,
	const CString /* System.String */ format,
	System_IFormatProvider_t /* System.IFormatProvider */ provider,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_ParseExact1(
	const CString /* System.String */ s,
	const CString /* System.String */ format,
	System_IFormatProvider_t /* System.IFormatProvider */ provider,
	System_Globalization_DateTimeStyles /* System.Globalization.DateTimeStyles */ style,
	System_Exception_t* /* System.Exception */ outException
);

System_TimeSpan_t /* System.TimeSpan */
System_DateTime_Subtract(
	System_DateTime_t /* System.DateTime */ self,
	System_DateTime_t /* System.DateTime */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_Subtract1(
	System_DateTime_t /* System.DateTime */ self,
	System_TimeSpan_t /* System.TimeSpan */ value,
	System_Exception_t* /* System.Exception */ outException
);

double /* System.Double */
System_DateTime_ToOADate(
	System_DateTime_t /* System.DateTime */ self,
	System_Exception_t* /* System.Exception */ outException
);

int64_t /* System.Int64 */
System_DateTime_ToFileTime(
	System_DateTime_t /* System.DateTime */ self,
	System_Exception_t* /* System.Exception */ outException
);

int64_t /* System.Int64 */
System_DateTime_ToFileTimeUtc(
	System_DateTime_t /* System.DateTime */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_ToLocalTime(
	System_DateTime_t /* System.DateTime */ self,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_DateTime_ToLongDateString(
	System_DateTime_t /* System.DateTime */ self,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_DateTime_ToLongTimeString(
	System_DateTime_t /* System.DateTime */ self,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_DateTime_ToShortDateString(
	System_DateTime_t /* System.DateTime */ self,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_DateTime_ToShortTimeString(
	System_DateTime_t /* System.DateTime */ self,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_DateTime_ToString(
	System_DateTime_t /* System.DateTime */ self,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_DateTime_ToString1(
	System_DateTime_t /* System.DateTime */ self,
	const CString /* System.String */ format,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_DateTime_ToString2(
	System_DateTime_t /* System.DateTime */ self,
	System_IFormatProvider_t /* System.IFormatProvider */ provider,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_DateTime_ToString3(
	System_DateTime_t /* System.DateTime */ self,
	const CString /* System.String */ format,
	System_IFormatProvider_t /* System.IFormatProvider */ provider,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_ToUniversalTime(
	System_DateTime_t /* System.DateTime */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_TypeCode /* System.TypeCode */
System_DateTime_GetTypeCode(
	System_DateTime_t /* System.DateTime */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_Create(
	int64_t /* System.Int64 */ ticks,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_Create1(
	int64_t /* System.Int64 */ ticks,
	System_DateTimeKind /* System.DateTimeKind */ kind,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_Create2(
	System_DateOnly_t /* System.DateOnly */ date,
	System_TimeOnly_t /* System.TimeOnly */ time,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_Create3(
	System_DateOnly_t /* System.DateOnly */ date,
	System_TimeOnly_t /* System.TimeOnly */ time,
	System_DateTimeKind /* System.DateTimeKind */ kind,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_Create4(
	int32_t /* System.Int32 */ year,
	int32_t /* System.Int32 */ month,
	int32_t /* System.Int32 */ day,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_Create5(
	int32_t /* System.Int32 */ year,
	int32_t /* System.Int32 */ month,
	int32_t /* System.Int32 */ day,
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ calendar,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_Create6(
	int32_t /* System.Int32 */ year,
	int32_t /* System.Int32 */ month,
	int32_t /* System.Int32 */ day,
	int32_t /* System.Int32 */ hour,
	int32_t /* System.Int32 */ minute,
	int32_t /* System.Int32 */ second,
	int32_t /* System.Int32 */ millisecond,
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ calendar,
	System_DateTimeKind /* System.DateTimeKind */ kind,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_Create7(
	int32_t /* System.Int32 */ year,
	int32_t /* System.Int32 */ month,
	int32_t /* System.Int32 */ day,
	int32_t /* System.Int32 */ hour,
	int32_t /* System.Int32 */ minute,
	int32_t /* System.Int32 */ second,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_Create8(
	int32_t /* System.Int32 */ year,
	int32_t /* System.Int32 */ month,
	int32_t /* System.Int32 */ day,
	int32_t /* System.Int32 */ hour,
	int32_t /* System.Int32 */ minute,
	int32_t /* System.Int32 */ second,
	System_DateTimeKind /* System.DateTimeKind */ kind,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_Create9(
	int32_t /* System.Int32 */ year,
	int32_t /* System.Int32 */ month,
	int32_t /* System.Int32 */ day,
	int32_t /* System.Int32 */ hour,
	int32_t /* System.Int32 */ minute,
	int32_t /* System.Int32 */ second,
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ calendar,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_Create10(
	int32_t /* System.Int32 */ year,
	int32_t /* System.Int32 */ month,
	int32_t /* System.Int32 */ day,
	int32_t /* System.Int32 */ hour,
	int32_t /* System.Int32 */ minute,
	int32_t /* System.Int32 */ second,
	int32_t /* System.Int32 */ millisecond,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_Create11(
	int32_t /* System.Int32 */ year,
	int32_t /* System.Int32 */ month,
	int32_t /* System.Int32 */ day,
	int32_t /* System.Int32 */ hour,
	int32_t /* System.Int32 */ minute,
	int32_t /* System.Int32 */ second,
	int32_t /* System.Int32 */ millisecond,
	System_DateTimeKind /* System.DateTimeKind */ kind,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_Create12(
	int32_t /* System.Int32 */ year,
	int32_t /* System.Int32 */ month,
	int32_t /* System.Int32 */ day,
	int32_t /* System.Int32 */ hour,
	int32_t /* System.Int32 */ minute,
	int32_t /* System.Int32 */ second,
	int32_t /* System.Int32 */ millisecond,
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ calendar,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_Create13(
	int32_t /* System.Int32 */ year,
	int32_t /* System.Int32 */ month,
	int32_t /* System.Int32 */ day,
	int32_t /* System.Int32 */ hour,
	int32_t /* System.Int32 */ minute,
	int32_t /* System.Int32 */ second,
	int32_t /* System.Int32 */ millisecond,
	int32_t /* System.Int32 */ microsecond,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_Create14(
	int32_t /* System.Int32 */ year,
	int32_t /* System.Int32 */ month,
	int32_t /* System.Int32 */ day,
	int32_t /* System.Int32 */ hour,
	int32_t /* System.Int32 */ minute,
	int32_t /* System.Int32 */ second,
	int32_t /* System.Int32 */ millisecond,
	int32_t /* System.Int32 */ microsecond,
	System_DateTimeKind /* System.DateTimeKind */ kind,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_Create15(
	int32_t /* System.Int32 */ year,
	int32_t /* System.Int32 */ month,
	int32_t /* System.Int32 */ day,
	int32_t /* System.Int32 */ hour,
	int32_t /* System.Int32 */ minute,
	int32_t /* System.Int32 */ second,
	int32_t /* System.Int32 */ millisecond,
	int32_t /* System.Int32 */ microsecond,
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ calendar,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateTime_Create16(
	int32_t /* System.Int32 */ year,
	int32_t /* System.Int32 */ month,
	int32_t /* System.Int32 */ day,
	int32_t /* System.Int32 */ hour,
	int32_t /* System.Int32 */ minute,
	int32_t /* System.Int32 */ second,
	int32_t /* System.Int32 */ millisecond,
	int32_t /* System.Int32 */ microsecond,
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ calendar,
	System_DateTimeKind /* System.DateTimeKind */ kind,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_DateTime_Destroy(System_DateTime_t /* System.DateTime */ self);



System_TimeSpan_t /* System.TimeSpan */
System_TimeSpan_Add(
	System_TimeSpan_t /* System.TimeSpan */ self,
	System_TimeSpan_t /* System.TimeSpan */ ts,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_TimeSpan_Compare(
	System_TimeSpan_t /* System.TimeSpan */ t1,
	System_TimeSpan_t /* System.TimeSpan */ t2,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_TimeSpan_CompareTo(
	System_TimeSpan_t /* System.TimeSpan */ self,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_TimeSpan_CompareTo1(
	System_TimeSpan_t /* System.TimeSpan */ self,
	System_TimeSpan_t /* System.TimeSpan */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_TimeSpan_t /* System.TimeSpan */
System_TimeSpan_FromDays(
	double /* System.Double */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_TimeSpan_t /* System.TimeSpan */
System_TimeSpan_Duration(
	System_TimeSpan_t /* System.TimeSpan */ self,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_TimeSpan_Equals(
	System_TimeSpan_t /* System.TimeSpan */ self,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_TimeSpan_Equals1(
	System_TimeSpan_t /* System.TimeSpan */ self,
	System_TimeSpan_t /* System.TimeSpan */ obj,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_TimeSpan_Equals2(
	System_TimeSpan_t /* System.TimeSpan */ t1,
	System_TimeSpan_t /* System.TimeSpan */ t2,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_TimeSpan_GetHashCode(
	System_TimeSpan_t /* System.TimeSpan */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_TimeSpan_t /* System.TimeSpan */
System_TimeSpan_FromHours(
	double /* System.Double */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_TimeSpan_t /* System.TimeSpan */
System_TimeSpan_FromMilliseconds(
	double /* System.Double */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_TimeSpan_t /* System.TimeSpan */
System_TimeSpan_FromMicroseconds(
	double /* System.Double */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_TimeSpan_t /* System.TimeSpan */
System_TimeSpan_FromMinutes(
	double /* System.Double */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_TimeSpan_t /* System.TimeSpan */
System_TimeSpan_Negate(
	System_TimeSpan_t /* System.TimeSpan */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_TimeSpan_t /* System.TimeSpan */
System_TimeSpan_FromSeconds(
	double /* System.Double */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_TimeSpan_t /* System.TimeSpan */
System_TimeSpan_Subtract(
	System_TimeSpan_t /* System.TimeSpan */ self,
	System_TimeSpan_t /* System.TimeSpan */ ts,
	System_Exception_t* /* System.Exception */ outException
);

System_TimeSpan_t /* System.TimeSpan */
System_TimeSpan_Multiply(
	System_TimeSpan_t /* System.TimeSpan */ self,
	double /* System.Double */ factor,
	System_Exception_t* /* System.Exception */ outException
);

System_TimeSpan_t /* System.TimeSpan */
System_TimeSpan_Divide(
	System_TimeSpan_t /* System.TimeSpan */ self,
	double /* System.Double */ divisor,
	System_Exception_t* /* System.Exception */ outException
);

double /* System.Double */
System_TimeSpan_Divide1(
	System_TimeSpan_t /* System.TimeSpan */ self,
	System_TimeSpan_t /* System.TimeSpan */ ts,
	System_Exception_t* /* System.Exception */ outException
);

System_TimeSpan_t /* System.TimeSpan */
System_TimeSpan_FromTicks(
	int64_t /* System.Int64 */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_TimeSpan_t /* System.TimeSpan */
System_TimeSpan_Parse(
	const CString /* System.String */ s,
	System_Exception_t* /* System.Exception */ outException
);

System_TimeSpan_t /* System.TimeSpan */
System_TimeSpan_Parse1(
	const CString /* System.String */ input,
	System_IFormatProvider_t /* System.IFormatProvider */ formatProvider,
	System_Exception_t* /* System.Exception */ outException
);

System_TimeSpan_t /* System.TimeSpan */
System_TimeSpan_ParseExact(
	const CString /* System.String */ input,
	const CString /* System.String */ format,
	System_IFormatProvider_t /* System.IFormatProvider */ formatProvider,
	System_Exception_t* /* System.Exception */ outException
);

System_TimeSpan_t /* System.TimeSpan */
System_TimeSpan_ParseExact1(
	const CString /* System.String */ input,
	const CString /* System.String */ format,
	System_IFormatProvider_t /* System.IFormatProvider */ formatProvider,
	System_Globalization_TimeSpanStyles /* System.Globalization.TimeSpanStyles */ styles,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_TimeSpan_ToString(
	System_TimeSpan_t /* System.TimeSpan */ self,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_TimeSpan_ToString1(
	System_TimeSpan_t /* System.TimeSpan */ self,
	const CString /* System.String */ format,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_TimeSpan_ToString2(
	System_TimeSpan_t /* System.TimeSpan */ self,
	const CString /* System.String */ format,
	System_IFormatProvider_t /* System.IFormatProvider */ formatProvider,
	System_Exception_t* /* System.Exception */ outException
);

System_TimeSpan_t /* System.TimeSpan */
System_TimeSpan_Create(
	int64_t /* System.Int64 */ ticks,
	System_Exception_t* /* System.Exception */ outException
);

System_TimeSpan_t /* System.TimeSpan */
System_TimeSpan_Create1(
	int32_t /* System.Int32 */ hours,
	int32_t /* System.Int32 */ minutes,
	int32_t /* System.Int32 */ seconds,
	System_Exception_t* /* System.Exception */ outException
);

System_TimeSpan_t /* System.TimeSpan */
System_TimeSpan_Create2(
	int32_t /* System.Int32 */ days,
	int32_t /* System.Int32 */ hours,
	int32_t /* System.Int32 */ minutes,
	int32_t /* System.Int32 */ seconds,
	System_Exception_t* /* System.Exception */ outException
);

System_TimeSpan_t /* System.TimeSpan */
System_TimeSpan_Create3(
	int32_t /* System.Int32 */ days,
	int32_t /* System.Int32 */ hours,
	int32_t /* System.Int32 */ minutes,
	int32_t /* System.Int32 */ seconds,
	int32_t /* System.Int32 */ milliseconds,
	System_Exception_t* /* System.Exception */ outException
);

System_TimeSpan_t /* System.TimeSpan */
System_TimeSpan_Create4(
	int32_t /* System.Int32 */ days,
	int32_t /* System.Int32 */ hours,
	int32_t /* System.Int32 */ minutes,
	int32_t /* System.Int32 */ seconds,
	int32_t /* System.Int32 */ milliseconds,
	int32_t /* System.Int32 */ microseconds,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_TimeSpan_Destroy(System_TimeSpan_t /* System.TimeSpan */ self);



void /* System.Void */ System_Globalization_TimeSpanStyles_Destroy(System_Globalization_TimeSpanStyles /* System.Globalization.TimeSpanStyles */ self);



void /* System.Void */ System_DateTimeKind_Destroy(System_DateTimeKind /* System.DateTimeKind */ self);



void /* System.Void */ System_DayOfWeek_Destroy(System_DayOfWeek /* System.DayOfWeek */ self);



void /* System.Void */ System_Globalization_DateTimeStyles_Destroy(System_Globalization_DateTimeStyles /* System.Globalization.DateTimeStyles */ self);



System_DateOnly_t /* System.DateOnly */
System_DateOnly_FromDayNumber(
	int32_t /* System.Int32 */ dayNumber,
	System_Exception_t* /* System.Exception */ outException
);

System_DateOnly_t /* System.DateOnly */
System_DateOnly_AddDays(
	System_DateOnly_t /* System.DateOnly */ self,
	int32_t /* System.Int32 */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_DateOnly_t /* System.DateOnly */
System_DateOnly_AddMonths(
	System_DateOnly_t /* System.DateOnly */ self,
	int32_t /* System.Int32 */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_DateOnly_t /* System.DateOnly */
System_DateOnly_AddYears(
	System_DateOnly_t /* System.DateOnly */ self,
	int32_t /* System.Int32 */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateOnly_ToDateTime(
	System_DateOnly_t /* System.DateOnly */ self,
	System_TimeOnly_t /* System.TimeOnly */ time,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_DateOnly_ToDateTime1(
	System_DateOnly_t /* System.DateOnly */ self,
	System_TimeOnly_t /* System.TimeOnly */ time,
	System_DateTimeKind /* System.DateTimeKind */ kind,
	System_Exception_t* /* System.Exception */ outException
);

System_DateOnly_t /* System.DateOnly */
System_DateOnly_FromDateTime(
	System_DateTime_t /* System.DateTime */ dateTime,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_DateOnly_CompareTo(
	System_DateOnly_t /* System.DateOnly */ self,
	System_DateOnly_t /* System.DateOnly */ value,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_DateOnly_CompareTo1(
	System_DateOnly_t /* System.DateOnly */ self,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_DateOnly_Equals(
	System_DateOnly_t /* System.DateOnly */ self,
	System_DateOnly_t /* System.DateOnly */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_DateOnly_Equals1(
	System_DateOnly_t /* System.DateOnly */ self,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_DateOnly_GetHashCode(
	System_DateOnly_t /* System.DateOnly */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_DateOnly_t /* System.DateOnly */
System_DateOnly_Parse(
	const CString /* System.String */ s,
	System_Exception_t* /* System.Exception */ outException
);

System_DateOnly_t /* System.DateOnly */
System_DateOnly_Parse1(
	const CString /* System.String */ s,
	System_IFormatProvider_t /* System.IFormatProvider */ provider,
	System_Globalization_DateTimeStyles /* System.Globalization.DateTimeStyles */ style,
	System_Exception_t* /* System.Exception */ outException
);

System_DateOnly_t /* System.DateOnly */
System_DateOnly_ParseExact(
	const CString /* System.String */ s,
	const CString /* System.String */ format,
	System_Exception_t* /* System.Exception */ outException
);

System_DateOnly_t /* System.DateOnly */
System_DateOnly_ParseExact1(
	const CString /* System.String */ s,
	const CString /* System.String */ format,
	System_IFormatProvider_t /* System.IFormatProvider */ provider,
	System_Globalization_DateTimeStyles /* System.Globalization.DateTimeStyles */ style,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_DateOnly_ToLongDateString(
	System_DateOnly_t /* System.DateOnly */ self,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_DateOnly_ToShortDateString(
	System_DateOnly_t /* System.DateOnly */ self,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_DateOnly_ToString(
	System_DateOnly_t /* System.DateOnly */ self,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_DateOnly_ToString1(
	System_DateOnly_t /* System.DateOnly */ self,
	const CString /* System.String */ format,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_DateOnly_ToString2(
	System_DateOnly_t /* System.DateOnly */ self,
	System_IFormatProvider_t /* System.IFormatProvider */ provider,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_DateOnly_ToString3(
	System_DateOnly_t /* System.DateOnly */ self,
	const CString /* System.String */ format,
	System_IFormatProvider_t /* System.IFormatProvider */ provider,
	System_Exception_t* /* System.Exception */ outException
);

System_DateOnly_t /* System.DateOnly */
System_DateOnly_Parse2(
	const CString /* System.String */ s,
	System_IFormatProvider_t /* System.IFormatProvider */ provider,
	System_Exception_t* /* System.Exception */ outException
);

System_DateOnly_t /* System.DateOnly */
System_DateOnly_Create(
	int32_t /* System.Int32 */ year,
	int32_t /* System.Int32 */ month,
	int32_t /* System.Int32 */ day,
	System_Exception_t* /* System.Exception */ outException
);

System_DateOnly_t /* System.DateOnly */
System_DateOnly_Create1(
	int32_t /* System.Int32 */ year,
	int32_t /* System.Int32 */ month,
	int32_t /* System.Int32 */ day,
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ calendar,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_DateOnly_Destroy(System_DateOnly_t /* System.DateOnly */ self);



System_TimeOnly_t /* System.TimeOnly */
System_TimeOnly_Add(
	System_TimeOnly_t /* System.TimeOnly */ self,
	System_TimeSpan_t /* System.TimeSpan */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_TimeOnly_t /* System.TimeOnly */
System_TimeOnly_AddHours(
	System_TimeOnly_t /* System.TimeOnly */ self,
	double /* System.Double */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_TimeOnly_t /* System.TimeOnly */
System_TimeOnly_AddMinutes(
	System_TimeOnly_t /* System.TimeOnly */ self,
	double /* System.Double */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_TimeOnly_IsBetween(
	System_TimeOnly_t /* System.TimeOnly */ self,
	System_TimeOnly_t /* System.TimeOnly */ start,
	System_TimeOnly_t /* System.TimeOnly */ end,
	System_Exception_t* /* System.Exception */ outException
);

System_TimeOnly_t /* System.TimeOnly */
System_TimeOnly_FromTimeSpan(
	System_TimeSpan_t /* System.TimeSpan */ timeSpan,
	System_Exception_t* /* System.Exception */ outException
);

System_TimeOnly_t /* System.TimeOnly */
System_TimeOnly_FromDateTime(
	System_DateTime_t /* System.DateTime */ dateTime,
	System_Exception_t* /* System.Exception */ outException
);

System_TimeSpan_t /* System.TimeSpan */
System_TimeOnly_ToTimeSpan(
	System_TimeOnly_t /* System.TimeOnly */ self,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_TimeOnly_CompareTo(
	System_TimeOnly_t /* System.TimeOnly */ self,
	System_TimeOnly_t /* System.TimeOnly */ value,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_TimeOnly_CompareTo1(
	System_TimeOnly_t /* System.TimeOnly */ self,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_TimeOnly_Equals(
	System_TimeOnly_t /* System.TimeOnly */ self,
	System_TimeOnly_t /* System.TimeOnly */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_TimeOnly_Equals1(
	System_TimeOnly_t /* System.TimeOnly */ self,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_TimeOnly_GetHashCode(
	System_TimeOnly_t /* System.TimeOnly */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_TimeOnly_t /* System.TimeOnly */
System_TimeOnly_Parse(
	const CString /* System.String */ s,
	System_Exception_t* /* System.Exception */ outException
);

System_TimeOnly_t /* System.TimeOnly */
System_TimeOnly_Parse1(
	const CString /* System.String */ s,
	System_IFormatProvider_t /* System.IFormatProvider */ provider,
	System_Globalization_DateTimeStyles /* System.Globalization.DateTimeStyles */ style,
	System_Exception_t* /* System.Exception */ outException
);

System_TimeOnly_t /* System.TimeOnly */
System_TimeOnly_ParseExact(
	const CString /* System.String */ s,
	const CString /* System.String */ format,
	System_Exception_t* /* System.Exception */ outException
);

System_TimeOnly_t /* System.TimeOnly */
System_TimeOnly_ParseExact1(
	const CString /* System.String */ s,
	const CString /* System.String */ format,
	System_IFormatProvider_t /* System.IFormatProvider */ provider,
	System_Globalization_DateTimeStyles /* System.Globalization.DateTimeStyles */ style,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_TimeOnly_ToLongTimeString(
	System_TimeOnly_t /* System.TimeOnly */ self,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_TimeOnly_ToShortTimeString(
	System_TimeOnly_t /* System.TimeOnly */ self,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_TimeOnly_ToString(
	System_TimeOnly_t /* System.TimeOnly */ self,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_TimeOnly_ToString1(
	System_TimeOnly_t /* System.TimeOnly */ self,
	const CString /* System.String */ format,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_TimeOnly_ToString2(
	System_TimeOnly_t /* System.TimeOnly */ self,
	System_IFormatProvider_t /* System.IFormatProvider */ provider,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_TimeOnly_ToString3(
	System_TimeOnly_t /* System.TimeOnly */ self,
	const CString /* System.String */ format,
	System_IFormatProvider_t /* System.IFormatProvider */ provider,
	System_Exception_t* /* System.Exception */ outException
);

System_TimeOnly_t /* System.TimeOnly */
System_TimeOnly_Parse2(
	const CString /* System.String */ s,
	System_IFormatProvider_t /* System.IFormatProvider */ provider,
	System_Exception_t* /* System.Exception */ outException
);

System_TimeOnly_t /* System.TimeOnly */
System_TimeOnly_Create(
	int32_t /* System.Int32 */ hour,
	int32_t /* System.Int32 */ minute,
	System_Exception_t* /* System.Exception */ outException
);

System_TimeOnly_t /* System.TimeOnly */
System_TimeOnly_Create1(
	int32_t /* System.Int32 */ hour,
	int32_t /* System.Int32 */ minute,
	int32_t /* System.Int32 */ second,
	System_Exception_t* /* System.Exception */ outException
);

System_TimeOnly_t /* System.TimeOnly */
System_TimeOnly_Create2(
	int32_t /* System.Int32 */ hour,
	int32_t /* System.Int32 */ minute,
	int32_t /* System.Int32 */ second,
	int32_t /* System.Int32 */ millisecond,
	System_Exception_t* /* System.Exception */ outException
);

System_TimeOnly_t /* System.TimeOnly */
System_TimeOnly_Create3(
	int32_t /* System.Int32 */ hour,
	int32_t /* System.Int32 */ minute,
	int32_t /* System.Int32 */ second,
	int32_t /* System.Int32 */ millisecond,
	int32_t /* System.Int32 */ microsecond,
	System_Exception_t* /* System.Exception */ outException
);

System_TimeOnly_t /* System.TimeOnly */
System_TimeOnly_Create4(
	int64_t /* System.Int64 */ ticks,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_TimeOnly_Destroy(System_TimeOnly_t /* System.TimeOnly */ self);



System_Object_t /* System.Object */
System_Globalization_Calendar_Clone(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Globalization_Calendar_t /* System.Globalization.Calendar */
System_Globalization_Calendar_ReadOnly(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ calendar,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_Globalization_Calendar_AddMilliseconds(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ self,
	System_DateTime_t /* System.DateTime */ time,
	double /* System.Double */ milliseconds,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_Globalization_Calendar_AddDays(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ self,
	System_DateTime_t /* System.DateTime */ time,
	int32_t /* System.Int32 */ days,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_Globalization_Calendar_AddHours(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ self,
	System_DateTime_t /* System.DateTime */ time,
	int32_t /* System.Int32 */ hours,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_Globalization_Calendar_AddMinutes(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ self,
	System_DateTime_t /* System.DateTime */ time,
	int32_t /* System.Int32 */ minutes,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_Globalization_Calendar_AddMonths(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ self,
	System_DateTime_t /* System.DateTime */ time,
	int32_t /* System.Int32 */ months,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_Globalization_Calendar_AddSeconds(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ self,
	System_DateTime_t /* System.DateTime */ time,
	int32_t /* System.Int32 */ seconds,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_Globalization_Calendar_AddWeeks(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ self,
	System_DateTime_t /* System.DateTime */ time,
	int32_t /* System.Int32 */ weeks,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_Globalization_Calendar_AddYears(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ self,
	System_DateTime_t /* System.DateTime */ time,
	int32_t /* System.Int32 */ years,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_Calendar_GetDayOfMonth(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ self,
	System_DateTime_t /* System.DateTime */ time,
	System_Exception_t* /* System.Exception */ outException
);

System_DayOfWeek /* System.DayOfWeek */
System_Globalization_Calendar_GetDayOfWeek(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ self,
	System_DateTime_t /* System.DateTime */ time,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_Calendar_GetDayOfYear(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ self,
	System_DateTime_t /* System.DateTime */ time,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_Calendar_GetDaysInMonth(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ self,
	int32_t /* System.Int32 */ year,
	int32_t /* System.Int32 */ month,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_Calendar_GetDaysInMonth1(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ self,
	int32_t /* System.Int32 */ year,
	int32_t /* System.Int32 */ month,
	int32_t /* System.Int32 */ era,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_Calendar_GetDaysInYear(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ self,
	int32_t /* System.Int32 */ year,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_Calendar_GetDaysInYear1(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ self,
	int32_t /* System.Int32 */ year,
	int32_t /* System.Int32 */ era,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_Calendar_GetEra(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ self,
	System_DateTime_t /* System.DateTime */ time,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_Calendar_GetHour(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ self,
	System_DateTime_t /* System.DateTime */ time,
	System_Exception_t* /* System.Exception */ outException
);

double /* System.Double */
System_Globalization_Calendar_GetMilliseconds(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ self,
	System_DateTime_t /* System.DateTime */ time,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_Calendar_GetMinute(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ self,
	System_DateTime_t /* System.DateTime */ time,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_Calendar_GetMonth(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ self,
	System_DateTime_t /* System.DateTime */ time,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_Calendar_GetMonthsInYear(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ self,
	int32_t /* System.Int32 */ year,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_Calendar_GetMonthsInYear1(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ self,
	int32_t /* System.Int32 */ year,
	int32_t /* System.Int32 */ era,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_Calendar_GetSecond(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ self,
	System_DateTime_t /* System.DateTime */ time,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_Calendar_GetWeekOfYear(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ self,
	System_DateTime_t /* System.DateTime */ time,
	System_Globalization_CalendarWeekRule /* System.Globalization.CalendarWeekRule */ rule,
	System_DayOfWeek /* System.DayOfWeek */ firstDayOfWeek,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_Calendar_GetYear(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ self,
	System_DateTime_t /* System.DateTime */ time,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Globalization_Calendar_IsLeapDay(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ self,
	int32_t /* System.Int32 */ year,
	int32_t /* System.Int32 */ month,
	int32_t /* System.Int32 */ day,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Globalization_Calendar_IsLeapDay1(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ self,
	int32_t /* System.Int32 */ year,
	int32_t /* System.Int32 */ month,
	int32_t /* System.Int32 */ day,
	int32_t /* System.Int32 */ era,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Globalization_Calendar_IsLeapMonth(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ self,
	int32_t /* System.Int32 */ year,
	int32_t /* System.Int32 */ month,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Globalization_Calendar_IsLeapMonth1(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ self,
	int32_t /* System.Int32 */ year,
	int32_t /* System.Int32 */ month,
	int32_t /* System.Int32 */ era,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_Calendar_GetLeapMonth(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ self,
	int32_t /* System.Int32 */ year,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_Calendar_GetLeapMonth1(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ self,
	int32_t /* System.Int32 */ year,
	int32_t /* System.Int32 */ era,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Globalization_Calendar_IsLeapYear(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ self,
	int32_t /* System.Int32 */ year,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Globalization_Calendar_IsLeapYear1(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ self,
	int32_t /* System.Int32 */ year,
	int32_t /* System.Int32 */ era,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_Globalization_Calendar_ToDateTime(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ self,
	int32_t /* System.Int32 */ year,
	int32_t /* System.Int32 */ month,
	int32_t /* System.Int32 */ day,
	int32_t /* System.Int32 */ hour,
	int32_t /* System.Int32 */ minute,
	int32_t /* System.Int32 */ second,
	int32_t /* System.Int32 */ millisecond,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_Globalization_Calendar_ToDateTime1(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ self,
	int32_t /* System.Int32 */ year,
	int32_t /* System.Int32 */ month,
	int32_t /* System.Int32 */ day,
	int32_t /* System.Int32 */ hour,
	int32_t /* System.Int32 */ minute,
	int32_t /* System.Int32 */ second,
	int32_t /* System.Int32 */ millisecond,
	int32_t /* System.Int32 */ era,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_Calendar_ToFourDigitYear(
	System_Globalization_Calendar_t /* System.Globalization.Calendar */ self,
	int32_t /* System.Int32 */ year,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Globalization_Calendar_Destroy(System_Globalization_Calendar_t /* System.Globalization.Calendar */ self);



void /* System.Void */ System_Globalization_CalendarAlgorithmType_Destroy(System_Globalization_CalendarAlgorithmType /* System.Globalization.CalendarAlgorithmType */ self);



void /* System.Void */ System_Globalization_CalendarWeekRule_Destroy(System_Globalization_CalendarWeekRule /* System.Globalization.CalendarWeekRule */ self);



System_Object_t /* System.Object */
System_Runtime_Serialization_IFormatterConverter_Convert(
	System_Runtime_Serialization_IFormatterConverter_t /* System.Runtime.Serialization.IFormatterConverter */ self,
	System_Object_t /* System.Object */ value,
	System_Type_t /* System.Type */ type,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_Runtime_Serialization_IFormatterConverter_Convert1(
	System_Runtime_Serialization_IFormatterConverter_t /* System.Runtime.Serialization.IFormatterConverter */ self,
	System_Object_t /* System.Object */ value,
	System_TypeCode /* System.TypeCode */ typeCode,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Runtime_Serialization_IFormatterConverter_ToBoolean(
	System_Runtime_Serialization_IFormatterConverter_t /* System.Runtime.Serialization.IFormatterConverter */ self,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

uint8_t /* System.Char */
System_Runtime_Serialization_IFormatterConverter_ToChar(
	System_Runtime_Serialization_IFormatterConverter_t /* System.Runtime.Serialization.IFormatterConverter */ self,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

int8_t /* System.SByte */
System_Runtime_Serialization_IFormatterConverter_ToSByte(
	System_Runtime_Serialization_IFormatterConverter_t /* System.Runtime.Serialization.IFormatterConverter */ self,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

uint8_t /* System.Byte */
System_Runtime_Serialization_IFormatterConverter_ToByte(
	System_Runtime_Serialization_IFormatterConverter_t /* System.Runtime.Serialization.IFormatterConverter */ self,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

int16_t /* System.Int16 */
System_Runtime_Serialization_IFormatterConverter_ToInt16(
	System_Runtime_Serialization_IFormatterConverter_t /* System.Runtime.Serialization.IFormatterConverter */ self,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

uint16_t /* System.UInt16 */
System_Runtime_Serialization_IFormatterConverter_ToUInt16(
	System_Runtime_Serialization_IFormatterConverter_t /* System.Runtime.Serialization.IFormatterConverter */ self,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Runtime_Serialization_IFormatterConverter_ToInt32(
	System_Runtime_Serialization_IFormatterConverter_t /* System.Runtime.Serialization.IFormatterConverter */ self,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

uint32_t /* System.UInt32 */
System_Runtime_Serialization_IFormatterConverter_ToUInt32(
	System_Runtime_Serialization_IFormatterConverter_t /* System.Runtime.Serialization.IFormatterConverter */ self,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

int64_t /* System.Int64 */
System_Runtime_Serialization_IFormatterConverter_ToInt64(
	System_Runtime_Serialization_IFormatterConverter_t /* System.Runtime.Serialization.IFormatterConverter */ self,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

uint64_t /* System.UInt64 */
System_Runtime_Serialization_IFormatterConverter_ToUInt64(
	System_Runtime_Serialization_IFormatterConverter_t /* System.Runtime.Serialization.IFormatterConverter */ self,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

float /* System.Single */
System_Runtime_Serialization_IFormatterConverter_ToSingle(
	System_Runtime_Serialization_IFormatterConverter_t /* System.Runtime.Serialization.IFormatterConverter */ self,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

double /* System.Double */
System_Runtime_Serialization_IFormatterConverter_ToDouble(
	System_Runtime_Serialization_IFormatterConverter_t /* System.Runtime.Serialization.IFormatterConverter */ self,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_Decimal_t /* System.Decimal */
System_Runtime_Serialization_IFormatterConverter_ToDecimal(
	System_Runtime_Serialization_IFormatterConverter_t /* System.Runtime.Serialization.IFormatterConverter */ self,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_DateTime_t /* System.DateTime */
System_Runtime_Serialization_IFormatterConverter_ToDateTime(
	System_Runtime_Serialization_IFormatterConverter_t /* System.Runtime.Serialization.IFormatterConverter */ self,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Runtime_Serialization_IFormatterConverter_ToString(
	System_Runtime_Serialization_IFormatterConverter_t /* System.Runtime.Serialization.IFormatterConverter */ self,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Runtime_Serialization_IFormatterConverter_Destroy(System_Runtime_Serialization_IFormatterConverter_t /* System.Runtime.Serialization.IFormatterConverter */ self);



CBool /* System.Boolean */
System_Runtime_Serialization_StreamingContext_Equals(
	System_Runtime_Serialization_StreamingContext_t /* System.Runtime.Serialization.StreamingContext */ self,
	System_Object_t /* System.Object */ obj,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Runtime_Serialization_StreamingContext_GetHashCode(
	System_Runtime_Serialization_StreamingContext_t /* System.Runtime.Serialization.StreamingContext */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Runtime_Serialization_StreamingContext_t /* System.Runtime.Serialization.StreamingContext */
System_Runtime_Serialization_StreamingContext_Create(
	System_Runtime_Serialization_StreamingContextStates /* System.Runtime.Serialization.StreamingContextStates */ state,
	System_Exception_t* /* System.Exception */ outException
);

System_Runtime_Serialization_StreamingContext_t /* System.Runtime.Serialization.StreamingContext */
System_Runtime_Serialization_StreamingContext_Create1(
	System_Runtime_Serialization_StreamingContextStates /* System.Runtime.Serialization.StreamingContextStates */ state,
	System_Object_t /* System.Object */ additional,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Runtime_Serialization_StreamingContext_Destroy(System_Runtime_Serialization_StreamingContext_t /* System.Runtime.Serialization.StreamingContext */ self);



void /* System.Void */ System_Runtime_Serialization_StreamingContextStates_Destroy(System_Runtime_Serialization_StreamingContextStates /* System.Runtime.Serialization.StreamingContextStates */ self);




System_RuntimeTypeHandle_t /* System.RuntimeTypeHandle */
System_RuntimeTypeHandle_FromIntPtr(
	int /* System.IntPtr */ value,
	System_Exception_t* /* System.Exception */ outException
);

int /* System.IntPtr */
System_RuntimeTypeHandle_ToIntPtr(
	System_RuntimeTypeHandle_t /* System.RuntimeTypeHandle */ value,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_RuntimeTypeHandle_GetHashCode(
	System_RuntimeTypeHandle_t /* System.RuntimeTypeHandle */ self,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_RuntimeTypeHandle_Equals(
	System_RuntimeTypeHandle_t /* System.RuntimeTypeHandle */ self,
	System_Object_t /* System.Object */ obj,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_RuntimeTypeHandle_Equals1(
	System_RuntimeTypeHandle_t /* System.RuntimeTypeHandle */ self,
	System_RuntimeTypeHandle_t /* System.RuntimeTypeHandle */ handle,
	System_Exception_t* /* System.Exception */ outException
);

System_ModuleHandle_t /* System.ModuleHandle */
System_RuntimeTypeHandle_GetModuleHandle(
	System_RuntimeTypeHandle_t /* System.RuntimeTypeHandle */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_RuntimeTypeHandle_GetObjectData(
	System_RuntimeTypeHandle_t /* System.RuntimeTypeHandle */ self,
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ info,
	System_Runtime_Serialization_StreamingContext_t /* System.Runtime.Serialization.StreamingContext */ context,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_RuntimeTypeHandle_Destroy(System_RuntimeTypeHandle_t /* System.RuntimeTypeHandle */ self);



int32_t /* System.Int32 */
System_ModuleHandle_GetHashCode(
	System_ModuleHandle_t /* System.ModuleHandle */ self,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_ModuleHandle_Equals(
	System_ModuleHandle_t /* System.ModuleHandle */ self,
	System_Object_t /* System.Object */ obj,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_ModuleHandle_Equals1(
	System_ModuleHandle_t /* System.ModuleHandle */ self,
	System_ModuleHandle_t /* System.ModuleHandle */ handle,
	System_Exception_t* /* System.Exception */ outException
);

System_RuntimeTypeHandle_t /* System.RuntimeTypeHandle */
System_ModuleHandle_GetRuntimeTypeHandleFromMetadataToken(
	System_ModuleHandle_t /* System.ModuleHandle */ self,
	int32_t /* System.Int32 */ typeToken,
	System_Exception_t* /* System.Exception */ outException
);

System_RuntimeTypeHandle_t /* System.RuntimeTypeHandle */
System_ModuleHandle_ResolveTypeHandle(
	System_ModuleHandle_t /* System.ModuleHandle */ self,
	int32_t /* System.Int32 */ typeToken,
	System_Exception_t* /* System.Exception */ outException
);

System_RuntimeMethodHandle_t /* System.RuntimeMethodHandle */
System_ModuleHandle_GetRuntimeMethodHandleFromMetadataToken(
	System_ModuleHandle_t /* System.ModuleHandle */ self,
	int32_t /* System.Int32 */ methodToken,
	System_Exception_t* /* System.Exception */ outException
);

System_RuntimeMethodHandle_t /* System.RuntimeMethodHandle */
System_ModuleHandle_ResolveMethodHandle(
	System_ModuleHandle_t /* System.ModuleHandle */ self,
	int32_t /* System.Int32 */ methodToken,
	System_Exception_t* /* System.Exception */ outException
);

System_RuntimeFieldHandle_t /* System.RuntimeFieldHandle */
System_ModuleHandle_GetRuntimeFieldHandleFromMetadataToken(
	System_ModuleHandle_t /* System.ModuleHandle */ self,
	int32_t /* System.Int32 */ fieldToken,
	System_Exception_t* /* System.Exception */ outException
);

System_RuntimeFieldHandle_t /* System.RuntimeFieldHandle */
System_ModuleHandle_ResolveFieldHandle(
	System_ModuleHandle_t /* System.ModuleHandle */ self,
	int32_t /* System.Int32 */ fieldToken,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_ModuleHandle_Destroy(System_ModuleHandle_t /* System.ModuleHandle */ self);



int32_t /* System.Int32 */
System_RuntimeFieldHandle_GetHashCode(
	System_RuntimeFieldHandle_t /* System.RuntimeFieldHandle */ self,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_RuntimeFieldHandle_Equals(
	System_RuntimeFieldHandle_t /* System.RuntimeFieldHandle */ self,
	System_Object_t /* System.Object */ obj,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_RuntimeFieldHandle_Equals1(
	System_RuntimeFieldHandle_t /* System.RuntimeFieldHandle */ self,
	System_RuntimeFieldHandle_t /* System.RuntimeFieldHandle */ handle,
	System_Exception_t* /* System.Exception */ outException
);

System_RuntimeFieldHandle_t /* System.RuntimeFieldHandle */
System_RuntimeFieldHandle_FromIntPtr(
	int /* System.IntPtr */ value,
	System_Exception_t* /* System.Exception */ outException
);

int /* System.IntPtr */
System_RuntimeFieldHandle_ToIntPtr(
	System_RuntimeFieldHandle_t /* System.RuntimeFieldHandle */ value,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_RuntimeFieldHandle_GetObjectData(
	System_RuntimeFieldHandle_t /* System.RuntimeFieldHandle */ self,
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ info,
	System_Runtime_Serialization_StreamingContext_t /* System.Runtime.Serialization.StreamingContext */ context,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_RuntimeFieldHandle_Destroy(System_RuntimeFieldHandle_t /* System.RuntimeFieldHandle */ self);



void /* System.Void */ System_Reflection_MethodAttributes_Destroy(System_Reflection_MethodAttributes /* System.Reflection.MethodAttributes */ self);



void /* System.Void */ System_Reflection_MethodImplAttributes_Destroy(System_Reflection_MethodImplAttributes /* System.Reflection.MethodImplAttributes */ self);



void /* System.Void */ System_Reflection_MethodBody_Destroy(System_Reflection_MethodBody_t /* System.Reflection.MethodBody */ self);



void /* System.Void */ System_Reflection_CallingConventions_Destroy(System_Reflection_CallingConventions /* System.Reflection.CallingConventions */ self);



void /* System.Void */ System_Reflection_BindingFlags_Destroy(System_Reflection_BindingFlags /* System.Reflection.BindingFlags */ self);



System_Object_t /* System.Object */
System_Reflection_Binder_ChangeType(
	System_Reflection_Binder_t /* System.Reflection.Binder */ self,
	System_Object_t /* System.Object */ value,
	System_Type_t /* System.Type */ type,
	System_Globalization_CultureInfo_t /* System.Globalization.CultureInfo */ culture,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Reflection_Binder_Destroy(System_Reflection_Binder_t /* System.Reflection.Binder */ self);



System_Reflection_FieldInfo_t /* System.Reflection.FieldInfo */
System_Reflection_FieldInfo_GetFieldFromHandle(
	System_RuntimeFieldHandle_t /* System.RuntimeFieldHandle */ handle,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_FieldInfo_t /* System.Reflection.FieldInfo */
System_Reflection_FieldInfo_GetFieldFromHandle1(
	System_RuntimeFieldHandle_t /* System.RuntimeFieldHandle */ handle,
	System_RuntimeTypeHandle_t /* System.RuntimeTypeHandle */ declaringType,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Reflection_FieldInfo_Equals(
	System_Reflection_FieldInfo_t /* System.Reflection.FieldInfo */ self,
	System_Object_t /* System.Object */ obj,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Reflection_FieldInfo_GetHashCode(
	System_Reflection_FieldInfo_t /* System.Reflection.FieldInfo */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_Reflection_FieldInfo_GetValue(
	System_Reflection_FieldInfo_t /* System.Reflection.FieldInfo */ self,
	System_Object_t /* System.Object */ obj,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Reflection_FieldInfo_SetValue(
	System_Reflection_FieldInfo_t /* System.Reflection.FieldInfo */ self,
	System_Object_t /* System.Object */ obj,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Reflection_FieldInfo_SetValue1(
	System_Reflection_FieldInfo_t /* System.Reflection.FieldInfo */ self,
	System_Object_t /* System.Object */ obj,
	System_Object_t /* System.Object */ value,
	System_Reflection_BindingFlags /* System.Reflection.BindingFlags */ invokeAttr,
	System_Reflection_Binder_t /* System.Reflection.Binder */ binder,
	System_Globalization_CultureInfo_t /* System.Globalization.CultureInfo */ culture,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_Reflection_FieldInfo_GetRawConstantValue(
	System_Reflection_FieldInfo_t /* System.Reflection.FieldInfo */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Reflection_FieldInfo_Destroy(System_Reflection_FieldInfo_t /* System.Reflection.FieldInfo */ self);



void /* System.Void */ System_Reflection_FieldAttributes_Destroy(System_Reflection_FieldAttributes /* System.Reflection.FieldAttributes */ self);



System_Reflection_MethodInfo_t /* System.Reflection.MethodInfo */
System_Reflection_PropertyInfo_GetGetMethod(
	System_Reflection_PropertyInfo_t /* System.Reflection.PropertyInfo */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_MethodInfo_t /* System.Reflection.MethodInfo */
System_Reflection_PropertyInfo_GetGetMethod1(
	System_Reflection_PropertyInfo_t /* System.Reflection.PropertyInfo */ self,
	CBool /* System.Boolean */ nonPublic,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_MethodInfo_t /* System.Reflection.MethodInfo */
System_Reflection_PropertyInfo_GetSetMethod(
	System_Reflection_PropertyInfo_t /* System.Reflection.PropertyInfo */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_MethodInfo_t /* System.Reflection.MethodInfo */
System_Reflection_PropertyInfo_GetSetMethod1(
	System_Reflection_PropertyInfo_t /* System.Reflection.PropertyInfo */ self,
	CBool /* System.Boolean */ nonPublic,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_Reflection_PropertyInfo_GetValue(
	System_Reflection_PropertyInfo_t /* System.Reflection.PropertyInfo */ self,
	System_Object_t /* System.Object */ obj,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_Reflection_PropertyInfo_GetConstantValue(
	System_Reflection_PropertyInfo_t /* System.Reflection.PropertyInfo */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_Reflection_PropertyInfo_GetRawConstantValue(
	System_Reflection_PropertyInfo_t /* System.Reflection.PropertyInfo */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Reflection_PropertyInfo_SetValue(
	System_Reflection_PropertyInfo_t /* System.Reflection.PropertyInfo */ self,
	System_Object_t /* System.Object */ obj,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Reflection_PropertyInfo_Equals(
	System_Reflection_PropertyInfo_t /* System.Reflection.PropertyInfo */ self,
	System_Object_t /* System.Object */ obj,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Reflection_PropertyInfo_GetHashCode(
	System_Reflection_PropertyInfo_t /* System.Reflection.PropertyInfo */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Reflection_PropertyInfo_Destroy(System_Reflection_PropertyInfo_t /* System.Reflection.PropertyInfo */ self);



void /* System.Void */ System_Reflection_PropertyAttributes_Destroy(System_Reflection_PropertyAttributes /* System.Reflection.PropertyAttributes */ self);



System_Reflection_MethodInfo_t /* System.Reflection.MethodInfo */
System_Reflection_MethodInfo_GetGenericMethodDefinition(
	System_Reflection_MethodInfo_t /* System.Reflection.MethodInfo */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_MethodInfo_t /* System.Reflection.MethodInfo */
System_Reflection_MethodInfo_GetBaseDefinition(
	System_Reflection_MethodInfo_t /* System.Reflection.MethodInfo */ self,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Reflection_MethodInfo_Equals(
	System_Reflection_MethodInfo_t /* System.Reflection.MethodInfo */ self,
	System_Object_t /* System.Object */ obj,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Reflection_MethodInfo_GetHashCode(
	System_Reflection_MethodInfo_t /* System.Reflection.MethodInfo */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Reflection_MethodInfo_Destroy(System_Reflection_MethodInfo_t /* System.Reflection.MethodInfo */ self);



CBool /* System.Boolean */
System_Reflection_ParameterInfo_IsDefined(
	System_Reflection_ParameterInfo_t /* System.Reflection.ParameterInfo */ self,
	System_Type_t /* System.Type */ attributeType,
	CBool /* System.Boolean */ inherit,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_Reflection_ParameterInfo_GetRealObject(
	System_Reflection_ParameterInfo_t /* System.Reflection.ParameterInfo */ self,
	System_Runtime_Serialization_StreamingContext_t /* System.Runtime.Serialization.StreamingContext */ context,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Reflection_ParameterInfo_ToString(
	System_Reflection_ParameterInfo_t /* System.Reflection.ParameterInfo */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Reflection_ParameterInfo_Destroy(System_Reflection_ParameterInfo_t /* System.Reflection.ParameterInfo */ self);



void /* System.Void */ System_Reflection_ParameterAttributes_Destroy(System_Reflection_ParameterAttributes /* System.Reflection.ParameterAttributes */ self);



CBool /* System.Boolean */
System_Reflection_ICustomAttributeProvider_IsDefined(
	System_Reflection_ICustomAttributeProvider_t /* System.Reflection.ICustomAttributeProvider */ self,
	System_Type_t /* System.Type */ attributeType,
	CBool /* System.Boolean */ inherit,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Reflection_ICustomAttributeProvider_Destroy(System_Reflection_ICustomAttributeProvider_t /* System.Reflection.ICustomAttributeProvider */ self);



CBool /* System.Boolean */
System_Collections_IDictionary_Contains(
	System_Collections_IDictionary_t /* System.Collections.IDictionary */ self,
	System_Object_t /* System.Object */ key,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Collections_IDictionary_Add(
	System_Collections_IDictionary_t /* System.Collections.IDictionary */ self,
	System_Object_t /* System.Object */ key,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Collections_IDictionary_Clear(
	System_Collections_IDictionary_t /* System.Collections.IDictionary */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Collections_IDictionaryEnumerator_t /* System.Collections.IDictionaryEnumerator */
System_Collections_IDictionary_GetEnumerator(
	System_Collections_IDictionary_t /* System.Collections.IDictionary */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Collections_IDictionary_Remove(
	System_Collections_IDictionary_t /* System.Collections.IDictionary */ self,
	System_Object_t /* System.Object */ key,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Collections_IDictionary_Destroy(System_Collections_IDictionary_t /* System.Collections.IDictionary */ self);



void /* System.Void */
System_Collections_ICollection_CopyTo(
	System_Collections_ICollection_t /* System.Collections.ICollection */ self,
	System_Array_t /* System.Array */ array,
	int32_t /* System.Int32 */ index,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Collections_ICollection_Destroy(System_Collections_ICollection_t /* System.Collections.ICollection */ self);



void /* System.Void */
System_Array_Copy(
	System_Array_t /* System.Array */ sourceArray,
	System_Array_t /* System.Array */ destinationArray,
	int32_t /* System.Int32 */ length,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Array_Copy1(
	System_Array_t /* System.Array */ sourceArray,
	int32_t /* System.Int32 */ sourceIndex,
	System_Array_t /* System.Array */ destinationArray,
	int32_t /* System.Int32 */ destinationIndex,
	int32_t /* System.Int32 */ length,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Array_ConstrainedCopy(
	System_Array_t /* System.Array */ sourceArray,
	int32_t /* System.Int32 */ sourceIndex,
	System_Array_t /* System.Array */ destinationArray,
	int32_t /* System.Int32 */ destinationIndex,
	int32_t /* System.Int32 */ length,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Array_Clear(
	System_Array_t /* System.Array */ array,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Array_Clear1(
	System_Array_t /* System.Array */ array,
	int32_t /* System.Int32 */ index,
	int32_t /* System.Int32 */ length,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Array_GetLength(
	System_Array_t /* System.Array */ self,
	int32_t /* System.Int32 */ dimension,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Array_GetUpperBound(
	System_Array_t /* System.Array */ self,
	int32_t /* System.Int32 */ dimension,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Array_GetLowerBound(
	System_Array_t /* System.Array */ self,
	int32_t /* System.Int32 */ dimension,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Array_Initialize(
	System_Array_t /* System.Array */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Array_t /* System.Array */
System_Array_CreateInstance(
	System_Type_t /* System.Type */ elementType,
	int32_t /* System.Int32 */ length,
	System_Exception_t* /* System.Exception */ outException
);

System_Array_t /* System.Array */
System_Array_CreateInstance1(
	System_Type_t /* System.Type */ elementType,
	int32_t /* System.Int32 */ length1,
	int32_t /* System.Int32 */ length2,
	System_Exception_t* /* System.Exception */ outException
);

System_Array_t /* System.Array */
System_Array_CreateInstance2(
	System_Type_t /* System.Type */ elementType,
	int32_t /* System.Int32 */ length1,
	int32_t /* System.Int32 */ length2,
	int32_t /* System.Int32 */ length3,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Array_Copy2(
	System_Array_t /* System.Array */ sourceArray,
	System_Array_t /* System.Array */ destinationArray,
	int64_t /* System.Int64 */ length,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Array_Copy3(
	System_Array_t /* System.Array */ sourceArray,
	int64_t /* System.Int64 */ sourceIndex,
	System_Array_t /* System.Array */ destinationArray,
	int64_t /* System.Int64 */ destinationIndex,
	int64_t /* System.Int64 */ length,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_Array_GetValue(
	System_Array_t /* System.Array */ self,
	int32_t /* System.Int32 */ index,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_Array_GetValue1(
	System_Array_t /* System.Array */ self,
	int32_t /* System.Int32 */ index1,
	int32_t /* System.Int32 */ index2,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_Array_GetValue2(
	System_Array_t /* System.Array */ self,
	int32_t /* System.Int32 */ index1,
	int32_t /* System.Int32 */ index2,
	int32_t /* System.Int32 */ index3,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Array_SetValue(
	System_Array_t /* System.Array */ self,
	System_Object_t /* System.Object */ value,
	int32_t /* System.Int32 */ index,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Array_SetValue1(
	System_Array_t /* System.Array */ self,
	System_Object_t /* System.Object */ value,
	int32_t /* System.Int32 */ index1,
	int32_t /* System.Int32 */ index2,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Array_SetValue2(
	System_Array_t /* System.Array */ self,
	System_Object_t /* System.Object */ value,
	int32_t /* System.Int32 */ index1,
	int32_t /* System.Int32 */ index2,
	int32_t /* System.Int32 */ index3,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_Array_GetValue3(
	System_Array_t /* System.Array */ self,
	int64_t /* System.Int64 */ index,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_Array_GetValue4(
	System_Array_t /* System.Array */ self,
	int64_t /* System.Int64 */ index1,
	int64_t /* System.Int64 */ index2,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_Array_GetValue5(
	System_Array_t /* System.Array */ self,
	int64_t /* System.Int64 */ index1,
	int64_t /* System.Int64 */ index2,
	int64_t /* System.Int64 */ index3,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Array_SetValue3(
	System_Array_t /* System.Array */ self,
	System_Object_t /* System.Object */ value,
	int64_t /* System.Int64 */ index,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Array_SetValue4(
	System_Array_t /* System.Array */ self,
	System_Object_t /* System.Object */ value,
	int64_t /* System.Int64 */ index1,
	int64_t /* System.Int64 */ index2,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Array_SetValue5(
	System_Array_t /* System.Array */ self,
	System_Object_t /* System.Object */ value,
	int64_t /* System.Int64 */ index1,
	int64_t /* System.Int64 */ index2,
	int64_t /* System.Int64 */ index3,
	System_Exception_t* /* System.Exception */ outException
);

int64_t /* System.Int64 */
System_Array_GetLongLength(
	System_Array_t /* System.Array */ self,
	int32_t /* System.Int32 */ dimension,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_Array_Clone(
	System_Array_t /* System.Array */ self,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Array_BinarySearch(
	System_Array_t /* System.Array */ array,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Array_BinarySearch1(
	System_Array_t /* System.Array */ array,
	int32_t /* System.Int32 */ index,
	int32_t /* System.Int32 */ length,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Array_BinarySearch2(
	System_Array_t /* System.Array */ array,
	System_Object_t /* System.Object */ value,
	System_Collections_IComparer_t /* System.Collections.IComparer */ comparer,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Array_BinarySearch3(
	System_Array_t /* System.Array */ array,
	int32_t /* System.Int32 */ index,
	int32_t /* System.Int32 */ length,
	System_Object_t /* System.Object */ value,
	System_Collections_IComparer_t /* System.Collections.IComparer */ comparer,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Array_CopyTo(
	System_Array_t /* System.Array */ self,
	System_Array_t /* System.Array */ array,
	int32_t /* System.Int32 */ index,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Array_CopyTo1(
	System_Array_t /* System.Array */ self,
	System_Array_t /* System.Array */ array,
	int64_t /* System.Int64 */ index,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Array_IndexOf(
	System_Array_t /* System.Array */ array,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Array_IndexOf1(
	System_Array_t /* System.Array */ array,
	System_Object_t /* System.Object */ value,
	int32_t /* System.Int32 */ startIndex,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Array_IndexOf2(
	System_Array_t /* System.Array */ array,
	System_Object_t /* System.Object */ value,
	int32_t /* System.Int32 */ startIndex,
	int32_t /* System.Int32 */ count,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Array_LastIndexOf(
	System_Array_t /* System.Array */ array,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Array_LastIndexOf1(
	System_Array_t /* System.Array */ array,
	System_Object_t /* System.Object */ value,
	int32_t /* System.Int32 */ startIndex,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Array_LastIndexOf2(
	System_Array_t /* System.Array */ array,
	System_Object_t /* System.Object */ value,
	int32_t /* System.Int32 */ startIndex,
	int32_t /* System.Int32 */ count,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Array_Reverse(
	System_Array_t /* System.Array */ array,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Array_Reverse1(
	System_Array_t /* System.Array */ array,
	int32_t /* System.Int32 */ index,
	int32_t /* System.Int32 */ length,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Array_Sort(
	System_Array_t /* System.Array */ array,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Array_Sort1(
	System_Array_t /* System.Array */ keys,
	System_Array_t /* System.Array */ items,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Array_Sort2(
	System_Array_t /* System.Array */ array,
	int32_t /* System.Int32 */ index,
	int32_t /* System.Int32 */ length,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Array_Sort3(
	System_Array_t /* System.Array */ keys,
	System_Array_t /* System.Array */ items,
	int32_t /* System.Int32 */ index,
	int32_t /* System.Int32 */ length,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Array_Sort4(
	System_Array_t /* System.Array */ array,
	System_Collections_IComparer_t /* System.Collections.IComparer */ comparer,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Array_Sort5(
	System_Array_t /* System.Array */ keys,
	System_Array_t /* System.Array */ items,
	System_Collections_IComparer_t /* System.Collections.IComparer */ comparer,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Array_Sort6(
	System_Array_t /* System.Array */ array,
	int32_t /* System.Int32 */ index,
	int32_t /* System.Int32 */ length,
	System_Collections_IComparer_t /* System.Collections.IComparer */ comparer,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Array_Sort7(
	System_Array_t /* System.Array */ keys,
	System_Array_t /* System.Array */ items,
	int32_t /* System.Int32 */ index,
	int32_t /* System.Int32 */ length,
	System_Collections_IComparer_t /* System.Collections.IComparer */ comparer,
	System_Exception_t* /* System.Exception */ outException
);

System_Collections_IEnumerator_t /* System.Collections.IEnumerator */
System_Array_GetEnumerator(
	System_Array_t /* System.Array */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Array_Destroy(System_Array_t /* System.Array */ self);



int32_t /* System.Int32 */
System_Collections_IComparer_Compare(
	System_Collections_IComparer_t /* System.Collections.IComparer */ self,
	System_Object_t /* System.Object */ x,
	System_Object_t /* System.Object */ y,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Collections_IComparer_Destroy(System_Collections_IComparer_t /* System.Collections.IComparer */ self);



CBool /* System.Boolean */
System_Collections_IEnumerator_MoveNext(
	System_Collections_IEnumerator_t /* System.Collections.IEnumerator */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Collections_IEnumerator_Reset(
	System_Collections_IEnumerator_t /* System.Collections.IEnumerator */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Collections_IEnumerator_Destroy(System_Collections_IEnumerator_t /* System.Collections.IEnumerator */ self);



void /* System.Void */ System_Collections_IDictionaryEnumerator_Destroy(System_Collections_IDictionaryEnumerator_t /* System.Collections.IDictionaryEnumerator */ self);



const CString /* System.String */
System_Collections_DictionaryEntry_ToString(
	System_Collections_DictionaryEntry_t /* System.Collections.DictionaryEntry */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Collections_DictionaryEntry_t /* System.Collections.DictionaryEntry */
System_Collections_DictionaryEntry_Create(
	System_Object_t /* System.Object */ key,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Collections_DictionaryEntry_Destroy(System_Collections_DictionaryEntry_t /* System.Collections.DictionaryEntry */ self);



void /* System.Void */ System_Threading_Tasks_TaskStatus_Destroy(System_Threading_Tasks_TaskStatus /* System.Threading.Tasks.TaskStatus */ self);



void /* System.Void */ System_Threading_Tasks_TaskCreationOptions_Destroy(System_Threading_Tasks_TaskCreationOptions /* System.Threading.Tasks.TaskCreationOptions */ self);



System_Threading_Tasks_TaskFactory_t /* System.Threading.Tasks.TaskFactory */
System_Threading_Tasks_TaskFactory_Create(
	System_Exception_t* /* System.Exception */ outException
);

System_Threading_Tasks_TaskFactory_t /* System.Threading.Tasks.TaskFactory */
System_Threading_Tasks_TaskFactory_Create1(
	System_Threading_CancellationToken_t /* System.Threading.CancellationToken */ cancellationToken,
	System_Exception_t* /* System.Exception */ outException
);

System_Threading_Tasks_TaskFactory_t /* System.Threading.Tasks.TaskFactory */
System_Threading_Tasks_TaskFactory_Create2(
	System_Threading_Tasks_TaskScheduler_t /* System.Threading.Tasks.TaskScheduler */ scheduler,
	System_Exception_t* /* System.Exception */ outException
);

System_Threading_Tasks_TaskFactory_t /* System.Threading.Tasks.TaskFactory */
System_Threading_Tasks_TaskFactory_Create3(
	System_Threading_Tasks_TaskCreationOptions /* System.Threading.Tasks.TaskCreationOptions */ creationOptions,
	System_Threading_Tasks_TaskContinuationOptions /* System.Threading.Tasks.TaskContinuationOptions */ continuationOptions,
	System_Exception_t* /* System.Exception */ outException
);

System_Threading_Tasks_TaskFactory_t /* System.Threading.Tasks.TaskFactory */
System_Threading_Tasks_TaskFactory_Create4(
	System_Threading_CancellationToken_t /* System.Threading.CancellationToken */ cancellationToken,
	System_Threading_Tasks_TaskCreationOptions /* System.Threading.Tasks.TaskCreationOptions */ creationOptions,
	System_Threading_Tasks_TaskContinuationOptions /* System.Threading.Tasks.TaskContinuationOptions */ continuationOptions,
	System_Threading_Tasks_TaskScheduler_t /* System.Threading.Tasks.TaskScheduler */ scheduler,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Threading_Tasks_TaskFactory_Destroy(System_Threading_Tasks_TaskFactory_t /* System.Threading.Tasks.TaskFactory */ self);



CBool /* System.Boolean */
System_Threading_CancellationToken_Equals(
	System_Threading_CancellationToken_t /* System.Threading.CancellationToken */ self,
	System_Threading_CancellationToken_t /* System.Threading.CancellationToken */ other,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Threading_CancellationToken_Equals1(
	System_Threading_CancellationToken_t /* System.Threading.CancellationToken */ self,
	System_Object_t /* System.Object */ other,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Threading_CancellationToken_GetHashCode(
	System_Threading_CancellationToken_t /* System.Threading.CancellationToken */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Threading_CancellationToken_ThrowIfCancellationRequested(
	System_Threading_CancellationToken_t /* System.Threading.CancellationToken */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Threading_CancellationToken_t /* System.Threading.CancellationToken */
System_Threading_CancellationToken_Create(
	CBool /* System.Boolean */ canceled,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Threading_CancellationToken_Destroy(System_Threading_CancellationToken_t /* System.Threading.CancellationToken */ self);



void /* System.Void */
System_Threading_WaitHandle_Close(
	System_Threading_WaitHandle_t /* System.Threading.WaitHandle */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Threading_WaitHandle_Dispose(
	System_Threading_WaitHandle_t /* System.Threading.WaitHandle */ self,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Threading_WaitHandle_WaitOne(
	System_Threading_WaitHandle_t /* System.Threading.WaitHandle */ self,
	int32_t /* System.Int32 */ millisecondsTimeout,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Threading_WaitHandle_WaitOne1(
	System_Threading_WaitHandle_t /* System.Threading.WaitHandle */ self,
	System_TimeSpan_t /* System.TimeSpan */ timeout,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Threading_WaitHandle_WaitOne2(
	System_Threading_WaitHandle_t /* System.Threading.WaitHandle */ self,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Threading_WaitHandle_WaitOne3(
	System_Threading_WaitHandle_t /* System.Threading.WaitHandle */ self,
	int32_t /* System.Int32 */ millisecondsTimeout,
	CBool /* System.Boolean */ exitContext,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Threading_WaitHandle_WaitOne4(
	System_Threading_WaitHandle_t /* System.Threading.WaitHandle */ self,
	System_TimeSpan_t /* System.TimeSpan */ timeout,
	CBool /* System.Boolean */ exitContext,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Threading_WaitHandle_SignalAndWait(
	System_Threading_WaitHandle_t /* System.Threading.WaitHandle */ toSignal,
	System_Threading_WaitHandle_t /* System.Threading.WaitHandle */ toWaitOn,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Threading_WaitHandle_SignalAndWait1(
	System_Threading_WaitHandle_t /* System.Threading.WaitHandle */ toSignal,
	System_Threading_WaitHandle_t /* System.Threading.WaitHandle */ toWaitOn,
	System_TimeSpan_t /* System.TimeSpan */ timeout,
	CBool /* System.Boolean */ exitContext,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Threading_WaitHandle_SignalAndWait2(
	System_Threading_WaitHandle_t /* System.Threading.WaitHandle */ toSignal,
	System_Threading_WaitHandle_t /* System.Threading.WaitHandle */ toWaitOn,
	int32_t /* System.Int32 */ millisecondsTimeout,
	CBool /* System.Boolean */ exitContext,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Threading_WaitHandle_Destroy(System_Threading_WaitHandle_t /* System.Threading.WaitHandle */ self);



Microsoft_Win32_SafeHandles_SafeWaitHandle_t /* Microsoft.Win32.SafeHandles.SafeWaitHandle */
Microsoft_Win32_SafeHandles_SafeWaitHandle_Create(
	System_Exception_t* /* System.Exception */ outException
);

Microsoft_Win32_SafeHandles_SafeWaitHandle_t /* Microsoft.Win32.SafeHandles.SafeWaitHandle */
Microsoft_Win32_SafeHandles_SafeWaitHandle_Create1(
	int /* System.IntPtr */ existingHandle,
	CBool /* System.Boolean */ ownsHandle,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ Microsoft_Win32_SafeHandles_SafeWaitHandle_Destroy(Microsoft_Win32_SafeHandles_SafeWaitHandle_t /* Microsoft.Win32.SafeHandles.SafeWaitHandle */ self);



void /* System.Void */ Microsoft_Win32_SafeHandles_SafeHandleZeroOrMinusOneIsInvalid_Destroy(Microsoft_Win32_SafeHandles_SafeHandleZeroOrMinusOneIsInvalid_t /* Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid */ self);



int /* System.IntPtr */
System_Runtime_InteropServices_SafeHandle_DangerousGetHandle(
	System_Runtime_InteropServices_SafeHandle_t /* System.Runtime.InteropServices.SafeHandle */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Runtime_InteropServices_SafeHandle_Close(
	System_Runtime_InteropServices_SafeHandle_t /* System.Runtime.InteropServices.SafeHandle */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Runtime_InteropServices_SafeHandle_Dispose(
	System_Runtime_InteropServices_SafeHandle_t /* System.Runtime.InteropServices.SafeHandle */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Runtime_InteropServices_SafeHandle_SetHandleAsInvalid(
	System_Runtime_InteropServices_SafeHandle_t /* System.Runtime.InteropServices.SafeHandle */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Runtime_InteropServices_SafeHandle_DangerousRelease(
	System_Runtime_InteropServices_SafeHandle_t /* System.Runtime.InteropServices.SafeHandle */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Runtime_InteropServices_SafeHandle_Destroy(System_Runtime_InteropServices_SafeHandle_t /* System.Runtime.InteropServices.SafeHandle */ self);



void /* System.Void */ System_Runtime_ConstrainedExecution_CriticalFinalizerObject_Destroy(System_Runtime_ConstrainedExecution_CriticalFinalizerObject_t /* System.Runtime.ConstrainedExecution.CriticalFinalizerObject */ self);



void /* System.Void */
System_Threading_CancellationTokenRegistration_Dispose(
	System_Threading_CancellationTokenRegistration_t /* System.Threading.CancellationTokenRegistration */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Threading_Tasks_ValueTask_t /* System.Threading.Tasks.ValueTask */
System_Threading_CancellationTokenRegistration_DisposeAsync(
	System_Threading_CancellationTokenRegistration_t /* System.Threading.CancellationTokenRegistration */ self,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Threading_CancellationTokenRegistration_Unregister(
	System_Threading_CancellationTokenRegistration_t /* System.Threading.CancellationTokenRegistration */ self,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Threading_CancellationTokenRegistration_Equals(
	System_Threading_CancellationTokenRegistration_t /* System.Threading.CancellationTokenRegistration */ self,
	System_Object_t /* System.Object */ obj,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Threading_CancellationTokenRegistration_Equals1(
	System_Threading_CancellationTokenRegistration_t /* System.Threading.CancellationTokenRegistration */ self,
	System_Threading_CancellationTokenRegistration_t /* System.Threading.CancellationTokenRegistration */ other,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Threading_CancellationTokenRegistration_GetHashCode(
	System_Threading_CancellationTokenRegistration_t /* System.Threading.CancellationTokenRegistration */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Threading_CancellationTokenRegistration_Destroy(System_Threading_CancellationTokenRegistration_t /* System.Threading.CancellationTokenRegistration */ self);



System_Threading_Tasks_ValueTask_t /* System.Threading.Tasks.ValueTask */
System_Threading_Tasks_ValueTask_FromCanceled(
	System_Threading_CancellationToken_t /* System.Threading.CancellationToken */ cancellationToken,
	System_Exception_t* /* System.Exception */ outException
);

System_Threading_Tasks_ValueTask_t /* System.Threading.Tasks.ValueTask */
System_Threading_Tasks_ValueTask_FromException(
	System_Exception_t /* System.Exception */ exception,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Threading_Tasks_ValueTask_GetHashCode(
	System_Threading_Tasks_ValueTask_t /* System.Threading.Tasks.ValueTask */ self,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Threading_Tasks_ValueTask_Equals(
	System_Threading_Tasks_ValueTask_t /* System.Threading.Tasks.ValueTask */ self,
	System_Object_t /* System.Object */ obj,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Threading_Tasks_ValueTask_Equals1(
	System_Threading_Tasks_ValueTask_t /* System.Threading.Tasks.ValueTask */ self,
	System_Threading_Tasks_ValueTask_t /* System.Threading.Tasks.ValueTask */ other,
	System_Exception_t* /* System.Exception */ outException
);

System_Threading_Tasks_Task_t /* System.Threading.Tasks.Task */
System_Threading_Tasks_ValueTask_AsTask(
	System_Threading_Tasks_ValueTask_t /* System.Threading.Tasks.ValueTask */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Threading_Tasks_ValueTask_t /* System.Threading.Tasks.ValueTask */
System_Threading_Tasks_ValueTask_Preserve(
	System_Threading_Tasks_ValueTask_t /* System.Threading.Tasks.ValueTask */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Runtime_CompilerServices_ValueTaskAwaiter_t /* System.Runtime.CompilerServices.ValueTaskAwaiter */
System_Threading_Tasks_ValueTask_GetAwaiter(
	System_Threading_Tasks_ValueTask_t /* System.Threading.Tasks.ValueTask */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Runtime_CompilerServices_ConfiguredValueTaskAwaitable_t /* System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable */
System_Threading_Tasks_ValueTask_ConfigureAwait(
	System_Threading_Tasks_ValueTask_t /* System.Threading.Tasks.ValueTask */ self,
	CBool /* System.Boolean */ continueOnCapturedContext,
	System_Exception_t* /* System.Exception */ outException
);

System_Threading_Tasks_ValueTask_t /* System.Threading.Tasks.ValueTask */
System_Threading_Tasks_ValueTask_Create(
	System_Threading_Tasks_Task_t /* System.Threading.Tasks.Task */ task,
	System_Exception_t* /* System.Exception */ outException
);

System_Threading_Tasks_ValueTask_t /* System.Threading.Tasks.ValueTask */
System_Threading_Tasks_ValueTask_Create1(
	System_Threading_Tasks_Sources_IValueTaskSource_t /* System.Threading.Tasks.Sources.IValueTaskSource */ source,
	int16_t /* System.Int16 */ token,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Threading_Tasks_ValueTask_Destroy(System_Threading_Tasks_ValueTask_t /* System.Threading.Tasks.ValueTask */ self);



void /* System.Void */
System_Runtime_CompilerServices_ValueTaskAwaiter_GetResult(
	System_Runtime_CompilerServices_ValueTaskAwaiter_t /* System.Runtime.CompilerServices.ValueTaskAwaiter */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Runtime_CompilerServices_ValueTaskAwaiter_Destroy(System_Runtime_CompilerServices_ValueTaskAwaiter_t /* System.Runtime.CompilerServices.ValueTaskAwaiter */ self);



System_Runtime_CompilerServices_ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter_t /* System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable.ConfiguredValueTaskAwaiter */
System_Runtime_CompilerServices_ConfiguredValueTaskAwaitable_GetAwaiter(
	System_Runtime_CompilerServices_ConfiguredValueTaskAwaitable_t /* System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Runtime_CompilerServices_ConfiguredValueTaskAwaitable_Destroy(System_Runtime_CompilerServices_ConfiguredValueTaskAwaitable_t /* System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable */ self);



void /* System.Void */
System_Runtime_CompilerServices_ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter_GetResult(
	System_Runtime_CompilerServices_ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter_t /* System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable.ConfiguredValueTaskAwaiter */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Runtime_CompilerServices_ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter_Destroy(System_Runtime_CompilerServices_ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter_t /* System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable.ConfiguredValueTaskAwaiter */ self);



System_Threading_Tasks_Sources_ValueTaskSourceStatus /* System.Threading.Tasks.Sources.ValueTaskSourceStatus */
System_Threading_Tasks_Sources_IValueTaskSource_GetStatus(
	System_Threading_Tasks_Sources_IValueTaskSource_t /* System.Threading.Tasks.Sources.IValueTaskSource */ self,
	int16_t /* System.Int16 */ token,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Threading_Tasks_Sources_IValueTaskSource_GetResult(
	System_Threading_Tasks_Sources_IValueTaskSource_t /* System.Threading.Tasks.Sources.IValueTaskSource */ self,
	int16_t /* System.Int16 */ token,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Threading_Tasks_Sources_IValueTaskSource_Destroy(System_Threading_Tasks_Sources_IValueTaskSource_t /* System.Threading.Tasks.Sources.IValueTaskSource */ self);



void /* System.Void */ System_Threading_Tasks_Sources_ValueTaskSourceStatus_Destroy(System_Threading_Tasks_Sources_ValueTaskSourceStatus /* System.Threading.Tasks.Sources.ValueTaskSourceStatus */ self);



void /* System.Void */ System_Threading_Tasks_Sources_ValueTaskSourceOnCompletedFlags_Destroy(System_Threading_Tasks_Sources_ValueTaskSourceOnCompletedFlags /* System.Threading.Tasks.Sources.ValueTaskSourceOnCompletedFlags */ self);



void /* System.Void */ System_Threading_Tasks_TaskContinuationOptions_Destroy(System_Threading_Tasks_TaskContinuationOptions /* System.Threading.Tasks.TaskContinuationOptions */ self);



void /* System.Void */ System_IAsyncResult_Destroy(System_IAsyncResult_t /* System.IAsyncResult */ self);



void /* System.Void */
System_Runtime_CompilerServices_TaskAwaiter_GetResult(
	System_Runtime_CompilerServices_TaskAwaiter_t /* System.Runtime.CompilerServices.TaskAwaiter */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Runtime_CompilerServices_TaskAwaiter_Destroy(System_Runtime_CompilerServices_TaskAwaiter_t /* System.Runtime.CompilerServices.TaskAwaiter */ self);



System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_t /* System.Runtime.CompilerServices.ConfiguredTaskAwaitable.ConfiguredTaskAwaiter */
System_Runtime_CompilerServices_ConfiguredTaskAwaitable_GetAwaiter(
	System_Runtime_CompilerServices_ConfiguredTaskAwaitable_t /* System.Runtime.CompilerServices.ConfiguredTaskAwaitable */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Runtime_CompilerServices_ConfiguredTaskAwaitable_Destroy(System_Runtime_CompilerServices_ConfiguredTaskAwaitable_t /* System.Runtime.CompilerServices.ConfiguredTaskAwaitable */ self);



void /* System.Void */
System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_GetResult(
	System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_t /* System.Runtime.CompilerServices.ConfiguredTaskAwaitable.ConfiguredTaskAwaiter */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_Destroy(System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_t /* System.Runtime.CompilerServices.ConfiguredTaskAwaitable.ConfiguredTaskAwaiter */ self);



System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_t /* System.Runtime.CompilerServices.YieldAwaitable.YieldAwaiter */
System_Runtime_CompilerServices_YieldAwaitable_GetAwaiter(
	System_Runtime_CompilerServices_YieldAwaitable_t /* System.Runtime.CompilerServices.YieldAwaitable */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Runtime_CompilerServices_YieldAwaitable_Destroy(System_Runtime_CompilerServices_YieldAwaitable_t /* System.Runtime.CompilerServices.YieldAwaitable */ self);



void /* System.Void */
System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_GetResult(
	System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_t /* System.Runtime.CompilerServices.YieldAwaitable.YieldAwaiter */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_Destroy(System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter_t /* System.Runtime.CompilerServices.YieldAwaitable.YieldAwaiter */ self);



void /* System.Void */ System_IO_SeekOrigin_Destroy(System_IO_SeekOrigin /* System.IO.SeekOrigin */ self);



Microsoft_Win32_SafeHandles_SafeFileHandle_t /* Microsoft.Win32.SafeHandles.SafeFileHandle */
Microsoft_Win32_SafeHandles_SafeFileHandle_Create(
	int /* System.IntPtr */ preexistingHandle,
	CBool /* System.Boolean */ ownsHandle,
	System_Exception_t* /* System.Exception */ outException
);

Microsoft_Win32_SafeHandles_SafeFileHandle_t /* Microsoft.Win32.SafeHandles.SafeFileHandle */
Microsoft_Win32_SafeHandles_SafeFileHandle_Create1(
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ Microsoft_Win32_SafeHandles_SafeFileHandle_Destroy(Microsoft_Win32_SafeHandles_SafeFileHandle_t /* Microsoft.Win32.SafeHandles.SafeFileHandle */ self);



void /* System.Void */ System_IO_FileAccess_Destroy(System_IO_FileAccess /* System.IO.FileAccess */ self);



void /* System.Void */ System_IO_FileMode_Destroy(System_IO_FileMode /* System.IO.FileMode */ self);



void /* System.Void */ System_IO_FileShare_Destroy(System_IO_FileShare /* System.IO.FileShare */ self);



void /* System.Void */ System_IO_FileOptions_Destroy(System_IO_FileOptions /* System.IO.FileOptions */ self);



System_IO_FileStreamOptions_t /* System.IO.FileStreamOptions */
System_IO_FileStreamOptions_Create(
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_IO_FileStreamOptions_Destroy(System_IO_FileStreamOptions_t /* System.IO.FileStreamOptions */ self);



System_Reflection_ManifestResourceInfo_t /* System.Reflection.ManifestResourceInfo */
System_Reflection_ManifestResourceInfo_Create(
	System_Reflection_Assembly_t /* System.Reflection.Assembly */ containingAssembly,
	const CString /* System.String */ containingFileName,
	System_Reflection_ResourceLocation /* System.Reflection.ResourceLocation */ resourceLocation,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Reflection_ManifestResourceInfo_Destroy(System_Reflection_ManifestResourceInfo_t /* System.Reflection.ManifestResourceInfo */ self);



void /* System.Void */ System_Reflection_ResourceLocation_Destroy(System_Reflection_ResourceLocation /* System.Reflection.ResourceLocation */ self);



CBool /* System.Boolean */
System_Reflection_Module_IsResource(
	System_Reflection_Module_t /* System.Reflection.Module */ self,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Reflection_Module_IsDefined(
	System_Reflection_Module_t /* System.Reflection.Module */ self,
	System_Type_t /* System.Type */ attributeType,
	CBool /* System.Boolean */ inherit,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_MethodInfo_t /* System.Reflection.MethodInfo */
System_Reflection_Module_GetMethod(
	System_Reflection_Module_t /* System.Reflection.Module */ self,
	const CString /* System.String */ name,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_FieldInfo_t /* System.Reflection.FieldInfo */
System_Reflection_Module_GetField(
	System_Reflection_Module_t /* System.Reflection.Module */ self,
	const CString /* System.String */ name,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_FieldInfo_t /* System.Reflection.FieldInfo */
System_Reflection_Module_GetField1(
	System_Reflection_Module_t /* System.Reflection.Module */ self,
	const CString /* System.String */ name,
	System_Reflection_BindingFlags /* System.Reflection.BindingFlags */ bindingAttr,
	System_Exception_t* /* System.Exception */ outException
);

System_Type_t /* System.Type */
System_Reflection_Module_GetType(
	System_Reflection_Module_t /* System.Reflection.Module */ self,
	const CString /* System.String */ className,
	System_Exception_t* /* System.Exception */ outException
);

System_Type_t /* System.Type */
System_Reflection_Module_GetType1(
	System_Reflection_Module_t /* System.Reflection.Module */ self,
	const CString /* System.String */ className,
	CBool /* System.Boolean */ ignoreCase,
	System_Exception_t* /* System.Exception */ outException
);

System_Type_t /* System.Type */
System_Reflection_Module_GetType2(
	System_Reflection_Module_t /* System.Reflection.Module */ self,
	const CString /* System.String */ className,
	CBool /* System.Boolean */ throwOnError,
	CBool /* System.Boolean */ ignoreCase,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_FieldInfo_t /* System.Reflection.FieldInfo */
System_Reflection_Module_ResolveField(
	System_Reflection_Module_t /* System.Reflection.Module */ self,
	int32_t /* System.Int32 */ metadataToken,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_MemberInfo_t /* System.Reflection.MemberInfo */
System_Reflection_Module_ResolveMember(
	System_Reflection_Module_t /* System.Reflection.Module */ self,
	int32_t /* System.Int32 */ metadataToken,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_MethodBase_t /* System.Reflection.MethodBase */
System_Reflection_Module_ResolveMethod(
	System_Reflection_Module_t /* System.Reflection.Module */ self,
	int32_t /* System.Int32 */ metadataToken,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Reflection_Module_ResolveString(
	System_Reflection_Module_t /* System.Reflection.Module */ self,
	int32_t /* System.Int32 */ metadataToken,
	System_Exception_t* /* System.Exception */ outException
);

System_Type_t /* System.Type */
System_Reflection_Module_ResolveType(
	System_Reflection_Module_t /* System.Reflection.Module */ self,
	int32_t /* System.Int32 */ metadataToken,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Reflection_Module_GetObjectData(
	System_Reflection_Module_t /* System.Reflection.Module */ self,
	System_Runtime_Serialization_SerializationInfo_t /* System.Runtime.Serialization.SerializationInfo */ info,
	System_Runtime_Serialization_StreamingContext_t /* System.Runtime.Serialization.StreamingContext */ context,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Reflection_Module_Equals(
	System_Reflection_Module_t /* System.Reflection.Module */ self,
	System_Object_t /* System.Object */ o,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Reflection_Module_GetHashCode(
	System_Reflection_Module_t /* System.Reflection.Module */ self,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Reflection_Module_ToString(
	System_Reflection_Module_t /* System.Reflection.Module */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Reflection_Module_Destroy(System_Reflection_Module_t /* System.Reflection.Module */ self);



System_Guid_t /* System.Guid */
System_Guid_Parse(
	const CString /* System.String */ input,
	System_Exception_t* /* System.Exception */ outException
);

System_Guid_t /* System.Guid */
System_Guid_ParseExact(
	const CString /* System.String */ input,
	const CString /* System.String */ format,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Guid_ToString(
	System_Guid_t /* System.Guid */ self,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Guid_GetHashCode(
	System_Guid_t /* System.Guid */ self,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Guid_Equals(
	System_Guid_t /* System.Guid */ self,
	System_Object_t /* System.Object */ o,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Guid_Equals1(
	System_Guid_t /* System.Guid */ self,
	System_Guid_t /* System.Guid */ g,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Guid_CompareTo(
	System_Guid_t /* System.Guid */ self,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Guid_CompareTo1(
	System_Guid_t /* System.Guid */ self,
	System_Guid_t /* System.Guid */ value,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Guid_ToString1(
	System_Guid_t /* System.Guid */ self,
	const CString /* System.String */ format,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Guid_ToString2(
	System_Guid_t /* System.Guid */ self,
	const CString /* System.String */ format,
	System_IFormatProvider_t /* System.IFormatProvider */ provider,
	System_Exception_t* /* System.Exception */ outException
);

System_Guid_t /* System.Guid */
System_Guid_Parse1(
	const CString /* System.String */ s,
	System_IFormatProvider_t /* System.IFormatProvider */ provider,
	System_Exception_t* /* System.Exception */ outException
);

System_Guid_t /* System.Guid */
System_Guid_NewGuid(
	System_Exception_t* /* System.Exception */ outException
);

System_Guid_t /* System.Guid */
System_Guid_Create(
	uint32_t /* System.UInt32 */ a,
	uint16_t /* System.UInt16 */ b,
	uint16_t /* System.UInt16 */ c,
	uint8_t /* System.Byte */ d,
	uint8_t /* System.Byte */ e,
	uint8_t /* System.Byte */ f,
	uint8_t /* System.Byte */ g,
	uint8_t /* System.Byte */ h,
	uint8_t /* System.Byte */ i,
	uint8_t /* System.Byte */ j,
	uint8_t /* System.Byte */ k,
	System_Exception_t* /* System.Exception */ outException
);

System_Guid_t /* System.Guid */
System_Guid_Create1(
	int32_t /* System.Int32 */ a,
	int16_t /* System.Int16 */ b,
	int16_t /* System.Int16 */ c,
	uint8_t /* System.Byte */ d,
	uint8_t /* System.Byte */ e,
	uint8_t /* System.Byte */ f,
	uint8_t /* System.Byte */ g,
	uint8_t /* System.Byte */ h,
	uint8_t /* System.Byte */ i,
	uint8_t /* System.Byte */ j,
	uint8_t /* System.Byte */ k,
	System_Exception_t* /* System.Exception */ outException
);

System_Guid_t /* System.Guid */
System_Guid_Create2(
	const CString /* System.String */ g,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Guid_Destroy(System_Guid_t /* System.Guid */ self);



void /* System.Void */ System_Security_SecurityRuleSet_Destroy(System_Security_SecurityRuleSet /* System.Security.SecurityRuleSet */ self);



int32_t /* System.Int32 */
System_Text_Rune_CompareTo(
	System_Text_Rune_t /* System.Text.Rune */ self,
	System_Text_Rune_t /* System.Text.Rune */ other,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Text_Rune_Equals(
	System_Text_Rune_t /* System.Text.Rune */ self,
	System_Object_t /* System.Object */ obj,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Text_Rune_Equals1(
	System_Text_Rune_t /* System.Text.Rune */ self,
	System_Text_Rune_t /* System.Text.Rune */ other,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Text_Rune_GetHashCode(
	System_Text_Rune_t /* System.Text.Rune */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Text_Rune_t /* System.Text.Rune */
System_Text_Rune_GetRuneAt(
	const CString /* System.String */ input,
	int32_t /* System.Int32 */ index,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Text_Rune_IsValid(
	int32_t /* System.Int32 */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Text_Rune_IsValid1(
	uint32_t /* System.UInt32 */ value,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Text_Rune_ToString(
	System_Text_Rune_t /* System.Text.Rune */ self,
	System_Exception_t* /* System.Exception */ outException
);

double /* System.Double */
System_Text_Rune_GetNumericValue(
	System_Text_Rune_t /* System.Text.Rune */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_Globalization_UnicodeCategory /* System.Globalization.UnicodeCategory */
System_Text_Rune_GetUnicodeCategory(
	System_Text_Rune_t /* System.Text.Rune */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Text_Rune_IsControl(
	System_Text_Rune_t /* System.Text.Rune */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Text_Rune_IsDigit(
	System_Text_Rune_t /* System.Text.Rune */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Text_Rune_IsLetter(
	System_Text_Rune_t /* System.Text.Rune */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Text_Rune_IsLetterOrDigit(
	System_Text_Rune_t /* System.Text.Rune */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Text_Rune_IsLower(
	System_Text_Rune_t /* System.Text.Rune */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Text_Rune_IsNumber(
	System_Text_Rune_t /* System.Text.Rune */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Text_Rune_IsPunctuation(
	System_Text_Rune_t /* System.Text.Rune */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Text_Rune_IsSeparator(
	System_Text_Rune_t /* System.Text.Rune */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Text_Rune_IsSymbol(
	System_Text_Rune_t /* System.Text.Rune */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Text_Rune_IsUpper(
	System_Text_Rune_t /* System.Text.Rune */ value,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Text_Rune_IsWhiteSpace(
	System_Text_Rune_t /* System.Text.Rune */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_Text_Rune_t /* System.Text.Rune */
System_Text_Rune_ToLower(
	System_Text_Rune_t /* System.Text.Rune */ value,
	System_Globalization_CultureInfo_t /* System.Globalization.CultureInfo */ culture,
	System_Exception_t* /* System.Exception */ outException
);

System_Text_Rune_t /* System.Text.Rune */
System_Text_Rune_ToLowerInvariant(
	System_Text_Rune_t /* System.Text.Rune */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_Text_Rune_t /* System.Text.Rune */
System_Text_Rune_ToUpper(
	System_Text_Rune_t /* System.Text.Rune */ value,
	System_Globalization_CultureInfo_t /* System.Globalization.CultureInfo */ culture,
	System_Exception_t* /* System.Exception */ outException
);

System_Text_Rune_t /* System.Text.Rune */
System_Text_Rune_ToUpperInvariant(
	System_Text_Rune_t /* System.Text.Rune */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_Text_Rune_t /* System.Text.Rune */
System_Text_Rune_Create(
	uint8_t /* System.Char */ ch,
	System_Exception_t* /* System.Exception */ outException
);

System_Text_Rune_t /* System.Text.Rune */
System_Text_Rune_Create1(
	uint8_t /* System.Char */ highSurrogate,
	uint8_t /* System.Char */ lowSurrogate,
	System_Exception_t* /* System.Exception */ outException
);

System_Text_Rune_t /* System.Text.Rune */
System_Text_Rune_Create2(
	int32_t /* System.Int32 */ value,
	System_Exception_t* /* System.Exception */ outException
);

System_Text_Rune_t /* System.Text.Rune */
System_Text_Rune_Create3(
	uint32_t /* System.UInt32 */ value,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Text_Rune_Destroy(System_Text_Rune_t /* System.Text.Rune */ self);



void /* System.Void */ System_Buffers_OperationStatus_Destroy(System_Buffers_OperationStatus /* System.Buffers.OperationStatus */ self);



void /* System.Void */ System_Globalization_CompareOptions_Destroy(System_Globalization_CompareOptions /* System.Globalization.CompareOptions */ self);



int32_t /* System.Int32 */
System_Globalization_SortKey_Compare(
	System_Globalization_SortKey_t /* System.Globalization.SortKey */ sortkey1,
	System_Globalization_SortKey_t /* System.Globalization.SortKey */ sortkey2,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Globalization_SortKey_Equals(
	System_Globalization_SortKey_t /* System.Globalization.SortKey */ self,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_SortKey_GetHashCode(
	System_Globalization_SortKey_t /* System.Globalization.SortKey */ self,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Globalization_SortKey_ToString(
	System_Globalization_SortKey_t /* System.Globalization.SortKey */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Globalization_SortKey_Destroy(System_Globalization_SortKey_t /* System.Globalization.SortKey */ self);



CBool /* System.Boolean */
System_Globalization_SortVersion_Equals(
	System_Globalization_SortVersion_t /* System.Globalization.SortVersion */ self,
	System_Object_t /* System.Object */ obj,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Globalization_SortVersion_Equals1(
	System_Globalization_SortVersion_t /* System.Globalization.SortVersion */ self,
	System_Globalization_SortVersion_t /* System.Globalization.SortVersion */ other,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_SortVersion_GetHashCode(
	System_Globalization_SortVersion_t /* System.Globalization.SortVersion */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Globalization_SortVersion_t /* System.Globalization.SortVersion */
System_Globalization_SortVersion_Create(
	int32_t /* System.Int32 */ fullVersion,
	System_Guid_t /* System.Guid */ sortId,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Globalization_SortVersion_Destroy(System_Globalization_SortVersion_t /* System.Globalization.SortVersion */ self);



System_Object_t /* System.Object */
System_Globalization_TextInfo_Clone(
	System_Globalization_TextInfo_t /* System.Globalization.TextInfo */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Globalization_TextInfo_t /* System.Globalization.TextInfo */
System_Globalization_TextInfo_ReadOnly(
	System_Globalization_TextInfo_t /* System.Globalization.TextInfo */ textInfo,
	System_Exception_t* /* System.Exception */ outException
);

uint8_t /* System.Char */
System_Globalization_TextInfo_ToLower(
	System_Globalization_TextInfo_t /* System.Globalization.TextInfo */ self,
	uint8_t /* System.Char */ c,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Globalization_TextInfo_ToLower1(
	System_Globalization_TextInfo_t /* System.Globalization.TextInfo */ self,
	const CString /* System.String */ str,
	System_Exception_t* /* System.Exception */ outException
);

uint8_t /* System.Char */
System_Globalization_TextInfo_ToUpper(
	System_Globalization_TextInfo_t /* System.Globalization.TextInfo */ self,
	uint8_t /* System.Char */ c,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Globalization_TextInfo_ToUpper1(
	System_Globalization_TextInfo_t /* System.Globalization.TextInfo */ self,
	const CString /* System.String */ str,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Globalization_TextInfo_Equals(
	System_Globalization_TextInfo_t /* System.Globalization.TextInfo */ self,
	System_Object_t /* System.Object */ obj,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_TextInfo_GetHashCode(
	System_Globalization_TextInfo_t /* System.Globalization.TextInfo */ self,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Globalization_TextInfo_ToString(
	System_Globalization_TextInfo_t /* System.Globalization.TextInfo */ self,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Globalization_TextInfo_ToTitleCase(
	System_Globalization_TextInfo_t /* System.Globalization.TextInfo */ self,
	const CString /* System.String */ str,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Globalization_TextInfo_Destroy(System_Globalization_TextInfo_t /* System.Globalization.TextInfo */ self);



System_Globalization_NumberFormatInfo_t /* System.Globalization.NumberFormatInfo */
System_Globalization_NumberFormatInfo_GetInstance(
	System_IFormatProvider_t /* System.IFormatProvider */ formatProvider,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_Globalization_NumberFormatInfo_Clone(
	System_Globalization_NumberFormatInfo_t /* System.Globalization.NumberFormatInfo */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_Globalization_NumberFormatInfo_GetFormat(
	System_Globalization_NumberFormatInfo_t /* System.Globalization.NumberFormatInfo */ self,
	System_Type_t /* System.Type */ formatType,
	System_Exception_t* /* System.Exception */ outException
);

System_Globalization_NumberFormatInfo_t /* System.Globalization.NumberFormatInfo */
System_Globalization_NumberFormatInfo_ReadOnly(
	System_Globalization_NumberFormatInfo_t /* System.Globalization.NumberFormatInfo */ nfi,
	System_Exception_t* /* System.Exception */ outException
);

System_Globalization_NumberFormatInfo_t /* System.Globalization.NumberFormatInfo */
System_Globalization_NumberFormatInfo_Create(
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Globalization_NumberFormatInfo_Destroy(System_Globalization_NumberFormatInfo_t /* System.Globalization.NumberFormatInfo */ self);



void /* System.Void */ System_Globalization_DigitShapes_Destroy(System_Globalization_DigitShapes /* System.Globalization.DigitShapes */ self);



System_Globalization_DateTimeFormatInfo_t /* System.Globalization.DateTimeFormatInfo */
System_Globalization_DateTimeFormatInfo_GetInstance(
	System_IFormatProvider_t /* System.IFormatProvider */ provider,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_Globalization_DateTimeFormatInfo_GetFormat(
	System_Globalization_DateTimeFormatInfo_t /* System.Globalization.DateTimeFormatInfo */ self,
	System_Type_t /* System.Type */ formatType,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_Globalization_DateTimeFormatInfo_Clone(
	System_Globalization_DateTimeFormatInfo_t /* System.Globalization.DateTimeFormatInfo */ self,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Globalization_DateTimeFormatInfo_GetEra(
	System_Globalization_DateTimeFormatInfo_t /* System.Globalization.DateTimeFormatInfo */ self,
	const CString /* System.String */ eraName,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Globalization_DateTimeFormatInfo_GetEraName(
	System_Globalization_DateTimeFormatInfo_t /* System.Globalization.DateTimeFormatInfo */ self,
	int32_t /* System.Int32 */ era,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Globalization_DateTimeFormatInfo_GetAbbreviatedEraName(
	System_Globalization_DateTimeFormatInfo_t /* System.Globalization.DateTimeFormatInfo */ self,
	int32_t /* System.Int32 */ era,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Globalization_DateTimeFormatInfo_GetAbbreviatedDayName(
	System_Globalization_DateTimeFormatInfo_t /* System.Globalization.DateTimeFormatInfo */ self,
	System_DayOfWeek /* System.DayOfWeek */ dayofweek,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Globalization_DateTimeFormatInfo_GetShortestDayName(
	System_Globalization_DateTimeFormatInfo_t /* System.Globalization.DateTimeFormatInfo */ self,
	System_DayOfWeek /* System.DayOfWeek */ dayOfWeek,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Globalization_DateTimeFormatInfo_GetDayName(
	System_Globalization_DateTimeFormatInfo_t /* System.Globalization.DateTimeFormatInfo */ self,
	System_DayOfWeek /* System.DayOfWeek */ dayofweek,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Globalization_DateTimeFormatInfo_GetAbbreviatedMonthName(
	System_Globalization_DateTimeFormatInfo_t /* System.Globalization.DateTimeFormatInfo */ self,
	int32_t /* System.Int32 */ month,
	System_Exception_t* /* System.Exception */ outException
);

const CString /* System.String */
System_Globalization_DateTimeFormatInfo_GetMonthName(
	System_Globalization_DateTimeFormatInfo_t /* System.Globalization.DateTimeFormatInfo */ self,
	int32_t /* System.Int32 */ month,
	System_Exception_t* /* System.Exception */ outException
);

System_Globalization_DateTimeFormatInfo_t /* System.Globalization.DateTimeFormatInfo */
System_Globalization_DateTimeFormatInfo_ReadOnly(
	System_Globalization_DateTimeFormatInfo_t /* System.Globalization.DateTimeFormatInfo */ dtfi,
	System_Exception_t* /* System.Exception */ outException
);

System_Globalization_DateTimeFormatInfo_t /* System.Globalization.DateTimeFormatInfo */
System_Globalization_DateTimeFormatInfo_Create(
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Globalization_DateTimeFormatInfo_Destroy(System_Globalization_DateTimeFormatInfo_t /* System.Globalization.DateTimeFormatInfo */ self);



System_Object_t /* System.Object */
System_CharEnumerator_Clone(
	System_CharEnumerator_t /* System.CharEnumerator */ self,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_CharEnumerator_MoveNext(
	System_CharEnumerator_t /* System.CharEnumerator */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_CharEnumerator_Dispose(
	System_CharEnumerator_t /* System.CharEnumerator */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_CharEnumerator_Reset(
	System_CharEnumerator_t /* System.CharEnumerator */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_CharEnumerator_Destroy(System_CharEnumerator_t /* System.CharEnumerator */ self);



System_Text_StringRuneEnumerator_t /* System.Text.StringRuneEnumerator */
System_Text_StringRuneEnumerator_GetEnumerator(
	System_Text_StringRuneEnumerator_t /* System.Text.StringRuneEnumerator */ self,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Text_StringRuneEnumerator_MoveNext(
	System_Text_StringRuneEnumerator_t /* System.Text.StringRuneEnumerator */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Text_StringRuneEnumerator_Destroy(System_Text_StringRuneEnumerator_t /* System.Text.StringRuneEnumerator */ self);



void /* System.Void */ System_Text_NormalizationForm_Destroy(System_Text_NormalizationForm /* System.Text.NormalizationForm */ self);



System_Text_CompositeFormat_t /* System.Text.CompositeFormat */
System_Text_CompositeFormat_Parse(
	const CString /* System.String */ format,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Text_CompositeFormat_Destroy(System_Text_CompositeFormat_t /* System.Text.CompositeFormat */ self);



void /* System.Void */ System_StringSplitOptions_Destroy(System_StringSplitOptions /* System.StringSplitOptions */ self);



void /* System.Void */
System_Text_Encoding_RegisterProvider(
	System_Text_EncodingProvider_t /* System.Text.EncodingProvider */ provider,
	System_Exception_t* /* System.Exception */ outException
);

System_Text_Encoding_t /* System.Text.Encoding */
System_Text_Encoding_GetEncoding(
	int32_t /* System.Int32 */ codepage,
	System_Exception_t* /* System.Exception */ outException
);

System_Text_Encoding_t /* System.Text.Encoding */
System_Text_Encoding_GetEncoding1(
	int32_t /* System.Int32 */ codepage,
	System_Text_EncoderFallback_t /* System.Text.EncoderFallback */ encoderFallback,
	System_Text_DecoderFallback_t /* System.Text.DecoderFallback */ decoderFallback,
	System_Exception_t* /* System.Exception */ outException
);

System_Text_Encoding_t /* System.Text.Encoding */
System_Text_Encoding_GetEncoding2(
	const CString /* System.String */ name,
	System_Exception_t* /* System.Exception */ outException
);

System_Text_Encoding_t /* System.Text.Encoding */
System_Text_Encoding_GetEncoding3(
	const CString /* System.String */ name,
	System_Text_EncoderFallback_t /* System.Text.EncoderFallback */ encoderFallback,
	System_Text_DecoderFallback_t /* System.Text.DecoderFallback */ decoderFallback,
	System_Exception_t* /* System.Exception */ outException
);

System_Object_t /* System.Object */
System_Text_Encoding_Clone(
	System_Text_Encoding_t /* System.Text.Encoding */ self,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Text_Encoding_GetByteCount(
	System_Text_Encoding_t /* System.Text.Encoding */ self,
	const CString /* System.String */ s,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Text_Encoding_GetByteCount1(
	System_Text_Encoding_t /* System.Text.Encoding */ self,
	const CString /* System.String */ s,
	int32_t /* System.Int32 */ index,
	int32_t /* System.Int32 */ count,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Text_Encoding_IsAlwaysNormalized(
	System_Text_Encoding_t /* System.Text.Encoding */ self,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Text_Encoding_IsAlwaysNormalized1(
	System_Text_Encoding_t /* System.Text.Encoding */ self,
	System_Text_NormalizationForm /* System.Text.NormalizationForm */ form,
	System_Exception_t* /* System.Exception */ outException
);

System_Text_Decoder_t /* System.Text.Decoder */
System_Text_Encoding_GetDecoder(
	System_Text_Encoding_t /* System.Text.Encoding */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Text_Encoder_t /* System.Text.Encoder */
System_Text_Encoding_GetEncoder(
	System_Text_Encoding_t /* System.Text.Encoding */ self,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Text_Encoding_GetMaxByteCount(
	System_Text_Encoding_t /* System.Text.Encoding */ self,
	int32_t /* System.Int32 */ charCount,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Text_Encoding_GetMaxCharCount(
	System_Text_Encoding_t /* System.Text.Encoding */ self,
	int32_t /* System.Int32 */ byteCount,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Text_Encoding_Equals(
	System_Text_Encoding_t /* System.Text.Encoding */ self,
	System_Object_t /* System.Object */ value,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Text_Encoding_GetHashCode(
	System_Text_Encoding_t /* System.Text.Encoding */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_IO_Stream_t /* System.IO.Stream */
System_Text_Encoding_CreateTranscodingStream(
	System_IO_Stream_t /* System.IO.Stream */ innerStream,
	System_Text_Encoding_t /* System.Text.Encoding */ innerStreamEncoding,
	System_Text_Encoding_t /* System.Text.Encoding */ outerStreamEncoding,
	CBool /* System.Boolean */ leaveOpen,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Text_Encoding_Destroy(System_Text_Encoding_t /* System.Text.Encoding */ self);



System_Text_Encoding_t /* System.Text.Encoding */
System_Text_EncodingProvider_GetEncoding(
	System_Text_EncodingProvider_t /* System.Text.EncodingProvider */ self,
	const CString /* System.String */ name,
	System_Exception_t* /* System.Exception */ outException
);

System_Text_Encoding_t /* System.Text.Encoding */
System_Text_EncodingProvider_GetEncoding1(
	System_Text_EncodingProvider_t /* System.Text.EncodingProvider */ self,
	int32_t /* System.Int32 */ codepage,
	System_Exception_t* /* System.Exception */ outException
);

System_Text_Encoding_t /* System.Text.Encoding */
System_Text_EncodingProvider_GetEncoding2(
	System_Text_EncodingProvider_t /* System.Text.EncodingProvider */ self,
	const CString /* System.String */ name,
	System_Text_EncoderFallback_t /* System.Text.EncoderFallback */ encoderFallback,
	System_Text_DecoderFallback_t /* System.Text.DecoderFallback */ decoderFallback,
	System_Exception_t* /* System.Exception */ outException
);

System_Text_Encoding_t /* System.Text.Encoding */
System_Text_EncodingProvider_GetEncoding3(
	System_Text_EncodingProvider_t /* System.Text.EncodingProvider */ self,
	int32_t /* System.Int32 */ codepage,
	System_Text_EncoderFallback_t /* System.Text.EncoderFallback */ encoderFallback,
	System_Text_DecoderFallback_t /* System.Text.DecoderFallback */ decoderFallback,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Text_EncodingProvider_Destroy(System_Text_EncodingProvider_t /* System.Text.EncodingProvider */ self);



System_Text_EncoderFallbackBuffer_t /* System.Text.EncoderFallbackBuffer */
System_Text_EncoderFallback_CreateFallbackBuffer(
	System_Text_EncoderFallback_t /* System.Text.EncoderFallback */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Text_EncoderFallback_Destroy(System_Text_EncoderFallback_t /* System.Text.EncoderFallback */ self);



CBool /* System.Boolean */
System_Text_EncoderFallbackBuffer_Fallback(
	System_Text_EncoderFallbackBuffer_t /* System.Text.EncoderFallbackBuffer */ self,
	uint8_t /* System.Char */ charUnknown,
	int32_t /* System.Int32 */ index,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Text_EncoderFallbackBuffer_Fallback1(
	System_Text_EncoderFallbackBuffer_t /* System.Text.EncoderFallbackBuffer */ self,
	uint8_t /* System.Char */ charUnknownHigh,
	uint8_t /* System.Char */ charUnknownLow,
	int32_t /* System.Int32 */ index,
	System_Exception_t* /* System.Exception */ outException
);

uint8_t /* System.Char */
System_Text_EncoderFallbackBuffer_GetNextChar(
	System_Text_EncoderFallbackBuffer_t /* System.Text.EncoderFallbackBuffer */ self,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Text_EncoderFallbackBuffer_MovePrevious(
	System_Text_EncoderFallbackBuffer_t /* System.Text.EncoderFallbackBuffer */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Text_EncoderFallbackBuffer_Reset(
	System_Text_EncoderFallbackBuffer_t /* System.Text.EncoderFallbackBuffer */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Text_EncoderFallbackBuffer_Destroy(System_Text_EncoderFallbackBuffer_t /* System.Text.EncoderFallbackBuffer */ self);



System_Text_DecoderFallbackBuffer_t /* System.Text.DecoderFallbackBuffer */
System_Text_DecoderFallback_CreateFallbackBuffer(
	System_Text_DecoderFallback_t /* System.Text.DecoderFallback */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Text_DecoderFallback_Destroy(System_Text_DecoderFallback_t /* System.Text.DecoderFallback */ self);



uint8_t /* System.Char */
System_Text_DecoderFallbackBuffer_GetNextChar(
	System_Text_DecoderFallbackBuffer_t /* System.Text.DecoderFallbackBuffer */ self,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Text_DecoderFallbackBuffer_MovePrevious(
	System_Text_DecoderFallbackBuffer_t /* System.Text.DecoderFallbackBuffer */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */
System_Text_DecoderFallbackBuffer_Reset(
	System_Text_DecoderFallbackBuffer_t /* System.Text.DecoderFallbackBuffer */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Text_DecoderFallbackBuffer_Destroy(System_Text_DecoderFallbackBuffer_t /* System.Text.DecoderFallbackBuffer */ self);



void /* System.Void */
System_Text_Decoder_Reset(
	System_Text_Decoder_t /* System.Text.Decoder */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Text_Decoder_Destroy(System_Text_Decoder_t /* System.Text.Decoder */ self);



void /* System.Void */
System_Text_Encoder_Reset(
	System_Text_Encoder_t /* System.Text.Encoder */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Text_Encoder_Destroy(System_Text_Encoder_t /* System.Text.Encoder */ self);



void /* System.Void */ System_Reflection_GenericParameterAttributes_Destroy(System_Reflection_GenericParameterAttributes /* System.Reflection.GenericParameterAttributes */ self);



void /* System.Void */ System_Reflection_TypeAttributes_Destroy(System_Reflection_TypeAttributes /* System.Reflection.TypeAttributes */ self);



System_Runtime_InteropServices_StructLayoutAttribute_t /* System.Runtime.InteropServices.StructLayoutAttribute */
System_Runtime_InteropServices_StructLayoutAttribute_Create(
	System_Runtime_InteropServices_LayoutKind /* System.Runtime.InteropServices.LayoutKind */ layoutKind,
	System_Exception_t* /* System.Exception */ outException
);

System_Runtime_InteropServices_StructLayoutAttribute_t /* System.Runtime.InteropServices.StructLayoutAttribute */
System_Runtime_InteropServices_StructLayoutAttribute_Create1(
	int16_t /* System.Int16 */ layoutKind,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Runtime_InteropServices_StructLayoutAttribute_Destroy(System_Runtime_InteropServices_StructLayoutAttribute_t /* System.Runtime.InteropServices.StructLayoutAttribute */ self);



CBool /* System.Boolean */
System_Attribute_IsDefined(
	System_Reflection_MemberInfo_t /* System.Reflection.MemberInfo */ element,
	System_Type_t /* System.Type */ attributeType,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Attribute_IsDefined1(
	System_Reflection_MemberInfo_t /* System.Reflection.MemberInfo */ element,
	System_Type_t /* System.Type */ attributeType,
	CBool /* System.Boolean */ inherit,
	System_Exception_t* /* System.Exception */ outException
);

System_Attribute_t /* System.Attribute */
System_Attribute_GetCustomAttribute(
	System_Reflection_MemberInfo_t /* System.Reflection.MemberInfo */ element,
	System_Type_t /* System.Type */ attributeType,
	System_Exception_t* /* System.Exception */ outException
);

System_Attribute_t /* System.Attribute */
System_Attribute_GetCustomAttribute1(
	System_Reflection_MemberInfo_t /* System.Reflection.MemberInfo */ element,
	System_Type_t /* System.Type */ attributeType,
	CBool /* System.Boolean */ inherit,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Attribute_IsDefined2(
	System_Reflection_ParameterInfo_t /* System.Reflection.ParameterInfo */ element,
	System_Type_t /* System.Type */ attributeType,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Attribute_IsDefined3(
	System_Reflection_ParameterInfo_t /* System.Reflection.ParameterInfo */ element,
	System_Type_t /* System.Type */ attributeType,
	CBool /* System.Boolean */ inherit,
	System_Exception_t* /* System.Exception */ outException
);

System_Attribute_t /* System.Attribute */
System_Attribute_GetCustomAttribute2(
	System_Reflection_ParameterInfo_t /* System.Reflection.ParameterInfo */ element,
	System_Type_t /* System.Type */ attributeType,
	System_Exception_t* /* System.Exception */ outException
);

System_Attribute_t /* System.Attribute */
System_Attribute_GetCustomAttribute3(
	System_Reflection_ParameterInfo_t /* System.Reflection.ParameterInfo */ element,
	System_Type_t /* System.Type */ attributeType,
	CBool /* System.Boolean */ inherit,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Attribute_IsDefined4(
	System_Reflection_Module_t /* System.Reflection.Module */ element,
	System_Type_t /* System.Type */ attributeType,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Attribute_IsDefined5(
	System_Reflection_Module_t /* System.Reflection.Module */ element,
	System_Type_t /* System.Type */ attributeType,
	CBool /* System.Boolean */ inherit,
	System_Exception_t* /* System.Exception */ outException
);

System_Attribute_t /* System.Attribute */
System_Attribute_GetCustomAttribute4(
	System_Reflection_Module_t /* System.Reflection.Module */ element,
	System_Type_t /* System.Type */ attributeType,
	System_Exception_t* /* System.Exception */ outException
);

System_Attribute_t /* System.Attribute */
System_Attribute_GetCustomAttribute5(
	System_Reflection_Module_t /* System.Reflection.Module */ element,
	System_Type_t /* System.Type */ attributeType,
	CBool /* System.Boolean */ inherit,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Attribute_IsDefined6(
	System_Reflection_Assembly_t /* System.Reflection.Assembly */ element,
	System_Type_t /* System.Type */ attributeType,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Attribute_IsDefined7(
	System_Reflection_Assembly_t /* System.Reflection.Assembly */ element,
	System_Type_t /* System.Type */ attributeType,
	CBool /* System.Boolean */ inherit,
	System_Exception_t* /* System.Exception */ outException
);

System_Attribute_t /* System.Attribute */
System_Attribute_GetCustomAttribute6(
	System_Reflection_Assembly_t /* System.Reflection.Assembly */ element,
	System_Type_t /* System.Type */ attributeType,
	System_Exception_t* /* System.Exception */ outException
);

System_Attribute_t /* System.Attribute */
System_Attribute_GetCustomAttribute7(
	System_Reflection_Assembly_t /* System.Reflection.Assembly */ element,
	System_Type_t /* System.Type */ attributeType,
	CBool /* System.Boolean */ inherit,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Attribute_Equals(
	System_Attribute_t /* System.Attribute */ self,
	System_Object_t /* System.Object */ obj,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Attribute_GetHashCode(
	System_Attribute_t /* System.Attribute */ self,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Attribute_Match(
	System_Attribute_t /* System.Attribute */ self,
	System_Object_t /* System.Object */ obj,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Attribute_IsDefaultAttribute(
	System_Attribute_t /* System.Attribute */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Attribute_Destroy(System_Attribute_t /* System.Attribute */ self);



void /* System.Void */ System_Runtime_InteropServices_LayoutKind_Destroy(System_Runtime_InteropServices_LayoutKind /* System.Runtime.InteropServices.LayoutKind */ self);



void /* System.Void */ System_Runtime_InteropServices_CharSet_Destroy(System_Runtime_InteropServices_CharSet /* System.Runtime.InteropServices.CharSet */ self);



CBool /* System.Boolean */
System_Reflection_ConstructorInfo_Equals(
	System_Reflection_ConstructorInfo_t /* System.Reflection.ConstructorInfo */ self,
	System_Object_t /* System.Object */ obj,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Reflection_ConstructorInfo_GetHashCode(
	System_Reflection_ConstructorInfo_t /* System.Reflection.ConstructorInfo */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Reflection_ConstructorInfo_Destroy(System_Reflection_ConstructorInfo_t /* System.Reflection.ConstructorInfo */ self);



System_Reflection_MethodInfo_t /* System.Reflection.MethodInfo */
System_Reflection_EventInfo_GetAddMethod(
	System_Reflection_EventInfo_t /* System.Reflection.EventInfo */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_MethodInfo_t /* System.Reflection.MethodInfo */
System_Reflection_EventInfo_GetRemoveMethod(
	System_Reflection_EventInfo_t /* System.Reflection.EventInfo */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_MethodInfo_t /* System.Reflection.MethodInfo */
System_Reflection_EventInfo_GetRaiseMethod(
	System_Reflection_EventInfo_t /* System.Reflection.EventInfo */ self,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_MethodInfo_t /* System.Reflection.MethodInfo */
System_Reflection_EventInfo_GetAddMethod1(
	System_Reflection_EventInfo_t /* System.Reflection.EventInfo */ self,
	CBool /* System.Boolean */ nonPublic,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_MethodInfo_t /* System.Reflection.MethodInfo */
System_Reflection_EventInfo_GetRemoveMethod1(
	System_Reflection_EventInfo_t /* System.Reflection.EventInfo */ self,
	CBool /* System.Boolean */ nonPublic,
	System_Exception_t* /* System.Exception */ outException
);

System_Reflection_MethodInfo_t /* System.Reflection.MethodInfo */
System_Reflection_EventInfo_GetRaiseMethod1(
	System_Reflection_EventInfo_t /* System.Reflection.EventInfo */ self,
	CBool /* System.Boolean */ nonPublic,
	System_Exception_t* /* System.Exception */ outException
);

CBool /* System.Boolean */
System_Reflection_EventInfo_Equals(
	System_Reflection_EventInfo_t /* System.Reflection.EventInfo */ self,
	System_Object_t /* System.Object */ obj,
	System_Exception_t* /* System.Exception */ outException
);

int32_t /* System.Int32 */
System_Reflection_EventInfo_GetHashCode(
	System_Reflection_EventInfo_t /* System.Reflection.EventInfo */ self,
	System_Exception_t* /* System.Exception */ outException
);

void /* System.Void */ System_Reflection_EventInfo_Destroy(System_Reflection_EventInfo_t /* System.Reflection.EventInfo */ self);



void /* System.Void */ System_Reflection_EventAttributes_Destroy(System_Reflection_EventAttributes /* System.Reflection.EventAttributes */ self);



void /* System.Void */ System_Reflection_InterfaceMapping_Destroy(System_Reflection_InterfaceMapping_t /* System.Reflection.InterfaceMapping */ self);




#pragma mark - END APIs
#pragma mark - BEGIN Footer
#endif /* TypeDefinitions_h */

#pragma mark - END Footer
