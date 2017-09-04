// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/UnoCore/1.2.1/source/uno/ux/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property;}}}

namespace g{
namespace Uno{
namespace UX{

// public sealed class NameTable :175
// {
uType* NameTable_typeof();
void NameTable__ctor__fn(NameTable* __this, NameTable* parentTable, uArray* entries);
void NameTable__get_Item_fn(NameTable* __this, uString* key, uObject** __retval);
void NameTable__New1_fn(NameTable* parentTable, uArray* entries, NameTable** __retval);
void NameTable__get_Objects_fn(NameTable* __this, uObject** __retval);
void NameTable__get_This_fn(NameTable* __this, uObject** __retval);
void NameTable__set_This_fn(NameTable* __this, uObject* value);

struct NameTable : uObject
{
    uStrong< ::g::Uno::Collections::List*> _objects;
    uStrong<uObject*> _properties;
    uStrong<uObject*> _this;
    static uSStrong<NameTable*> Empty_;
    static uSStrong<NameTable*>& Empty() { return NameTable_typeof()->Init(), Empty_; }
    uStrong<uArray*> Entries;
    uStrong<NameTable*> ParentTable;

    void ctor_(NameTable* parentTable, uArray* entries);
    uObject* Item(uString* key);
    uObject* Objects();
    uObject* This();
    void This(uObject* value);
    static NameTable* New1(NameTable* parentTable, uArray* entries);
};
// }

}}} // ::g::Uno::UX
