// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.BinaryOperator.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct BinaryFloatOperator;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class BinaryFloatOperator :731
// {
::g::Fuse::Reactive::BinaryOperator_type* BinaryFloatOperator_typeof();
void BinaryFloatOperator__ctor_2_fn(BinaryFloatOperator* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, uString* name, uDelegate* op);
void BinaryFloatOperator__Compute_fn(BinaryFloatOperator* __this, uObject* left, uObject* right, uObject** __retval);
void BinaryFloatOperator__ToString_fn(BinaryFloatOperator* __this, uString** __retval);

struct BinaryFloatOperator : ::g::Fuse::Reactive::BinaryOperator
{
    uStrong<uString*> _name;
    uStrong<uDelegate*> _op;

    void ctor_2(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, uString* name, uDelegate* op);
};
// }

}}} // ::g::Fuse::Reactive
