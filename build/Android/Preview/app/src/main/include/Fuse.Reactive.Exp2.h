// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryFl-dfc153fb.h>
namespace g{namespace Fuse{namespace Reactive{struct Exp2;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Exp2 :881
// {
::g::Fuse::Reactive::UnaryOperator_type* Exp2_typeof();
void Exp2__ctor_3_fn(Exp2* __this, ::g::Fuse::Reactive::Expression* operand);
void Exp2__New1_fn(::g::Fuse::Reactive::Expression* operand, Exp2** __retval);

struct Exp2 : ::g::Fuse::Reactive::UnaryFloatOperator
{
    void ctor_3(::g::Fuse::Reactive::Expression* operand);
    static Exp2* New1(::g::Fuse::Reactive::Expression* operand);
};
// }

}}} // ::g::Fuse::Reactive
