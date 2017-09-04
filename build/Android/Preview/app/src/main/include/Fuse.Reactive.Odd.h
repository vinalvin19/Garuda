// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Odd;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Odd :624
// {
::g::Fuse::Reactive::UnaryOperator_type* Odd_typeof();
void Odd__ctor_2_fn(Odd* __this, ::g::Fuse::Reactive::Expression* operand);
void Odd__Compute_fn(Odd* __this, uObject* operand, uObject** __retval);
void Odd__New1_fn(::g::Fuse::Reactive::Expression* operand, Odd** __retval);
void Odd__ToString_fn(Odd* __this, uString** __retval);

struct Odd : ::g::Fuse::Reactive::UnaryOperator
{
    void ctor_2(::g::Fuse::Reactive::Expression* operand);
    static Odd* New1(::g::Fuse::Reactive::Expression* operand);
};
// }

}}} // ::g::Fuse::Reactive
