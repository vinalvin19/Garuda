// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.VarArgFunction.h>
namespace g{namespace Fuse{namespace Reactive{struct SimpleVarArgFunction;}}}
namespace g{namespace Fuse{namespace Reactive{struct VarArgFunction__Argument;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class SimpleVarArgFunction :2141
// {
struct SimpleVarArgFunction_type : ::g::Fuse::Reactive::Expression_type
{
    void(*fp_OnNewArguments)(::g::Fuse::Reactive::SimpleVarArgFunction*, uArray*, uObject*);
};

SimpleVarArgFunction_type* SimpleVarArgFunction_typeof();
void SimpleVarArgFunction__ctor_2_fn(SimpleVarArgFunction* __this);
void SimpleVarArgFunction__OnNewArguments_fn(SimpleVarArgFunction* __this, uArray* args, uObject* listener);
void SimpleVarArgFunction__OnNewPartialArguments_fn(SimpleVarArgFunction* __this, uArray* args, uObject* listener);
void SimpleVarArgFunction__Subscribe_fn(SimpleVarArgFunction* __this, uObject* context, uObject* listener, uObject** __retval);

struct SimpleVarArgFunction : ::g::Fuse::Reactive::VarArgFunction
{
    void ctor_2();
    void OnNewArguments(uArray* args, uObject* listener) { (((SimpleVarArgFunction_type*)__type)->fp_OnNewArguments)(this, args, listener); }
    void OnNewPartialArguments(uArray* args, uObject* listener);
    static void OnNewArguments(SimpleVarArgFunction* __this, uArray* args, uObject* listener) { SimpleVarArgFunction__OnNewArguments_fn(__this, args, listener); }
};
// }

}}} // ::g::Fuse::Reactive
