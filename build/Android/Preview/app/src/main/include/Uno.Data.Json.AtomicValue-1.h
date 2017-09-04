// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Uno.Data.Json/1.0.1/source/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Data.Json.Value.h>
namespace g{namespace Uno{namespace Data{namespace Json{struct AtomicValue;}}}}

namespace g{
namespace Uno{
namespace Data{
namespace Json{

// internal abstract class AtomicValue<T> :185
// {
uType* AtomicValue_typeof();
void AtomicValue__ctor_1_fn(AtomicValue* __this, void* val);
void AtomicValue__ToString_fn(AtomicValue* __this, uString** __retval);
void AtomicValue__get_Value_fn(AtomicValue* __this, uTRef __retval);

struct AtomicValue : ::g::Uno::Data::Json::Value
{
    uTField _val() { return __type->Field(this, 0); }

    template<class T>
    void ctor_1(T val) { AtomicValue__ctor_1_fn(this, uConstrain(__type->GetBase(AtomicValue_typeof())->T(0), val)); }
    template<class T>
    T Value() { T __retval; return AtomicValue__get_Value_fn(this, &__retval), __retval; }
};
// }

}}}} // ::g::Uno::Data::Json
