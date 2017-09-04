// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Uno.Data.Json/1.0.1/source/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Data.Json.AtomicValue-1.h>
#include <Uno.Double.h>
namespace g{namespace Uno{namespace Data{namespace Json{struct Number;}}}}

namespace g{
namespace Uno{
namespace Data{
namespace Json{

// internal sealed class Number :209
// {
uType* Number_typeof();
void Number__ctor_2_fn(Number* __this, double* d);
void Number__New1_fn(double* d, Number** __retval);

struct Number : ::g::Uno::Data::Json::AtomicValue
{
    void ctor_2(double d);
    static Number* New1(double d);
};
// }

}}}} // ::g::Uno::Data::Json
