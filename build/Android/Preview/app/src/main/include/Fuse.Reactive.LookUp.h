// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct LookUp;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class LookUp :335
// {
::g::Fuse::Reactive::Expression_type* LookUp_typeof();
void LookUp__ctor_1_fn(LookUp* __this, ::g::Fuse::Reactive::Expression* collection, ::g::Fuse::Reactive::Expression* index);
void LookUp__get_Collection_fn(LookUp* __this, ::g::Fuse::Reactive::Expression** __retval);
void LookUp__set_Collection_fn(LookUp* __this, ::g::Fuse::Reactive::Expression* value);
void LookUp__get_Index_fn(LookUp* __this, ::g::Fuse::Reactive::Expression** __retval);
void LookUp__set_Index_fn(LookUp* __this, ::g::Fuse::Reactive::Expression* value);
void LookUp__New1_fn(::g::Fuse::Reactive::Expression* collection, ::g::Fuse::Reactive::Expression* index, LookUp** __retval);
void LookUp__Subscribe_fn(LookUp* __this, uObject* context, uObject* listener, uObject** __retval);

struct LookUp : ::g::Fuse::Reactive::Expression
{
    uStrong< ::g::Fuse::Reactive::Expression*> _Collection;
    uStrong< ::g::Fuse::Reactive::Expression*> _Index;

    void ctor_1(::g::Fuse::Reactive::Expression* collection, ::g::Fuse::Reactive::Expression* index);
    ::g::Fuse::Reactive::Expression* Collection();
    void Collection(::g::Fuse::Reactive::Expression* value);
    ::g::Fuse::Reactive::Expression* Index();
    void Index(::g::Fuse::Reactive::Expression* value);
    static LookUp* New1(::g::Fuse::Reactive::Expression* collection, ::g::Fuse::Reactive::Expression* index);
};
// }

}}} // ::g::Fuse::Reactive
