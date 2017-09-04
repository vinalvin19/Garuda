// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryFl-dfc153fb.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Fract;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Fract :889
// {
::g::Fuse::Reactive::UnaryOperator_type* Fract_typeof();
void Fract__ctor_3_fn(Fract* __this, ::g::Fuse::Reactive::Expression* operand);
void Fract__New1_fn(::g::Fuse::Reactive::Expression* operand, Fract** __retval);

struct Fract : ::g::Fuse::Reactive::UnaryFloatOperator
{
    void ctor_3(::g::Fuse::Reactive::Expression* operand);
    static Fract* New1(::g::Fuse::Reactive::Expression* operand);
};
// }

}}} // ::g::Fuse::Reactive
