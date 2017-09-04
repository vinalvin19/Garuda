// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Scripting/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.Native-c8feecef.h>
namespace g{namespace Fuse{namespace Scripting{struct NativeEvent;}}}
namespace g{namespace Uno{namespace Collections{struct Queue;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class NativeEvent :860
// {
uType* NativeEvent_typeof();
void NativeEvent__ctor_4_fn(NativeEvent* __this, uString* name, bool* queueEventsBeforeHandlerIsSet);
void NativeEvent__New4_fn(uString* name, bool* queueEventsBeforeHandlerIsSet, NativeEvent** __retval);
void NativeEvent__RaiseSync_fn(NativeEvent* __this, uArray* args, uObject** __retval);

struct NativeEvent : ::g::Fuse::Scripting::NativeProperty
{
    uStrong< ::g::Uno::Collections::Queue*> _eventArgsQueue;
    uStrong< ::g::Fuse::Scripting::Function*> _jsFunction;
    bool _queueEventsBeforeEvaluation;

    void ctor_4(uString* name, bool queueEventsBeforeHandlerIsSet);
    uObject* RaiseSync(uArray* args);
    static NativeEvent* New4(uString* name, bool queueEventsBeforeHandlerIsSet);
};
// }

}}} // ::g::Fuse::Scripting
