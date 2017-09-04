// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Reactive.Bindings/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Express-ee33104d.h>
#include <Fuse.Reactive.IContext.h>
#include <Fuse.Reactive.IListener.h>
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventRecord;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class EventBinding :675
// {
::g::Fuse::Reactive::ExpressionBinding_type* EventBinding_typeof();
void EventBinding__NewValue_fn(EventBinding* __this, uObject* obj);
void EventBinding__OnUnrooted_fn(EventBinding* __this);
void EventBinding__ProcessQueuedEvents_fn(EventBinding* __this);

struct EventBinding : ::g::Fuse::Reactive::ExpressionBinding
{
    uStrong<uObject*> _eventHandler;
    uStrong< ::g::Uno::Collections::List*> _queuedEvents;

    void ProcessQueuedEvents();
};
// }

}}} // ::g::Fuse::Reactive
