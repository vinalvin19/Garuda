// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/UnoCore/1.2.1/source/uno/ux/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct Resource;}}}

namespace g{
namespace Uno{
namespace UX{

// public sealed class Resource :484
// {
uType* Resource_typeof();
void Resource__get_Key_fn(Resource* __this, uString** __retval);
void Resource__set_Key_fn(Resource* __this, uString* value);
void Resource__SetGlobalKey_fn(uObject* obj, uString* key);
void Resource__TryFindGlobal_fn(uString* key, uDelegate* acceptor, uObject** res, bool* __retval);
void Resource__get_Value_fn(Resource* __this, uObject** __retval);
void Resource__set_Value_fn(Resource* __this, uObject* value);

struct Resource : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _globals_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _globals() { return Resource_typeof()->Init(), _globals_; }
    static uSStrong< ::g::Uno::Collections::List*> _listeners_;
    static uSStrong< ::g::Uno::Collections::List*>& _listeners() { return Resource_typeof()->Init(), _listeners_; }
    uStrong<uString*> _Key;
    uStrong<uObject*> _Value;

    uString* Key();
    void Key(uString* value);
    uObject* Value();
    void Value(uObject* value);
    static void SetGlobalKey(uObject* obj, uString* key);
    static bool TryFindGlobal(uString* key, uDelegate* acceptor, uObject** res);
};
// }

}}} // ::g::Uno::UX
