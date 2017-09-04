// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/UnoCore/1.2.1/source/uno/ux/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct SimulatedProperties;}}}

namespace g{
namespace Uno{
namespace UX{

// public static extern class SimulatedProperties :401
// {
uClassType* SimulatedProperties_typeof();
void SimulatedProperties__Get_fn(::g::Uno::UX::PropertyObject* obj, uString* name, uObject** __retval);
void SimulatedProperties__Set_fn(::g::Uno::UX::PropertyObject* obj, uString* name, uObject* value, uObject* origin);

struct SimulatedProperties : uObject
{
    static uObject* Get(::g::Uno::UX::PropertyObject* obj, uString* name);
    static void Set(::g::Uno::UX::PropertyObject* obj, uString* name, uObject* value, uObject* origin);
};
// }

}}} // ::g::Uno::UX
