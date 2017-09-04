// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryFl-dfc153fb.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Tan;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Tan :777
// {
::g::Fuse::Reactive::UnaryOperator_type* Tan_typeof();
void Tan__ctor_3_fn(Tan* __this, ::g::Fuse::Reactive::Expression* operand);
void Tan__New1_fn(::g::Fuse::Reactive::Expression* operand, Tan** __retval);

struct Tan : ::g::Fuse::Reactive::UnaryFloatOperator
{
    void ctor_3(::g::Fuse::Reactive::Expression* operand);
    static Tan* New1(::g::Fuse::Reactive::Expression* operand);
};
// }

}}} // ::g::Fuse::Reactive
