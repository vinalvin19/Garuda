// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.UnaryOp-a08b90b8.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{struct Parameter;}}}
namespace g{namespace Fuse{namespace Reactive{struct Parameter__ParameterSubscription;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class Parameter.ParameterSubscription :1363
// {
::g::Fuse::Reactive::UnaryOperator__Subscription_type* Parameter__ParameterSubscription_typeof();
void Parameter__ParameterSubscription__ctor_2_fn(Parameter__ParameterSubscription* __this, ::g::Fuse::Reactive::Parameter* parameter, uObject* context, uObject* listener);
void Parameter__ParameterSubscription__Dispose_fn(Parameter__ParameterSubscription* __this);
void Parameter__ParameterSubscription__New2_fn(::g::Fuse::Reactive::Parameter* parameter, uObject* context, uObject* listener, Parameter__ParameterSubscription** __retval);
void Parameter__ParameterSubscription__OnNewOperand_fn(Parameter__ParameterSubscription* __this, uObject* obj);
void Parameter__ParameterSubscription__OnParameterChanged_fn(Parameter__ParameterSubscription* __this, uObject* sender, ::g::Uno::EventArgs* args);
void Parameter__ParameterSubscription__UnsubscribeVisual_fn(Parameter__ParameterSubscription* __this);

struct Parameter__ParameterSubscription : ::g::Fuse::Reactive::UnaryOperator__Subscription
{
    uStrong< ::g::Fuse::Reactive::Parameter*> _parameter;
    uStrong< ::g::Fuse::Visual*> _visual;

    void ctor_2(::g::Fuse::Reactive::Parameter* parameter, uObject* context, uObject* listener);
    void OnParameterChanged(uObject* sender, ::g::Uno::EventArgs* args);
    void UnsubscribeVisual();
    static Parameter__ParameterSubscription* New2(::g::Fuse::Reactive::Parameter* parameter, uObject* context, uObject* listener);
};
// }

}}} // ::g::Fuse::Reactive
