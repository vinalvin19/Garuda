// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Uno.Data.Json/1.0.1/source/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Data{namespace Json{struct Array;}}}}
namespace g{namespace Uno{namespace Data{namespace Json{struct Boolean;}}}}
namespace g{namespace Uno{namespace Data{namespace Json{struct JsonException;}}}}
namespace g{namespace Uno{namespace Data{namespace Json{struct Null;}}}}
namespace g{namespace Uno{namespace Data{namespace Json{struct Number;}}}}
namespace g{namespace Uno{namespace Data{namespace Json{struct Object;}}}}
namespace g{namespace Uno{namespace Data{namespace Json{struct Parser;}}}}
namespace g{namespace Uno{namespace Data{namespace Json{struct String;}}}}
namespace g{namespace Uno{namespace Data{namespace Json{struct Value;}}}}
namespace g{namespace Uno{namespace IO{struct TextReader;}}}

namespace g{
namespace Uno{
namespace Data{
namespace Json{

// internal sealed class Parser :359
// {
uType* Parser_typeof();
void Parser__ctor__fn(Parser* __this, ::g::Uno::IO::TextReader* json);
void Parser__Advance_fn(Parser* __this);
void Parser__Consume_fn(Parser* __this, uChar* __retval);
void Parser__Eof_fn(Parser* __this, bool* __retval);
void Parser__GetHexValue_fn(uChar* hexChar, uint32_t* __retval);
void Parser__IsHexValue_fn(uChar* ch, bool* __retval);
void Parser__IsNumericStartChar_fn(Parser* __this, uChar* c, bool* __retval);
void Parser__New1_fn(::g::Uno::IO::TextReader* json, Parser** __retval);
void Parser__Parse_fn(::g::Uno::IO::TextReader* json, ::g::Uno::Data::Json::Value** __retval);
void Parser__ParseArray_fn(Parser* __this, ::g::Uno::Data::Json::Array** __retval);
void Parser__ParseFalse_fn(Parser* __this, ::g::Uno::Data::Json::Boolean** __retval);
void Parser__ParseKeyword_fn(Parser* __this, uString* keyword);
void Parser__ParseNull_fn(Parser* __this, ::g::Uno::Data::Json::Null** __retval);
void Parser__ParseNumber_fn(Parser* __this, ::g::Uno::Data::Json::Number** __retval);
void Parser__ParseObject_fn(Parser* __this, ::g::Uno::Data::Json::Object** __retval);
void Parser__ParseRawString_fn(Parser* __this, uString** __retval);
void Parser__ParseString_fn(Parser* __this, ::g::Uno::Data::Json::String** __retval);
void Parser__ParseTrue_fn(Parser* __this, ::g::Uno::Data::Json::Boolean** __retval);
void Parser__ParseValue_fn(Parser* __this, ::g::Uno::Data::Json::Value** __retval);
void Parser__Peek_fn(Parser* __this, uChar* __retval);
void Parser__SkipWhiteSpace_fn(Parser* __this);
void Parser__UnexpectedCharacter_fn(uChar* c, ::g::Uno::Data::Json::JsonException** __retval);
void Parser__UnexpectedEndOfFile_fn(::g::Uno::Data::Json::JsonException** __retval);

struct Parser : uObject
{
    uStrong< ::g::Uno::IO::TextReader*> _json;

    void ctor_(::g::Uno::IO::TextReader* json);
    void Advance();
    uChar Consume();
    bool Eof();
    bool IsNumericStartChar(uChar c);
    ::g::Uno::Data::Json::Array* ParseArray();
    ::g::Uno::Data::Json::Boolean* ParseFalse();
    void ParseKeyword(uString* keyword);
    ::g::Uno::Data::Json::Null* ParseNull();
    ::g::Uno::Data::Json::Number* ParseNumber();
    ::g::Uno::Data::Json::Object* ParseObject();
    uString* ParseRawString();
    ::g::Uno::Data::Json::String* ParseString();
    ::g::Uno::Data::Json::Boolean* ParseTrue();
    ::g::Uno::Data::Json::Value* ParseValue();
    uChar Peek();
    void SkipWhiteSpace();
    static uint32_t GetHexValue(uChar hexChar);
    static bool IsHexValue(uChar ch);
    static Parser* New1(::g::Uno::IO::TextReader* json);
    static ::g::Uno::Data::Json::Value* Parse(::g::Uno::IO::TextReader* json);
    static ::g::Uno::Data::Json::JsonException* UnexpectedCharacter(uChar c);
    static ::g::Uno::Data::Json::JsonException* UnexpectedEndOfFile();
};
// }

}}}} // ::g::Uno::Data::Json
