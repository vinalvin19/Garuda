// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Implementation/Posix/posix_mutex.h>
#include <Implementation/Posix/posix_thread.h>
#include <uBase/Thread.h>
#include <unistd.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.AggregateException.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Queue-1.h>
#include <Uno.Delegate.h>
#include <Uno.Exception.h>
#include <Uno.Func-1.h>
#include <Uno.Func-2.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Platform.Applicat-bf686309.h>
#include <Uno.Platform.ApplicationState.h>
#include <Uno.Platform.CoreApp.h>
#include <Uno.String.h>
#include <Uno.Threading.AutoResetEvent.h>
#include <Uno.Threading.Cancell-3658717e.h>
#include <Uno.Threading.Cancell-99c083b7.h>
#include <Uno.Threading.Concurr-cd310558.h>
#include <Uno.Threading.EventResetMode.h>
#include <Uno.Threading.EventWaitHandle.h>
#include <Uno.Threading.Future.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.Future--f69287de.h>
#include <Uno.Threading.FutureState.h>
#include <Uno.Threading.IDispat-1205751.h>
#include <Uno.Threading.IDispat-6494c48e.h>
#include <Uno.Threading.IDispat-8c32ce11.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.IDispat-ff0ea41a.h>
#include <Uno.Threading.ITaskScheduler.h>
#include <Uno.Threading.ManualResetEvent.h>
#include <Uno.Threading.Monitor.h>
#include <Uno.Threading.Mutex.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.Threading.Pthread-20218ef3.h>
#include <Uno.Threading.Pthread-5f9bc3e8.h>
#include <Uno.Threading.Pthread-76d261d4.h>
#include <Uno.Threading.PthreadHelpers.h>
#include <Uno.Threading.SyncDispatcher.h>
#include <Uno.Threading.Task.h>
#include <Uno.Threading.TaskDelegate.h>
#include <Uno.Threading.TaskFuture-1.h>
#include <Uno.Threading.TaskStatus.h>
#include <Uno.Threading.Thread.h>
#include <Uno.Threading.ThreadP-77c81928.h>
#include <Uno.Threading.ThreadP-a7c4648a.h>
#include <Uno.Threading.ThreadP-a88ce999.h>
#include <Uno.Threading.ThreadP-dcb97059.h>
#include <Uno.Threading.ThreadPool.h>
#include <Uno.Threading.ThreadS-435616a4.h>
#include <Uno.Threading.ThreadStart.h>
#include <Uno/Support.h>
static uString* STRINGS[5];
static uType* TYPES[18];

namespace g{
namespace Uno{
namespace Threading{

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Threading\1.2.1\$.uno
// -------------------------------------------------------------------------

// private sealed class IDispatcherExtensions.Arg1Invoke<T> :515
// {
static void IDispatcherExtensions__Arg1Invoke_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Uno::Threading::IDispatcherExtensions__Arg1Invoke, _action), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* IDispatcherExtensions__Arg1Invoke_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(IDispatcherExtensions__Arg1Invoke);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.IDispatcherExtensions.Arg1Invoke`1", options);
    type->fp_build_ = IDispatcherExtensions__Arg1Invoke_build;
    return type;
}

// public Arg1Invoke(Uno.Action<T> action, T arg) :519
void IDispatcherExtensions__Arg1Invoke__ctor__fn(IDispatcherExtensions__Arg1Invoke* __this, uDelegate* action, void* arg)
{
    __this->_action = action;
    __this->_arg() = arg;
}

// public Arg1Invoke New(Uno.Action<T> action, T arg) :519
void IDispatcherExtensions__Arg1Invoke__New1_fn(uType* __type, uDelegate* action, void* arg, IDispatcherExtensions__Arg1Invoke** __retval)
{
    IDispatcherExtensions__Arg1Invoke* obj1 = (IDispatcherExtensions__Arg1Invoke*)uNew(__type);
    IDispatcherExtensions__Arg1Invoke__ctor__fn(obj1, action, arg);
    return *__retval = obj1, void();
}

// public void Run() :524
void IDispatcherExtensions__Arg1Invoke__Run_fn(IDispatcherExtensions__Arg1Invoke* __this)
{
    __this->Run();
}

// public void Run() [instance] :524
void IDispatcherExtensions__Arg1Invoke::Run()
{
    uPtr(_action)->InvokeVoid(_arg());
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Threading\1.2.1\$.uno
// -------------------------------------------------------------------------

// private sealed class IDispatcherExtensions.Arg1InvokeFunc<T, TResult> :587
// {
static void IDispatcherExtensions__Arg1InvokeFunc_build(uType* type)
{
    type->SetPrecalc(
        type->T(1));
    type->SetFields(0,
        ::g::Uno::Func1_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(::g::Uno::Threading::IDispatcherExtensions__Arg1InvokeFunc, _action), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* IDispatcherExtensions__Arg1InvokeFunc_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(IDispatcherExtensions__Arg1InvokeFunc);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.IDispatcherExtensions.Arg1InvokeFunc`2", options);
    type->fp_build_ = IDispatcherExtensions__Arg1InvokeFunc_build;
    return type;
}

// public Arg1InvokeFunc(Uno.Func<T, TResult> action, T arg) :591
void IDispatcherExtensions__Arg1InvokeFunc__ctor__fn(IDispatcherExtensions__Arg1InvokeFunc* __this, uDelegate* action, void* arg)
{
    __this->_action = action;
    __this->_arg() = arg;
}

// public Arg1InvokeFunc New(Uno.Func<T, TResult> action, T arg) :591
void IDispatcherExtensions__Arg1InvokeFunc__New1_fn(uType* __type, uDelegate* action, void* arg, IDispatcherExtensions__Arg1InvokeFunc** __retval)
{
    IDispatcherExtensions__Arg1InvokeFunc* obj1 = (IDispatcherExtensions__Arg1InvokeFunc*)uNew(__type);
    IDispatcherExtensions__Arg1InvokeFunc__ctor__fn(obj1, action, arg);
    return *__retval = obj1, void();
}

// public void Run() :596
void IDispatcherExtensions__Arg1InvokeFunc__Run_fn(IDispatcherExtensions__Arg1InvokeFunc* __this)
{
    __this->Run();
}

// public void Run() [instance] :596
void IDispatcherExtensions__Arg1InvokeFunc::Run()
{
    uType* __types[] = {
        __type->Precalced(0/*TResult*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uPtr(_action)->Invoke(&ret2, 1, (void*)_arg());
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Threading\1.2.1\$.uno
// -------------------------------------------------------------------------

// private sealed class IDispatcherExtensions.Arg2Invoke<T1, T2> :527
// {
static void IDispatcherExtensions__Arg2Invoke_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action2_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(::g::Uno::Threading::IDispatcherExtensions__Arg2Invoke, _action), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* IDispatcherExtensions__Arg2Invoke_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 2;
    options.ObjectSize = sizeof(IDispatcherExtensions__Arg2Invoke);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.IDispatcherExtensions.Arg2Invoke`2", options);
    type->fp_build_ = IDispatcherExtensions__Arg2Invoke_build;
    return type;
}

// public Arg2Invoke(Uno.Action<T1, T2> action, T1 arg1, T2 arg2) :532
void IDispatcherExtensions__Arg2Invoke__ctor__fn(IDispatcherExtensions__Arg2Invoke* __this, uDelegate* action, void* arg1, void* arg2)
{
    __this->_action = action;
    __this->_arg1() = arg1;
    __this->_arg2() = arg2;
}

// public Arg2Invoke New(Uno.Action<T1, T2> action, T1 arg1, T2 arg2) :532
void IDispatcherExtensions__Arg2Invoke__New1_fn(uType* __type, uDelegate* action, void* arg1, void* arg2, IDispatcherExtensions__Arg2Invoke** __retval)
{
    IDispatcherExtensions__Arg2Invoke* obj1 = (IDispatcherExtensions__Arg2Invoke*)uNew(__type);
    IDispatcherExtensions__Arg2Invoke__ctor__fn(obj1, action, arg1, arg2);
    return *__retval = obj1, void();
}

// public void Run() :538
void IDispatcherExtensions__Arg2Invoke__Run_fn(IDispatcherExtensions__Arg2Invoke* __this)
{
    __this->Run();
}

// public void Run() [instance] :538
void IDispatcherExtensions__Arg2Invoke::Run()
{
    uPtr(_action)->Invoke(2, (void*)_arg1(), (void*)_arg2());
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Threading\1.2.1\$.uno
// -------------------------------------------------------------------------

// public sealed class AutoResetEvent :8
// {
static void AutoResetEvent_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::EventWaitHandle_type, interface0));
    type->SetFields(1);
}

::g::Uno::Threading::EventWaitHandle_type* AutoResetEvent_typeof()
{
    static uSStrong< ::g::Uno::Threading::EventWaitHandle_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::EventWaitHandle_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(AutoResetEvent);
    options.TypeSize = sizeof(::g::Uno::Threading::EventWaitHandle_type);
    type = (::g::Uno::Threading::EventWaitHandle_type*)uClassType::New("Uno.Threading.AutoResetEvent", options);
    type->fp_build_ = AutoResetEvent_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::Threading::EventWaitHandle__Dispose_fn;
    return type;
}

// public AutoResetEvent(bool initialState) :10
void AutoResetEvent__ctor_1_fn(AutoResetEvent* __this, bool* initialState)
{
    __this->ctor_1(*initialState);
}

// public AutoResetEvent New(bool initialState) :10
void AutoResetEvent__New2_fn(bool* initialState, AutoResetEvent** __retval)
{
    *__retval = AutoResetEvent::New2(*initialState);
}

// public AutoResetEvent(bool initialState) [instance] :10
void AutoResetEvent::ctor_1(bool initialState)
{
    ctor_(initialState, 0);
}

// public AutoResetEvent New(bool initialState) [static] :10
AutoResetEvent* AutoResetEvent::New2(bool initialState)
{
    AutoResetEvent* obj1 = (AutoResetEvent*)uNew(AutoResetEvent_typeof());
    obj1->ctor_1(initialState);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Threading\1.2.1\tasks\$.uno
// -------------------------------------------------------------------------------

// internal sealed class CancellationToken :35
// {
static void CancellationToken_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Threading::CancellationToken, _IsCancellationRequested), 0);
}

uType* CancellationToken_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(CancellationToken);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.CancellationToken", options);
    type->fp_build_ = CancellationToken_build;
    type->fp_ctor_ = (void*)CancellationToken__New1_fn;
    return type;
}

// public CancellationToken() :42
void CancellationToken__ctor__fn(CancellationToken* __this)
{
    __this->ctor_();
}

// public generated bool get_IsCancellationRequested() :39
void CancellationToken__get_IsCancellationRequested_fn(CancellationToken* __this, bool* __retval)
{
    *__retval = __this->IsCancellationRequested();
}

// private generated void set_IsCancellationRequested(bool value) :39
void CancellationToken__set_IsCancellationRequested_fn(CancellationToken* __this, bool* value)
{
    __this->IsCancellationRequested(*value);
}

// public CancellationToken New() :42
void CancellationToken__New1_fn(CancellationToken** __retval)
{
    *__retval = CancellationToken::New1();
}

// internal void SetCancellationRequested() :47
void CancellationToken__SetCancellationRequested_fn(CancellationToken* __this)
{
    __this->SetCancellationRequested();
}

// public CancellationToken() [instance] :42
void CancellationToken::ctor_()
{
    IsCancellationRequested(false);
}

// public generated bool get_IsCancellationRequested() [instance] :39
bool CancellationToken::IsCancellationRequested()
{
    return _IsCancellationRequested;
}

// private generated void set_IsCancellationRequested(bool value) [instance] :39
void CancellationToken::IsCancellationRequested(bool value)
{
    _IsCancellationRequested = value;
}

// internal void SetCancellationRequested() [instance] :47
void CancellationToken::SetCancellationRequested()
{
    IsCancellationRequested(true);
}

// public CancellationToken New() [static] :42
CancellationToken* CancellationToken::New1()
{
    CancellationToken* obj1 = (CancellationToken*)uNew(CancellationToken_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Threading\1.2.1\tasks\$.uno
// -------------------------------------------------------------------------------

// internal sealed class CancellationTokenSource :10
// {
static void CancellationTokenSource_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Threading::CancellationToken_typeof(), offsetof(::g::Uno::Threading::CancellationTokenSource, _token), 0);
}

uType* CancellationTokenSource_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(CancellationTokenSource);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.CancellationTokenSource", options);
    type->fp_build_ = CancellationTokenSource_build;
    type->fp_ctor_ = (void*)CancellationTokenSource__New1_fn;
    return type;
}

// public CancellationTokenSource() :24
void CancellationTokenSource__ctor__fn(CancellationTokenSource* __this)
{
    __this->ctor_();
}

// public void Cancel() :29
void CancellationTokenSource__Cancel_fn(CancellationTokenSource* __this)
{
    __this->Cancel();
}

// public CancellationTokenSource New() :24
void CancellationTokenSource__New1_fn(CancellationTokenSource** __retval)
{
    *__retval = CancellationTokenSource::New1();
}

// public Uno.Threading.CancellationToken get_Token() :19
void CancellationTokenSource__get_Token_fn(CancellationTokenSource* __this, ::g::Uno::Threading::CancellationToken** __retval)
{
    *__retval = __this->Token();
}

// public CancellationTokenSource() [instance] :24
void CancellationTokenSource::ctor_()
{
    _token = ::g::Uno::Threading::CancellationToken::New1();
}

// public void Cancel() [instance] :29
void CancellationTokenSource::Cancel()
{
    uPtr(_token)->SetCancellationRequested();
}

// public Uno.Threading.CancellationToken get_Token() [instance] :19
::g::Uno::Threading::CancellationToken* CancellationTokenSource::Token()
{
    return _token;
}

// public CancellationTokenSource New() [static] :24
CancellationTokenSource* CancellationTokenSource::New1()
{
    CancellationTokenSource* obj1 = (CancellationTokenSource*)uNew(CancellationTokenSource_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Threading\1.2.1\$.uno
// -------------------------------------------------------------------------

// private sealed class Future<T>.Closure<T> :453
// {
static void Future1__Closure_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(1), NULL), offsetof(::g::Uno::Threading::Future1__Closure, _action), 0,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* Future1__Closure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.ObjectSize = sizeof(Future1__Closure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.Future`1.Closure`1", options);
    type->fp_build_ = Future1__Closure_build;
    return type;
}

// public Closure(Uno.Action<T> action, T result) :458
void Future1__Closure__ctor__fn(Future1__Closure* __this, uDelegate* action, void* result)
{
    __this->_action = action;
    __this->_result() = result;
}

// public Closure New(Uno.Action<T> action, T result) :458
void Future1__Closure__New1_fn(uType* __type, uDelegate* action, void* result, Future1__Closure** __retval)
{
    Future1__Closure* obj1 = (Future1__Closure*)uNew(__type);
    Future1__Closure__ctor__fn(obj1, action, result);
    return *__retval = obj1, void();
}

// public void Run() :464
void Future1__Closure__Run_fn(Future1__Closure* __this)
{
    __this->Run();
}

// public void Run() [instance] :464
void Future1__Closure::Run()
{
    uPtr(_action)->InvokeVoid(_result());
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Threading\1.2.1\$.uno
// -------------------------------------------------------------------------

// public sealed class ConcurrentQueue<T> :162
// {
static void ConcurrentQueue_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::Queue_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::Queue_typeof()->MakeType(type->T(0), NULL),
        type->T(0));
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Uno::Threading::ConcurrentQueue, _mutex), 0,
        ::TYPES[0/*Uno.Collections.Queue`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Uno::Threading::ConcurrentQueue, _queue), 0);
}

uType* ConcurrentQueue_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(ConcurrentQueue);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.ConcurrentQueue`1", options);
    type->fp_build_ = ConcurrentQueue_build;
    type->fp_ctor_ = (void*)ConcurrentQueue__New1_fn;
    return type;
}

// public ConcurrentQueue() :167
void ConcurrentQueue__ctor__fn(ConcurrentQueue* __this)
{
    __this->ctor_();
}

// public int get_Count() :198
void ConcurrentQueue__get_Count_fn(ConcurrentQueue* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public void Enqueue(T item) :173
void ConcurrentQueue__Enqueue_fn(ConcurrentQueue* __this, void* item)
{
    ::g::Uno::Threading::Monitor::Enter(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(__this->_mutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::Queue__Enqueue_fn(uPtr(__this->_queue), item);
    }
}

// public bool get_IsEmpty() :211
void ConcurrentQueue__get_IsEmpty_fn(ConcurrentQueue* __this, bool* __retval)
{
    *__retval = __this->IsEmpty();
}

// public ConcurrentQueue New() :167
void ConcurrentQueue__New1_fn(uType* __type, ConcurrentQueue** __retval)
{
    *__retval = ConcurrentQueue::New1(__type);
}

// public bool TryDequeue(T& item) :179
void ConcurrentQueue__TryDequeue_fn(ConcurrentQueue* __this, uTRef item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*T*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    bool ret = false;
    item.Default(__types[0]);
    ::g::Uno::Threading::Monitor::Enter(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(__this->_mutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        if (uPtr(__this->_queue)->Count() > 0)
        {
            item.Store((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(__this->_queue), &ret2), ret2));
            ret = true;
        }
    }

    return *__retval = ret, void();
}

// public ConcurrentQueue() [instance] :167
void ConcurrentQueue::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Queue<T>*/),
    };
    _queue = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(__types[0]));
    _mutex = ::g::Uno::Object::New();
}

// public int get_Count() [instance] :198
int ConcurrentQueue::Count()
{
    int count = 0;
    ::g::Uno::Threading::Monitor::Enter(_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        count = uPtr(_queue)->Count();
    }

    return count;
}

// public bool get_IsEmpty() [instance] :211
bool ConcurrentQueue::IsEmpty()
{
    return Count() == 0;
}

// public ConcurrentQueue New() [static] :167
ConcurrentQueue* ConcurrentQueue::New1(uType* __type)
{
    ConcurrentQueue* obj1 = (ConcurrentQueue*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Threading\1.2.1\$.uno
// -------------------------------------------------------------------------

// private sealed class ThreadPool.DefaultWorkItem :1081
// {
static void ThreadPool__DefaultWorkItem_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Uno::Threading::ThreadPool__DefaultWorkItem, _action), 0);
}

::g::Uno::Threading::ThreadPool__WorkItem_type* ThreadPool__DefaultWorkItem_typeof()
{
    static uSStrong< ::g::Uno::Threading::ThreadPool__WorkItem_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::ThreadPool__WorkItem_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ThreadPool__DefaultWorkItem);
    options.TypeSize = sizeof(::g::Uno::Threading::ThreadPool__WorkItem_type);
    type = (::g::Uno::Threading::ThreadPool__WorkItem_type*)uClassType::New("Uno.Threading.ThreadPool.DefaultWorkItem", options);
    type->fp_build_ = ThreadPool__DefaultWorkItem_build;
    type->fp_Invoke = (void(*)(::g::Uno::Threading::ThreadPool__WorkItem*))ThreadPool__DefaultWorkItem__Invoke_fn;
    return type;
}

// public DefaultWorkItem(Uno.Action action) :1085
void ThreadPool__DefaultWorkItem__ctor_1_fn(ThreadPool__DefaultWorkItem* __this, uDelegate* action)
{
    __this->ctor_1(action);
}

// public override sealed void Invoke() :1090
void ThreadPool__DefaultWorkItem__Invoke_fn(ThreadPool__DefaultWorkItem* __this)
{
    if (::g::Uno::Delegate::op_Inequality(__this->_action, NULL))
        uPtr(__this->_action)->InvokeVoid();
}

// public DefaultWorkItem New(Uno.Action action) :1085
void ThreadPool__DefaultWorkItem__New1_fn(uDelegate* action, ThreadPool__DefaultWorkItem** __retval)
{
    *__retval = ThreadPool__DefaultWorkItem::New1(action);
}

// public DefaultWorkItem(Uno.Action action) [instance] :1085
void ThreadPool__DefaultWorkItem::ctor_1(uDelegate* action)
{
    ctor_();
    _action = action;
}

// public DefaultWorkItem New(Uno.Action action) [static] :1085
ThreadPool__DefaultWorkItem* ThreadPool__DefaultWorkItem::New1(uDelegate* action)
{
    ThreadPool__DefaultWorkItem* obj1 = (ThreadPool__DefaultWorkItem*)uNew(ThreadPool__DefaultWorkItem_typeof());
    obj1->ctor_1(action);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Threading\1.2.1\$.uno
// -------------------------------------------------------------------------

// public enum EventResetMode :224
uEnumType* EventResetMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Threading.EventResetMode", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "AutoReset", 0LL,
        "ManualReset", 1LL);
    return type;
}

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Threading\1.2.1\$.uno
// -------------------------------------------------------------------------

// public class EventWaitHandle :231
// {
static void EventWaitHandle_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(EventWaitHandle_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::PthreadHelpers__ResetEventHandle_typeof(), offsetof(::g::Uno::Threading::EventWaitHandle, _resetEventHandle), 0);
}

EventWaitHandle_type* EventWaitHandle_typeof()
{
    static uSStrong<EventWaitHandle_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(EventWaitHandle);
    options.TypeSize = sizeof(EventWaitHandle_type);
    type = (EventWaitHandle_type*)uClassType::New("Uno.Threading.EventWaitHandle", options);
    type->fp_build_ = EventWaitHandle_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))EventWaitHandle__Dispose_fn;
    return type;
}

// public EventWaitHandle(bool initialState, Uno.Threading.EventResetMode mode) :236
void EventWaitHandle__ctor__fn(EventWaitHandle* __this, bool* initialState, int* mode)
{
    __this->ctor_(*initialState, *mode);
}

// public void Dispose() :281
void EventWaitHandle__Dispose_fn(EventWaitHandle* __this)
{
    __this->Dispose();
}

// public bool Set() :271
void EventWaitHandle__Set_fn(EventWaitHandle* __this, bool* __retval)
{
    *__retval = __this->Set();
}

// public bool WaitOne() :246
void EventWaitHandle__WaitOne_fn(EventWaitHandle* __this, bool* __retval)
{
    *__retval = __this->WaitOne();
}

// public bool WaitOne(int timeoutMillis) :251
void EventWaitHandle__WaitOne1_fn(EventWaitHandle* __this, int* timeoutMillis, bool* __retval)
{
    *__retval = __this->WaitOne1(*timeoutMillis);
}

// public EventWaitHandle(bool initialState, Uno.Threading.EventResetMode mode) [instance] :236
void EventWaitHandle::ctor_(bool initialState, int mode)
{
    _resetEventHandle = ::g::Uno::Threading::PthreadHelpers::CreateResetEvent(initialState, mode == 0);
}

// public void Dispose() [instance] :281
void EventWaitHandle::Dispose()
{
    ::g::Uno::Threading::PthreadHelpers::DisposeResetEvent(_resetEventHandle);
}

// public bool Set() [instance] :271
bool EventWaitHandle::Set()
{
    return ::g::Uno::Threading::PthreadHelpers::SetResetEvent(_resetEventHandle);
}

// public bool WaitOne() [instance] :246
bool EventWaitHandle::WaitOne()
{
    return WaitOne1(-1);
}

// public bool WaitOne(int timeoutMillis) [instance] :251
bool EventWaitHandle::WaitOne1(int timeoutMillis)
{
    int timeoutMillis_ = timeoutMillis;
    return ::g::Uno::Threading::PthreadHelpers::WaitOneResetEvent(_resetEventHandle, timeoutMillis_);
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Threading\1.2.1\$.uno
// -------------------------------------------------------------------------

// public abstract class Future :302
// {
static void Future_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Future_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::FutureState_typeof(), offsetof(::g::Uno::Threading::Future, _State), 0);
}

Future_type* Future_typeof()
{
    static uSStrong<Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Future);
    options.TypeSize = sizeof(Future_type);
    type = (Future_type*)uClassType::New("Uno.Threading.Future", options);
    type->fp_build_ = Future_build;
    return type;
}

// protected generated Future() :302
void Future__ctor__fn(Future* __this)
{
    __this->ctor_();
}

// public generated Uno.Threading.FutureState get_State() :304
void Future__get_State_fn(Future* __this, int* __retval)
{
    *__retval = __this->State();
}

// protected generated void set_State(Uno.Threading.FutureState value) :304
void Future__set_State_fn(Future* __this, int* value)
{
    __this->State(*value);
}

// protected generated Future() [instance] :302
void Future::ctor_()
{
}

// public generated Uno.Threading.FutureState get_State() [instance] :304
int Future::State()
{
    return _State;
}

// protected generated void set_State(Uno.Threading.FutureState value) [instance] :304
void Future::State(int value)
{
    _State = value;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Threading\1.2.1\$.uno
// -------------------------------------------------------------------------

// public abstract class Future<T> :310
// {
static void Future1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("dispatcher");
    ::STRINGS[1] = uString::Const("This promise is already resolved or rejected");
    ::TYPES[1] = ::g::Uno::Collections::Queue_typeof()->MakeType(::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL), NULL);
    ::TYPES[0] = ::g::Uno::Collections::Queue_typeof();
    ::TYPES[2] = ::g::Uno::Exception_typeof();
    ::TYPES[3] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[5] = Future1__Closure_typeof();
    ::TYPES[6] = ::g::Uno::Threading::Promise_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::Queue_typeof()->MakeType(::g::Uno::Threading::Promise_typeof()->MakeType(type->T(0), NULL), NULL),
        ::g::Uno::Collections::Queue_typeof()->MakeType(::g::Uno::Action1_typeof()->MakeType(type->T(0), NULL), NULL),
        type->MakeMethod(0/*Invoke<Uno.Exception>*/, ::g::Uno::Exception_typeof(), NULL),
        type->MakeMethod(0/*Invoke<T>*/, type->T(0), NULL),
        ::g::Uno::Threading::Promise_typeof()->MakeType(type->T(0), NULL));
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[5/*Uno.Threading.Future`1.Closure`1*/]->MakeType(type->T(0), type->MethodTypes[0]->U(0), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(1,
        ::TYPES[1/*Uno.Collections.Queue<Uno.Action<Uno.Exception>>*/], offsetof(::g::Uno::Threading::Future1, _catchables), 0,
        ::TYPES[0/*Uno.Collections.Queue`1*/]->MakeType(::TYPES[6/*Uno.Threading.Promise`1*/]->MakeType(type->T(0), NULL), NULL), offsetof(::g::Uno::Threading::Future1, _chainables), 0,
        ::TYPES[3/*Uno.Threading.IDispatcher*/], offsetof(::g::Uno::Threading::Future1, _dispatcher), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Threading::Future1, _isDisposed), 0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Uno::Threading::Future1, _mutex), 0,
        ::TYPES[0/*Uno.Collections.Queue`1*/]->MakeType(::g::Uno::Action1_typeof()->MakeType(type->T(0), NULL), NULL), offsetof(::g::Uno::Threading::Future1, _thenables), 0,
        ::TYPES[2/*Uno.Exception*/], offsetof(::g::Uno::Threading::Future1, Reason), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

::g::Uno::Threading::Future_type* Future1_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::Future_typeof();
    options.FieldCount = 9;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.MethodTypeCount = 1;
    options.PrecalcCount = 5;
    options.ObjectSize = sizeof(Future1);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Uno.Threading.Future`1", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1);
    type->fp_build_ = Future1_build;
    type->fp_Dispose = (void(*)(::g::Uno::Threading::Future*))Future1__Dispose_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Future1__Dispose_fn;
    return type;
}

// protected Future() :333
void Future1__ctor_1_fn(Future1* __this)
{
    __this->ctor_1();
}

// protected Future(Uno.Threading.IDispatcher dispatcher) :321
void Future1__ctor_2_fn(Future1* __this, uObject* dispatcher)
{
    __this->ctor_2(dispatcher);
}

// public override void Dispose() :336
void Future1__Dispose_fn(Future1* __this)
{
    if (!__this->_isDisposed)
    {
        uPtr(__this->_mutex)->Dispose();
        __this->_isDisposed = true;
    }
}

// protected void InternalReject(Uno.Exception reason) :374
void Future1__InternalReject_fn(Future1* __this, ::g::Uno::Exception* reason)
{
    __this->InternalReject(reason);
}

// protected void InternalResolve(T result) :345
void Future1__InternalResolve_fn(Future1* __this, void* result)
{
    uType* __types[] = {
        __this->__type->GetBase(Future1_typeof())->Precalced(3/*Uno.Threading.Future<T>.Invoke<T>*/),
    };
    uDelegate* ret4;
    ::g::Uno::Threading::Promise* ret5;
    ::g::Uno::Threading::Promise* ret6;
    uPtr(__this->_mutex)->WaitOne();

    if (__this->State() != 0)
    {
        uPtr(__this->_mutex)->ReleaseMutex();
        U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"This promis...*/]));
    }

    __this->State(1);
    __this->Result() = result;

    try
    {
        while (uPtr(__this->_thenables)->Count() != 0)
            Future1__Invoke_fn(__this, __types[0], (::g::Uno::Collections::Queue__Dequeue_fn(uPtr(__this->_thenables), &ret4), ret4), result);

        while (uPtr(__this->_chainables)->Count() != 0)
            ::g::Uno::Threading::Promise__Resolve_fn(uPtr((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(__this->_chainables), &ret5), ret5)), result);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* exception = __t.Exception;

        while (uPtr(__this->_chainables)->Count() != 0)
            uPtr((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(__this->_chainables), &ret6), ret6))->Reject(exception);
    }

    uPtr(__this->_mutex)->ReleaseMutex();
}

// private void Invoke<T1>(Uno.Action<T1> action, T1 arg) :403
void Future1__Invoke_fn(Future1* __this, uType* __type, uDelegate* action, void* arg)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Threading.Future<T>.Closure<T1>*/),
    };
    Future1__Closure* ret7;
    ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(__this->_dispatcher), ::TYPES[3/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)Future1__Closure__Run_fn, (Future1__Closure__New1_fn(__types[0], action, arg, &ret7), ret7)));
}

// public Uno.Threading.Future<T> Then(Uno.Action<T> action) :408
void Future1__Then_fn(Future1* __this, uDelegate* action, Future1** __retval)
{
    *__retval = __this->Then(action);
}

// public Uno.Threading.Future<T> Then(Uno.Action<T> fulfilled, Uno.Action<Uno.Exception> rejected) :413
void Future1__Then1_fn(Future1* __this, uDelegate* fulfilled, uDelegate* rejected, Future1** __retval)
{
    *__retval = __this->Then1(fulfilled, rejected);
}

// protected Future() [instance] :333
void Future1::ctor_1()
{
    _mutex = ::g::Uno::Threading::Mutex::New1();
    ctor_2((uObject*)::g::Uno::Threading::SyncDispatcher::New1());
}

// protected Future(Uno.Threading.IDispatcher dispatcher) [instance] :321
void Future1::ctor_2(uObject* dispatcher)
{
    uType* __types[] = {
        __type->GetBase(Future1_typeof())->Precalced(0/*Uno.Collections.Queue<Uno.Threading.Promise<T>>*/),
        __type->GetBase(Future1_typeof())->Precalced(1/*Uno.Collections.Queue<Uno.Action<T>>*/),
    };
    _mutex = ::g::Uno::Threading::Mutex::New1();
    ctor_();

    if (dispatcher == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"dispatcher"*/]));

    _dispatcher = dispatcher;
    State(0);
    _catchables = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(::TYPES[1/*Uno.Collections.Queue<Uno.Action<Uno.Exception>>*/]));
    _chainables = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(__types[0]));
    _thenables = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(__types[1]));
}

// protected void InternalReject(Uno.Exception reason) [instance] :374
void Future1::InternalReject(::g::Uno::Exception* reason)
{
    uType* __types[] = {
        __type->GetBase(Future1_typeof())->Precalced(2/*Uno.Threading.Future<T>.Invoke<Uno.Exception>*/),
    };
    uDelegate* ret1;
    ::g::Uno::Threading::Promise* ret2;
    ::g::Uno::Threading::Promise* ret3;
    uPtr(_mutex)->WaitOne();

    if (State() != 0)
    {
        uPtr(_mutex)->ReleaseMutex();
        U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"This promis...*/]));
    }

    State(2);
    Reason = reason;

    try
    {
        while (uPtr(_catchables)->Count() != 0)
            Future1__Invoke_fn(this, __types[0], (::g::Uno::Collections::Queue__Dequeue_fn(uPtr(_catchables), &ret1), ret1), reason);

        while (uPtr(_chainables)->Count() != 0)
            uPtr((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(_chainables), &ret2), ret2))->Reject(reason);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* exception = __t.Exception;

        while (uPtr(_chainables)->Count() != 0)
            uPtr((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(_chainables), &ret3), ret3))->Reject(exception);
    }

    uPtr(_mutex)->ReleaseMutex();
}

// public Uno.Threading.Future<T> Then(Uno.Action<T> action) [instance] :408
Future1* Future1::Then(uDelegate* action)
{
    return Then1(action, NULL);
}

// public Uno.Threading.Future<T> Then(Uno.Action<T> fulfilled, Uno.Action<Uno.Exception> rejected) [instance] :413
Future1* Future1::Then1(uDelegate* fulfilled, uDelegate* rejected)
{
    uType* __types[] = {
        __type->GetBase(Future1_typeof())->Precalced(4/*Uno.Threading.Promise<T>*/),
        __type->GetBase(Future1_typeof())->Precalced(3/*Uno.Threading.Future<T>.Invoke<T>*/),
        __type->GetBase(Future1_typeof())->Precalced(2/*Uno.Threading.Future<T>.Invoke<Uno.Exception>*/),
    };
    ::g::Uno::Threading::Promise* chainable = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(__types[0]);
    uPtr(_mutex)->WaitOne();

    try
    {
        if (State() == 1)
        {
            if (::g::Uno::Delegate::op_Inequality(fulfilled, NULL))
                Future1__Invoke_fn(this, __types[1], fulfilled, Result());
        }
        else if (State() == 2)
        {
            if (::g::Uno::Delegate::op_Inequality(rejected, NULL))
                Future1__Invoke_fn(this, __types[2], rejected, Reason);
        }
        else
        {
            ::g::Uno::Collections::Queue__Enqueue_fn(uPtr(_chainables), chainable);

            if (::g::Uno::Delegate::op_Inequality(fulfilled, NULL))
                ::g::Uno::Collections::Queue__Enqueue_fn(uPtr(_thenables), fulfilled);

            if (::g::Uno::Delegate::op_Inequality(rejected, NULL))
                ::g::Uno::Collections::Queue__Enqueue_fn(uPtr(_catchables), rejected);
        }
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* exception = __t.Exception;
        uPtr(chainable)->Reject(exception);
    }

    uPtr(_mutex)->ReleaseMutex();
    return chainable;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Threading\1.2.1\$.uno
// -------------------------------------------------------------------------

// public enum FutureState :478
uEnumType* FutureState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Threading.FutureState", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Pending", 0LL,
        "Resolved", 1LL,
        "Rejected", 2LL);
    return type;
}

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Threading\1.2.1\$.uno
// -------------------------------------------------------------------------

// public abstract interface IDispatcher :493
// {
uInterfaceType* IDispatcher_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Threading.IDispatcher", 0, 0);
    return type;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Threading\1.2.1\$.uno
// -------------------------------------------------------------------------

// public static class IDispatcherExtensions :498
// {
static void IDispatcherExtensions_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[7] = IDispatcherExtensions__Arg1Invoke_typeof();
    ::TYPES[8] = IDispatcherExtensions__Arg1InvokeFunc_typeof();
    ::TYPES[9] = IDispatcherExtensions__Arg2Invoke_typeof();
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[7/*Uno.Threading.IDispatcherExtensions.Arg1Invoke`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->MethodTypes[1]->SetPrecalc(
        ::TYPES[8/*Uno.Threading.IDispatcherExtensions.Arg1InvokeFunc`2*/]->MakeType(type->MethodTypes[1]->U(0), type->MethodTypes[1]->U(1), NULL));
    type->MethodTypes[2]->SetPrecalc(
        ::TYPES[9/*Uno.Threading.IDispatcherExtensions.Arg2Invoke`2*/]->MakeType(type->MethodTypes[2]->U(0), type->MethodTypes[2]->U(1), NULL));
}

uClassType* IDispatcherExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Threading.IDispatcherExtensions", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1);
    type->MethodTypes[1] = type->NewMethodType(2, 1);
    type->MethodTypes[2] = type->NewMethodType(2, 1);
    type->fp_build_ = IDispatcherExtensions_build;
    return type;
}

// public static void Invoke1<T>(Uno.Threading.IDispatcher dispatcher, Uno.Action<T> action, T arg) :500
void IDispatcherExtensions__Invoke1_fn(uType* __type, uObject* dispatcher, uDelegate* action, void* arg)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Threading.IDispatcherExtensions.Arg1Invoke<T>*/),
    };
    IDispatcherExtensions__Arg1Invoke* ret1;
    ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(dispatcher), ::TYPES[3/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)IDispatcherExtensions__Arg1Invoke__Run_fn, (IDispatcherExtensions__Arg1Invoke__New1_fn(__types[0], action, arg, &ret1), ret1)));
}

// public static void Invoke1<T, TResult>(Uno.Threading.IDispatcher dispatcher, Uno.Func<T, TResult> func, T arg) :562
void IDispatcherExtensions__Invoke11_fn(uType* __type, uObject* dispatcher, uDelegate* func, void* arg)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Threading.IDispatcherExtensions.Arg1InvokeFunc<T, TResult>*/),
    };
    IDispatcherExtensions__Arg1InvokeFunc* ret2;
    ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(dispatcher), ::TYPES[3/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)IDispatcherExtensions__Arg1InvokeFunc__Run_fn, (IDispatcherExtensions__Arg1InvokeFunc__New1_fn(__types[0], func, arg, &ret2), ret2)));
}

// public static void Invoke2<T1, T2>(Uno.Threading.IDispatcher dispatcher, Uno.Action<T1, T2> action, T1 arg1, T2 arg2) :505
void IDispatcherExtensions__Invoke2_fn(uType* __type, uObject* dispatcher, uDelegate* action, void* arg1, void* arg2)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Threading.IDispatcherExtensions.Arg2Invoke<T1, T2>*/),
    };
    IDispatcherExtensions__Arg2Invoke* ret3;
    ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(dispatcher), ::TYPES[3/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)IDispatcherExtensions__Arg2Invoke__Run_fn, (IDispatcherExtensions__Arg2Invoke__New1_fn(__types[0], action, arg1, arg2, &ret3), ret3)));
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Threading\1.2.1\tasks\$.uno
// -------------------------------------------------------------------------------

// internal abstract interface ITaskScheduler :207
// {
uInterfaceType* ITaskScheduler_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Threading.ITaskScheduler", 0, 0);
    return type;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Threading\1.2.1\$.uno
// -------------------------------------------------------------------------

// public sealed class ManualResetEvent :669
// {
static void ManualResetEvent_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::EventWaitHandle_type, interface0));
    type->SetFields(1);
}

::g::Uno::Threading::EventWaitHandle_type* ManualResetEvent_typeof()
{
    static uSStrong< ::g::Uno::Threading::EventWaitHandle_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::EventWaitHandle_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ManualResetEvent);
    options.TypeSize = sizeof(::g::Uno::Threading::EventWaitHandle_type);
    type = (::g::Uno::Threading::EventWaitHandle_type*)uClassType::New("Uno.Threading.ManualResetEvent", options);
    type->fp_build_ = ManualResetEvent_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::Threading::EventWaitHandle__Dispose_fn;
    return type;
}

// public ManualResetEvent(bool initialState) :671
void ManualResetEvent__ctor_1_fn(ManualResetEvent* __this, bool* initialState)
{
    __this->ctor_1(*initialState);
}

// public ManualResetEvent New(bool initialState) :671
void ManualResetEvent__New2_fn(bool* initialState, ManualResetEvent** __retval)
{
    *__retval = ManualResetEvent::New2(*initialState);
}

// public ManualResetEvent(bool initialState) [instance] :671
void ManualResetEvent::ctor_1(bool initialState)
{
    ctor_(initialState, 1);
}

// public ManualResetEvent New(bool initialState) [static] :671
ManualResetEvent* ManualResetEvent::New2(bool initialState)
{
    ManualResetEvent* obj1 = (ManualResetEvent*)uNew(ManualResetEvent_typeof());
    obj1->ctor_1(initialState);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\UnoCore\1.2.1\source\uno\threading\$.uno
// ----------------------------------------------------------------------------------------

// public static class Monitor :23
// {
static void Monitor_build(uType* type)
{
}

uClassType* Monitor_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Threading.Monitor", options);
    type->fp_build_ = Monitor_build;
    return type;
}

// public static void Enter(object obj) :25
void Monitor__Enter_fn(uObject* obj)
{
    Monitor::Enter(obj);
}

// public static void Exit(object obj) :48
void Monitor__Exit_fn(uObject* obj)
{
    Monitor::Exit(obj);
}

// public static void Enter(object obj) [static] :25
void Monitor::Enter(uObject* obj)
{
    if (uEnterCriticalIfNull(&obj->__lockptr))
    {
        obj->__lockptr = uBase::CreateMutex();
        uExitCritical();
    }
    
    uBase::LockMutex(obj->__lockptr);
}

// public static void Exit(object obj) [static] :48
void Monitor::Exit(uObject* obj)
{
    uBase::UnlockMutex(obj->__lockptr);
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Threading\1.2.1\$.uno
// -------------------------------------------------------------------------

// public sealed class Mutex :687
// {
static void Mutex_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Mutex_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::PthreadHelpers__MutexHandle_typeof(), offsetof(::g::Uno::Threading::Mutex, _mutexHandle), 0);
}

Mutex_type* Mutex_typeof()
{
    static uSStrong<Mutex_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Mutex);
    options.TypeSize = sizeof(Mutex_type);
    type = (Mutex_type*)uClassType::New("Uno.Threading.Mutex", options);
    type->fp_build_ = Mutex_build;
    type->fp_ctor_ = (void*)Mutex__New1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Mutex__Dispose_fn;
    return type;
}

// public Mutex() :692
void Mutex__ctor__fn(Mutex* __this)
{
    __this->ctor_();
}

// public void Dispose() :727
void Mutex__Dispose_fn(Mutex* __this)
{
    __this->Dispose();
}

// public Mutex New() :692
void Mutex__New1_fn(Mutex** __retval)
{
    *__retval = Mutex::New1();
}

// public void ReleaseMutex() :717
void Mutex__ReleaseMutex_fn(Mutex* __this)
{
    __this->ReleaseMutex();
}

// public bool WaitOne() :702
void Mutex__WaitOne_fn(Mutex* __this, bool* __retval)
{
    *__retval = __this->WaitOne();
}

// public bool WaitOne(int millisecondsTimeout) :707
void Mutex__WaitOne1_fn(Mutex* __this, int* millisecondsTimeout, bool* __retval)
{
    *__retval = __this->WaitOne1(*millisecondsTimeout);
}

// public Mutex() [instance] :692
void Mutex::ctor_()
{
    ::g::Uno::Threading::PthreadHelpers::CreateMutex(&_mutexHandle);
}

// public void Dispose() [instance] :727
void Mutex::Dispose()
{
    ::g::Uno::Threading::PthreadHelpers::DisposeMutex(&_mutexHandle);
}

// public void ReleaseMutex() [instance] :717
void Mutex::ReleaseMutex()
{
    ::g::Uno::Threading::PthreadHelpers::ReleaseMutex(&_mutexHandle);
}

// public bool WaitOne() [instance] :702
bool Mutex::WaitOne()
{
    return WaitOne1(-1);
}

// public bool WaitOne(int millisecondsTimeout) [instance] :707
bool Mutex::WaitOne1(int millisecondsTimeout)
{
    return ::g::Uno::Threading::PthreadHelpers::WaitOneMutex(&_mutexHandle, millisecondsTimeout);
}

// public Mutex New() [static] :692
Mutex* Mutex::New1()
{
    Mutex* obj1 = (Mutex*)uNew(Mutex_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Threading\1.2.1\implementation\posix\$.uno
// ----------------------------------------------------------------------------------------------

// public struct PthreadHelpers.MutexHandle :42
// {
static void PthreadHelpers__MutexHandle_build(uType* type)
{
}

uStructType* PthreadHelpers__MutexHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(pthread_mutex_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Threading.PthreadHelpers.MutexHandle", options);
    type->fp_build_ = PthreadHelpers__MutexHandle_build;
    return type;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Threading\1.2.1\$.uno
// -------------------------------------------------------------------------

// private sealed class ThreadPool.ParameterizedWorkItem<TState> :1097
// {
static void ThreadPool__ParameterizedWorkItem_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Uno::Threading::ThreadPool__ParameterizedWorkItem, _action), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

::g::Uno::Threading::ThreadPool__WorkItem_type* ThreadPool__ParameterizedWorkItem_typeof()
{
    static uSStrong< ::g::Uno::Threading::ThreadPool__WorkItem_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::ThreadPool__WorkItem_typeof();
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(ThreadPool__ParameterizedWorkItem);
    options.TypeSize = sizeof(::g::Uno::Threading::ThreadPool__WorkItem_type);
    type = (::g::Uno::Threading::ThreadPool__WorkItem_type*)uClassType::New("Uno.Threading.ThreadPool.ParameterizedWorkItem`1", options);
    type->fp_build_ = ThreadPool__ParameterizedWorkItem_build;
    type->fp_Invoke = (void(*)(::g::Uno::Threading::ThreadPool__WorkItem*))ThreadPool__ParameterizedWorkItem__Invoke_fn;
    return type;
}

// public override sealed void Invoke() :1108
void ThreadPool__ParameterizedWorkItem__Invoke_fn(ThreadPool__ParameterizedWorkItem* __this)
{
    if (::g::Uno::Delegate::op_Inequality(__this->_action, NULL))
        uPtr(__this->_action)->InvokeVoid(__this->_state());
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Threading\1.2.1\$.uno
// -------------------------------------------------------------------------

// public class Promise<T> :749
// {
static void Promise_build(uType* type)
{
    ::TYPES[10] = ::g::Uno::Threading::TaskFuture_typeof();
    type->SetBase(::g::Uno::Threading::Future1_typeof()->MakeType(type->T(0), NULL));
    type->SetPrecalc(
        ::g::Uno::Threading::TaskFuture_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(9);
}

::g::Uno::Threading::Future_type* Promise_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::Future1_typeof();
    options.FieldCount = 9;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(Promise);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Uno.Threading.Promise`1", options);
    type->fp_build_ = Promise_build;
    type->fp_ctor_ = (void*)Promise__New1_fn;
    type->fp_Cancel = (void(*)(::g::Uno::Threading::Future*, bool*))Promise__Cancel_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::Threading::Future1__Dispose_fn;
    return type;
}

// public Promise() :771
void Promise__ctor_3_fn(Promise* __this)
{
    __this->ctor_3();
}

// public Promise(T result) :759
void Promise__ctor_4_fn(Promise* __this, void* result)
{
    __this->ctor_1();
    Promise__Resolve_fn(__this, result);
}

// public Promise(Uno.Threading.IDispatcher dispatcher) :769
void Promise__ctor_5_fn(Promise* __this, uObject* dispatcher)
{
    __this->ctor_5(dispatcher);
}

// public override void Cancel([bool shutdownGracefully]) :755
void Promise__Cancel_fn(Promise* __this, bool* shutdownGracefully)
{
}

// public Promise New() :771
void Promise__New1_fn(uType* __type, Promise** __retval)
{
    *__retval = Promise::New1(__type);
}

// public Promise New(T result) :759
void Promise__New2_fn(uType* __type, void* result, Promise** __retval)
{
    Promise* obj1 = (Promise*)uNew(__type);
    Promise__ctor_4_fn(obj1, result);
    return *__retval = obj1, void();
}

// public void Reject(Uno.Exception reason) :778
void Promise__Reject_fn(Promise* __this, ::g::Uno::Exception* reason)
{
    __this->Reject(reason);
}

// public void Resolve(T result) :773
void Promise__Resolve_fn(Promise* __this, void* result)
{
    ::g::Uno::Threading::Future1__InternalResolve_fn(__this, result);
}

// public static Uno.Threading.Future<T> Run(Uno.Func<T> func) :788
void Promise__Run_fn(uType* __type, uDelegate* func, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Promise::Run(__type, func);
}

// public static Uno.Threading.Future<T> Run(Uno.Threading.IDispatcher dispatcher, Uno.Func<T> func) :783
void Promise__Run1_fn(uType* __type, uObject* dispatcher, uDelegate* func, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Promise::Run1(__type, dispatcher, func);
}

// public Promise() [instance] :771
void Promise::ctor_3()
{
    ctor_1();
}

// public Promise(Uno.Threading.IDispatcher dispatcher) [instance] :769
void Promise::ctor_5(uObject* dispatcher)
{
    ctor_2(dispatcher);
}

// public void Reject(Uno.Exception reason) [instance] :778
void Promise::Reject(::g::Uno::Exception* reason)
{
    InternalReject(reason);
}

// public Promise New() [static] :771
Promise* Promise::New1(uType* __type)
{
    Promise* obj4 = (Promise*)uNew(__type);
    obj4->ctor_3();
    return obj4;
}

// public static Uno.Threading.Future<T> Run(Uno.Func<T> func) [static] :788
::g::Uno::Threading::Future1* Promise::Run(uType* __type, uDelegate* func)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Threading.TaskFuture<T>*/),
    };
    return (::g::Uno::Threading::TaskFuture*)::g::Uno::Threading::TaskFuture::New1(__types[0], func);
}

// public static Uno.Threading.Future<T> Run(Uno.Threading.IDispatcher dispatcher, Uno.Func<T> func) [static] :783
::g::Uno::Threading::Future1* Promise::Run1(uType* __type, uObject* dispatcher, uDelegate* func)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Threading.TaskFuture<T>*/),
    };
    return (::g::Uno::Threading::TaskFuture*)::g::Uno::Threading::TaskFuture::New2(__types[0], dispatcher, func);
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Threading\1.2.1\implementation\posix\$.uno
// ----------------------------------------------------------------------------------------------

// internal static extern class PthreadHelpers :7
// {
static void PthreadHelpers_build(uType* type)
{
}

uClassType* PthreadHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Threading.PthreadHelpers", options);
    type->fp_build_ = PthreadHelpers_build;
    return type;
}

// public static void CreateMutex(Uno.Threading.PthreadHelpers.MutexHandle& mutexHandle) :47
void PthreadHelpers__CreateMutex_fn(pthread_mutex_t* mutexHandle)
{
    PthreadHelpers::CreateMutex(mutexHandle);
}

// public static Uno.Threading.PthreadHelpers.ResetEventHandle CreateResetEvent(bool initialState, bool autoReset) :114
void PthreadHelpers__CreateResetEvent_fn(bool* initialState, bool* autoReset, uPosixResetEvent ** __retval)
{
    *__retval = PthreadHelpers::CreateResetEvent(*initialState, *autoReset);
}

// public static Uno.Threading.PthreadHelpers.ThreadHandle CreateThread(Uno.Threading.Thread thread) :18
void PthreadHelpers__CreateThread_fn(::g::Uno::Threading::Thread* thread, pthread_t* __retval)
{
    *__retval = PthreadHelpers::CreateThread(thread);
}

// public static void DisposeMutex(Uno.Threading.PthreadHelpers.MutexHandle& mutexHandle) :64
void PthreadHelpers__DisposeMutex_fn(pthread_mutex_t* mutexHandle)
{
    PthreadHelpers::DisposeMutex(mutexHandle);
}

// public static void DisposeResetEvent(Uno.Threading.PthreadHelpers.ResetEventHandle resetEventHandle) :139
void PthreadHelpers__DisposeResetEvent_fn(uPosixResetEvent ** resetEventHandle)
{
    PthreadHelpers::DisposeResetEvent(*resetEventHandle);
}

// public static Uno.Threading.Thread GetCurrentThread() :145
void PthreadHelpers__GetCurrentThread_fn(::g::Uno::Threading::Thread** __retval)
{
    *__retval = PthreadHelpers::GetCurrentThread();
}

// public static void JoinThread(Uno.Threading.PthreadHelpers.ThreadHandle threadHandle) :27
void PthreadHelpers__JoinThread_fn(pthread_t* threadHandle)
{
    PthreadHelpers::JoinThread(*threadHandle);
}

// public static void ReleaseMutex(Uno.Threading.PthreadHelpers.MutexHandle& mutexHandle) :59
void PthreadHelpers__ReleaseMutex_fn(pthread_mutex_t* mutexHandle)
{
    PthreadHelpers::ReleaseMutex(mutexHandle);
}

// public static void SetCurrentThread(Uno.Threading.Thread thread) :151
void PthreadHelpers__SetCurrentThread_fn(::g::Uno::Threading::Thread* thread)
{
    PthreadHelpers::SetCurrentThread(thread);
}

// public static bool SetResetEvent(Uno.Threading.PthreadHelpers.ResetEventHandle resetEventHandle) :134
void PthreadHelpers__SetResetEvent_fn(uPosixResetEvent ** resetEventHandle, bool* __retval)
{
    *__retval = PthreadHelpers::SetResetEvent(*resetEventHandle);
}

// public static void Sleep(int millis) :33
void PthreadHelpers__Sleep_fn(int* millis)
{
    PthreadHelpers::Sleep(*millis);
}

// public static bool WaitOneMutex(Uno.Threading.PthreadHelpers.MutexHandle& mutexHandle, int millisecondsTimeout) :54
void PthreadHelpers__WaitOneMutex_fn(pthread_mutex_t* mutexHandle, int* millisecondsTimeout, bool* __retval)
{
    *__retval = PthreadHelpers::WaitOneMutex(mutexHandle, *millisecondsTimeout);
}

// public static bool WaitOneResetEvent(Uno.Threading.PthreadHelpers.ResetEventHandle resetEventHandle, int timeoutMillis) :124
void PthreadHelpers__WaitOneResetEvent_fn(uPosixResetEvent ** resetEventHandle, int* timeoutMillis, bool* __retval)
{
    *__retval = PthreadHelpers::WaitOneResetEvent(*resetEventHandle, *timeoutMillis);
}

// public static void CreateMutex(Uno.Threading.PthreadHelpers.MutexHandle& mutexHandle) [static] :47
void PthreadHelpers::CreateMutex(pthread_mutex_t* mutexHandle)
{
    if (!uPthreadCreateMutex(mutexHandle) != 0)
        U_THROW(::g::Uno::Exception::New2(uString::Utf8("uPthreadCreateMutex failed!")));
}

// public static Uno.Threading.PthreadHelpers.ResetEventHandle CreateResetEvent(bool initialState, bool autoReset) [static] :114
uPosixResetEvent * PthreadHelpers::CreateResetEvent(bool initialState, bool autoReset)
{
    uPosixResetEvent *resetEventHandle = uPosixCreateResetEvent(initialState, autoReset);
    
    if (resetEventHandle == NULL)
        U_THROW(::g::Uno::Exception::New2(uString::Utf8("uPosixCreateResetEvent() failed!")));
    
    return resetEventHandle;
}

// public static Uno.Threading.PthreadHelpers.ThreadHandle CreateThread(Uno.Threading.Thread thread) [static] :18
pthread_t PthreadHelpers::CreateThread(::g::Uno::Threading::Thread* thread)
{
    pthread_t threadHandle;
    if (!uPthreadsCreateThread(thread, &threadHandle))
        U_THROW(::g::Uno::Exception::New2(uString::Utf8("uPthreadsCreateThread failed!")));
    
    return threadHandle;
}

// public static void DisposeMutex(Uno.Threading.PthreadHelpers.MutexHandle& mutexHandle) [static] :64
void PthreadHelpers::DisposeMutex(pthread_mutex_t* mutexHandle)
{
    pthread_mutex_destroy(mutexHandle);
}

// public static void DisposeResetEvent(Uno.Threading.PthreadHelpers.ResetEventHandle resetEventHandle) [static] :139
void PthreadHelpers::DisposeResetEvent(uPosixResetEvent * resetEventHandle)
{
    uPosixDisposeResetEvent(resetEventHandle);
}

// public static Uno.Threading.Thread GetCurrentThread() [static] :145
::g::Uno::Threading::Thread* PthreadHelpers::GetCurrentThread()
{
    return uPthreadsGetCurrentThread();
}

// public static void JoinThread(Uno.Threading.PthreadHelpers.ThreadHandle threadHandle) [static] :27
void PthreadHelpers::JoinThread(pthread_t threadHandle)
{
    pthread_join(threadHandle, NULL);
}

// public static void ReleaseMutex(Uno.Threading.PthreadHelpers.MutexHandle& mutexHandle) [static] :59
void PthreadHelpers::ReleaseMutex(pthread_mutex_t* mutexHandle)
{
    pthread_mutex_unlock(mutexHandle);
}

// public static void SetCurrentThread(Uno.Threading.Thread thread) [static] :151
void PthreadHelpers::SetCurrentThread(::g::Uno::Threading::Thread* thread)
{
    uPthreadsSetCurrentThread(thread);
}

// public static bool SetResetEvent(Uno.Threading.PthreadHelpers.ResetEventHandle resetEventHandle) [static] :134
bool PthreadHelpers::SetResetEvent(uPosixResetEvent * resetEventHandle)
{
    return uPosixSetResetEvent(resetEventHandle);
}

// public static void Sleep(int millis) [static] :33
void PthreadHelpers::Sleep(int millis)
{
    // TODO: deal with long sleeps (overflow in the multiplication)!
    usleep(millis * 1000);
}

// public static bool WaitOneMutex(Uno.Threading.PthreadHelpers.MutexHandle& mutexHandle, int millisecondsTimeout) [static] :54
bool PthreadHelpers::WaitOneMutex(pthread_mutex_t* mutexHandle, int millisecondsTimeout)
{
    return uPthreadWaitOneMutex(mutexHandle, millisecondsTimeout);
}

// public static bool WaitOneResetEvent(Uno.Threading.PthreadHelpers.ResetEventHandle resetEventHandle, int timeoutMillis) [static] :124
bool PthreadHelpers::WaitOneResetEvent(uPosixResetEvent * resetEventHandle, int timeoutMillis)
{
    return uPosixWaitOneResetEvent(resetEventHandle, timeoutMillis);
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Threading\1.2.1\implementation\posix\$.uno
// ----------------------------------------------------------------------------------------------

// public struct PthreadHelpers.ResetEventHandle :110
// {
static void PthreadHelpers__ResetEventHandle_build(uType* type)
{
}

uStructType* PthreadHelpers__ResetEventHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(uPosixResetEvent *);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Threading.PthreadHelpers.ResetEventHandle", options);
    type->fp_build_ = PthreadHelpers__ResetEventHandle_build;
    return type;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Threading\1.2.1\$.uno
// -------------------------------------------------------------------------

// internal sealed class SyncDispatcher :932
// {
static void SyncDispatcher_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(SyncDispatcher_type, interface0));
}

SyncDispatcher_type* SyncDispatcher_typeof()
{
    static uSStrong<SyncDispatcher_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SyncDispatcher);
    options.TypeSize = sizeof(SyncDispatcher_type);
    type = (SyncDispatcher_type*)uClassType::New("Uno.Threading.SyncDispatcher", options);
    type->fp_build_ = SyncDispatcher_build;
    type->fp_ctor_ = (void*)SyncDispatcher__New1_fn;
    type->interface0.fp_Invoke = (void(*)(uObject*, uDelegate*))SyncDispatcher__Invoke_fn;
    return type;
}

// public generated SyncDispatcher() :932
void SyncDispatcher__ctor__fn(SyncDispatcher* __this)
{
    __this->ctor_();
}

// public void Invoke(Uno.Action action) :934
void SyncDispatcher__Invoke_fn(SyncDispatcher* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// public generated SyncDispatcher New() :932
void SyncDispatcher__New1_fn(SyncDispatcher** __retval)
{
    *__retval = SyncDispatcher::New1();
}

// public generated SyncDispatcher() [instance] :932
void SyncDispatcher::ctor_()
{
}

// public void Invoke(Uno.Action action) [instance] :934
void SyncDispatcher::Invoke(uDelegate* action)
{
    uPtr(action)->InvokeVoid();
}

// public generated SyncDispatcher New() [static] :932
SyncDispatcher* SyncDispatcher::New1()
{
    SyncDispatcher* obj1 = (SyncDispatcher*)uNew(SyncDispatcher_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Threading\1.2.1\tasks\$.uno
// -------------------------------------------------------------------------------

// internal sealed class Task :66
// {
static void Task_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Exception_typeof();
    ::TYPES[11] = ::TYPES[2/*Uno.Exception*/]->Array();
    ::TYPES[12] = ::g::Uno::Threading::ITaskScheduler_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Task_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::CancellationTokenSource_typeof(), offsetof(::g::Uno::Threading::Task, _cancellationTokenSource), 0,
        ::g::Uno::AggregateException_typeof(), offsetof(::g::Uno::Threading::Task, _exception), 0,
        ::g::Uno::Threading::ManualResetEvent_typeof(), offsetof(::g::Uno::Threading::Task, _manualResetEvent), 0,
        ::g::Uno::Threading::TaskDelegate_typeof(), offsetof(::g::Uno::Threading::Task, _taskDelegate), 0,
        ::g::Uno::Threading::TaskStatus_typeof(), offsetof(::g::Uno::Threading::Task, _taskStatus), 0);
}

Task_type* Task_typeof()
{
    static uSStrong<Task_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Task);
    options.TypeSize = sizeof(Task_type);
    type = (Task_type*)uClassType::New("Uno.Threading.Task", options);
    type->fp_build_ = Task_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))Task__Dispose_fn;
    return type;
}

// public Task(Uno.Threading.TaskDelegate taskDelegate) :107
void Task__ctor__fn(Task* __this, uDelegate* taskDelegate)
{
    __this->ctor_(taskDelegate);
}

// public Uno.Threading.CancellationTokenSource get_CancellationTokenSource() :93
void Task__get_CancellationTokenSource_fn(Task* __this, ::g::Uno::Threading::CancellationTokenSource** __retval)
{
    *__retval = __this->CancellationTokenSource();
}

// public void Dispose() :122
void Task__Dispose_fn(Task* __this)
{
    __this->Dispose();
}

// public Uno.AggregateException get_Exception() :87
void Task__get_Exception_fn(Task* __this, ::g::Uno::AggregateException** __retval)
{
    *__retval = __this->Exception();
}

// protected void set_Exception(Uno.AggregateException value) :88
void Task__set_Exception_fn(Task* __this, ::g::Uno::AggregateException* value)
{
    __this->Exception(value);
}

// internal void Execute() :127
void Task__Execute_fn(Task* __this)
{
    __this->Execute();
}

// protected void InvokeTaskDelegate() :146
void Task__InvokeTaskDelegate_fn(Task* __this)
{
    __this->InvokeTaskDelegate();
}

// public Task New(Uno.Threading.TaskDelegate taskDelegate) :107
void Task__New1_fn(uDelegate* taskDelegate, Task** __retval)
{
    *__retval = Task::New1(taskDelegate);
}

// public static Uno.Threading.Task Run(Uno.Threading.TaskDelegate taskDelegate) :166
void Task__Run_fn(uDelegate* taskDelegate, Task** __retval)
{
    *__retval = Task::Run(taskDelegate);
}

// public static Uno.Threading.Task Run(Uno.Threading.TaskDelegate taskDelegate, Uno.Threading.ITaskScheduler scheduler) :152
void Task__Run1_fn(uDelegate* taskDelegate, uObject* scheduler, Task** __retval)
{
    *__retval = Task::Run1(taskDelegate, scheduler);
}

// public Uno.Threading.TaskStatus get_Status() :81
void Task__get_Status_fn(Task* __this, int* __retval)
{
    *__retval = __this->Status();
}

// protected void set_Status(Uno.Threading.TaskStatus value) :82
void Task__set_Status_fn(Task* __this, int* value)
{
    __this->Status(*value);
}

// public Task(Uno.Threading.TaskDelegate taskDelegate) [instance] :107
void Task::ctor_(uDelegate* taskDelegate)
{
    _cancellationTokenSource = ::g::Uno::Threading::CancellationTokenSource::New1();
    _manualResetEvent = ::g::Uno::Threading::ManualResetEvent::New2(false);
    _taskDelegate = taskDelegate;
}

// public Uno.Threading.CancellationTokenSource get_CancellationTokenSource() [instance] :93
::g::Uno::Threading::CancellationTokenSource* Task::CancellationTokenSource()
{
    return _cancellationTokenSource;
}

// public void Dispose() [instance] :122
void Task::Dispose()
{
    uPtr(_manualResetEvent)->Dispose();
}

// public Uno.AggregateException get_Exception() [instance] :87
::g::Uno::AggregateException* Task::Exception()
{
    return _exception;
}

// protected void set_Exception(Uno.AggregateException value) [instance] :88
void Task::Exception(::g::Uno::AggregateException* value)
{
    _exception = value;
}

// internal void Execute() [instance] :127
void Task::Execute()
{
    {
        const auto __finally_fun = [&]()
        {
            uPtr(_manualResetEvent)->Set();
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        try
        {
            Status(3);
            InvokeTaskDelegate();
            Status(2);
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e = __t.Exception;
            Status(1);
            Exception(::g::Uno::AggregateException::New7(uArray::Init< ::g::Uno::Exception*>(::TYPES[11/*Uno.Exception[]*/], 1, e)));
        }
    }
}

// protected void InvokeTaskDelegate() [instance] :146
void Task::InvokeTaskDelegate()
{
    if (::g::Uno::Delegate::op_Inequality(_taskDelegate, NULL))
        uPtr(_taskDelegate)->InvokeVoid(uPtr(CancellationTokenSource())->Token());
}

// public Uno.Threading.TaskStatus get_Status() [instance] :81
int Task::Status()
{
    return _taskStatus;
}

// protected void set_Status(Uno.Threading.TaskStatus value) [instance] :82
void Task::Status(int value)
{
    _taskStatus = value;
}

// public Task New(Uno.Threading.TaskDelegate taskDelegate) [static] :107
Task* Task::New1(uDelegate* taskDelegate)
{
    Task* obj1 = (Task*)uNew(Task_typeof());
    obj1->ctor_(taskDelegate);
    return obj1;
}

// public static Uno.Threading.Task Run(Uno.Threading.TaskDelegate taskDelegate) [static] :166
Task* Task::Run(uDelegate* taskDelegate)
{
    return Task::Run1(taskDelegate, (uObject*)::g::Uno::Threading::ThreadPoolTaskScheduler::Default());
}

// public static Uno.Threading.Task Run(Uno.Threading.TaskDelegate taskDelegate, Uno.Threading.ITaskScheduler scheduler) [static] :152
Task* Task::Run1(uDelegate* taskDelegate, uObject* scheduler)
{
    Task* task = Task::New1(taskDelegate);
    ::g::Uno::Threading::ITaskScheduler::ScheduleTask(uInterface(uPtr(scheduler), ::TYPES[12/*Uno.Threading.ITaskScheduler*/]), task);
    return task;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Threading\1.2.1\tasks\$.uno
// -------------------------------------------------------------------------------

// internal delegate void TaskDelegate(Uno.Threading.CancellationToken cancellationToken) :62
uDelegateType* TaskDelegate_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Threading.TaskDelegate", 1, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Uno::Threading::CancellationToken_typeof());
    return type;
}

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Threading\1.2.1\$.uno
// -------------------------------------------------------------------------

// internal sealed class TaskFuture<T> :794
// {
static void TaskFuture_build(uType* type)
{
    ::TYPES[13] = ::g::Uno::Threading::TaskDelegate_typeof();
    ::TYPES[2] = ::g::Uno::Exception_typeof();
    type->SetBase(::g::Uno::Threading::Future1_typeof()->MakeType(type->T(0), NULL));
    type->SetPrecalc(
        type->T(0));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(9,
        ::g::Uno::Func_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Uno::Threading::TaskFuture, _func), 0,
        ::g::Uno::Threading::Task_typeof(), offsetof(::g::Uno::Threading::TaskFuture, _task), 0);
}

::g::Uno::Threading::Future_type* TaskFuture_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::Future1_typeof();
    options.FieldCount = 11;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(TaskFuture);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Uno.Threading.TaskFuture`1", options);
    type->fp_build_ = TaskFuture_build;
    type->fp_Cancel = (void(*)(::g::Uno::Threading::Future*, bool*))TaskFuture__Cancel_fn;
    type->fp_Dispose = (void(*)(::g::Uno::Threading::Future*))TaskFuture__Dispose_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))TaskFuture__Dispose_fn;
    return type;
}

// public TaskFuture(Uno.Func<T> func) :806
void TaskFuture__ctor_3_fn(TaskFuture* __this, uDelegate* func)
{
    __this->ctor_3(func);
}

// public TaskFuture(Uno.Threading.IDispatcher dispatcher, Uno.Func<T> func) :800
void TaskFuture__ctor_4_fn(TaskFuture* __this, uObject* dispatcher, uDelegate* func)
{
    __this->ctor_4(dispatcher, func);
}

// public override sealed void Cancel([bool shutdownGracefully]) :832
void TaskFuture__Cancel_fn(TaskFuture* __this, bool* shutdownGracefully)
{
    uPtr(uPtr(__this->_task)->CancellationTokenSource())->Cancel();
}

// public override sealed void Dispose() :837
void TaskFuture__Dispose_fn(TaskFuture* __this)
{
    ::g::Uno::Threading::Future1__Dispose_fn(__this);
    uPtr(__this->_task)->Dispose();
}

// private void Invoke(Uno.Threading.CancellationToken cancellationToken) :812
void TaskFuture__Invoke1_fn(TaskFuture* __this, ::g::Uno::Threading::CancellationToken* cancellationToken)
{
    __this->Invoke1(cancellationToken);
}

// public TaskFuture New(Uno.Func<T> func) :806
void TaskFuture__New1_fn(uType* __type, uDelegate* func, TaskFuture** __retval)
{
    *__retval = TaskFuture::New1(__type, func);
}

// public TaskFuture New(Uno.Threading.IDispatcher dispatcher, Uno.Func<T> func) :800
void TaskFuture__New2_fn(uType* __type, uObject* dispatcher, uDelegate* func, TaskFuture** __retval)
{
    *__retval = TaskFuture::New2(__type, dispatcher, func);
}

// public TaskFuture(Uno.Func<T> func) [instance] :806
void TaskFuture::ctor_3(uDelegate* func)
{
    ctor_1();
    _func = func;
    _task = ::g::Uno::Threading::Task::Run(uDelegate::New(::TYPES[13/*Uno.Threading.TaskDelegate*/], (void*)TaskFuture__Invoke1_fn, this));
}

// public TaskFuture(Uno.Threading.IDispatcher dispatcher, Uno.Func<T> func) [instance] :800
void TaskFuture::ctor_4(uObject* dispatcher, uDelegate* func)
{
    ctor_2(dispatcher);
    _func = func;
    _task = ::g::Uno::Threading::Task::Run(uDelegate::New(::TYPES[13/*Uno.Threading.TaskDelegate*/], (void*)TaskFuture__Invoke1_fn, this));
}

// private void Invoke(Uno.Threading.CancellationToken cancellationToken) [instance] :812
void TaskFuture::Invoke1(::g::Uno::Threading::CancellationToken* cancellationToken)
{
    uType* __types[] = {
        __type->Precalced(0/*T*/),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT result(__types[0], U_ALLOCA(__types[0]->ValueSize));

    try
    {
        result = uT(__types[0], U_ALLOCA(__types[0]->ValueSize));

        if (::g::Uno::Delegate::op_Inequality(_func, NULL))
            result = (uPtr(_func)->Invoke(&ret3), ret3);

        ::g::Uno::Threading::Future1__InternalResolve_fn(this, result);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        InternalReject(e);
    }
}

// public TaskFuture New(Uno.Func<T> func) [static] :806
TaskFuture* TaskFuture::New1(uType* __type, uDelegate* func)
{
    TaskFuture* obj2 = (TaskFuture*)uNew(__type);
    obj2->ctor_3(func);
    return obj2;
}

// public TaskFuture New(Uno.Threading.IDispatcher dispatcher, Uno.Func<T> func) [static] :800
TaskFuture* TaskFuture::New2(uType* __type, uObject* dispatcher, uDelegate* func)
{
    TaskFuture* obj1 = (TaskFuture*)uNew(__type);
    obj1->ctor_4(dispatcher, func);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Threading\1.2.1\tasks\$.uno
// -------------------------------------------------------------------------------

// internal enum TaskStatus :53
uEnumType* TaskStatus_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Threading.TaskStatus", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Created", 0LL,
        "Faulted", 1LL,
        "RanToCompletion", 2LL,
        "Running", 3LL);
    return type;
}

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Threading\1.2.1\$.uno
// -------------------------------------------------------------------------

// public sealed class Thread :962
// {
static void Thread_build(uType* type)
{
    ::STRINGS[2] = uString::Const("start");
    ::STRINGS[3] = uString::Const("Thread has not been started.");
    ::STRINGS[4] = uString::Const("Thread is running or terminated; it cannot restart.");
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Threading::Thread, _started), 0,
        ::g::Uno::Threading::PthreadHelpers__ThreadHandle_typeof(), offsetof(::g::Uno::Threading::Thread, _threadHandle), 0,
        ::g::Uno::Threading::ThreadStart_typeof(), offsetof(::g::Uno::Threading::Thread, _threadStart), 0);
}

uType* Thread_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Thread);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.Thread", options);
    type->fp_build_ = Thread_build;
    return type;
}

// private Thread(bool started) :976
void Thread__ctor__fn(Thread* __this, bool* started)
{
    __this->ctor_(*started);
}

// public Thread(Uno.Threading.ThreadStart start) :968
void Thread__ctor_1_fn(Thread* __this, uDelegate* start)
{
    __this->ctor_1(start);
}

// public static Uno.Threading.Thread get_CurrentThread() :1024
void Thread__get_CurrentThread_fn(Thread** __retval)
{
    *__retval = Thread::CurrentThread();
}

// public void Join() :1007
void Thread__Join_fn(Thread* __this)
{
    __this->Join();
}

// private Thread New(bool started) :976
void Thread__New1_fn(bool* started, Thread** __retval)
{
    *__retval = Thread::New1(*started);
}

// public Thread New(Uno.Threading.ThreadStart start) :968
void Thread__New2_fn(uDelegate* start, Thread** __retval)
{
    *__retval = Thread::New2(start);
}

// public static void Sleep(int millis) :1052
void Thread__Sleep_fn(int* millis)
{
    Thread::Sleep(*millis);
}

// public void Start() :992
void Thread__Start_fn(Thread* __this)
{
    __this->Start();
}

// private Thread(bool started) [instance] :976
void Thread::ctor_(bool started)
{
    _started = started;
}

// public Thread(Uno.Threading.ThreadStart start) [instance] :968
void Thread::ctor_1(uDelegate* start)
{
    if (::g::Uno::Delegate::op_Equality(start, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[2/*"start"*/]));

    _threadStart = start;
}

// public void Join() [instance] :1007
void Thread::Join()
{
    if (!_started)
        U_THROW(::g::Uno::Threading::ThreadStateException::New4(::STRINGS[3/*"Thread has ...*/]));

    ::g::Uno::Threading::PthreadHelpers::JoinThread(_threadHandle);
}

// public void Start() [instance] :992
void Thread::Start()
{
    if (_started)
        U_THROW(::g::Uno::Threading::ThreadStateException::New4(::STRINGS[4/*"Thread is r...*/]));

    _threadHandle = ::g::Uno::Threading::PthreadHelpers::CreateThread(this);
    _started = true;
}

// private Thread New(bool started) [static] :976
Thread* Thread::New1(bool started)
{
    Thread* obj2 = (Thread*)uNew(Thread_typeof());
    obj2->ctor_(started);
    return obj2;
}

// public Thread New(Uno.Threading.ThreadStart start) [static] :968
Thread* Thread::New2(uDelegate* start)
{
    Thread* obj1 = (Thread*)uNew(Thread_typeof());
    obj1->ctor_1(start);
    return obj1;
}

// public static void Sleep(int millis) [static] :1052
void Thread::Sleep(int millis)
{
    ::g::Uno::Threading::PthreadHelpers::Sleep(millis);
}

// public static Uno.Threading.Thread get_CurrentThread() [static] :1024
Thread* Thread::CurrentThread()
{
    Thread* ret = NULL;
    ret = ::g::Uno::Threading::PthreadHelpers::GetCurrentThread();

    if (ret == NULL)
    {
        ret = Thread::New1(true);
        ::g::Uno::Threading::PthreadHelpers::SetCurrentThread(ret);
    }

    return ret;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Threading\1.2.1\implementation\posix\$.uno
// ----------------------------------------------------------------------------------------------

// public struct PthreadHelpers.ThreadHandle :12
// {
static void PthreadHelpers__ThreadHandle_build(uType* type)
{
}

uStructType* PthreadHelpers__ThreadHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(pthread_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Threading.PthreadHelpers.ThreadHandle", options);
    type->fp_build_ = PthreadHelpers__ThreadHandle_build;
    return type;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Threading\1.2.1\$.uno
// -------------------------------------------------------------------------

// public sealed class ThreadPool :1073
// {
static void ThreadPool_build(uType* type)
{
    ::TYPES[14] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(ThreadPool__WorkItem_typeof(), NULL);
    ::TYPES[15] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Threading::Thread_typeof(), NULL);
    ::TYPES[16] = ::g::Uno::Threading::ThreadStart_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ThreadPool_type, interface0));
    type->SetFields(0,
        ::TYPES[15/*Uno.Threading.ConcurrentQueue<Uno.Threading.Thread>*/], offsetof(::g::Uno::Threading::ThreadPool, _disposeQueue), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Threading::ThreadPool, _isDisposed), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Threading::ThreadPool, _poolSize), 0,
        ::g::Uno::Threading::AutoResetEvent_typeof(), offsetof(::g::Uno::Threading::ThreadPool, _resetEvent), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Threading::ThreadPool, _running), 0,
        ::TYPES[14/*Uno.Threading.ConcurrentQueue<Uno.Threading.ThreadPool.WorkItem>*/], offsetof(::g::Uno::Threading::ThreadPool, _taskQueue), 0);
}

ThreadPool_type* ThreadPool_typeof()
{
    static uSStrong<ThreadPool_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ThreadPool);
    options.TypeSize = sizeof(ThreadPool_type);
    type = (ThreadPool_type*)uClassType::New("Uno.Threading.ThreadPool", options);
    type->fp_build_ = ThreadPool_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))ThreadPool__Dispose_fn;
    return type;
}

// public ThreadPool([int poolSize]) :1124
void ThreadPool__ctor__fn(ThreadPool* __this, int* poolSize)
{
    __this->ctor_(*poolSize);
}

// public void Dispose() :1179
void ThreadPool__Dispose_fn(ThreadPool* __this)
{
    __this->Dispose();
}

// private bool DoTask() :1152
void ThreadPool__DoTask_fn(ThreadPool* __this, bool* __retval)
{
    *__retval = __this->DoTask();
}

// public ThreadPool New([int poolSize]) :1124
void ThreadPool__New1_fn(int* poolSize, ThreadPool** __retval)
{
    *__retval = ThreadPool::New1(*poolSize);
}

// public void QueueAction(Uno.Action action) :1163
void ThreadPool__QueueAction_fn(ThreadPool* __this, uDelegate* action)
{
    __this->QueueAction(action);
}

// private void WorkerEntrypoint() :1139
void ThreadPool__WorkerEntrypoint_fn(ThreadPool* __this)
{
    __this->WorkerEntrypoint();
}

// public ThreadPool([int poolSize]) [instance] :1124
void ThreadPool::ctor_(int poolSize)
{
    _resetEvent = ::g::Uno::Threading::AutoResetEvent::New2(false);
    _taskQueue = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::TYPES[14/*Uno.Threading.ConcurrentQueue<Uno.Threading.ThreadPool.WorkItem>*/]));
    _running = true;
    _disposeQueue = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::TYPES[15/*Uno.Threading.ConcurrentQueue<Uno.Threading.Thread>*/]));
    _poolSize = poolSize;

    for (int i = 0; i < _poolSize; i++)
    {
        ::g::Uno::Threading::Thread* t = ::g::Uno::Threading::Thread::New2(uDelegate::New(::TYPES[16/*Uno.Threading.ThreadStart*/], (void*)ThreadPool__WorkerEntrypoint_fn, this));
        t->Start();
    }
}

// public void Dispose() [instance] :1179
void ThreadPool::Dispose()
{
    bool ret2;

    if (_isDisposed)
        return;

    _isDisposed = true;

    while (!uPtr(_taskQueue)->IsEmpty())
        ::g::Uno::Threading::Thread::Sleep(1);

    _running = false;
    int disposeCount = 0;

    while (disposeCount != _poolSize)
    {
        uPtr(_resetEvent)->Set();
        ::g::Uno::Threading::Thread* thread;

        if ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(_disposeQueue), (void**)(&thread), &ret2), ret2))
        {
            uPtr(thread)->Join();
            disposeCount++;
        }
    }

    uPtr(_resetEvent)->Dispose();
}

// private bool DoTask() [instance] :1152
bool ThreadPool::DoTask()
{
    bool ret3;
    ThreadPool__WorkItem* workItem;

    if ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(_taskQueue), (void**)(&workItem), &ret3), ret3))
    {
        uPtr(workItem)->Invoke();
        return true;
    }

    return false;
}

// public void QueueAction(Uno.Action action) [instance] :1163
void ThreadPool::QueueAction(uDelegate* action)
{
    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_taskQueue), ThreadPool__DefaultWorkItem::New1(action));
    uPtr(_resetEvent)->Set();
}

// private void WorkerEntrypoint() [instance] :1139
void ThreadPool::WorkerEntrypoint()
{
    while (_running)
    {
        uAutoReleasePool ____pool;

        if (DoTask())
            continue;

        uPtr(_resetEvent)->WaitOne();
    }

    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_disposeQueue), ::g::Uno::Threading::Thread::CurrentThread());
}

// public ThreadPool New([int poolSize]) [static] :1124
ThreadPool* ThreadPool::New1(int poolSize)
{
    ThreadPool* obj1 = (ThreadPool*)uNew(ThreadPool_typeof());
    obj1->ctor_(poolSize);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Threading\1.2.1\tasks\$.uno
// -------------------------------------------------------------------------------

// internal sealed class ThreadPoolTaskScheduler :212
// {
static void ThreadPoolTaskScheduler_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[17] = ::g::Uno::Platform::ApplicationStateTransitionHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Threading::ITaskScheduler_typeof(), offsetof(ThreadPoolTaskScheduler_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ThreadPoolTaskScheduler_type, interface1));
    type->SetFields(0,
        ::g::Uno::Threading::ThreadPool_typeof(), offsetof(::g::Uno::Threading::ThreadPoolTaskScheduler, _threadPool), 0,
        type, (uintptr_t)&::g::Uno::Threading::ThreadPoolTaskScheduler::_default_, uFieldFlagsStatic);
}

ThreadPoolTaskScheduler_type* ThreadPoolTaskScheduler_typeof()
{
    static uSStrong<ThreadPoolTaskScheduler_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ThreadPoolTaskScheduler);
    options.TypeSize = sizeof(ThreadPoolTaskScheduler_type);
    type = (ThreadPoolTaskScheduler_type*)uClassType::New("Uno.Threading.ThreadPoolTaskScheduler", options);
    type->fp_build_ = ThreadPoolTaskScheduler_build;
    type->fp_ctor_ = (void*)ThreadPoolTaskScheduler__New1_fn;
    type->interface0.fp_ScheduleTask = (void(*)(uObject*, ::g::Uno::Threading::Task*))ThreadPoolTaskScheduler__ScheduleTask_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))ThreadPoolTaskScheduler__Dispose_fn;
    return type;
}

// public ThreadPoolTaskScheduler() :237
void ThreadPoolTaskScheduler__ctor__fn(ThreadPoolTaskScheduler* __this)
{
    __this->ctor_();
}

// public static Uno.Threading.ThreadPoolTaskScheduler get_Default() :218
void ThreadPoolTaskScheduler__get_Default_fn(ThreadPoolTaskScheduler** __retval)
{
    *__retval = ThreadPoolTaskScheduler::Default();
}

// public void Dispose() :247
void ThreadPoolTaskScheduler__Dispose_fn(ThreadPoolTaskScheduler* __this)
{
    __this->Dispose();
}

// public ThreadPoolTaskScheduler New() :237
void ThreadPoolTaskScheduler__New1_fn(ThreadPoolTaskScheduler** __retval)
{
    *__retval = ThreadPoolTaskScheduler::New1();
}

// private static void OnAppTerminating(Uno.Platform.ApplicationState newState) :229
void ThreadPoolTaskScheduler__OnAppTerminating_fn(int* newState)
{
    ThreadPoolTaskScheduler::OnAppTerminating(*newState);
}

// public void ScheduleTask(Uno.Threading.Task task) :242
void ThreadPoolTaskScheduler__ScheduleTask_fn(ThreadPoolTaskScheduler* __this, ::g::Uno::Threading::Task* task)
{
    __this->ScheduleTask(task);
}

uSStrong<ThreadPoolTaskScheduler*> ThreadPoolTaskScheduler::_default_;

// public ThreadPoolTaskScheduler() [instance] :237
void ThreadPoolTaskScheduler::ctor_()
{
    _threadPool = ::g::Uno::Threading::ThreadPool::New1(4);
}

// public void Dispose() [instance] :247
void ThreadPoolTaskScheduler::Dispose()
{
    uPtr(_threadPool)->Dispose();
}

// public void ScheduleTask(Uno.Threading.Task task) [instance] :242
void ThreadPoolTaskScheduler::ScheduleTask(::g::Uno::Threading::Task* task)
{
    uPtr(_threadPool)->QueueAction(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)::g::Uno::Threading::Task__Execute_fn, uPtr(task)));
}

// public ThreadPoolTaskScheduler New() [static] :237
ThreadPoolTaskScheduler* ThreadPoolTaskScheduler::New1()
{
    ThreadPoolTaskScheduler* obj1 = (ThreadPoolTaskScheduler*)uNew(ThreadPoolTaskScheduler_typeof());
    obj1->ctor_();
    return obj1;
}

// private static void OnAppTerminating(Uno.Platform.ApplicationState newState) [static] :229
void ThreadPoolTaskScheduler::OnAppTerminating(int newState)
{
    uPtr(ThreadPoolTaskScheduler::_default_)->Dispose();
    ThreadPoolTaskScheduler::_default_ = NULL;
}

// public static Uno.Threading.ThreadPoolTaskScheduler get_Default() [static] :218
ThreadPoolTaskScheduler* ThreadPoolTaskScheduler::Default()
{
    if (ThreadPoolTaskScheduler::_default_ == NULL)
    {
        ThreadPoolTaskScheduler::_default_ = ThreadPoolTaskScheduler::New1();
        ::g::Uno::Platform::CoreApp::add_Terminating(uDelegate::New(::TYPES[17/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)ThreadPoolTaskScheduler__OnAppTerminating_fn));
    }

    return ThreadPoolTaskScheduler::_default_;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Threading\1.2.1\$.uno
// -------------------------------------------------------------------------

// public delegate void ThreadStart() :951
uDelegateType* ThreadStart_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Threading.ThreadStart", 0, 0);
    type->SetSignature(uVoid_typeof());
    return type;
}

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Threading\1.2.1\$.uno
// -------------------------------------------------------------------------

// public sealed class ThreadStateException :954
// {
static void ThreadStateException_build(uType* type)
{
    type->SetFields(4);
}

::g::Uno::Exception_type* ThreadStateException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(ThreadStateException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.Threading.ThreadStateException", options);
    type->fp_build_ = ThreadStateException_build;
    return type;
}

// public ThreadStateException(string message) :956
void ThreadStateException__ctor_3_fn(ThreadStateException* __this, uString* message)
{
    __this->ctor_3(message);
}

// public ThreadStateException New(string message) :956
void ThreadStateException__New4_fn(uString* message, ThreadStateException** __retval)
{
    *__retval = ThreadStateException::New4(message);
}

// public ThreadStateException(string message) [instance] :956
void ThreadStateException::ctor_3(uString* message)
{
    ctor_1(message);
}

// public ThreadStateException New(string message) [static] :956
ThreadStateException* ThreadStateException::New4(uString* message)
{
    ThreadStateException* obj1 = (ThreadStateException*)uNew(ThreadStateException_typeof());
    obj1->ctor_3(message);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Threading\1.2.1\$.uno
// -------------------------------------------------------------------------

// private abstract class ThreadPool.WorkItem :1076
// {
static void ThreadPool__WorkItem_build(uType* type)
{
}

ThreadPool__WorkItem_type* ThreadPool__WorkItem_typeof()
{
    static uSStrong<ThreadPool__WorkItem_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ThreadPool__WorkItem);
    options.TypeSize = sizeof(ThreadPool__WorkItem_type);
    type = (ThreadPool__WorkItem_type*)uClassType::New("Uno.Threading.ThreadPool.WorkItem", options);
    type->fp_build_ = ThreadPool__WorkItem_build;
    return type;
}

// protected generated WorkItem() :1076
void ThreadPool__WorkItem__ctor__fn(ThreadPool__WorkItem* __this)
{
    __this->ctor_();
}

// protected generated WorkItem() [instance] :1076
void ThreadPool__WorkItem::ctor_()
{
}
// }

}}} // ::g::Uno::Threading
