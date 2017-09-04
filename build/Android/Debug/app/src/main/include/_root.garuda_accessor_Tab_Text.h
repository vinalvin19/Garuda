// This file was generated based on C:/Users/Lotus/Documents/Fuse/garuda/.uno/ux11/garuda.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct garuda_accessor_Tab_Text;}

namespace g{

// internal sealed class garuda_accessor_Tab_Text :1
// {
::g::Uno::UX::PropertyAccessor_type* garuda_accessor_Tab_Text_typeof();
void garuda_accessor_Tab_Text__ctor_1_fn(garuda_accessor_Tab_Text* __this);
void garuda_accessor_Tab_Text__GetAsObject_fn(garuda_accessor_Tab_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void garuda_accessor_Tab_Text__get_Name_fn(garuda_accessor_Tab_Text* __this, ::g::Uno::UX::Selector* __retval);
void garuda_accessor_Tab_Text__New1_fn(garuda_accessor_Tab_Text** __retval);
void garuda_accessor_Tab_Text__get_PropertyType_fn(garuda_accessor_Tab_Text* __this, uType** __retval);
void garuda_accessor_Tab_Text__SetAsObject_fn(garuda_accessor_Tab_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void garuda_accessor_Tab_Text__get_SupportsOriginSetter_fn(garuda_accessor_Tab_Text* __this, bool* __retval);

struct garuda_accessor_Tab_Text : ::g::Uno::UX::PropertyAccessor
{
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return garuda_accessor_Tab_Text_typeof()->Init(), _name_; }
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return garuda_accessor_Tab_Text_typeof()->Init(), Singleton_; }

    void ctor_1();
    static garuda_accessor_Tab_Text* New1();
};
// }

} // ::g
