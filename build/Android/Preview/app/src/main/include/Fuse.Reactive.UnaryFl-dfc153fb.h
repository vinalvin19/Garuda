// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct UnaryFloatOperator;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class UnaryFloatOperator :690
// {
::g::Fuse::Reactive::UnaryOperator_type* UnaryFloatOperator_typeof();
void UnaryFloatOperator__ctor_2_fn(UnaryFloatOperator* __this, ::g::Fuse::Reactive::Expression* operand, uString* name, uDelegate* op);
void UnaryFloatOperator__Compute_fn(UnaryFloatOperator* __this, uObject* operand, uObject** __retval);
void UnaryFloatOperator__ToString_fn(UnaryFloatOperator* __this, uString** __retval);

struct UnaryFloatOperator : ::g::Fuse::Reactive::UnaryOperator
{
    uStrong<uString*> _name;
    uStrong<uDelegate*> _op;

    void ctor_2(::g::Fuse::Reactive::Expression* operand, uString* name, uDelegate* op);
};
// }

}}} // ::g::Fuse::Reactive
