// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Uno.Data.Json/1.0.1/source/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{namespace Data{namespace Json{struct JsonException;}}}}

namespace g{
namespace Uno{
namespace Data{
namespace Json{

// public sealed class JsonException :22
// {
::g::Uno::Exception_type* JsonException_typeof();
void JsonException__ctor_3_fn(JsonException* __this, uString* message);
void JsonException__New4_fn(uString* message, JsonException** __retval);

struct JsonException : ::g::Uno::Exception
{
    void ctor_3(uString* message);
    static JsonException* New4(uString* message);
};
// }

}}}} // ::g::Uno::Data::Json
