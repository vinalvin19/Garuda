// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Uno.Data.Json/1.0.1/source/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Data{namespace Json{struct JsonReader;}}}}
namespace g{namespace Uno{namespace Data{namespace Json{struct Value;}}}}

namespace g{
namespace Uno{
namespace Data{
namespace Json{

// public sealed class JsonReader :37
// {
uType* JsonReader_typeof();
void JsonReader__ctor__fn(JsonReader* __this, ::g::Uno::Data::Json::Value* value);
void JsonReader__AsBool_fn(JsonReader* __this, bool* __retval);
void JsonReader__AsNumber_fn(JsonReader* __this, double* __retval);
void JsonReader__AsString_fn(JsonReader* __this, uString** __retval);
void JsonReader__get_Count_fn(JsonReader* __this, int* __retval);
void JsonReader__get_Item_fn(JsonReader* __this, int* index, JsonReader** __retval);
void JsonReader__get_Item1_fn(JsonReader* __this, uString* key, JsonReader** __retval);
void JsonReader__get_JsonDataType_fn(JsonReader* __this, int* __retval);
void JsonReader__get_Keys_fn(JsonReader* __this, uArray** __retval);
void JsonReader__New1_fn(::g::Uno::Data::Json::Value* value, JsonReader** __retval);
void JsonReader__op_Explicit1_fn(JsonReader* value, uString** __retval);
void JsonReader__op_Explicit3_fn(JsonReader* value, bool* __retval);
void JsonReader__Parse_fn(uString* json, JsonReader** __retval);

struct JsonReader : uObject
{
    uStrong< ::g::Uno::Data::Json::Value*> _value;

    void ctor_(::g::Uno::Data::Json::Value* value);
    bool AsBool();
    double AsNumber();
    uString* AsString();
    int Count();
    JsonReader* Item(int index);
    JsonReader* Item1(uString* key);
    int JsonDataType();
    uArray* Keys();
    static JsonReader* New1(::g::Uno::Data::Json::Value* value);
    static uString* op_Explicit1(JsonReader* value);
    static bool op_Explicit3(JsonReader* value);
    static JsonReader* Parse(uString* json);
};
// }

}}}} // ::g::Uno::Data::Json
