// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.TernaryOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Clamp;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Clamp :1013
// {
::g::Fuse::Reactive::TernaryOperator_type* Clamp_typeof();
void Clamp__ctor_2_fn(Clamp* __this, ::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third);
void Clamp__Compute_fn(Clamp* __this, uObject* a, uObject* mn, uObject* mx, uObject** __retval);
void Clamp__New1_fn(::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third, Clamp** __retval);
void Clamp__ToString_fn(Clamp* __this, uString** __retval);

struct Clamp : ::g::Fuse::Reactive::TernaryOperator
{
    void ctor_2(::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third);
    static Clamp* New1(::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third);
};
// }

}}} // ::g::Fuse::Reactive
