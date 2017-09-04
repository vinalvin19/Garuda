// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryFl-dfc153fb.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Sqrt;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Sqrt :833
// {
::g::Fuse::Reactive::UnaryOperator_type* Sqrt_typeof();
void Sqrt__ctor_3_fn(Sqrt* __this, ::g::Fuse::Reactive::Expression* operand);
void Sqrt__New1_fn(::g::Fuse::Reactive::Expression* operand, Sqrt** __retval);

struct Sqrt : ::g::Fuse::Reactive::UnaryFloatOperator
{
    void ctor_3(::g::Fuse::Reactive::Expression* operand);
    static Sqrt* New1(::g::Fuse::Reactive::Expression* operand);
};
// }

}}} // ::g::Fuse::Reactive
