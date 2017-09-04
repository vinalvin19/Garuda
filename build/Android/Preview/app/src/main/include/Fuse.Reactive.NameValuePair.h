// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct NameValuePair;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class NameValuePair :1111
// {
::g::Fuse::Reactive::UnaryOperator_type* NameValuePair_typeof();
void NameValuePair__ctor_2_fn(NameValuePair* __this, uString* name, ::g::Fuse::Reactive::Expression* value);
void NameValuePair__Compute_fn(NameValuePair* __this, uObject* value, uObject** __retval);
void NameValuePair__get_Name_fn(NameValuePair* __this, uString** __retval);
void NameValuePair__set_Name_fn(NameValuePair* __this, uString* value);
void NameValuePair__New1_fn(uString* name, ::g::Fuse::Reactive::Expression* value, NameValuePair** __retval);

struct NameValuePair : ::g::Fuse::Reactive::UnaryOperator
{
    uStrong<uString*> _Name;

    void ctor_2(uString* name, ::g::Fuse::Reactive::Expression* value);
    uString* Name();
    void Name(uString* value);
    static NameValuePair* New1(uString* name, ::g::Fuse::Reactive::Expression* value);
};
// }

}}} // ::g::Fuse::Reactive
