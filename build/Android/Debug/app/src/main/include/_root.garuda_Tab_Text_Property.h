// This file was generated based on C:/Users/Lotus/Documents/Fuse/garuda/.uno/ux11/garuda.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{struct garuda_Tab_Text_Property;}
namespace g{struct Tab;}

namespace g{

// internal sealed class garuda_Tab_Text_Property :36
// {
::g::Uno::UX::Property1_type* garuda_Tab_Text_Property_typeof();
void garuda_Tab_Text_Property__Get1_fn(garuda_Tab_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void garuda_Tab_Text_Property__get_Object_fn(garuda_Tab_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void garuda_Tab_Text_Property__Set1_fn(garuda_Tab_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);
void garuda_Tab_Text_Property__get_SupportsOriginSetter_fn(garuda_Tab_Text_Property* __this, bool* __retval);

struct garuda_Tab_Text_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Tab*> _obj;
};
// }

} // ::g