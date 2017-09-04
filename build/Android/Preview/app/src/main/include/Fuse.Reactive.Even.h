// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Even;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Even :602
// {
::g::Fuse::Reactive::UnaryOperator_type* Even_typeof();
void Even__ctor_2_fn(Even* __this, ::g::Fuse::Reactive::Expression* operand);
void Even__Compute_fn(Even* __this, uObject* operand, uObject** __retval);
void Even__New1_fn(::g::Fuse::Reactive::Expression* operand, Even** __retval);
void Even__ToString_fn(Even* __this, uString** __retval);

struct Even : ::g::Fuse::Reactive::UnaryOperator
{
    void ctor_2(::g::Fuse::Reactive::Expression* operand);
    static Even* New1(::g::Fuse::Reactive::Expression* operand);
};
// }

}}} // ::g::Fuse::Reactive
