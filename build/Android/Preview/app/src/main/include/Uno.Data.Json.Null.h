// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Uno.Data.Json/1.0.1/source/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Data.Json.Value.h>
namespace g{namespace Uno{namespace Data{namespace Json{struct Null;}}}}

namespace g{
namespace Uno{
namespace Data{
namespace Json{

// internal sealed class Null :178
// {
uType* Null_typeof();
void Null__ctor_1_fn(Null* __this);
void Null__New1_fn(Null** __retval);

struct Null : ::g::Uno::Data::Json::Value
{
    static uSStrong<Null*> Singleton_;
    static uSStrong<Null*>& Singleton() { return Null_typeof()->Init(), Singleton_; }

    void ctor_1();
    static Null* New1();
};
// }

}}}} // ::g::Uno::Data::Json
