// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Parameter;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Parameter :1353
// {
::g::Fuse::Reactive::UnaryOperator_type* Parameter_typeof();
void Parameter__ctor_2_fn(Parameter* __this, ::g::Fuse::Reactive::Expression* visual);
void Parameter__New1_fn(::g::Fuse::Reactive::Expression* visual, Parameter** __retval);
void Parameter__Subscribe_fn(Parameter* __this, uObject* context, uObject* listener, uObject** __retval);

struct Parameter : ::g::Fuse::Reactive::UnaryOperator
{
    void ctor_2(::g::Fuse::Reactive::Expression* visual);
    static Parameter* New1(::g::Fuse::Reactive::Expression* visual);
};
// }

}}} // ::g::Fuse::Reactive
