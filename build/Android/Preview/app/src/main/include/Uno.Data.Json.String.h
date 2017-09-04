// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Uno.Data.Json/1.0.1/source/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Data.Json.AtomicValue-1.h>
#include <Uno.String.h>
namespace g{namespace Uno{namespace Data{namespace Json{struct String;}}}}

namespace g{
namespace Uno{
namespace Data{
namespace Json{

// internal sealed class String :214
// {
uType* String_typeof();
void String__ctor_2_fn(String* __this, uString* d);
void String__New1_fn(uString* d, String** __retval);

struct String : ::g::Uno::Data::Json::AtomicValue
{
    void ctor_2(uString* d);
    static String* New1(uString* d);
};
// }

}}}} // ::g::Uno::Data::Json
