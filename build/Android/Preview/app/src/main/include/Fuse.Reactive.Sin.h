// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryFl-dfc153fb.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Sin;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Sin :759
// {
::g::Fuse::Reactive::UnaryOperator_type* Sin_typeof();
void Sin__ctor_3_fn(Sin* __this, ::g::Fuse::Reactive::Expression* operand);
void Sin__New1_fn(::g::Fuse::Reactive::Expression* operand, Sin** __retval);

struct Sin : ::g::Fuse::Reactive::UnaryFloatOperator
{
    void ctor_3(::g::Fuse::Reactive::Expression* operand);
    static Sin* New1(::g::Fuse::Reactive::Expression* operand);
};
// }

}}} // ::g::Fuse::Reactive
