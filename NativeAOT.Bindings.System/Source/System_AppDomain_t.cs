using System;
using System.Collections.Concurrent;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

using NativeAOT.Core;

namespace NativeAOT.Bindings.System;

internal static unsafe class System_AppDomain_t
{
    #region Constants
    private const string NAMESPACE = nameof(System);
    private const string TYPE_NAME = nameof(AppDomain);
    private const string FULL_TYPE_NAME = NAMESPACE + "_" + TYPE_NAME;
    private const string ENTRYPOINT_PREFIX = FULL_TYPE_NAME + "_";
    #endregion Constants
    
    #region Public API
    [UnmanagedCallersOnly(EntryPoint = ENTRYPOINT_PREFIX + "TypeOf")]
    internal static void* TypeOf()
    {
        return typeof(AppDomain).AllocateGCHandleAndGetAddress();
    }
    
    [UnmanagedCallersOnly(EntryPoint = ENTRYPOINT_PREFIX + "CurrentDomain_Get")]
    internal static void* CurrentDomain_Get()
    {
        AppDomain instance = AppDomain.CurrentDomain;
        void* handleAddress = instance.AllocateGCHandleAndGetAddress();

        return handleAddress;
    }
    
    [UnmanagedCallersOnly(EntryPoint=ENTRYPOINT_PREFIX + "Id_Get")]
    internal static int Id_Get(void* handleAddress)
    {
        AppDomain? instance = InteropUtils.GetInstance<AppDomain>(handleAddress);

        if (instance is null) {
            return (int)CStatus.Failure;
        }

        return instance.Id;
    }
    
    [UnmanagedCallersOnly(EntryPoint=ENTRYPOINT_PREFIX + "IsDefaultAppDomain")]
    internal static CBool IsDefaultAppDomain(void* handleAddress)
    {
        AppDomain? instance = InteropUtils.GetInstance<AppDomain>(handleAddress);

        if (instance is null) {
            return CBool.False;
        }

        return instance.IsDefaultAppDomain().ToCBool();
    }
    
    [UnmanagedCallersOnly(EntryPoint=ENTRYPOINT_PREFIX + "BaseDirectory_Get")]
    internal static byte* BaseDirectory(void* handleAddress)
    {
        AppDomain? instance = InteropUtils.GetInstance<AppDomain>(handleAddress);

        if (instance is null) {
            return null;
        }

        string baseDirectory = instance.BaseDirectory;
        byte* baseDirectoryC = baseDirectory.CopyToCString();

        return baseDirectoryC;
    }
    
    private static readonly ConditionalWeakTable<AppDomain, NativeDelegateBox<UnhandledExceptionEventHandler, nint>[]> m_unhandledExceptionHandlersNative = new();
    
    [UnmanagedCallersOnly(EntryPoint=ENTRYPOINT_PREFIX + "UnhandledException_Add")]
    internal static void UnhandledException_Add(
        void* handleAddress,
        void* context,
        delegate* unmanaged<void*, void*, void*, void> functionPointer
    )
    {
        AppDomain? instance = InteropUtils.GetInstance<AppDomain>(handleAddress);

        if (instance is null) {
            return;
        }

        if ((nint)functionPointer == nint.Zero) {
            return;
        }

        List<NativeDelegateBox<UnhandledExceptionEventHandler, nint>> newNativeHandlers = m_unhandledExceptionHandlersNative.TryGetValue(
            instance,
            out NativeDelegateBox<UnhandledExceptionEventHandler, nint>[]? currentNativeHandlers
        ) ? currentNativeHandlers.ToList() : new();

        void Trampoline(object sender, UnhandledExceptionEventArgs eventArgs) 
        {
            void* senderHandleAddress = sender.AllocateGCHandleAndGetAddress();
            void* eventArgsHandleAddress = eventArgs.AllocateGCHandleAndGetAddress();

            functionPointer(context, senderHandleAddress, eventArgsHandleAddress);
        }
        
        newNativeHandlers.Add(new(
            Trampoline,
            context,
            (nint)functionPointer
        ));
        
        m_unhandledExceptionHandlersNative.AddOrUpdate(instance, newNativeHandlers.ToArray());

        instance.UnhandledException += Trampoline;
    }

    [UnmanagedCallersOnly(EntryPoint = ENTRYPOINT_PREFIX + "UnhandledException_Remove")]
    internal static CStatus UnhandledException_Remove(
        void* handleAddress,
        void* context,
        delegate* unmanaged<void*, void*, void*, void> functionPointer
    )
    {
        AppDomain? instance = InteropUtils.GetInstance<AppDomain>(handleAddress);

        if (instance is null) {
            return CStatus.Failure;
        }

        if ((nint)functionPointer == nint.Zero) {
            return CStatus.Failure;
        }

        if (!m_unhandledExceptionHandlersNative.TryGetValue(instance, out NativeDelegateBox<UnhandledExceptionEventHandler, nint>[]? currentNativeHandlers)) {
            return CStatus.Failure;
        }
        
        NativeDelegateBox<UnhandledExceptionEventHandler, nint>? nativeHandler = currentNativeHandlers.FirstOrDefault(h => 
            h.FunctionPointer == (nint)functionPointer && 
            h.Context == context
        );

        if (nativeHandler is null) {
            return CStatus.Failure;
        }

        UnhandledExceptionEventHandler trampoline = nativeHandler.Trampoline;

        instance.UnhandledException -= trampoline;

        List<NativeDelegateBox<UnhandledExceptionEventHandler, nint>> newNativeHandlers = currentNativeHandlers.ToList();
        newNativeHandlers.Remove(nativeHandler);

        m_unhandledExceptionHandlersNative.AddOrUpdate(instance, newNativeHandlers.ToArray());

        return CStatus.Success;
    }
    #endregion Public API
}