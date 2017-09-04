// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryFl-dfc153fb.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Round;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Round :929
// {
::g::Fuse::Reactive::UnaryOperator_type* Round_typeof();
void Round__ctor_3_fn(Round* __this, ::g::Fuse::Reactive::Expression* operand);
void Round__New1_fn(::g::Fuse::Reactive::Expression* operand, Round** __retval);

struct Round : ::g::Fuse::Reactive::UnaryFloatOperator
{
    void ctor_3(::g::Fuse::Reactive::Expression* operand);
    static Round* New1(::g::Fuse::Reactive::Expression* operand);
};
// }

}}} // ::g::Fuse::Reactive
