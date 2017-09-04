// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Binding.h>
#include <Fuse.DeferredManager.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.IArray.h>
#include <Fuse.Internal.ObjectL-a57e6857.h>
#include <Fuse.Internal.ObjectList-1.h>
#include <Fuse.IObject.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Marshal.h>
#include <Fuse.MarshalException.h>
#include <Fuse.NameRegistry.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BinaryO-44e56a7e.h>
#include <Fuse.Reactive.BinaryOperator.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Clamp.h>
#include <Fuse.Reactive.Conditional.h>
#include <Fuse.Reactive.Constan-264ec80.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.DataSubscription.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.EventRecord.h>
#include <Fuse.Reactive.Express-ee33104d.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IContext.h>
#include <Fuse.Reactive.IEventHandler.h>
#include <Fuse.Reactive.IEventRecord.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.InnerLi-d480603c.h>
#include <Fuse.Reactive.InnerListener.h>
#include <Fuse.Reactive.InstanceDefer.h>
#include <Fuse.Reactive.InstanceIdentity.h>
#include <Fuse.Reactive.InstanceReuse.h>
#include <Fuse.Reactive.Instant-2359146.h>
#include <Fuse.Reactive.Instant-75b959b5.h>
#include <Fuse.Reactive.Instant-b1231a0d.h>
#include <Fuse.Reactive.Instant-c0c79dff.h>
#include <Fuse.Reactive.Instant-ca0b61c8.h>
#include <Fuse.Reactive.Instant-d843266f.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.IObservable.h>
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Reactive.ISubscription.h>
#include <Fuse.Reactive.IWriteable.h>
#include <Fuse.Reactive.Lerp.h>
#include <Fuse.Reactive.LookUp.-f2be5323.h>
#include <Fuse.Reactive.LookUp.h>
#include <Fuse.Reactive.Name.h>
#include <Fuse.Reactive.Propert-3b65e5e6.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Reactive.Quatern-13eb7fcd.h>
#include <Fuse.Reactive.Quatern-4692c3b2.h>
#include <Fuse.Reactive.Resourc-a4dc08c7.h>
#include <Fuse.Reactive.Resource.h>
#include <Fuse.Reactive.SimpleV-1e1b52a3.h>
#include <Fuse.Reactive.SimpleV-31a29f4e.h>
#include <Fuse.Reactive.Snapsho-9e1b433f.h>
#include <Fuse.Reactive.Snapshot.h>
#include <Fuse.Reactive.Ternary-ba5fcd50.h>
#include <Fuse.Reactive.TernaryOperator.h>
#include <Fuse.Reactive.This.h>
#include <Fuse.Reactive.UnaryOp-a08b90b8.h>
#include <Fuse.Reactive.UnaryOperator.h>
#include <Fuse.Reactive.ValueFo-a26c06f.h>
#include <Fuse.Reactive.ValueForwarder.h>
#include <Fuse.Reactive.ValueObserver.h>
#include <Fuse.Reactive.VarArgF-8afe3c06.h>
#include <Fuse.Reactive.VarArgFunction.h>
#include <Fuse.Resources.Resour-fabdcc8b.h>
#include <Fuse.Triggers.BusyTask.h>
#include <Fuse.Triggers.BusyTaskActivity.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dicti-98f6bc43.h>
#include <Uno.Collections.Dicti-d1699346.h>
#include <Uno.Collections.Dicti-d6e3a7c5.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.Enume-8ddd045.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.List--251bdc7d.h>
#include <Uno.Collections.RootableList-1.h>
#include <Uno.Delegate.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Template.h>
static uString* STRINGS[40];
static uType* TYPES[41];

namespace g{
namespace Fuse{
namespace Reactive{

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// protected sealed class VarArgFunction.Argument :2095
// {
static void VarArgFunction__Argument_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    type->SetFields(0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::VarArgFunction__Argument, Subscription), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::VarArgFunction__Argument, _HasValue), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::VarArgFunction__Argument, _Value), 0);
}

uType* VarArgFunction__Argument_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(VarArgFunction__Argument);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.VarArgFunction.Argument", options);
    type->fp_build_ = VarArgFunction__Argument_build;
    type->fp_ctor_ = (void*)VarArgFunction__Argument__New1_fn;
    return type;
}

// public generated Argument() :2095
void VarArgFunction__Argument__ctor__fn(VarArgFunction__Argument* __this)
{
    __this->ctor_();
}

// internal void Dispose() :2107
void VarArgFunction__Argument__Dispose_fn(VarArgFunction__Argument* __this)
{
    __this->Dispose();
}

// public generated bool get_HasValue() :2105
void VarArgFunction__Argument__get_HasValue_fn(VarArgFunction__Argument* __this, bool* __retval)
{
    *__retval = __this->HasValue();
}

// internal generated void set_HasValue(bool value) :2105
void VarArgFunction__Argument__set_HasValue_fn(VarArgFunction__Argument* __this, bool* value)
{
    __this->HasValue(*value);
}

// public generated Argument New() :2095
void VarArgFunction__Argument__New1_fn(VarArgFunction__Argument** __retval)
{
    *__retval = VarArgFunction__Argument::New1();
}

// public generated object get_Value() :2100
void VarArgFunction__Argument__get_Value_fn(VarArgFunction__Argument* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// internal generated void set_Value(object value) :2100
void VarArgFunction__Argument__set_Value_fn(VarArgFunction__Argument* __this, uObject* value)
{
    __this->Value(value);
}

// public generated Argument() [instance] :2095
void VarArgFunction__Argument::ctor_()
{
}

// internal void Dispose() [instance] :2107
void VarArgFunction__Argument::Dispose()
{
    if (Subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(Subscription), ::TYPES[0/*Uno.IDisposable*/]));
        Subscription = NULL;
    }

    Value(NULL);
    HasValue(false);
}

// public generated bool get_HasValue() [instance] :2105
bool VarArgFunction__Argument::HasValue()
{
    return _HasValue;
}

// internal generated void set_HasValue(bool value) [instance] :2105
void VarArgFunction__Argument::HasValue(bool value)
{
    _HasValue = value;
}

// public generated object get_Value() [instance] :2100
uObject* VarArgFunction__Argument::Value()
{
    return _Value;
}

// internal generated void set_Value(object value) [instance] :2100
void VarArgFunction__Argument::Value(uObject* value)
{
    _Value = value;
}

// public generated Argument New() [static] :2095
VarArgFunction__Argument* VarArgFunction__Argument::New1()
{
    VarArgFunction__Argument* obj1 = (VarArgFunction__Argument*)uNew(VarArgFunction__Argument_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public abstract class BinaryOperator :14
// {
static void BinaryOperator_build(uType* type)
{
    ::STRINGS[0] = uString::Const(" does not implement the required methods");
    ::TYPES[1] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator, _Left), 0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator, _Right), 0);
}

::g::Fuse::Reactive::Expression_type* BinaryOperator_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(BinaryOperator);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.BinaryOperator", options);
    type->fp_build_ = BinaryOperator_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))BinaryOperator__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))BinaryOperator__Subscribe_fn;
    return type;
}

// protected object Compute(object left, object right) :32
void BinaryOperator__Compute_fn(BinaryOperator* __this, uObject* left, uObject* right, uObject** __retval)
{
    *__retval = __this->Compute(left, right);
}

// protected bool get_IsLeftOptional() :29
void BinaryOperator__get_IsLeftOptional_fn(BinaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsLeftOptional();
}

// protected bool get_IsRightOptional() :30
void BinaryOperator__get_IsRightOptional_fn(BinaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsRightOptional();
}

// public generated Fuse.Reactive.Expression get_Left() :16
void BinaryOperator__get_Left_fn(BinaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Left();
}

// private generated void set_Left(Fuse.Reactive.Expression value) :16
void BinaryOperator__set_Left_fn(BinaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Left(value);
}

// protected void OnNewOperands(Fuse.Reactive.IListener listener, object left, object right) :37
void BinaryOperator__OnNewOperands_fn(BinaryOperator* __this, uObject* listener, uObject* left, uObject* right)
{
    __this->OnNewOperands(listener, left, right);
}

// public generated Fuse.Reactive.Expression get_Right() :17
void BinaryOperator__get_Right_fn(BinaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Right();
}

// private generated void set_Right(Fuse.Reactive.Expression value) :17
void BinaryOperator__set_Right_fn(BinaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Right(value);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :24
void BinaryOperator__Subscribe_fn(BinaryOperator* __this, uObject* context, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)BinaryOperator__Subscription::Create(__this, context, listener), void();
}

// protected object Compute(object left, object right) [instance] :32
uObject* BinaryOperator::Compute(uObject* left, uObject* right)
{
    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::Type::FullName(uPtr(::g::Uno::Object::GetType(this))), ::STRINGS[0/*" does not i...*/])));
}

// protected bool get_IsLeftOptional() [instance] :29
bool BinaryOperator::IsLeftOptional()
{
    return false;
}

// protected bool get_IsRightOptional() [instance] :30
bool BinaryOperator::IsRightOptional()
{
    return false;
}

// public generated Fuse.Reactive.Expression get_Left() [instance] :16
::g::Fuse::Reactive::Expression* BinaryOperator::Left()
{
    return _Left;
}

// private generated void set_Left(Fuse.Reactive.Expression value) [instance] :16
void BinaryOperator::Left(::g::Fuse::Reactive::Expression* value)
{
    _Left = value;
}

// protected void OnNewOperands(Fuse.Reactive.IListener listener, object left, object right) [instance] :37
void BinaryOperator::OnNewOperands(uObject* listener, uObject* left, uObject* right)
{
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(listener), ::TYPES[1/*Fuse.Reactive.IListener*/]), (uObject*)this, Compute(left, right));
}

// public generated Fuse.Reactive.Expression get_Right() [instance] :17
::g::Fuse::Reactive::Expression* BinaryOperator::Right()
{
    return _Right;
}

// private generated void set_Right(Fuse.Reactive.Expression value) [instance] :17
void BinaryOperator::Right(::g::Fuse::Reactive::Expression* value)
{
    _Right = value;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\$.uno
// ----------------------------------------------------------------------------------

// public enum BindingMode :119
uEnumType* BindingMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Reactive.BindingMode", ::g::Uno::Int_typeof(), 8);
    type->SetLiterals(
        "Read", 1LL,
        "Write", 2LL,
        "Clear", 4LL,
        "ReadClear", 5LL,
        "WriteClear", 6LL,
        "ReadWriteClear", 7LL,
        "ReadWrite", 3LL,
        "Default", 3LL);
    return type;
}

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Clamp :1013
// {
static void Clamp_build(uType* type)
{
    ::STRINGS[1] = uString::Const("clamp(");
    ::STRINGS[2] = uString::Const(",");
    ::STRINGS[3] = uString::Const(")");
    ::TYPES[2] = ::g::Fuse::Marshal_typeof()->MakeMethod(1/*TryToType<float>*/, ::g::Uno::Float_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator_type, interface0));
    type->SetFields(3);
}

::g::Fuse::Reactive::TernaryOperator_type* Clamp_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::TernaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::TernaryOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Clamp);
    options.TypeSize = sizeof(::g::Fuse::Reactive::TernaryOperator_type);
    type = (::g::Fuse::Reactive::TernaryOperator_type*)uClassType::New("Fuse.Reactive.Clamp", options);
    type->fp_build_ = Clamp_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::TernaryOperator*, uObject*, uObject*, uObject*, uObject**))Clamp__Compute_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Clamp__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::TernaryOperator__Subscribe_fn;
    return type;
}

// protected override sealed object Compute(object a, object mn, object mx) :1021
void Clamp__Compute_fn(Clamp* __this, uObject* a, uObject* mn, uObject* mx, uObject** __retval)
{
    bool ret2;
    bool ret3;
    ::g::Uno::Float4 av = ::g::Uno::Float4__New1(0.0f);
    float mxv = 0.0f, mnv = 0.0f;
    int size = 0;

    if ((!::g::Fuse::Marshal::TryToZeroFloat4(a, &av, &size) || !(::g::Fuse::Marshal__TryToType_fn(::TYPES[2/*Fuse.Marshal.TryToType<float>*/], mn, &mnv, &ret2), ret2)) || !(::g::Fuse::Marshal__TryToType_fn(::TYPES[2/*Fuse.Marshal.TryToType<float>*/], mx, &mxv, &ret3), ret3))
        return *__retval = NULL, void();

    if (size == 1)
        return *__retval = uBox(::g::Uno::Float_typeof(), ::g::Uno::Math::Clamp1(av.X, mnv, mxv)), void();

    if (size == 2)
        return *__retval = uBox(::g::Uno::Float2_typeof(), ::g::Uno::Math::Clamp2(::g::Uno::Float2__New2(av.X, av.Y), mnv, mxv)), void();

    if (size == 3)
        return *__retval = uBox(::g::Uno::Float3_typeof(), ::g::Uno::Math::Clamp4(::g::Uno::Float3__New2(av.X, av.Y, av.Z), mnv, mxv)), void();

    if (size == 4)
        return *__retval = uBox(::g::Uno::Float4_typeof(), ::g::Uno::Math::Clamp6(av, mnv, mxv)), void();

    return *__retval = NULL, void();
}

// public override sealed string ToString() :1042
void Clamp__ToString_fn(Clamp* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[1/*"clamp("*/], __this->First()), ::STRINGS[2/*","*/]), __this->Second()), ::STRINGS[2/*","*/]), __this->Third()), ::STRINGS[3/*")"*/]), void();
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Conditional :1212
// {
static void Conditional_build(uType* type)
{
    ::STRINGS[4] = uString::Const("(");
    ::STRINGS[5] = uString::Const(" ? ");
    ::STRINGS[6] = uString::Const(" : ");
    ::STRINGS[3] = uString::Const(")");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator_type, interface0));
    type->SetFields(3);
}

::g::Fuse::Reactive::TernaryOperator_type* Conditional_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::TernaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::TernaryOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Conditional);
    options.TypeSize = sizeof(::g::Fuse::Reactive::TernaryOperator_type);
    type = (::g::Fuse::Reactive::TernaryOperator_type*)uClassType::New("Fuse.Reactive.Conditional", options);
    type->fp_build_ = Conditional_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::TernaryOperator*, uObject*, uObject*, uObject*, uObject**))Conditional__Compute_fn;
    type->fp_get_IsThirdOptional = (void(*)(::g::Fuse::Reactive::TernaryOperator*, bool*))Conditional__get_IsThirdOptional_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Conditional__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::TernaryOperator__Subscribe_fn;
    return type;
}

// protected override sealed object Compute(object cond, object trueVal, object falseVal) :1218
void Conditional__Compute_fn(Conditional* __this, uObject* cond, uObject* trueVal, uObject* falseVal, uObject** __retval)
{
    if (cond == NULL)
        return *__retval = NULL, void();

    if (::g::Fuse::Marshal::ToBool(cond))
        return *__retval = trueVal, void();

    return *__retval = falseVal, void();
}

// protected override sealed bool get_IsThirdOptional() :1225
void Conditional__get_IsThirdOptional_fn(Conditional* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public override sealed string ToString() :1227
void Conditional__ToString_fn(Conditional* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[4/*"("*/], __this->First()), ::STRINGS[5/*" ? "*/]), __this->Second()), ::STRINGS[6/*" : "*/]), __this->Third()), ::STRINGS[3/*")"*/]), void();
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Constant :244
// {
static void Constant_build(uType* type)
{
    ::STRINGS[7] = uString::Const("'");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::ConstantExpression_type, interface0));
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Constant, _Value), 0);
}

::g::Fuse::Reactive::ConstantExpression_type* Constant_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ConstantExpression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ConstantExpression_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Constant);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ConstantExpression_type);
    type = (::g::Fuse::Reactive::ConstantExpression_type*)uClassType::New("Fuse.Reactive.Constant", options);
    type->fp_build_ = Constant_build;
    type->fp_GetValue = (void(*)(::g::Fuse::Reactive::ConstantExpression*, uObject*, uObject**))Constant__GetValue_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Constant__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::ConstantExpression__Subscribe_fn;
    return type;
}

// public Constant(object value) :248
void Constant__ctor_2_fn(Constant* __this, uObject* value)
{
    __this->ctor_2(value);
}

// public override sealed object GetValue(Fuse.Reactive.IContext context) :249
void Constant__GetValue_fn(Constant* __this, uObject* context, uObject** __retval)
{
    return *__retval = __this->Value(), void();
}

// public Constant New(object value) :248
void Constant__New1_fn(uObject* value, Constant** __retval)
{
    *__retval = Constant::New1(value);
}

// public override sealed string ToString() :251
void Constant__ToString_fn(Constant* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[7/*"'"*/], ::g::Uno::Object::ToString(uPtr(__this->Value()))), ::STRINGS[7/*"'"*/]), void();
}

// public generated object get_Value() :246
void Constant__get_Value_fn(Constant* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// private generated void set_Value(object value) :246
void Constant__set_Value_fn(Constant* __this, uObject* value)
{
    __this->Value(value);
}

// public Constant(object value) [instance] :248
void Constant::ctor_2(uObject* value)
{
    ctor_1();
    Value(value);
}

// public generated object get_Value() [instance] :246
uObject* Constant::Value()
{
    return _Value;
}

// private generated void set_Value(object value) [instance] :246
void Constant::Value(uObject* value)
{
    _Value = value;
}

// public Constant New(object value) [static] :248
Constant* Constant::New1(uObject* value)
{
    Constant* obj1 = (Constant*)uNew(Constant_typeof());
    obj1->ctor_2(value);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public abstract class ConstantExpression :233
// {
static void ConstantExpression_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(ConstantExpression_type, interface0));
}

ConstantExpression_type* ConstantExpression_typeof()
{
    static uSStrong<ConstantExpression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ConstantExpression);
    options.TypeSize = sizeof(ConstantExpression_type);
    type = (ConstantExpression_type*)uClassType::New("Fuse.Reactive.ConstantExpression", options);
    type->fp_build_ = ConstantExpression_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))ConstantExpression__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))ConstantExpression__Subscribe_fn;
    return type;
}

// protected generated ConstantExpression() :233
void ConstantExpression__ctor_1_fn(ConstantExpression* __this)
{
    __this->ctor_1();
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :237
void ConstantExpression__Subscribe_fn(ConstantExpression* __this, uObject* context, uObject* listener, uObject** __retval)
{
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(listener), ::TYPES[1/*Fuse.Reactive.IListener*/]), (uObject*)__this, __this->GetValue(context));
    return *__retval = NULL, void();
}

// protected generated ConstantExpression() [instance] :233
void ConstantExpression::ctor_1()
{
    ctor_();
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\$.uno
// ----------------------------------------------------------------------------------

// private sealed class Instantiator.CountItem :1163
// {
static void Instantiator__CountItem_build(uType* type)
{
}

uType* Instantiator__CountItem_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Instantiator__CountItem);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.Instantiator.CountItem", options);
    type->fp_build_ = Instantiator__CountItem_build;
    return type;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Data :297
// {
static void Data_build(uType* type)
{
    ::STRINGS[8] = uString::Const("{");
    ::STRINGS[9] = uString::Const("}");
    ::TYPES[3] = ::g::Fuse::Reactive::IContext_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::Data, _Key), 0);
}

::g::Fuse::Reactive::Expression_type* Data_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Data);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.Data", options);
    type->fp_build_ = Data_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))Data__Subscribe_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Data__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))Data__Subscribe_fn;
    return type;
}

// public generated string get_Key() :299
void Data__get_Key_fn(Data* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(string value) :299
void Data__set_Key_fn(Data* __this, uString* value)
{
    __this->Key(value);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :303
void Data__Subscribe_fn(Data* __this, uObject* context, uObject* listener, uObject** __retval)
{
    return *__retval = ::g::Fuse::Reactive::IContext::Subscribe(uInterface(uPtr(context), ::TYPES[3/*Fuse.Reactive.IContext*/]), (uObject*)__this, __this->Key(), listener), void();
}

// public override sealed string ToString() :308
void Data__ToString_fn(Data* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[8/*"{"*/], __this->Key()), ::STRINGS[9/*"}"*/]), void();
}

// public generated string get_Key() [instance] :299
uString* Data::Key()
{
    return _Key;
}

// private generated void set_Key(string value) [instance] :299
void Data::Key(uString* value)
{
    _Key = value;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\$.uno
// ----------------------------------------------------------------------------------

// public sealed class DataBinding :154
// {
static void DataBinding_build(uType* type)
{
    ::STRINGS[10] = uString::Const("");
    ::STRINGS[11] = uString::Const("C:\\Users\\Lotus\\AppData\\Local\\Fusetools\\Packages\\Fuse.Reactive.Bindings\\1.2.0\\$.uno");
    ::STRINGS[12] = uString::Const("TryPushAsMarshalledValue");
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    ::TYPES[4] = ::g::Uno::Type_typeof();
    ::TYPES[5] = ::g::Fuse::Reactive::IObservable_typeof();
    ::TYPES[6] = ::g::Uno::UX::Selector_typeof();
    ::TYPES[7] = ::g::Uno::String_typeof();
    ::TYPES[8] = ::g::Uno::Exception_typeof();
    ::TYPES[9] = ::g::Uno::Predicate_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[10] = ::g::Fuse::Reactive::ISubscription_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IContext_typeof(), offsetof(DataBinding_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(DataBinding_type, interface1),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(DataBinding_type, interface2),
        ::g::Fuse::INameListener_typeof(), offsetof(DataBinding_type, interface3),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(DataBinding_type, interface4));
    type->SetFields(4,
        ::g::Fuse::Triggers::BusyTask_typeof(), offsetof(::g::Fuse::Reactive::DataBinding, _busyTask), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::DataBinding, _currentValue), 0,
        ::g::Fuse::Reactive::BindingMode_typeof(), offsetof(::g::Fuse::Reactive::DataBinding, _mode), 0,
        ::TYPES[7/*string*/], offsetof(::g::Fuse::Reactive::DataBinding, _registryName), 0,
        ::TYPES[10/*Fuse.Reactive.ISubscription*/], offsetof(::g::Fuse::Reactive::DataBinding, _subscription), 0,
        ::g::Uno::UX::Property_typeof(), offsetof(::g::Fuse::Reactive::DataBinding, _Target), 0);
}

DataBinding_type* DataBinding_typeof()
{
    static uSStrong<DataBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ExpressionBinding_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(DataBinding);
    options.TypeSize = sizeof(DataBinding_type);
    type = (DataBinding_type*)uClassType::New("Fuse.Reactive.DataBinding", options);
    type->fp_build_ = DataBinding_build;
    type->fp_NewValue = (void(*)(::g::Fuse::Reactive::ExpressionBinding*, uObject*))DataBinding__NewValue_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Binding*))DataBinding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Binding*))DataBinding__OnUnrooted_fn;
    type->fp_SubscribeResource = (void(*)(::g::Fuse::Reactive::ExpressionBinding*, uObject*, uString*, uObject*, uObject**))DataBinding__SubscribeResource_fn;
    type->interface3.fp_OnNameChanged = (void(*)(uObject*, ::g::Fuse::Node*, ::g::Uno::UX::Selector*))DataBinding__FuseINameListenerOnNameChanged_fn;
    type->interface4.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIContextSubscribe_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_get_Node = (void(*)(uObject*, ::g::Fuse::Node**))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIContextget_Node_fn;
    type->interface0.fp_SubscribeResource = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))DataBinding__SubscribeResource_fn;
    type->interface0.fp_get_NameTable = (void(*)(uObject*, ::g::Uno::UX::NameTable**))::g::Fuse::Reactive::ExpressionBinding__get_NameTable_fn;
    return type;
}

// public DataBinding(Uno.UX.Property target, Fuse.Reactive.IExpression key, Uno.UX.NameTable nameTable, Fuse.Reactive.BindingMode mode) :162
void DataBinding__ctor_2_fn(DataBinding* __this, ::g::Uno::UX::Property* target, uObject* key, ::g::Uno::UX::NameTable* nameTable, int* mode)
{
    __this->ctor_2(target, key, nameTable, *mode);
}

// private bool Acceptor(object obj) :403
void DataBinding__Acceptor_fn(DataBinding* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->Acceptor(obj);
}

// private bool get_Clear() :179
void DataBinding__get_Clear_fn(DataBinding* __this, bool* __retval)
{
    *__retval = __this->Clear();
}

// private void ClearFailed() :248
void DataBinding__ClearFailed_fn(DataBinding* __this)
{
    __this->ClearFailed();
}

// private void ClearValue() :277
void DataBinding__ClearValue_fn(DataBinding* __this)
{
    __this->ClearValue();
}

// private void Fuse.INameListener.OnNameChanged(Fuse.Node obj, Uno.UX.Selector name) :282
void DataBinding__FuseINameListenerOnNameChanged_fn(DataBinding* __this, ::g::Fuse::Node* obj, ::g::Uno::UX::Selector* name)
{
    __this->PushValue(__this->_currentValue);
}

// private void MarkFailed(string message) :243
void DataBinding__MarkFailed_fn(DataBinding* __this, uString* message)
{
    __this->MarkFailed(message);
}

// public DataBinding New(Uno.UX.Property target, Fuse.Reactive.IExpression key, Uno.UX.NameTable nameTable, Fuse.Reactive.BindingMode mode) :162
void DataBinding__New1_fn(::g::Uno::UX::Property* target, uObject* key, ::g::Uno::UX::NameTable* nameTable, int* mode, DataBinding** __retval)
{
    *__retval = DataBinding::New1(target, key, nameTable, *mode);
}

// internal override sealed void NewValue(object value) :304
void DataBinding__NewValue_fn(DataBinding* __this, uObject* value)
{
    if (__this->_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_subscription), ::TYPES[0/*Uno.IDisposable*/]));
        __this->_subscription = NULL;
    }

    if (::g::Fuse::Marshal::Is(value, uPtr(__this->Target())->PropertyType()))
        __this->PushValue(value);
    else if (::g::Fuse::Marshal::Is(value, ::TYPES[5/*Fuse.Reactive.IObservable*/]))
    {
        uObject* obs = (uObject*)value;
        __this->_subscription = ::g::Fuse::Reactive::IObservable::Subscribe(uInterface(uPtr(obs), ::TYPES[5/*Fuse.Reactive.IObservable*/]), (uObject*)__this);
    }
    else
        __this->PushValue(value);
}

// protected override sealed void OnRooted() :235
void DataBinding__OnRooted_fn(DataBinding* __this)
{
    ::g::Fuse::Reactive::ExpressionBinding__OnRooted_fn(__this);

    if (__this->Write() && uPtr(__this->Target())->SupportsOriginSetter())
        uPtr(__this->Target())->AddListener((uObject*)__this);
}

// protected override sealed void OnUnrooted() :254
void DataBinding__OnUnrooted_fn(DataBinding* __this)
{
    __this->ClearFailed();
    __this->UnlistenNameRegistry();

    if (__this->Write() && uPtr(__this->Target())->SupportsOriginSetter())
        uPtr(__this->Target())->RemoveListener((uObject*)__this);

    if (__this->_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_subscription), ::TYPES[0/*Uno.IDisposable*/]));
        __this->_subscription = NULL;
    }

    __this->ClearValue();
    ::g::Fuse::Reactive::ExpressionBinding__OnUnrooted_fn(__this);
}

// protected void PushValue(object newValue) :333
void DataBinding__PushValue_fn(DataBinding* __this, uObject* newValue)
{
    __this->PushValue(newValue);
}

// private bool get_Read() :177
void DataBinding__get_Read_fn(DataBinding* __this, bool* __retval)
{
    *__retval = __this->Read();
}

// internal void SetTarget(object value) :271
void DataBinding__SetTarget_fn(DataBinding* __this, uObject* value)
{
    __this->SetTarget(value);
}

// public override sealed Uno.IDisposable SubscribeResource(Fuse.Reactive.IExpression source, string key, Fuse.Reactive.IListener listener) :172
void DataBinding__SubscribeResource_fn(DataBinding* __this, uObject* source, uString* key, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)::g::Fuse::Reactive::ResourceSubscription::New1(source, __this->Parent(), key, listener, uPtr(__this->Target())->PropertyType()), void();
}

// public generated Uno.UX.Property get_Target() :157
void DataBinding__get_Target_fn(DataBinding* __this, ::g::Uno::UX::Property** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property value) :157
void DataBinding__set_Target_fn(DataBinding* __this, ::g::Uno::UX::Property* value)
{
    __this->Target(value);
}

// private static Uno.UX.Selector ToSelector(object newValue) :396
void DataBinding__ToSelector_fn(uObject* newValue, ::g::Uno::UX::Selector* __retval)
{
    *__retval = DataBinding::ToSelector(newValue);
}

// private void TryPushAsMarshalledValue(object newValue) :408
void DataBinding__TryPushAsMarshalledValue_fn(DataBinding* __this, uObject* newValue)
{
    __this->TryPushAsMarshalledValue(newValue);
}

// private bool TryPushAsName(object newValue) :367
void DataBinding__TryPushAsName_fn(DataBinding* __this, uObject* newValue, bool* __retval)
{
    *__retval = __this->TryPushAsName(newValue);
}

// private bool TryPushAsValue(object newValue) :345
void DataBinding__TryPushAsValue_fn(DataBinding* __this, uObject* newValue, bool* __retval)
{
    *__retval = __this->TryPushAsValue(newValue);
}

// private void UnlistenNameRegistry() :358
void DataBinding__UnlistenNameRegistry_fn(DataBinding* __this)
{
    __this->UnlistenNameRegistry();
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :287
void DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn(DataBinding* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    ::g::Uno::UX::Selector prop_ = *prop;

    if (::g::Uno::UX::Selector__op_Equality(prop_, uPtr(__this->Target())->Name()))
    {
        if (__this->_subscription != NULL)
        {
            if (__this->Write())
                ::g::Fuse::Reactive::ISubscription::SetExclusive(uInterface(uPtr(__this->_subscription), ::TYPES[10/*Fuse.Reactive.ISubscription*/]), uPtr(__this->Target())->GetAsObject1());
        }
        else if (__this->CanWriteBack())
            __this->WriteBack(uPtr(__this->Target())->GetAsObject1());
    }
}

// private bool get_Write() :178
void DataBinding__get_Write_fn(DataBinding* __this, bool* __retval)
{
    *__retval = __this->Write();
}

// public DataBinding(Uno.UX.Property target, Fuse.Reactive.IExpression key, Uno.UX.NameTable nameTable, Fuse.Reactive.BindingMode mode) [instance] :162
void DataBinding::ctor_2(::g::Uno::UX::Property* target, uObject* key, ::g::Uno::UX::NameTable* nameTable, int mode)
{
    ctor_1(key, nameTable);
    _mode = mode;
    Target(target);
}

// private bool Acceptor(object obj) [instance] :403
bool DataBinding::Acceptor(uObject* obj)
{
    return ::g::Fuse::Marshal::Is(obj, uPtr(Target())->PropertyType());
}

// private bool get_Clear() [instance] :179
bool DataBinding::Clear()
{
    return (_mode & 4) == 4;
}

// private void ClearFailed() [instance] :248
void DataBinding::ClearFailed()
{
    if (Parent() != NULL)
        ::g::Fuse::Triggers::BusyTask::SetBusy(Parent(), &_busyTask, 0, ::STRINGS[10/*""*/]);
}

// private void ClearValue() [instance] :277
void DataBinding::ClearValue()
{
    if (Clear())
        SetTarget(NULL);
}

// private void MarkFailed(string message) [instance] :243
void DataBinding::MarkFailed(uString* message)
{
    ::g::Fuse::Triggers::BusyTask::SetBusy(Parent(), &_busyTask, 16, message);
}

// protected void PushValue(object newValue) [instance] :333
void DataBinding::PushValue(uObject* newValue)
{
    if (!Read())
        return;

    if (Parent() == NULL)
        return;

    _currentValue = newValue;

    if (TryPushAsValue(newValue))
        return;
    else if (TryPushAsName(newValue))
        return;
    else
        TryPushAsMarshalledValue(newValue);
}

// private bool get_Read() [instance] :177
bool DataBinding::Read()
{
    return (_mode & 1) == 1;
}

// internal void SetTarget(object value) [instance] :271
void DataBinding::SetTarget(uObject* value)
{
    ClearFailed();
    uPtr(Target())->SetAsObject1(value, (uObject*)this);
}

// public generated Uno.UX.Property get_Target() [instance] :157
::g::Uno::UX::Property* DataBinding::Target()
{
    return _Target;
}

// private generated void set_Target(Uno.UX.Property value) [instance] :157
void DataBinding::Target(::g::Uno::UX::Property* value)
{
    _Target = value;
}

// private void TryPushAsMarshalledValue(object newValue) [instance] :408
void DataBinding::TryPushAsMarshalledValue(uObject* newValue)
{
    uObject* res;

    if (::g::Fuse::Marshal::TryConvertTo(uPtr(Target())->PropertyType(), newValue, &res, this))
    {
        try
        {
            SetTarget(res);
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e = __t.Exception;
            MarkFailed(uPtr(e)->ToString());
            ::g::Fuse::Diagnostics::UserError(e->ToString(), Target(), ::STRINGS[11/*"C:\\Users\\...*/], 421, ::STRINGS[12/*"TryPushAsMa...*/], NULL);
        }
    }
}

// private bool TryPushAsName(object newValue) [instance] :367
bool DataBinding::TryPushAsName(uObject* newValue)
{
    ::g::Uno::UX::Selector name = DataBinding::ToSelector(newValue);

    if (!name.IsNull())
    {
        UnlistenNameRegistry();
        _registryName = ::g::Uno::UX::Selector__op_Implicit1(name);
        ::g::Fuse::NameRegistry::AddListener(::g::Uno::UX::Selector__op_Implicit(_registryName), (uObject*)this);
        ::g::Fuse::Node* k = uPtr(Parent())->FindNodeByName(name, uDelegate::New(::TYPES[9/*Uno.Predicate<Fuse.Node>*/], (void*)DataBinding__Acceptor_fn, this));

        if (k != NULL)
        {
            SetTarget(k);
            return true;
        }

        if (::g::Uno::Type::IsClass(uPtr(uPtr(Target())->PropertyType())) && !::g::Fuse::Marshal::CanConvertClass(uPtr(Target())->PropertyType()))
            return true;
    }

    return false;
}

// private bool TryPushAsValue(object newValue) [instance] :345
bool DataBinding::TryPushAsValue(uObject* newValue)
{
    if (::g::Fuse::Marshal::Is(newValue, uPtr(Target())->PropertyType()))
    {
        UnlistenNameRegistry();
        SetTarget(newValue);
        return true;
    }

    return false;
}

// private void UnlistenNameRegistry() [instance] :358
void DataBinding::UnlistenNameRegistry()
{
    if (::g::Uno::String::op_Inequality(_registryName, NULL))
    {
        ::g::Fuse::NameRegistry::RemoveListener1(::g::Uno::UX::Selector__op_Implicit(_registryName), (uObject*)this);
        _registryName = NULL;
    }
}

// private bool get_Write() [instance] :178
bool DataBinding::Write()
{
    return (_mode & 2) == 2;
}

// public DataBinding New(Uno.UX.Property target, Fuse.Reactive.IExpression key, Uno.UX.NameTable nameTable, Fuse.Reactive.BindingMode mode) [static] :162
DataBinding* DataBinding::New1(::g::Uno::UX::Property* target, uObject* key, ::g::Uno::UX::NameTable* nameTable, int mode)
{
    DataBinding* obj1 = (DataBinding*)uNew(DataBinding_typeof());
    obj1->ctor_2(target, key, nameTable, mode);
    return obj1;
}

// private static Uno.UX.Selector ToSelector(object newValue) [static] :396
::g::Uno::UX::Selector DataBinding::ToSelector(uObject* newValue)
{
    return uIs(newValue, ::TYPES[6/*Uno.UX.Selector*/]) ? uUnbox< ::g::Uno::UX::Selector>(::TYPES[6/*Uno.UX.Selector*/], newValue) : uIs(newValue, ::TYPES[7/*string*/]) ? ::g::Uno::UX::Selector__New1(uCast<uString*>(newValue, ::TYPES[7/*string*/])) : uDefault< ::g::Uno::UX::Selector>();
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\subscription\$.uno
// -----------------------------------------------------------------------------------------------

// internal sealed class DataSubscription :8
// {
static void DataSubscription_build(uType* type)
{
    ::STRINGS[8] = uString::Const("{");
    ::STRINGS[13] = uString::Const("} not found in data context");
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    ::TYPES[1] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::g::Fuse::Node__IDataEnumerator_typeof(), offsetof(DataSubscription_type, interface0),
        ::TYPES[0/*Uno.IDisposable*/], offsetof(DataSubscription_type, interface1),
        ::g::Fuse::Node__IDataListener_typeof(), offsetof(DataSubscription_type, interface2));
    type->SetFields(1,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::DataSubscription, _currentData), 0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::DataSubscription, _diag), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::DataSubscription, _isResolved), 0,
        ::TYPES[1/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::DataSubscription, _listener), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Reactive::DataSubscription, _origin), 0,
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::DataSubscription, _source), 0);
}

DataSubscription_type* DataSubscription_typeof()
{
    static uSStrong<DataSubscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Node__DataFinder_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(DataSubscription);
    options.TypeSize = sizeof(DataSubscription_type);
    type = (DataSubscription_type*)uClassType::New("Fuse.Reactive.DataSubscription", options);
    type->fp_build_ = DataSubscription_build;
    type->fp_Resolve = (void(*)(::g::Fuse::Node__DataFinder*, uObject*))DataSubscription__Resolve_fn;
    type->interface2.fp_OnDataChanged = (void(*)(uObject*))DataSubscription__FuseNodeIDataListenerOnDataChanged_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))DataSubscription__Dispose_fn;
    type->interface0.fp_NextData = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Node__DataFinder__NextData_fn;
    return type;
}

// public DataSubscription(Fuse.Reactive.IExpression source, Fuse.Node origin, string key, Fuse.Reactive.IListener listener) :15
void DataSubscription__ctor_1_fn(DataSubscription* __this, uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener)
{
    __this->ctor_1(source, origin, key, listener);
}

// private void ClearDiagnostic() :66
void DataSubscription__ClearDiagnostic_fn(DataSubscription* __this)
{
    __this->ClearDiagnostic();
}

// public void Dispose() :52
void DataSubscription__Dispose_fn(DataSubscription* __this)
{
    __this->Dispose();
}

// private void FindData() :28
void DataSubscription__FindData_fn(DataSubscription* __this)
{
    __this->FindData();
}

// private void Fuse.Node.IDataListener.OnDataChanged() :61
void DataSubscription__FuseNodeIDataListenerOnDataChanged_fn(DataSubscription* __this)
{
    __this->FindData();
}

// public DataSubscription New(Fuse.Reactive.IExpression source, Fuse.Node origin, string key, Fuse.Reactive.IListener listener) :15
void DataSubscription__New1_fn(uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener, DataSubscription** __retval)
{
    *__retval = DataSubscription::New1(source, origin, key, listener);
}

// protected override sealed void Resolve(object data) :42
void DataSubscription__Resolve_fn(DataSubscription* __this, uObject* data)
{
    __this->_isResolved = true;

    if (data != __this->_currentData)
    {
        __this->_currentData = data;
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(__this->_listener), ::TYPES[1/*Fuse.Reactive.IListener*/]), __this->_source, data);
    }
}

// public DataSubscription(Fuse.Reactive.IExpression source, Fuse.Node origin, string key, Fuse.Reactive.IListener listener) [instance] :15
void DataSubscription::ctor_1(uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener)
{
    ctor_(key);
    _source = source;
    _origin = origin;
    _listener = listener;
    uPtr(_origin)->AddDataListener(key, (uObject*)this);
    FindData();
}

// private void ClearDiagnostic() [instance] :66
void DataSubscription::ClearDiagnostic()
{
    if (_diag != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_diag), ::TYPES[0/*Uno.IDisposable*/]));
        _diag = NULL;
    }
}

// public void Dispose() [instance] :52
void DataSubscription::Dispose()
{
    ClearDiagnostic();
    uPtr(_origin)->RemoveDataListener(Key(), (uObject*)this);
    _origin = NULL;
    _source = NULL;
    _listener = NULL;
}

// private void FindData() [instance] :28
void DataSubscription::FindData()
{
    if (_origin == NULL)
        return;

    ClearDiagnostic();
    _isResolved = false;
    uPtr(_origin)->EnumerateData((uObject*)this);

    if (!_isResolved)
        _diag = ::g::Fuse::Diagnostics::ReportTemporalUserWarning(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[8/*"{"*/], Key()), ::STRINGS[13/*"} not found...*/]), _origin);
}

// public DataSubscription New(Fuse.Reactive.IExpression source, Fuse.Node origin, string key, Fuse.Reactive.IListener listener) [static] :15
DataSubscription* DataSubscription::New1(uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener)
{
    DataSubscription* obj1 = (DataSubscription*)uNew(DataSubscription_typeof());
    obj1->ctor_1(source, origin, key, listener);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\$.uno
// ----------------------------------------------------------------------------------

// public sealed class EventBinding :675
// {
static void EventBinding_build(uType* type)
{
    ::TYPES[11] = ::g::Fuse::Reactive::IEventHandler_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IContext_typeof(), offsetof(::g::Fuse::Reactive::ExpressionBinding_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::ExpressionBinding_type, interface1));
    type->SetFields(4,
        ::TYPES[11/*Fuse.Reactive.IEventHandler*/], offsetof(::g::Fuse::Reactive::EventBinding, _eventHandler), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Reactive::EventRecord_typeof(), NULL), offsetof(::g::Fuse::Reactive::EventBinding, _queuedEvents), 0);
}

::g::Fuse::Reactive::ExpressionBinding_type* EventBinding_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ExpressionBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ExpressionBinding_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(EventBinding);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ExpressionBinding_type);
    type = (::g::Fuse::Reactive::ExpressionBinding_type*)uClassType::New("Fuse.Reactive.EventBinding", options);
    type->fp_build_ = EventBinding_build;
    type->fp_NewValue = (void(*)(::g::Fuse::Reactive::ExpressionBinding*, uObject*))EventBinding__NewValue_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Binding*))EventBinding__OnUnrooted_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIContextSubscribe_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_get_Node = (void(*)(uObject*, ::g::Fuse::Node**))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIContextget_Node_fn;
    type->interface0.fp_SubscribeResource = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))::g::Fuse::Reactive::ExpressionBinding__SubscribeResource_fn;
    type->interface0.fp_get_NameTable = (void(*)(uObject*, ::g::Uno::UX::NameTable**))::g::Fuse::Reactive::ExpressionBinding__get_NameTable_fn;
    return type;
}

// internal override sealed void NewValue(object obj) :698
void EventBinding__NewValue_fn(EventBinding* __this, uObject* obj)
{
    __this->_eventHandler = uAs<uObject*>(obj, ::TYPES[11/*Fuse.Reactive.IEventHandler*/]);
    __this->ProcessQueuedEvents();
}

// protected override sealed void OnUnrooted() :704
void EventBinding__OnUnrooted_fn(EventBinding* __this)
{
    ::g::Fuse::Reactive::ExpressionBinding__OnUnrooted_fn(__this);
    __this->_eventHandler = NULL;
    __this->_queuedEvents = NULL;
}

// private void ProcessQueuedEvents() :686
void EventBinding__ProcessQueuedEvents_fn(EventBinding* __this)
{
    __this->ProcessQueuedEvents();
}

// private void ProcessQueuedEvents() [instance] :686
void EventBinding::ProcessQueuedEvents()
{
    ::g::Fuse::Reactive::EventRecord* ret2;

    if ((_eventHandler != NULL) && (_queuedEvents != NULL))
    {
        ::g::Uno::Collections::List* events = _queuedEvents;
        _queuedEvents = NULL;

        for (int i = 0; i < uPtr(events)->Count(); i++)
            ::g::Fuse::Reactive::IEventHandler::Dispatch(uInterface(uPtr(_eventHandler), ::TYPES[11/*Fuse.Reactive.IEventHandler*/]), (uObject*)(::g::Uno::Collections::List__get_Item_fn(uPtr(events), uCRef<int>(i), &ret2), ret2));
    }
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\$.uno
// ----------------------------------------------------------------------------------

// internal sealed class EventRecord :743
// {
static void EventRecord_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IEventRecord_typeof(), offsetof(EventRecord_type, interface0));
}

EventRecord_type* EventRecord_typeof()
{
    static uSStrong<EventRecord_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(EventRecord);
    options.TypeSize = sizeof(EventRecord_type);
    type = (EventRecord_type*)uClassType::New("Fuse.Reactive.EventRecord", options);
    type->fp_build_ = EventRecord_build;
    return type;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public abstract class Expression :227
// {
static void Expression_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(Expression_type, interface0));
}

Expression_type* Expression_typeof()
{
    static uSStrong<Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Expression);
    options.TypeSize = sizeof(Expression_type);
    type = (Expression_type*)uClassType::New("Fuse.Reactive.Expression", options);
    type->fp_build_ = Expression_build;
    return type;
}

// protected generated Expression() :227
void Expression__ctor__fn(Expression* __this)
{
    __this->ctor_();
}

// protected generated Expression() [instance] :227
void Expression::ctor_()
{
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\$.uno
// ----------------------------------------------------------------------------------

// public abstract class ExpressionBinding :810
// {
static void ExpressionBinding_build(uType* type)
{
    ::STRINGS[14] = uString::Const("The binding type does not support resource subscriptions");
    ::TYPES[12] = ::g::Fuse::Reactive::IExpression_typeof();
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    ::TYPES[13] = ::g::Fuse::Reactive::IWriteable_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IContext_typeof(), offsetof(ExpressionBinding_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(ExpressionBinding_type, interface1));
    type->SetFields(1,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::ExpressionBinding, _expressionSub), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Fuse::Reactive::ExpressionBinding, _nameTable), uFieldFlagsWeak,
        ::TYPES[12/*Fuse.Reactive.IExpression*/], offsetof(::g::Fuse::Reactive::ExpressionBinding, _Key), 0);
}

ExpressionBinding_type* ExpressionBinding_typeof()
{
    static uSStrong<ExpressionBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Binding_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ExpressionBinding);
    options.TypeSize = sizeof(ExpressionBinding_type);
    type = (ExpressionBinding_type*)uClassType::New("Fuse.Reactive.ExpressionBinding", options);
    type->fp_build_ = ExpressionBinding_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Binding*))ExpressionBinding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Binding*))ExpressionBinding__OnUnrooted_fn;
    type->fp_SubscribeResource = ExpressionBinding__SubscribeResource_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))ExpressionBinding__FuseReactiveIContextSubscribe_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))ExpressionBinding__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_get_Node = (void(*)(uObject*, ::g::Fuse::Node**))ExpressionBinding__FuseReactiveIContextget_Node_fn;
    type->interface0.fp_SubscribeResource = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))ExpressionBinding__SubscribeResource_fn;
    type->interface0.fp_get_NameTable = (void(*)(uObject*, ::g::Uno::UX::NameTable**))ExpressionBinding__get_NameTable_fn;
    return type;
}

// protected ExpressionBinding(Fuse.Reactive.IExpression key, Uno.UX.NameTable nameTable) :819
void ExpressionBinding__ctor_1_fn(ExpressionBinding* __this, uObject* key, ::g::Uno::UX::NameTable* nameTable)
{
    __this->ctor_1(key, nameTable);
}

// protected internal bool get_CanWriteBack() :827
void ExpressionBinding__get_CanWriteBack_fn(ExpressionBinding* __this, bool* __retval)
{
    *__retval = __this->CanWriteBack();
}

// private Fuse.Node Fuse.Reactive.IContext.get_Node() :841
void ExpressionBinding__FuseReactiveIContextget_Node_fn(ExpressionBinding* __this, ::g::Fuse::Node** __retval)
{
    return *__retval = __this->Parent(), void();
}

// private Uno.IDisposable Fuse.Reactive.IContext.Subscribe(Fuse.Reactive.IExpression source, string key, Fuse.Reactive.IListener listener) :836
void ExpressionBinding__FuseReactiveIContextSubscribe_fn(ExpressionBinding* __this, uObject* source, uString* key, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)::g::Fuse::Reactive::DataSubscription::New1(source, __this->Parent(), key, listener), void();
}

// private void Fuse.Reactive.IListener.OnNewData(Fuse.Reactive.IExpression source, object obj) :855
void ExpressionBinding__FuseReactiveIListenerOnNewData_fn(ExpressionBinding* __this, uObject* source, uObject* obj)
{
    __this->NewValue(obj);
}

// public generated Fuse.Reactive.IExpression get_Key() :812
void ExpressionBinding__get_Key_fn(ExpressionBinding* __this, uObject** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(Fuse.Reactive.IExpression value) :812
void ExpressionBinding__set_Key_fn(ExpressionBinding* __this, uObject* value)
{
    __this->Key(value);
}

// public Uno.UX.NameTable get_NameTable() :816
void ExpressionBinding__get_NameTable_fn(ExpressionBinding* __this, ::g::Uno::UX::NameTable** __retval)
{
    *__retval = __this->NameTable();
}

// protected override void OnRooted() :830
void ExpressionBinding__OnRooted_fn(ExpressionBinding* __this)
{
    ::g::Fuse::Binding__OnRooted_fn(__this);
    __this->_expressionSub = ::g::Fuse::Reactive::IExpression::Subscribe(uInterface(uPtr(__this->Key()), ::TYPES[12/*Fuse.Reactive.IExpression*/]), (uObject*)__this, (uObject*)__this);
}

// protected override void OnUnrooted() :848
void ExpressionBinding__OnUnrooted_fn(ExpressionBinding* __this)
{
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_expressionSub), ::TYPES[0/*Uno.IDisposable*/]));
    __this->_expressionSub = NULL;
    ::g::Fuse::Binding__OnUnrooted_fn(__this);
}

// public virtual Uno.IDisposable SubscribeResource(Fuse.Reactive.IExpression source, string key, Fuse.Reactive.IListener listener) :843
void ExpressionBinding__SubscribeResource_fn(ExpressionBinding* __this, uObject* source, uString* key, uObject* listener, uObject** __retval)
{
    U_THROW(::g::Uno::Exception::New2(::STRINGS[14/*"The binding...*/]));
}

// protected internal void WriteBack(object value) :828
void ExpressionBinding__WriteBack_fn(ExpressionBinding* __this, uObject* value)
{
    __this->WriteBack(value);
}

// protected ExpressionBinding(Fuse.Reactive.IExpression key, Uno.UX.NameTable nameTable) [instance] :819
void ExpressionBinding::ctor_1(uObject* key, ::g::Uno::UX::NameTable* nameTable)
{
    ctor_();
    Key(key);
    _nameTable = nameTable;
}

// protected internal bool get_CanWriteBack() [instance] :827
bool ExpressionBinding::CanWriteBack()
{
    return uIs((uObject*)_expressionSub, ::TYPES[13/*Fuse.Reactive.IWriteable*/]);
}

// public generated Fuse.Reactive.IExpression get_Key() [instance] :812
uObject* ExpressionBinding::Key()
{
    return _Key;
}

// private generated void set_Key(Fuse.Reactive.IExpression value) [instance] :812
void ExpressionBinding::Key(uObject* value)
{
    _Key = value;
}

// public Uno.UX.NameTable get_NameTable() [instance] :816
::g::Uno::UX::NameTable* ExpressionBinding::NameTable()
{
    return _nameTable;
}

// protected internal void WriteBack(object value) [instance] :828
void ExpressionBinding::WriteBack(uObject* value)
{
    ::g::Fuse::Reactive::IWriteable::SetExclusive(uInterface(uPtr(_expressionSub), ::TYPES[13/*Fuse.Reactive.IWriteable*/]), value);
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive\1.2.0\$.uno
// -------------------------------------------------------------------------

// public abstract interface IContext :38
// {
uInterfaceType* IContext_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IContext", 0, 0);
    return type;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive\1.2.0\$.uno
// -------------------------------------------------------------------------

// public abstract interface IEventHandler :18
// {
uInterfaceType* IEventHandler_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IEventHandler", 0, 0);
    return type;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive\1.2.0\$.uno
// -------------------------------------------------------------------------

// public abstract interface IEventRecord :10
// {
uInterfaceType* IEventRecord_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IEventRecord", 0, 0);
    return type;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive\1.2.0\$.uno
// -------------------------------------------------------------------------

// public abstract interface IExpression :63
// {
uInterfaceType* IExpression_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IExpression", 0, 0);
    return type;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive\1.2.0\$.uno
// -------------------------------------------------------------------------

// public abstract interface IListener :33
// {
uInterfaceType* IListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IListener", 0, 0);
    return type;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public abstract class InnerListener :1777
// {
static void InnerListener_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    ::TYPES[14] = ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator_typeof()->MakeType(::g::Fuse::Reactive::IExpression_typeof(), InnerListener__ObservableSubscription_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Reactive::IObservable_typeof();
    ::TYPES[15] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Reactive::IExpression_typeof(), InnerListener__ObservableSubscription_typeof(), NULL);
    type->SetInterfaces(
        ::TYPES[0/*Uno.IDisposable*/], offsetof(InnerListener_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(InnerListener_type, interface1));
    type->SetFields(0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::InnerListener, _diag), 0,
        ::TYPES[15/*Uno.Collections.Dictionary<Fuse.Reactive.IExpression, Fuse.Reactive.InnerListener.ObservableSubscription>*/], offsetof(::g::Fuse::Reactive::InnerListener, _obsSubs), 0);
}

InnerListener_type* InnerListener_typeof()
{
    static uSStrong<InnerListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(InnerListener);
    options.TypeSize = sizeof(InnerListener_type);
    type = (InnerListener_type*)uClassType::New("Fuse.Reactive.InnerListener", options);
    type->fp_build_ = InnerListener_build;
    type->fp_Dispose = InnerListener__Dispose_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))InnerListener__Dispose_fn;
    return type;
}

// protected generated InnerListener() :1777
void InnerListener__ctor__fn(InnerListener* __this)
{
    __this->ctor_();
}

// public void ClearDiagnostic() :1789
void InnerListener__ClearDiagnostic_fn(InnerListener* __this)
{
    __this->ClearDiagnostic();
}

// public virtual void Dispose() :1798
void InnerListener__Dispose_fn(InnerListener* __this)
{
    ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong<InnerListener__ObservableSubscription*> > ret2;
    __this->ClearDiagnostic();

    if (__this->_obsSubs != NULL)
    {
        for (::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong<InnerListener__ObservableSubscription*> > enum1 = (::g::Uno::Collections::Dictionary__ValueCollection__GetEnumerator_fn(uPtr((::g::Uno::Collections::Dictionary__ValueCollection*)uPtr(__this->_obsSubs)->Values()), &ret2), ret2); enum1.MoveNext(::TYPES[14/*Uno.Collections.Dictionary<Fuse.Reactive.IExpression, Fuse.Reactive.InnerListener.ObservableSubscription>.ValueCollection.Enumerator*/]); )
        {
            InnerListener__ObservableSubscription* k = enum1.Current(::TYPES[14/*Uno.Collections.Dictionary<Fuse.Reactive.IExpression, Fuse.Reactive.InnerListener.ObservableSubscription>.ValueCollection.Enumerator*/]);
            uPtr(k)->Dispose();
        }

        uPtr(__this->_obsSubs)->Clear();
        __this->_obsSubs = NULL;
    }
}

// private void Fuse.Reactive.IListener.OnNewData(Fuse.Reactive.IExpression source, object value) :1812
void InnerListener__FuseReactiveIListenerOnNewData_fn(InnerListener* __this, uObject* source, uObject* value)
{
    bool ret3;
    bool ret4;
    InnerListener__ObservableSubscription* obsSub = NULL;

    if ((__this->_obsSubs != NULL) && (::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(__this->_obsSubs), source, (void**)(&obsSub), &ret3), ret3))
    {
        uPtr(obsSub)->Dispose();
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(__this->_obsSubs), source, &ret4);
    }

    uObject* obs = uAs<uObject*>(value, ::TYPES[5/*Fuse.Reactive.IObservable*/]);

    if (obs != NULL)
    {
        if (__this->_obsSubs == NULL)
            __this->_obsSubs = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[15/*Uno.Collections.Dictionary<Fuse.Reactive.IExpression, Fuse.Reactive.InnerListener.ObservableSubscription>*/]));

        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(__this->_obsSubs), source, InnerListener__ObservableSubscription::New1(source, obs, __this));
    }
    else
        __this->OnNewData(source, value);
}

// public void SetDiagnostic(string message, Fuse.Reactive.IExpression source) :1783
void InnerListener__SetDiagnostic_fn(InnerListener* __this, uString* message, uObject* source)
{
    __this->SetDiagnostic(message, source);
}

// protected generated InnerListener() [instance] :1777
void InnerListener::ctor_()
{
}

// public void ClearDiagnostic() [instance] :1789
void InnerListener::ClearDiagnostic()
{
    if (_diag != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_diag), ::TYPES[0/*Uno.IDisposable*/]));
        _diag = NULL;
    }
}

// public void SetDiagnostic(string message, Fuse.Reactive.IExpression source) [instance] :1783
void InnerListener::SetDiagnostic(uString* message, uObject* source)
{
    ClearDiagnostic();
    _diag = ::g::Fuse::Diagnostics::ReportTemporalUserWarning(message, source);
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\$.uno
// ----------------------------------------------------------------------------------

// public enum InstanceDefer :876
uEnumType* InstanceDefer_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Reactive.InstanceDefer", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Immediate", 0LL,
        "Frame", 1LL,
        "Deferred", 2LL);
    return type;
}

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\$.uno
// ----------------------------------------------------------------------------------

// public enum InstanceIdentity :904
uEnumType* InstanceIdentity_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Reactive.InstanceIdentity", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Key", 1LL,
        "Object", 2LL);
    return type;
}

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\$.uno
// ----------------------------------------------------------------------------------

// public enum InstanceReuse :891
uEnumType* InstanceReuse_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Reactive.InstanceReuse", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "None", 0LL,
        "Frame", 1LL);
    return type;
}

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\$.uno
// ----------------------------------------------------------------------------------

// public partial sealed class Instantiator :915
// {
static void Instantiator_build(uType* type)
{
    ::STRINGS[15] = uString::Const("Template contains a non-Node");
    ::STRINGS[11] = uString::Const("C:\\Users\\Lotus\\AppData\\Local\\Fusetools\\Packages\\Fuse.Reactive.Bindings\\1.2.0\\$.uno");
    ::STRINGS[16] = uString::Const("AddTemplate");
    ::STRINGS[17] = uString::Const("inconsistent instance state");
    ::STRINGS[18] = uString::Const("CompleteWindowItem");
    ::STRINGS[10] = uString::Const("");
    ::STRINGS[19] = uString::Const("Limit cannot be less than 0");
    ::STRINGS[20] = uString::Const("set_Limit");
    ::STRINGS[21] = uString::Const("Offset cannot be less than 0");
    ::STRINGS[22] = uString::Const("set_Offset");
    ::TYPES[16] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[17] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[18] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[19] = ::g::Fuse::Node_typeof();
    ::TYPES[20] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1/*IndexOf<Fuse.Node>*/, ::TYPES[19/*Fuse.Node*/], NULL);
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    ::TYPES[21] = Instantiator__CountItem_typeof();
    ::TYPES[22] = uObject_typeof()->Array();
    ::TYPES[23] = ::g::Fuse::IArray_typeof();
    ::TYPES[24] = ::g::Fuse::IObject_typeof();
    ::TYPES[25] = ::g::Fuse::ITemplateSource_typeof();
    ::TYPES[7] = ::g::Uno::String_typeof();
    ::TYPES[26] = ::g::Uno::Action_typeof();
    ::TYPES[5] = ::g::Fuse::Reactive::IObservable_typeof();
    ::TYPES[27] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[28] = ::g::Uno::Action1_typeof()->MakeType(::TYPES[19/*Fuse.Node*/], NULL);
    ::TYPES[29] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(uObject_typeof(), Instantiator__WindowItem_typeof(), NULL);
    ::TYPES[30] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(uObject_typeof(), Instantiator__WindowItem_typeof(), NULL);
    ::TYPES[31] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), Instantiator__WindowItem_typeof(), NULL);
    ::TYPES[32] = ::g::Fuse::Internal::ObjectList_typeof()->MakeType(Instantiator__WindowItem_typeof(), NULL);
    ::TYPES[33] = ::g::Uno::Collections::RootableList_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Instantiator_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Instantiator_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Instantiator_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Instantiator_type, interface3),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(Instantiator_type, interface4),
        ::g::Fuse::Node__ISubtreeDataProvider_typeof(), offsetof(Instantiator_type, interface5),
        ::g::Fuse::IDeferred_typeof(), offsetof(Instantiator_type, interface6));
    type->SetFields(11,
        ::TYPES[32/*Fuse.Internal.ObjectList<Fuse.Reactive.Instantiator.WindowItem>*/], offsetof(::g::Fuse::Reactive::Instantiator, _availableItems), 0,
        ::TYPES[31/*Uno.Collections.Dictionary<object, Fuse.Reactive.Instantiator.WindowItem>*/], offsetof(::g::Fuse::Reactive::Instantiator, _availableItemsById), 0,
        ::g::Fuse::Triggers::BusyTask_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _busyTask), 0,
        ::TYPES[28/*Uno.Action<Fuse.Node>*/], offsetof(::g::Fuse::Reactive::Instantiator, _completedRemove), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::TYPES[19/*Fuse.Node*/], Instantiator__WindowItem_typeof(), NULL), offsetof(::g::Fuse::Reactive::Instantiator, _dataMap), 0,
        ::g::Fuse::Reactive::InstanceDefer_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _defer), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _deferredPriority), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _hasLimit), 0,
        ::g::Fuse::Reactive::InstanceIdentity_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _identity), 0,
        ::TYPES[7/*string*/], offsetof(::g::Fuse::Reactive::Instantiator, _identityKey), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _isListeningItems), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _items), 0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::Instantiator, _itemsSubscription), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _limit), 0,
        ::TYPES[7/*string*/], offsetof(::g::Fuse::Reactive::Instantiator, _matchKey), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _offset), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _pendingNew), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _pendingUpdateWindowItems), 0,
        ::g::Fuse::Reactive::InstanceReuse_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _reuse), 0,
        ::TYPES[33/*Uno.Collections.RootableList<Uno.UX.Template>*/], offsetof(::g::Fuse::Reactive::Instantiator, _rootTemplates), 0,
        ::TYPES[18/*Uno.Collections.IList<Uno.UX.Template>*/], offsetof(::g::Fuse::Reactive::Instantiator, _templates), 0,
        ::TYPES[25/*Fuse.ITemplateSource*/], offsetof(::g::Fuse::Reactive::Instantiator, _templateSource), 0,
        ::TYPES[25/*Fuse.ITemplateSource*/], offsetof(::g::Fuse::Reactive::Instantiator, _weakTemplateSource), uFieldFlagsWeak,
        ::TYPES[32/*Fuse.Internal.ObjectList<Fuse.Reactive.Instantiator.WindowItem>*/], offsetof(::g::Fuse::Reactive::Instantiator, _windowItems), 0,
        ::TYPES[7/*string*/], offsetof(::g::Fuse::Reactive::Instantiator, _TemplateKey), 0,
        ::TYPES[26/*Uno.Action*/], offsetof(::g::Fuse::Reactive::Instantiator, UpdatedWindowItems1), 0);
}

Instantiator_type* Instantiator_typeof()
{
    static uSStrong<Instantiator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 37;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(Instantiator);
    options.TypeSize = sizeof(Instantiator_type);
    type = (Instantiator_type*)uClassType::New("Fuse.Reactive.Instantiator", options);
    type->fp_build_ = Instantiator_build;
    type->fp_GetLastNodeInGroup = (void(*)(::g::Fuse::Node*, ::g::Fuse::Node**))Instantiator__GetLastNodeInGroup_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Instantiator__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Instantiator__OnUnrooted_fn;
    type->interface5.fp_GetData = (void(*)(uObject*, ::g::Fuse::Node*, uObject**))Instantiator__FuseNodeISubtreeDataProviderGetData_fn;
    type->interface6.fp_Perform = (void(*)(uObject*, bool*))Instantiator__FuseIDeferredPerform_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// private bool AddMatchingTemplates(Fuse.Reactive.Instantiator.WindowItem item, Fuse.Reactive.Instantiator.TemplateMatch f) :1939
void Instantiator__AddMatchingTemplates_fn(Instantiator* __this, Instantiator__WindowItem* item, Instantiator__TemplateMatch* f, bool* __retval)
{
    *__retval = __this->AddMatchingTemplates(item, *f);
}

// private void AddTemplate(Fuse.Reactive.Instantiator.WindowItem item, Uno.UX.Template f) :1973
void Instantiator__AddTemplate_fn(Instantiator* __this, Instantiator__WindowItem* item, ::g::Uno::UX::Template* f)
{
    __this->AddTemplate(item, f);
}

// private void Append() :2141
void Instantiator__Append_fn(Instantiator* __this)
{
    __this->Append();
}

// private void CompletedRemove(Fuse.Node n) :1696
void Instantiator__CompletedRemove_fn(Instantiator* __this, ::g::Fuse::Node* n)
{
    __this->CompletedRemove(n);
}

// private void CompleteWindowItem(Fuse.Reactive.Instantiator.WindowItem wi, int windowIndex) :1881
void Instantiator__CompleteWindowItem_fn(Instantiator* __this, Instantiator__WindowItem* wi, int* windowIndex)
{
    __this->CompleteWindowItem(wi, *windowIndex);
}

// private bool CompleteWindowItems(bool one) :1802
void Instantiator__CompleteWindowItems_fn(Instantiator* __this, bool* one, bool* __retval)
{
    *__retval = __this->CompleteWindowItems(*one);
}

// private void CompleteWindowItemsAction() :1796
void Instantiator__CompleteWindowItemsAction_fn(Instantiator* __this)
{
    __this->CompleteWindowItemsAction();
}

// internal int DataIndexOfChild(Fuse.Node child) :1261
void Instantiator__DataIndexOfChild_fn(Instantiator* __this, ::g::Fuse::Node* child, int* __retval)
{
    *__retval = __this->DataIndexOfChild(child);
}

// private int DataToWindowIndex(int dataIndex) :2118
void Instantiator__DataToWindowIndex_fn(Instantiator* __this, int* dataIndex, int* __retval)
{
    *__retval = __this->DataToWindowIndex(*dataIndex);
}

// public Fuse.Reactive.InstanceDefer get_Defer() :947
void Instantiator__get_Defer_fn(Instantiator* __this, int* __retval)
{
    *__retval = __this->Defer();
}

// public void set_Defer(Fuse.Reactive.InstanceDefer value) :948
void Instantiator__set_Defer_fn(Instantiator* __this, int* value)
{
    __this->Defer(*value);
}

// public float get_DeferredPriority() :1018
void Instantiator__get_DeferredPriority_fn(Instantiator* __this, float* __retval)
{
    *__retval = __this->DeferredPriority();
}

// public void set_DeferredPriority(float value) :1019
void Instantiator__set_DeferredPriority_fn(Instantiator* __this, float* value)
{
    __this->DeferredPriority(*value);
}

// private void DisposeItemsSubscription() :1637
void Instantiator__DisposeItemsSubscription_fn(Instantiator* __this)
{
    __this->DisposeItemsSubscription();
}

// private bool Fuse.IDeferred.Perform() :1790
void Instantiator__FuseIDeferredPerform_fn(Instantiator* __this, bool* __retval)
{
    __this->_pendingNew = __this->CompleteWindowItems(true);
    return *__retval = !__this->_pendingNew, void();
}

// private object Fuse.Node.ISubtreeDataProvider.GetData(Fuse.Node n) :1303
void Instantiator__FuseNodeISubtreeDataProviderGetData_fn(Instantiator* __this, ::g::Fuse::Node* n, uObject** __retval)
{
    bool ret14;
    Instantiator__WindowItem* v;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(__this->_dataMap), n, (void**)(&v), &ret14), ret14))
    {
        if (uIs((uObject*)uPtr(v)->Data, ::TYPES[21/*Fuse.Reactive.Instantiator.CountItem*/]))
            return *__retval = NULL, void();

        return *__retval = uPtr(v)->CurrentData(), void();
    }

    return *__retval = NULL, void();
}

// private Fuse.Reactive.Instantiator.WindowItem GetAvailableNodes(Fuse.Reactive.Instantiator.TemplateMatch f, object id) :1998
void Instantiator__GetAvailableNodes_fn(Instantiator* __this, Instantiator__TemplateMatch* f, uObject* id, Instantiator__WindowItem** __retval)
{
    *__retval = __this->GetAvailableNodes(*f, id);
}

// private object GetData(int dataIndex) :1279
void Instantiator__GetData_fn(Instantiator* __this, int* dataIndex, uObject** __retval)
{
    *__retval = __this->GetData(*dataIndex);
}

// private int GetDataCount() :1290
void Instantiator__GetDataCount_fn(Instantiator* __this, int* __retval)
{
    *__retval = __this->GetDataCount();
}

// private object GetDataId(object data) :1360
void Instantiator__GetDataId_fn(Instantiator* __this, uObject* data, uObject** __retval)
{
    *__retval = __this->GetDataId(data);
}

// private object GetDataKey(object data, string key) :1343
void Instantiator__GetDataKey_fn(Instantiator* __this, uObject* data, uString* key, uObject** __retval)
{
    *__retval = __this->GetDataKey(data, key);
}

// private Fuse.Reactive.Instantiator.TemplateMatch GetDataTemplate(object data) :1842
void Instantiator__GetDataTemplate_fn(Instantiator* __this, uObject* data, Instantiator__TemplateMatch* __retval)
{
    *__retval = __this->GetDataTemplate(data);
}

// private Fuse.Node GetLastNodeFromIndex(int windowIndex) :1734
void Instantiator__GetLastNodeFromIndex_fn(Instantiator* __this, int* windowIndex, ::g::Fuse::Node** __retval)
{
    *__retval = __this->GetLastNodeFromIndex(*windowIndex);
}

// internal override sealed Fuse.Node GetLastNodeInGroup() :1702
void Instantiator__GetLastNodeInGroup_fn(Instantiator* __this, ::g::Fuse::Node** __retval)
{
    return *__retval = __this->GetLastNodeFromIndex(uPtr(__this->_windowItems)->Count() - 1), void();
}

// internal bool get_HasLimit() :1159
void Instantiator__get_HasLimit_fn(Instantiator* __this, bool* __retval)
{
    *__retval = __this->HasLimit();
}

// public Fuse.Reactive.InstanceIdentity get_Identity() :983
void Instantiator__get_Identity_fn(Instantiator* __this, int* __retval)
{
    *__retval = __this->Identity();
}

// public void set_Identity(Fuse.Reactive.InstanceIdentity value) :984
void Instantiator__set_Identity_fn(Instantiator* __this, int* value)
{
    __this->Identity(*value);
}

// public string get_IdentityKey() :1002
void Instantiator__get_IdentityKey_fn(Instantiator* __this, uString** __retval)
{
    *__retval = __this->IdentityKey();
}

// public void set_IdentityKey(string value) :1003
void Instantiator__set_IdentityKey_fn(Instantiator* __this, uString* value)
{
    __this->IdentityKey(value);
}

// private void InsertNew(int dataIndex) :1754
void Instantiator__InsertNew_fn(Instantiator* __this, int* dataIndex)
{
    __this->InsertNew(*dataIndex);
}

// private void InsertNewWindowItem(int windowIndex, object data) :1769
void Instantiator__InsertNewWindowItem_fn(Instantiator* __this, int* windowIndex, uObject* data)
{
    __this->InsertNewWindowItem(*windowIndex, data);
}

// internal int get_Limit() :1140
void Instantiator__get_Limit_fn(Instantiator* __this, int* __retval)
{
    *__retval = __this->Limit();
}

// internal void set_Limit(int value) :1141
void Instantiator__set_Limit_fn(Instantiator* __this, int* value)
{
    __this->Limit(*value);
}

// public string get_MatchKey() :1233
void Instantiator__get_MatchKey_fn(Instantiator* __this, uString** __retval)
{
    *__retval = __this->MatchKey();
}

// public void set_MatchKey(string value) :1234
void Instantiator__set_MatchKey_fn(Instantiator* __this, uString* value)
{
    __this->MatchKey(value);
}

// internal int get_Offset() :1092
void Instantiator__get_Offset_fn(Instantiator* __this, int* __retval)
{
    *__retval = __this->Offset();
}

// internal void set_Offset(int value) :1093
void Instantiator__set_Offset_fn(Instantiator* __this, int* value)
{
    __this->Offset(*value);
}

// protected internal void OnItemsChanged() :1185
void Instantiator__OnItemsChanged_fn(Instantiator* __this)
{
    __this->OnItemsChanged();
}

// protected override sealed void OnRooted() :1626
void Instantiator__OnRooted_fn(Instantiator* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->OnItemsChanged();

    if (__this->_rootTemplates != NULL)
        uPtr(__this->_rootTemplates)->Subscribe(uDelegate::New(::TYPES[27/*Uno.Action<Uno.UX.Template>*/], (void*)Instantiator__OnTemplatesChanged_fn, __this), uDelegate::New(::TYPES[27/*Uno.Action<Uno.UX.Template>*/], (void*)Instantiator__OnTemplatesChanged_fn, __this));

    __this->_templateSource = __this->_weakTemplateSource;
}

// private void OnTemplatesChanged(Uno.UX.Template factory) :1620
void Instantiator__OnTemplatesChanged_fn(Instantiator* __this, ::g::Uno::UX::Template* factory)
{
    __this->OnTemplatesChanged(factory);
}

// protected override sealed void OnUnrooted() :1653
void Instantiator__OnUnrooted_fn(Instantiator* __this)
{
    __this->DisposeItemsSubscription();
    __this->RemoveAll();
    __this->RemovePendingAvailableItems();

    if (__this->_rootTemplates != NULL)
        uPtr(__this->_rootTemplates)->Unsubscribe();

    __this->_templateSource = NULL;
    __this->_completedRemove = NULL;
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void OnUpdatedWindowItems() :2233
void Instantiator__OnUpdatedWindowItems_fn(Instantiator* __this)
{
    __this->OnUpdatedWindowItems();
}

// private void PostUpdatedWindowItems() :2243
void Instantiator__PostUpdatedWindowItems_fn(Instantiator* __this)
{
    __this->PostUpdatedWindowItems();
}

// private void RemoveAll() :2154
void Instantiator__RemoveAll_fn(Instantiator* __this)
{
    __this->RemoveAll();
}

// private void RemoveAt(int dataIndex) :2123
void Instantiator__RemoveAt_fn(Instantiator* __this, int* dataIndex)
{
    __this->RemoveAt(*dataIndex);
}

// private void RemoveFromParent(Fuse.Node n) :1689
void Instantiator__RemoveFromParent_fn(Instantiator* __this, ::g::Fuse::Node* n)
{
    __this->RemoveFromParent(n);
}

// private void RemoveLastActive() :2136
void Instantiator__RemoveLastActive_fn(Instantiator* __this)
{
    __this->RemoveLastActive();
}

// private void RemovePendingAvailableItems() :2061
void Instantiator__RemovePendingAvailableItems_fn(Instantiator* __this)
{
    __this->RemovePendingAvailableItems();
}

// private void RemoveWindowItem(Fuse.Reactive.Instantiator.WindowItem wi) :2093
void Instantiator__RemoveWindowItem_fn(Instantiator* __this, Instantiator__WindowItem* wi)
{
    __this->RemoveWindowItem(wi);
}

// private void ReplaceAll(object[] dcs) :2146
void Instantiator__ReplaceAll_fn(Instantiator* __this, uArray* dcs)
{
    __this->ReplaceAll(dcs);
}

// private void Repopulate() :2167
void Instantiator__Repopulate_fn(Instantiator* __this)
{
    __this->Repopulate();
}

// public Fuse.Reactive.InstanceReuse get_Reuse() :967
void Instantiator__get_Reuse_fn(Instantiator* __this, int* __retval)
{
    *__retval = __this->Reuse();
}

// public void set_Reuse(Fuse.Reactive.InstanceReuse value) :968
void Instantiator__set_Reuse_fn(Instantiator* __this, int* value)
{
    __this->Reuse(*value);
}

// private void SetValid() :1675
void Instantiator__SetValid_fn(Instantiator* __this)
{
    __this->SetValid();
}

// private void StartListeningItems() :1648
void Instantiator__StartListeningItems_fn(Instantiator* __this)
{
    __this->StartListeningItems();
}

// public generated string get_TemplateKey() :1086
void Instantiator__get_TemplateKey_fn(Instantiator* __this, uString** __retval)
{
    *__retval = __this->TemplateKey();
}

// public generated void set_TemplateKey(string value) :1086
void Instantiator__set_TemplateKey_fn(Instantiator* __this, uString* value)
{
    __this->TemplateKey(value);
}

// public Uno.Collections.IList<Uno.UX.Template> get_Templates() :927
void Instantiator__get_Templates_fn(Instantiator* __this, uObject** __retval)
{
    *__retval = __this->Templates();
}

// private void TrimAndPad() :2256
void Instantiator__TrimAndPad_fn(Instantiator* __this)
{
    __this->TrimAndPad();
}

// private void UpdateData(Fuse.Reactive.Instantiator.WindowItem item, object oldData) :1319
void Instantiator__UpdateData_fn(Instantiator* __this, Instantiator__WindowItem* item, uObject* oldData)
{
    __this->UpdateData(item, oldData);
}

// internal generated void add_UpdatedWindowItems(Uno.Action value) :2231
void Instantiator__add_UpdatedWindowItems_fn(Instantiator* __this, uDelegate* value)
{
    __this->add_UpdatedWindowItems(value);
}

// internal generated void remove_UpdatedWindowItems(Uno.Action value) :2231
void Instantiator__remove_UpdatedWindowItems_fn(Instantiator* __this, uDelegate* value)
{
    __this->remove_UpdatedWindowItems(value);
}

// private bool AddMatchingTemplates(Fuse.Reactive.Instantiator.WindowItem item, Fuse.Reactive.Instantiator.TemplateMatch f) [instance] :1939
bool Instantiator::AddMatchingTemplates(Instantiator__WindowItem* item, Instantiator__TemplateMatch f)
{
    ::g::Uno::UX::Template* ret7;
    bool reuse = false;
    uObject* oldData = NULL;
    Instantiator__WindowItem* av = GetAvailableNodes(f, uPtr(item)->Id);

    if (av != NULL)
    {
        uPtr(item)->Nodes = uPtr(av)->Nodes;
        oldData = av->CurrentData();
        av->Nodes = NULL;
        reuse = true;
    }
    else if (f.All)
    {
        uPtr(item)->Nodes = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[16/*Uno.Collections.List<Fuse.Node>*/]));

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Templates()), ::TYPES[17/*Uno.Collections.ICollection<Uno.UX.Template>*/])); ++i)
            AddTemplate(item, (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Templates()), ::TYPES[18/*Uno.Collections.IList<Uno.UX.Template>*/]), uCRef<int>(i), &ret7), ret7));
    }
    else if (f.Template == NULL)
        uPtr(item)->Nodes = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[16/*Uno.Collections.List<Fuse.Node>*/]));
    else
    {
        uPtr(item)->Nodes = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[16/*Uno.Collections.List<Fuse.Node>*/]));
        AddTemplate(item, f.Template);
    }

    UpdateData(item, oldData);
    item->Template = f;
    return reuse;
}

// private void AddTemplate(Fuse.Reactive.Instantiator.WindowItem item, Uno.UX.Template f) [instance] :1973
void Instantiator::AddTemplate(Instantiator__WindowItem* item, ::g::Uno::UX::Template* f)
{
    ::g::Fuse::Node* elm = uAs< ::g::Fuse::Node*>(uPtr(f)->New1(), ::TYPES[19/*Fuse.Node*/]);

    if (elm == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[15/*"Template co...*/], this, ::STRINGS[11/*"C:\\Users\\...*/], 1978, ::STRINGS[16/*"AddTemplate"*/]);
        return;
    }

    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(item)->Nodes), elm);
}

// private void Append() [instance] :2141
void Instantiator::Append()
{
    InsertNew(Offset() + uPtr(_windowItems)->Count());
}

// private void CompletedRemove(Fuse.Node n) [instance] :1696
void Instantiator::CompletedRemove(::g::Fuse::Node* n)
{
    bool ret8;
    uPtr(n)->OverrideContextParent = NULL;
    ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(_dataMap), n, &ret8);
}

// private void CompleteWindowItem(Fuse.Reactive.Instantiator.WindowItem wi, int windowIndex) [instance] :1881
void Instantiator::CompleteWindowItem(Instantiator__WindowItem* wi, int windowIndex)
{
    int ret9;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret10;
    int ret11;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret12;
    uPtr(wi)->Id = GetDataId(uPtr(wi)->Data);
    Instantiator__TemplateMatch match = GetDataTemplate(wi->Data);
    bool reuse = AddMatchingTemplates(wi, match);

    if ((wi->Template.All && (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Templates()), ::TYPES[17/*Uno.Collections.ICollection<Uno.UX.Template>*/])) != uPtr(wi->Nodes)->Count())) || ((wi->Template.Template != NULL) && (uPtr(wi->Nodes)->Count() != 1)))
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[17/*"inconsisten...*/], this, ::STRINGS[11/*"C:\\Users\\...*/], 1891, ::STRINGS[18/*"CompleteWin...*/]);

    ::g::Fuse::Node* lastNode = GetLastNodeFromIndex(windowIndex - 1);

    if (reuse)
        uPtr(Parent())->InsertOrMoveNodes((::g::Uno::Collections::EnumerableExtensions__IndexOf_fn(::TYPES[20/*Uno.Collections.EnumerableExtensions.IndexOf<Fuse.Node>*/], uPtr(Parent())->Children(), lastNode, &ret9), ret9) + 1, uBox(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::TYPES[19/*Fuse.Node*/], NULL), (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(uPtr(wi)->Nodes), &ret10), ret10)));
    else
        uPtr(Parent())->InsertNodes((::g::Uno::Collections::EnumerableExtensions__IndexOf_fn(::TYPES[20/*Uno.Collections.EnumerableExtensions.IndexOf<Fuse.Node>*/], uPtr(Parent())->Children(), lastNode, &ret11), ret11) + 1, uBox(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::TYPES[19/*Fuse.Node*/], NULL), (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(uPtr(wi)->Nodes), &ret12), ret12)));
}

// private bool CompleteWindowItems(bool one) [instance] :1802
bool Instantiator::CompleteWindowItems(bool one)
{
    if (!IsRootingStarted())
        return false;

    bool first = true;

    for (int i = 0; i < uPtr(_windowItems)->Count(); ++i)
    {
        Instantiator__WindowItem* wi = (Instantiator__WindowItem*)uPtr(_windowItems)->Item(i);

        if (uPtr(wi)->Nodes == NULL)
        {
            if (!first && one)
                return true;

            CompleteWindowItem(wi, i);
            first = false;
        }
    }

    RemovePendingAvailableItems();
    return false;
}

// private void CompleteWindowItemsAction() [instance] :1796
void Instantiator::CompleteWindowItemsAction()
{
    CompleteWindowItems(false);
    _pendingNew = false;
}

// internal int DataIndexOfChild(Fuse.Node child) [instance] :1261
int Instantiator::DataIndexOfChild(::g::Fuse::Node* child)
{
    ::g::Fuse::Node* ret13;

    for (int i = 0; i < uPtr(_windowItems)->Count(); i++)
    {
        Instantiator__WindowItem* wi = (Instantiator__WindowItem*)uPtr(_windowItems)->Item(i);
        ::g::Uno::Collections::List* list = uPtr(wi)->Nodes;

        if (list == NULL)
            continue;

        for (int n = 0; n < uPtr(list)->Count(); n++)
            if ((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(n), &ret13), ret13) == child)
                return i + Offset();
    }

    return -1;
}

// private int DataToWindowIndex(int dataIndex) [instance] :2118
int Instantiator::DataToWindowIndex(int dataIndex)
{
    return dataIndex - Offset();
}

// public Fuse.Reactive.InstanceDefer get_Defer() [instance] :947
int Instantiator::Defer()
{
    return _defer;
}

// public void set_Defer(Fuse.Reactive.InstanceDefer value) [instance] :948
void Instantiator::Defer(int value)
{
    _defer = value;
}

// public float get_DeferredPriority() [instance] :1018
float Instantiator::DeferredPriority()
{
    return _deferredPriority;
}

// public void set_DeferredPriority(float value) [instance] :1019
void Instantiator::DeferredPriority(float value)
{
    _deferredPriority = value;
}

// private void DisposeItemsSubscription() [instance] :1637
void Instantiator::DisposeItemsSubscription()
{
    _isListeningItems = false;

    if (_itemsSubscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_itemsSubscription), ::TYPES[0/*Uno.IDisposable*/]));
        _itemsSubscription = NULL;
    }
}

// private Fuse.Reactive.Instantiator.WindowItem GetAvailableNodes(Fuse.Reactive.Instantiator.TemplateMatch f, object id) [instance] :1998
Instantiator__WindowItem* Instantiator::GetAvailableNodes(Instantiator__TemplateMatch f, uObject* id)
{
    bool ret15;
    bool ret16;

    if ((id != NULL) && (_availableItemsById != NULL))
    {
        Instantiator__WindowItem* item;

        if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_availableItemsById), id, (void**)(&item), &ret15), ret15) && f.Matches(uPtr(item)->Template))
        {
            ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(_availableItemsById), id, &ret16);
            return item;
        }
    }

    if ((Reuse() != 0) && (_availableItems != NULL))

        for (int i = 0; i < uPtr(_availableItems)->Count(); ++i)
        {
            Instantiator__WindowItem* av = (Instantiator__WindowItem*)uPtr(_availableItems)->Item(i);

            if (f.Matches(uPtr(av)->Template))
            {
                uPtr(_availableItems)->RemoveAt(i);
                return av;
            }
        }

    return NULL;
}

// private object GetData(int dataIndex) [instance] :1279
uObject* Instantiator::GetData(int dataIndex)
{
    uArray* e = uAs<uArray*>(_items, ::TYPES[22/*object[]*/]);

    if (e != NULL)
        return uPtr(e)->Strong<uObject*>(dataIndex);

    uObject* a = uAs<uObject*>(_items, ::TYPES[23/*Fuse.IArray*/]);

    if (a != NULL)
        return ::g::Fuse::IArray::Item(uInterface(uPtr(a), ::TYPES[23/*Fuse.IArray*/]), dataIndex);

    return NULL;
}

// private int GetDataCount() [instance] :1290
int Instantiator::GetDataCount()
{
    uArray* e = uAs<uArray*>(_items, ::TYPES[22/*object[]*/]);

    if (e != NULL)
        return uPtr(e)->Length();

    uObject* a = uAs<uObject*>(_items, ::TYPES[23/*Fuse.IArray*/]);

    if (a != NULL)
        return ::g::Fuse::IArray::Length(uInterface(uPtr(a), ::TYPES[23/*Fuse.IArray*/]));

    return 0;
}

// private object GetDataId(object data) [instance] :1360
uObject* Instantiator::GetDataId(uObject* data)
{
    switch (Identity())
    {
        case 0:
            return NULL;
        case 1:
            return GetDataKey(data, IdentityKey());
        case 2:
            return data;
    }

    return NULL;
}

// private object GetDataKey(object data, string key) [instance] :1343
uObject* Instantiator::GetDataKey(uObject* data, uString* key)
{
    uObject* so = uAs<uObject*>(data, ::TYPES[24/*Fuse.IObject*/]);

    if ((so != NULL) && ::g::Uno::String::op_Inequality(key, NULL))
    {
        if (::g::Fuse::IObject::ContainsKey(uInterface(uPtr(so), ::TYPES[24/*Fuse.IObject*/]), key))
            return ::g::Fuse::IObject::Item(uInterface(uPtr(so), ::TYPES[24/*Fuse.IObject*/]), key);
    }

    return NULL;
}

// private Fuse.Reactive.Instantiator.TemplateMatch GetDataTemplate(object data) [instance] :1842
Instantiator__TemplateMatch Instantiator::GetDataTemplate(uObject* data)
{
    Instantiator__TemplateMatch collection2;
    Instantiator__TemplateMatch collection3;
    ::g::Uno::UX::Template* ret17;
    ::g::Uno::UX::Template* useTemplate = NULL;
    ::g::Uno::UX::Template* defaultTemplate = NULL;

    if ((_templateSource != NULL) && ::g::Uno::String::op_Inequality(TemplateKey(), NULL))
    {
        ::g::Uno::UX::Template* t = ::g::Fuse::ITemplateSource::FindTemplate(uInterface(uPtr(_templateSource), ::TYPES[25/*Fuse.ITemplateSource*/]), TemplateKey());

        if (t != NULL)
            useTemplate = t;
    }

    if (useTemplate == NULL)
    {
        uString* key = uAs<uString*>(GetDataKey(data, MatchKey()), ::TYPES[7/*string*/]);

        for (int i = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Templates()), ::TYPES[17/*Uno.Collections.ICollection<Uno.UX.Template>*/])) - 1; i >= 0; --i)
        {
            ::g::Uno::UX::Template* f = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Templates()), ::TYPES[18/*Uno.Collections.IList<Uno.UX.Template>*/]), uCRef<int>(i), &ret17), ret17);

            if (uPtr(f)->IsDefault())
                defaultTemplate = f;

            if (::g::Uno::String::op_Inequality(key, NULL) && ::g::Uno::String::op_Equality(uPtr(f)->Key(), key))
                useTemplate = f;
        }
    }

    if (useTemplate == NULL)
    {
        if (::g::Uno::String::op_Inequality(MatchKey(), NULL) || (defaultTemplate != NULL))
            useTemplate = defaultTemplate;
        else
            return (collection2 = uDefault<Instantiator__TemplateMatch>(), collection2.All = true, collection2.Template = NULL, collection2);
    }

    collection3 = uDefault<Instantiator__TemplateMatch>();
    collection3.All = false;
    collection3.Template = useTemplate;
    return collection3;
}

// private Fuse.Node GetLastNodeFromIndex(int windowIndex) [instance] :1734
::g::Fuse::Node* Instantiator::GetLastNodeFromIndex(int windowIndex)
{
    ::g::Fuse::Node* ret18;

    if (windowIndex >= uPtr(_windowItems)->Count())
        windowIndex = uPtr(_windowItems)->Count() - 1;

    while (windowIndex >= 0)
    {
        ::g::Uno::Collections::List* lastList = uPtr((Instantiator__WindowItem*)uPtr(_windowItems)->Item(windowIndex))->Nodes;

        if ((lastList != NULL) && (uPtr(lastList)->Count() != 0))
            return uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(lastList), uCRef<int>(uPtr(lastList)->Count() - 1), &ret18), ret18))->GetLastNodeInGroup();

        windowIndex--;
    }

    return this;
}

// internal bool get_HasLimit() [instance] :1159
bool Instantiator::HasLimit()
{
    return _hasLimit;
}

// public Fuse.Reactive.InstanceIdentity get_Identity() [instance] :983
int Instantiator::Identity()
{
    return _identity;
}

// public void set_Identity(Fuse.Reactive.InstanceIdentity value) [instance] :984
void Instantiator::Identity(int value)
{
    _identity = value;
}

// public string get_IdentityKey() [instance] :1002
uString* Instantiator::IdentityKey()
{
    return _identityKey;
}

// public void set_IdentityKey(string value) [instance] :1003
void Instantiator::IdentityKey(uString* value)
{
    _identityKey = value;
    Identity(1);
}

// private void InsertNew(int dataIndex) [instance] :1754
void Instantiator::InsertNew(int dataIndex)
{
    if ((dataIndex < Offset()) || (HasLimit() && ((dataIndex - Offset()) >= Limit())))
        return;

    int windowIndex = DataToWindowIndex(dataIndex);

    if ((windowIndex > uPtr(_windowItems)->Count()) || (windowIndex < 0))
        return;

    uObject* data = GetData(dataIndex);
    InsertNewWindowItem(windowIndex, data);
}

// private void InsertNewWindowItem(int windowIndex, object data) [instance] :1769
void Instantiator::InsertNewWindowItem(int windowIndex, uObject* data)
{
    Instantiator__WindowItem* collection1;
    collection1 = Instantiator__WindowItem::New1();
    uPtr(collection1)->Data = data;
    Instantiator__WindowItem* wi = collection1;
    uPtr(_windowItems)->Insert(windowIndex, wi);

    if (Defer() == 0)
        CompleteWindowItem(wi, windowIndex);
    else if (!_pendingNew)
    {
        if (Defer() == 2)
            ::g::Fuse::DeferredManager::AddPending((uObject*)this, ::g::Uno::Float2__New2(DeferredPriority(), (float)NodeDepth()));
        else
            ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[26/*Uno.Action*/], (void*)Instantiator__CompleteWindowItemsAction_fn, this), -1, 0);

        _pendingNew = true;
    }

    OnUpdatedWindowItems();
}

// internal int get_Limit() [instance] :1140
int Instantiator::Limit()
{
    return _limit;
}

// internal void set_Limit(int value) [instance] :1141
void Instantiator::Limit(int value)
{
    if (_hasLimit && (_limit == value))
        return;

    if (value < 0)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[19/*"Limit canno...*/], this, ::STRINGS[11/*"C:\\Users\\...*/], 1148, ::STRINGS[20/*"set_Limit"*/], NULL);
        value = 0;
    }

    _hasLimit = true;
    _limit = value;

    if (IsRootingCompleted())
        TrimAndPad();
}

// public string get_MatchKey() [instance] :1233
uString* Instantiator::MatchKey()
{
    return _matchKey;
}

// public void set_MatchKey(string value) [instance] :1234
void Instantiator::MatchKey(uString* value)
{
    if (::g::Uno::String::op_Inequality(_matchKey, value))
    {
        _matchKey = value;
        OnItemsChanged();
    }
}

// internal int get_Offset() [instance] :1092
int Instantiator::Offset()
{
    return _offset;
}

// internal void set_Offset(int value) [instance] :1093
void Instantiator::Offset(int value)
{
    if (_offset == value)
        return;

    if (value < 0)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[21/*"Offset cann...*/], this, ::STRINGS[11/*"C:\\Users\\...*/], 1100, ::STRINGS[22/*"set_Offset"*/], NULL);
        value = 0;
    }

    if (!IsRootingCompleted())
    {
        _offset = value;
        return;
    }

    int dataCount = GetDataCount();

    while (_offset < value)
    {
        if (_offset < dataCount)
            RemoveAt(_offset);

        _offset++;
        int end = (_offset + Limit()) - 1;

        if (HasLimit() && (end < dataCount))
            InsertNew(end);
    }

    while (_offset > value)
    {
        int end1 = (_offset + Limit()) - 1;

        if (HasLimit() && (end1 < dataCount))
            RemoveAt((_offset + Limit()) - 1);

        _offset--;

        if (_offset < dataCount)
            InsertNew(_offset);
    }
}

// protected internal void OnItemsChanged() [instance] :1185
void Instantiator::OnItemsChanged()
{
    if (!IsRootingStarted())
        return;

    DisposeItemsSubscription();
    RemoveAll();
    uObject* obs = uAs<uObject*>(_items, ::TYPES[5/*Fuse.Reactive.IObservable*/]);

    if (obs != NULL)
    {
        StartListeningItems();
        _itemsSubscription = ::g::Fuse::Reactive::IObservable::Subscribe(uInterface(uPtr(obs), ::TYPES[5/*Fuse.Reactive.IObservable*/]), (uObject*)this);
    }
    else
        Repopulate();
}

// private void OnTemplatesChanged(Uno.UX.Template factory) [instance] :1620
void Instantiator::OnTemplatesChanged(::g::Uno::UX::Template* factory)
{
    if (!IsRootingCompleted())
        return;

    Repopulate();
}

// private void OnUpdatedWindowItems() [instance] :2233
void Instantiator::OnUpdatedWindowItems()
{
    if (::g::Uno::Delegate::op_Equality(UpdatedWindowItems1, NULL) || _pendingUpdateWindowItems)
        return;

    _pendingUpdateWindowItems = true;
    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[26/*Uno.Action*/], (void*)Instantiator__PostUpdatedWindowItems_fn, this), -1, 0);
}

// private void PostUpdatedWindowItems() [instance] :2243
void Instantiator::PostUpdatedWindowItems()
{
    if (::g::Uno::Delegate::op_Inequality(UpdatedWindowItems1, NULL))
        uPtr(UpdatedWindowItems1)->InvokeVoid();

    _pendingUpdateWindowItems = false;
}

// private void RemoveAll() [instance] :2154
void Instantiator::RemoveAll()
{
    if (uPtr(_windowItems)->Count() == 0)
        return;

    for (int i = 0; i < uPtr(_windowItems)->Count(); ++i)
    {
        Instantiator__WindowItem* wi = (Instantiator__WindowItem*)uPtr(_windowItems)->Item(i);
        RemoveWindowItem(wi);
    }

    uPtr(_windowItems)->Clear();
    OnUpdatedWindowItems();
}

// private void RemoveAt(int dataIndex) [instance] :2123
void Instantiator::RemoveAt(int dataIndex)
{
    int windowIndex = DataToWindowIndex(dataIndex);

    if ((windowIndex < 0) || (windowIndex >= uPtr(_windowItems)->Count()))
        return;

    RemoveWindowItem((Instantiator__WindowItem*)uPtr(_windowItems)->Item(windowIndex));
    uPtr(_windowItems)->RemoveAt(windowIndex);
    SetValid();
    OnUpdatedWindowItems();
}

// private void RemoveFromParent(Fuse.Node n) [instance] :1689
void Instantiator::RemoveFromParent(::g::Fuse::Node* n)
{
    if (::g::Uno::Delegate::op_Equality(_completedRemove, NULL))
        _completedRemove = uDelegate::New(::TYPES[28/*Uno.Action<Fuse.Node>*/], (void*)Instantiator__CompletedRemove_fn, this);

    uPtr(Parent())->BeginRemoveChild(n, _completedRemove);
}

// private void RemoveLastActive() [instance] :2136
void Instantiator::RemoveLastActive()
{
    RemoveAt((Offset() + uPtr(_windowItems)->Count()) - 1);
}

// private void RemovePendingAvailableItems() [instance] :2061
void Instantiator::RemovePendingAvailableItems()
{
    ::g::Fuse::Node* ret21;
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uObject*>, uStrong<Instantiator__WindowItem*> > ret22;
    ::g::Fuse::Node* ret23;

    if (_availableItems != NULL)
    {
        for (int i = 0; i < uPtr(_availableItems)->Count(); ++i)
        {
            Instantiator__WindowItem* av = (Instantiator__WindowItem*)uPtr(_availableItems)->Item(i);

            if (uPtr(av)->Nodes == NULL)
                continue;

            for (int n = 0; n < uPtr(uPtr(av)->Nodes)->Count(); ++n)
                RemoveFromParent((::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(av)->Nodes), uCRef<int>(n), &ret21), ret21));

            uPtr(av)->Unlink();
        }

        uPtr(_availableItems)->Clear();
    }

    if (_availableItemsById != NULL)
    {
        for (::g::Uno::Collections::Dictionary__Enumerator<uStrong<uObject*>, uStrong<Instantiator__WindowItem*> > enum4 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_availableItemsById), &ret22), ret22); enum4.MoveNext(::TYPES[29/*Uno.Collections.Dictionary<object, Fuse.Reactive.Instantiator.WindowItem>.Enumerator*/]); )
        {
            ::g::Uno::Collections::KeyValuePair<uStrong<uObject*>, uStrong<Instantiator__WindowItem*> > kvp = enum4.Current(::TYPES[29/*Uno.Collections.Dictionary<object, Fuse.Reactive.Instantiator.WindowItem>.Enumerator*/]);

            if (uPtr(kvp.Value(::TYPES[30/*Uno.Collections.KeyValuePair<object, Fuse.Reactive.Instantiator.WindowItem>*/]))->Nodes == NULL)
                continue;

            for (int n1 = 0; n1 < uPtr(uPtr(kvp.Value(::TYPES[30/*Uno.Collections.KeyValuePair<object, Fuse.Reactive.Instantiator.WindowItem>*/]))->Nodes)->Count(); ++n1)
                RemoveFromParent((::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(kvp.Value(::TYPES[30/*Uno.Collections.KeyValuePair<object, Fuse.Reactive.Instantiator.WindowItem>*/]))->Nodes), uCRef<int>(n1), &ret23), ret23));

            uPtr(kvp.Value(::TYPES[30/*Uno.Collections.KeyValuePair<object, Fuse.Reactive.Instantiator.WindowItem>*/]))->Unlink();
        }

        uPtr(_availableItemsById)->Clear();
    }

    _pendingNew = false;
}

// private void RemoveWindowItem(Fuse.Reactive.Instantiator.WindowItem wi) [instance] :2093
void Instantiator::RemoveWindowItem(Instantiator__WindowItem* wi)
{
    bool ret24;

    if ((uPtr(wi)->Nodes == NULL) || (uPtr(uPtr(wi)->Nodes)->Count() == 0))
        return;

    if (uPtr(wi)->Id != NULL)
    {
        if (_availableItemsById == NULL)
            _availableItemsById = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[31/*Uno.Collections.Dictionary<object, Fuse.Reactive.Instantiator.WindowItem>*/]));

        if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(_availableItemsById), uPtr(wi)->Id, &ret24), ret24))
            uPtr(wi)->Id = NULL;
        else
            ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(_availableItemsById), uPtr(wi)->Id, wi);
    }

    if (uPtr(wi)->Id == NULL)
    {
        if (_availableItems == NULL)
            _availableItems = ((::g::Fuse::Internal::ObjectList*)::g::Fuse::Internal::ObjectList::New1(::TYPES[32/*Fuse.Internal.ObjectList<Fuse.Reactive.Instantiator.WindowItem>*/], 0));

        uPtr(_availableItems)->Add(wi);
    }
}

// private void ReplaceAll(object[] dcs) [instance] :2146
void Instantiator::ReplaceAll(uArray* dcs)
{
    RemoveAll();

    for (int i = 0; i < uPtr(dcs)->Length(); i++)
        InsertNew(i);
}

// private void Repopulate() [instance] :2167
void Instantiator::Repopulate()
{
    uArray* e = uAs<uArray*>(_items, ::TYPES[22/*object[]*/]);
    uObject* a = uAs<uObject*>(_items, ::TYPES[23/*Fuse.IArray*/]);

    if (e != NULL)
    {
        ReplaceAll(e);
        return;
    }
    else if (a != NULL)
    {
        RemoveAll();

        for (int i = 0; i < ::g::Fuse::IArray::Length(uInterface(uPtr(a), ::TYPES[23/*Fuse.IArray*/])); i++)
            InsertNew(i);
    }
}

// public Fuse.Reactive.InstanceReuse get_Reuse() [instance] :967
int Instantiator::Reuse()
{
    return _reuse;
}

// public void set_Reuse(Fuse.Reactive.InstanceReuse value) [instance] :968
void Instantiator::Reuse(int value)
{
    _reuse = value;
}

// private void SetValid() [instance] :1675
void Instantiator::SetValid()
{
    if (Parent() != NULL)
        ::g::Fuse::Triggers::BusyTask::SetBusy(Parent(), &_busyTask, 0, ::STRINGS[10/*""*/]);
}

// private void StartListeningItems() [instance] :1648
void Instantiator::StartListeningItems()
{
    _isListeningItems = true;
}

// public generated string get_TemplateKey() [instance] :1086
uString* Instantiator::TemplateKey()
{
    return _TemplateKey;
}

// public generated void set_TemplateKey(string value) [instance] :1086
void Instantiator::TemplateKey(uString* value)
{
    _TemplateKey = value;
}

// public Uno.Collections.IList<Uno.UX.Template> get_Templates() [instance] :927
uObject* Instantiator::Templates()
{
    if (_templates != NULL)
        return _templates;

    _rootTemplates = ((::g::Uno::Collections::RootableList*)::g::Uno::Collections::RootableList::New1(::TYPES[33/*Uno.Collections.RootableList<Uno.UX.Template>*/]));

    if (IsRootingCompleted())
        uPtr(_rootTemplates)->Subscribe(uDelegate::New(::TYPES[27/*Uno.Action<Uno.UX.Template>*/], (void*)Instantiator__OnTemplatesChanged_fn, this), uDelegate::New(::TYPES[27/*Uno.Action<Uno.UX.Template>*/], (void*)Instantiator__OnTemplatesChanged_fn, this));

    _templates = (uObject*)_rootTemplates;
    return _templates;
}

// private void TrimAndPad() [instance] :2256
void Instantiator::TrimAndPad()
{
    if (HasLimit())

        for (int i = uPtr(_windowItems)->Count() - _limit; i > 0; --i)
            RemoveLastActive();

    int dataCount = GetDataCount();
    int add = HasLimit() ? ::g::Uno::Math::Min8(_limit - uPtr(_windowItems)->Count(), dataCount - (Offset() + uPtr(_windowItems)->Count())) : dataCount - (Offset() + uPtr(_windowItems)->Count());

    for (int i1 = 0; i1 < add; ++i1)
        Append();
}

// private void UpdateData(Fuse.Reactive.Instantiator.WindowItem item, object oldData) [instance] :1319
void Instantiator::UpdateData(Instantiator__WindowItem* item, uObject* oldData)
{
    ::g::Fuse::Node* ret25;

    if (uPtr(item)->DataLink != NULL)
    {
        uPtr(uPtr(item)->DataLink)->Dispose();
        item->DataLink = NULL;
    }

    uObject* obs = uAs<uObject*>(uPtr(item)->Data, ::TYPES[5/*Fuse.Reactive.IObservable*/]);

    if (obs != NULL)
        uPtr(item)->DataLink = Instantiator__ObservableLink::New1(obs, item);

    uObject* nextData = item->CurrentData();

    for (int i = 0; i < uPtr(item->Nodes)->Count(); ++i)
    {
        ::g::Fuse::Node* n = (::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(item)->Nodes), uCRef<int>(i), &ret25), ret25);
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(_dataMap), n, item);
        uPtr(n)->OverrideContextParent = this;

        if (oldData != NULL)
            uPtr(n)->BroadcastDataChange(oldData, nextData);
    }
}

// internal generated void add_UpdatedWindowItems(Uno.Action value) [instance] :2231
void Instantiator::add_UpdatedWindowItems(uDelegate* value)
{
    UpdatedWindowItems1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(UpdatedWindowItems1, value), ::TYPES[26/*Uno.Action*/]);
}

// internal generated void remove_UpdatedWindowItems(Uno.Action value) [instance] :2231
void Instantiator::remove_UpdatedWindowItems(uDelegate* value)
{
    UpdatedWindowItems1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(UpdatedWindowItems1, value), ::TYPES[26/*Uno.Action*/]);
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\$.uno
// ----------------------------------------------------------------------------------

// public abstract class InstantiatorFunction :2289
// {
// static InstantiatorFunction() :2289
static void InstantiatorFunction__cctor__fn(uType* __type)
{
    InstantiatorFunction::DataIndexName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[23/*"index"*/]);
    InstantiatorFunction::OffsetIndexName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[24/*"offsetIndex"*/]);
}

static void InstantiatorFunction_build(uType* type)
{
    ::STRINGS[23] = uString::Const("index");
    ::STRINGS[24] = uString::Const("offsetIndex");
    ::STRINGS[25] = uString::Const("too many parameters for ");
    ::STRINGS[11] = uString::Const("C:\\Users\\Lotus\\AppData\\Local\\Fusetools\\Packages\\Fuse.Reactive.Bindings\\1.2.0\\$.uno");
    ::STRINGS[26] = uString::Const("Subscribe");
    ::TYPES[34] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Expression_typeof(), NULL);
    ::TYPES[35] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Expression_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(1,
        ::g::Uno::UX::Selector_typeof(), offsetof(::g::Fuse::Reactive::InstantiatorFunction, _item), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Reactive::InstantiatorFunction::DataIndexName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Reactive::InstantiatorFunction::OffsetIndexName_, uFieldFlagsStatic);
}

::g::Fuse::Reactive::Expression_type* InstantiatorFunction_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::VarArgFunction_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(InstantiatorFunction);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.InstantiatorFunction", options);
    type->fp_build_ = InstantiatorFunction_build;
    type->fp_cctor_ = InstantiatorFunction__cctor__fn;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))InstantiatorFunction__Subscribe_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))InstantiatorFunction__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))InstantiatorFunction__Subscribe_fn;
    return type;
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :2307
void InstantiatorFunction__Subscribe_fn(InstantiatorFunction* __this, uObject* context, uObject* listener, uObject** __retval)
{
    ::g::Fuse::Reactive::Expression* ret1;

    if (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Arguments()), ::TYPES[34/*Uno.Collections.ICollection<Fuse.Reactive.Expression>*/])) > 1)
    {
        ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::STRINGS[25/*"too many pa...*/], ::g::Uno::UX::Selector__op_Implicit1(__this->_item)), __this, ::STRINGS[11/*"C:\\Users\\...*/], 2311, ::STRINGS[26/*"Subscribe"*/], NULL);
        return *__retval = NULL, void();
    }

    ::g::Fuse::Reactive::Expression* node = (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Arguments()), ::TYPES[34/*Uno.Collections.ICollection<Fuse.Reactive.Expression>*/])) > 0) ? (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->Arguments()), ::TYPES[35/*Uno.Collections.IList<Fuse.Reactive.Expression>*/]), uCRef<int>(0), &ret1), ret1) : NULL;
    return *__retval = (uObject*)InstantiatorFunction__InstantiatorSubscription::New1(__this, __this->_item, listener, context, (uObject*)node), void();
}

// public override sealed string ToString() :2302
void InstantiatorFunction__ToString_fn(InstantiatorFunction* __this, uString** __retval)
{
    return *__retval = __this->FormatString(::g::Uno::UX::Selector__op_Implicit1(__this->_item)), void();
}

::g::Uno::UX::Selector InstantiatorFunction::DataIndexName_;
::g::Uno::UX::Selector InstantiatorFunction::OffsetIndexName_;
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\$.uno
// ----------------------------------------------------------------------------------

// private sealed class InstantiatorFunction.InstantiatorSubscription :2319
// {
static void InstantiatorFunction__InstantiatorSubscription_build(uType* type)
{
    ::STRINGS[27] = uString::Const("invalid search node for InstantiatorFunction");
    ::STRINGS[11] = uString::Const("C:\\Users\\Lotus\\AppData\\Local\\Fusetools\\Packages\\Fuse.Reactive.Bindings\\1.2.0\\$.uno");
    ::STRINGS[28] = uString::Const("OnNewNode");
    ::STRINGS[29] = uString::Const("Could not find an Instantiator");
    ::STRINGS[30] = uString::Const("Unable to resolve Instantiator node");
    ::TYPES[12] = ::g::Fuse::Reactive::IExpression_typeof();
    ::TYPES[26] = ::g::Uno::Action_typeof();
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    ::TYPES[19] = ::g::Fuse::Node_typeof();
    ::TYPES[3] = ::g::Fuse::Reactive::IContext_typeof();
    ::TYPES[36] = ::TYPES[19/*Fuse.Node*/]->MakeMethod(0/*FindBehavior<Fuse.Reactive.Instantiator>*/, ::g::Fuse::Reactive::Instantiator_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::TYPES[0/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface0),
        ::TYPES[1/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface1));
    type->SetFields(2,
        ::TYPES[3/*Fuse.Reactive.IContext*/], offsetof(::g::Fuse::Reactive::InstantiatorFunction__InstantiatorSubscription, _context), 0,
        ::g::Fuse::Reactive::InstantiatorFunction_typeof(), offsetof(::g::Fuse::Reactive::InstantiatorFunction__InstantiatorSubscription, _expr), 0,
        ::TYPES[19/*Fuse.Node*/], offsetof(::g::Fuse::Reactive::InstantiatorFunction__InstantiatorSubscription, _instance), 0,
        ::g::Fuse::Reactive::Instantiator_typeof(), offsetof(::g::Fuse::Reactive::InstantiatorFunction__InstantiatorSubscription, _instantiator), 0,
        ::g::Uno::UX::Selector_typeof(), offsetof(::g::Fuse::Reactive::InstantiatorFunction__InstantiatorSubscription, _item), 0,
        ::TYPES[1/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::InstantiatorFunction__InstantiatorSubscription, _listener), 0,
        ::TYPES[12/*Fuse.Reactive.IExpression*/], offsetof(::g::Fuse::Reactive::InstantiatorFunction__InstantiatorSubscription, _node), 0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::InstantiatorFunction__InstantiatorSubscription, _nodeSub), 0);
}

::g::Fuse::Reactive::InnerListener_type* InstantiatorFunction__InstantiatorSubscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InnerListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InnerListener_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(InstantiatorFunction__InstantiatorSubscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InnerListener_type);
    type = (::g::Fuse::Reactive::InnerListener_type*)uClassType::New("Fuse.Reactive.InstantiatorFunction.InstantiatorSubscription", options);
    type->fp_build_ = InstantiatorFunction__InstantiatorSubscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))InstantiatorFunction__InstantiatorSubscription__Dispose_fn;
    type->fp_OnNewData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*, uObject*))InstantiatorFunction__InstantiatorSubscription__OnNewData_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))InstantiatorFunction__InstantiatorSubscription__Dispose_fn;
    return type;
}

// public InstantiatorSubscription(Fuse.Reactive.InstantiatorFunction expr, Uno.UX.Selector item, Fuse.Reactive.IListener listener, Fuse.Reactive.IContext context, Fuse.Reactive.IExpression node) :2334
void InstantiatorFunction__InstantiatorSubscription__ctor_1_fn(InstantiatorFunction__InstantiatorSubscription* __this, ::g::Fuse::Reactive::InstantiatorFunction* expr, ::g::Uno::UX::Selector* item, uObject* listener, uObject* context, uObject* node)
{
    __this->ctor_1(expr, *item, listener, context, node);
}

// public override sealed void Dispose() :2399
void InstantiatorFunction__InstantiatorSubscription__Dispose_fn(InstantiatorFunction__InstantiatorSubscription* __this)
{
    ::g::Fuse::Reactive::InnerListener__Dispose_fn(__this);
    __this->_expr = NULL;
    __this->_listener = NULL;

    if (__this->_instantiator != NULL)
        uPtr(__this->_instantiator)->remove_UpdatedWindowItems(uDelegate::New(::TYPES[26/*Uno.Action*/], (void*)InstantiatorFunction__InstantiatorSubscription__OnUpdatedWindowItems_fn, __this));

    __this->_instantiator = NULL;

    if (__this->_nodeSub != NULL)
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_nodeSub), ::TYPES[0/*Uno.IDisposable*/]));

    __this->_nodeSub = NULL;
    __this->_node = NULL;
}

// public InstantiatorSubscription New(Fuse.Reactive.InstantiatorFunction expr, Uno.UX.Selector item, Fuse.Reactive.IListener listener, Fuse.Reactive.IContext context, Fuse.Reactive.IExpression node) :2334
void InstantiatorFunction__InstantiatorSubscription__New1_fn(::g::Fuse::Reactive::InstantiatorFunction* expr, ::g::Uno::UX::Selector* item, uObject* listener, uObject* context, uObject* node, InstantiatorFunction__InstantiatorSubscription** __retval)
{
    *__retval = InstantiatorFunction__InstantiatorSubscription::New1(expr, *item, listener, context, node);
}

// protected override sealed void OnNewData(Fuse.Reactive.IExpression source, object value) :2351
void InstantiatorFunction__InstantiatorSubscription__OnNewData_fn(InstantiatorFunction__InstantiatorSubscription* __this, uObject* source, uObject* value)
{
    if (source == __this->_node)
        __this->OnNewNode(value);
}

// private void OnNewNode(object obj) :2357
void InstantiatorFunction__InstantiatorSubscription__OnNewNode_fn(InstantiatorFunction__InstantiatorSubscription* __this, uObject* obj)
{
    __this->OnNewNode(obj);
}

// private void OnUpdatedWindowItems() :2425
void InstantiatorFunction__InstantiatorSubscription__OnUpdatedWindowItems_fn(InstantiatorFunction__InstantiatorSubscription* __this)
{
    __this->OnUpdatedWindowItems();
}

// private void PushValue() :2413
void InstantiatorFunction__InstantiatorSubscription__PushValue_fn(InstantiatorFunction__InstantiatorSubscription* __this)
{
    __this->PushValue();
}

// public InstantiatorSubscription(Fuse.Reactive.InstantiatorFunction expr, Uno.UX.Selector item, Fuse.Reactive.IListener listener, Fuse.Reactive.IContext context, Fuse.Reactive.IExpression node) [instance] :2334
void InstantiatorFunction__InstantiatorSubscription::ctor_1(::g::Fuse::Reactive::InstantiatorFunction* expr, ::g::Uno::UX::Selector item, uObject* listener, uObject* context, uObject* node)
{
    ctor_();
    _node = node;
    _expr = expr;
    _item = item;
    _listener = listener;
    _context = context;

    if (_node == NULL)
        OnNewNode(NULL);
    else
        _nodeSub = ::g::Fuse::Reactive::IExpression::Subscribe(uInterface(uPtr(_node), ::TYPES[12/*Fuse.Reactive.IExpression*/]), context, (uObject*)this);
}

// private void OnNewNode(object obj) [instance] :2357
void InstantiatorFunction__InstantiatorSubscription::OnNewNode(uObject* obj)
{
    if (_instantiator != NULL)
    {
        uPtr(_instantiator)->remove_UpdatedWindowItems(uDelegate::New(::TYPES[26/*Uno.Action*/], (void*)InstantiatorFunction__InstantiatorSubscription__OnUpdatedWindowItems_fn, this));
        _instantiator = NULL;
        _instance = NULL;
    }

    ::g::Fuse::Node* ind1 = uAs< ::g::Fuse::Node*>(obj, ::TYPES[19/*Fuse.Node*/]);
    ::g::Fuse::Node* searchNode = (ind1 != NULL) ? ind1 : (::g::Fuse::Node*)::g::Fuse::Reactive::IContext::Node(uInterface(uPtr(_context), ::TYPES[3/*Fuse.Reactive.IContext*/]));

    if (searchNode == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[27/*"invalid sea...*/], this, ::STRINGS[11/*"C:\\Users\\...*/], 2369, ::STRINGS[28/*"OnNewNode"*/], NULL);
        return;
    }

    _instantiator = ((::g::Fuse::Reactive::Instantiator*)uPtr(searchNode)->FindBehavior(::TYPES[36/*Fuse.Node.FindBehavior<Fuse.Reactive.Instantiator>*/]));

    if (_instantiator == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[29/*"Could not f...*/], this, ::STRINGS[11/*"C:\\Users\\...*/], 2376, ::STRINGS[28/*"OnNewNode"*/], NULL);
        return;
    }

    ::g::Fuse::Node* p = ::g::Fuse::Reactive::IContext::Node(uInterface(uPtr(_context), ::TYPES[3/*Fuse.Reactive.IContext*/]));

    while ((p != NULL) && (uPtr(p)->ContextParent() != _instantiator))
        p = uPtr(p)->ContextParent();

    if (p == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[30/*"Unable to r...*/], this, ::STRINGS[11/*"C:\\Users\\...*/], 2387, ::STRINGS[28/*"OnNewNode"*/]);
        return;
    }

    if (_instantiator != NULL)
    {
        _instance = p;
        uPtr(_instantiator)->add_UpdatedWindowItems(uDelegate::New(::TYPES[26/*Uno.Action*/], (void*)InstantiatorFunction__InstantiatorSubscription__OnUpdatedWindowItems_fn, this));
        PushValue();
    }
}

// private void OnUpdatedWindowItems() [instance] :2425
void InstantiatorFunction__InstantiatorSubscription::OnUpdatedWindowItems()
{
    PushValue();
}

// private void PushValue() [instance] :2413
void InstantiatorFunction__InstantiatorSubscription::PushValue()
{
    int q = -1;

    if (::g::Uno::UX::Selector__op_Equality(_item, ::g::Fuse::Reactive::InstantiatorFunction::DataIndexName()))
        q = uPtr(_instantiator)->DataIndexOfChild(_instance);
    else if (::g::Uno::UX::Selector__op_Equality(_item, ::g::Fuse::Reactive::InstantiatorFunction::OffsetIndexName()))
        q = uPtr(_instantiator)->DataIndexOfChild(_instance) - uPtr(_instantiator)->Offset();

    if (q != -1)
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[1/*Fuse.Reactive.IListener*/]), (uObject*)_expr, uBox<int>(::g::Uno::Int_typeof(), q));
}

// public InstantiatorSubscription New(Fuse.Reactive.InstantiatorFunction expr, Uno.UX.Selector item, Fuse.Reactive.IListener listener, Fuse.Reactive.IContext context, Fuse.Reactive.IExpression node) [static] :2334
InstantiatorFunction__InstantiatorSubscription* InstantiatorFunction__InstantiatorSubscription::New1(::g::Fuse::Reactive::InstantiatorFunction* expr, ::g::Uno::UX::Selector item, uObject* listener, uObject* context, uObject* node)
{
    InstantiatorFunction__InstantiatorSubscription* obj2 = (InstantiatorFunction__InstantiatorSubscription*)uNew(InstantiatorFunction__InstantiatorSubscription_typeof());
    obj2->ctor_1(expr, item, listener, context, node);
    return obj2;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive\1.2.0\$.uno
// -------------------------------------------------------------------------

// internal abstract interface IObservable :86
// {
uInterfaceType* IObservable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IObservable", 0, 0);
    return type;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive\1.2.0\$.uno
// -------------------------------------------------------------------------

// internal abstract interface IObserver :98
// {
uInterfaceType* IObserver_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IObserver", 0, 0);
    return type;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive\1.2.0\$.uno
// -------------------------------------------------------------------------

// internal abstract interface ISubscription :91
// {
uInterfaceType* ISubscription_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.ISubscription", 0, 0);
    return type;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive\1.2.0\$.uno
// -------------------------------------------------------------------------

// public abstract interface ValueForwarder.IValueListener :198
// {
uInterfaceType* ValueForwarder__IValueListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.ValueForwarder.IValueListener", 0, 0);
    return type;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive\1.2.0\$.uno
// -------------------------------------------------------------------------

// public abstract interface IWriteable :58
// {
uInterfaceType* IWriteable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IWriteable", 0, 0);
    return type;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Lerp :961
// {
static void Lerp_build(uType* type)
{
    ::STRINGS[31] = uString::Const("lerp(");
    ::STRINGS[2] = uString::Const(",");
    ::STRINGS[3] = uString::Const(")");
    ::TYPES[2] = ::g::Fuse::Marshal_typeof()->MakeMethod(1/*TryToType<float>*/, ::g::Uno::Float_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator_type, interface0));
    type->SetFields(3);
}

::g::Fuse::Reactive::TernaryOperator_type* Lerp_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::TernaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::TernaryOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Lerp);
    options.TypeSize = sizeof(::g::Fuse::Reactive::TernaryOperator_type);
    type = (::g::Fuse::Reactive::TernaryOperator_type*)uClassType::New("Fuse.Reactive.Lerp", options);
    type->fp_build_ = Lerp_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::TernaryOperator*, uObject*, uObject*, uObject*, uObject**))Lerp__Compute_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Lerp__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::TernaryOperator__Subscribe_fn;
    return type;
}

// protected override sealed object Compute(object a, object b, object t) :969
void Lerp__Compute_fn(Lerp* __this, uObject* a, uObject* b, uObject* t, uObject** __retval)
{
    bool ret2;
    ::g::Uno::Float4 av = ::g::Uno::Float4__New1(0.0f), bv = ::g::Uno::Float4__New1(0.0f);
    int asize = 0, bsize = 0;
    float tv = 0.0f;

    if ((!::g::Fuse::Marshal::TryToZeroFloat4(a, &av, &asize) || !::g::Fuse::Marshal::TryToZeroFloat4(b, &bv, &bsize)) || !(::g::Fuse::Marshal__TryToType_fn(::TYPES[2/*Fuse.Marshal.TryToType<float>*/], t, &tv, &ret2), ret2))
        return *__retval = NULL, void();

    int size = ::g::Uno::Math::Max8(asize, bsize);

    switch (size)
    {
        case 1:
            return *__retval = uBox(::g::Uno::Float_typeof(), ::g::Uno::Math::Lerp1(av.X, bv.X, tv)), void();
        case 2:
            return *__retval = uBox(::g::Uno::Float2_typeof(), ::g::Uno::Math::Lerp2(::g::Uno::Float2__New2(av.X, av.Y), ::g::Uno::Float2__New2(bv.X, bv.Y), tv)), void();
        case 3:
            return *__retval = uBox(::g::Uno::Float3_typeof(), ::g::Uno::Math::Lerp4(::g::Uno::Float3__New2(av.X, av.Y, av.Z), ::g::Uno::Float3__New2(bv.X, bv.Y, bv.Z), tv)), void();
        case 4:
            return *__retval = uBox(::g::Uno::Float4_typeof(), ::g::Uno::Math::Lerp6(av, bv, tv)), void();
    }

    return *__retval = NULL, void();
}

// public override sealed string ToString() :994
void Lerp__ToString_fn(Lerp* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[31/*"lerp("*/], __this->First()), ::STRINGS[2/*","*/]), __this->Second()), ::STRINGS[2/*","*/]), __this->Third()), ::STRINGS[3/*")"*/]), void();
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class LookUp :335
// {
static void LookUp_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(::g::Fuse::Reactive::LookUp, _Collection), 0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(::g::Fuse::Reactive::LookUp, _Index), 0);
}

::g::Fuse::Reactive::Expression_type* LookUp_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LookUp);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.LookUp", options);
    type->fp_build_ = LookUp_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))LookUp__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))LookUp__Subscribe_fn;
    return type;
}

// public generated Fuse.Reactive.Expression get_Collection() :337
void LookUp__get_Collection_fn(LookUp* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Collection();
}

// private generated void set_Collection(Fuse.Reactive.Expression value) :337
void LookUp__set_Collection_fn(LookUp* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Collection(value);
}

// public generated Fuse.Reactive.Expression get_Index() :338
void LookUp__get_Index_fn(LookUp* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Index();
}

// private generated void set_Index(Fuse.Reactive.Expression value) :338
void LookUp__set_Index_fn(LookUp* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Index(value);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :347
void LookUp__Subscribe_fn(LookUp* __this, uObject* context, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)LookUp__LookUpSubscription::New1(__this, context, listener), void();
}

// public generated Fuse.Reactive.Expression get_Collection() [instance] :337
::g::Fuse::Reactive::Expression* LookUp::Collection()
{
    return _Collection;
}

// private generated void set_Collection(Fuse.Reactive.Expression value) [instance] :337
void LookUp::Collection(::g::Fuse::Reactive::Expression* value)
{
    _Collection = value;
}

// public generated Fuse.Reactive.Expression get_Index() [instance] :338
::g::Fuse::Reactive::Expression* LookUp::Index()
{
    return _Index;
}

// private generated void set_Index(Fuse.Reactive.Expression value) [instance] :338
void LookUp::Index(::g::Fuse::Reactive::Expression* value)
{
    _Index = value;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// private sealed class LookUp.LookUpSubscription :352
// {
static void LookUp__LookUpSubscription_build(uType* type)
{
    ::STRINGS[32] = uString::Const("Index must be a number: ");
    ::STRINGS[33] = uString::Const("Index was outside the bounds of the array");
    ::STRINGS[34] = uString::Const("Object does not contain the given key '");
    ::STRINGS[7] = uString::Const("'");
    ::STRINGS[35] = uString::Const("Look-up operator not supported on collection type: ");
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    ::TYPES[5] = ::g::Fuse::Reactive::IObservable_typeof();
    ::TYPES[1] = ::g::Fuse::Reactive::IListener_typeof();
    ::TYPES[23] = ::g::Fuse::IArray_typeof();
    ::TYPES[37] = ::g::Fuse::MarshalException_typeof();
    ::TYPES[24] = ::g::Fuse::IObject_typeof();
    type->SetInterfaces(
        ::TYPES[0/*Uno.IDisposable*/], offsetof(LookUp__LookUpSubscription_type, interface0),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(LookUp__LookUpSubscription_type, interface1),
        ::TYPES[1/*Fuse.Reactive.IListener*/], offsetof(LookUp__LookUpSubscription_type, interface2),
        ::g::Fuse::Reactive::ValueForwarder__IValueListener_typeof(), offsetof(LookUp__LookUpSubscription_type, interface3));
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::LookUp__LookUpSubscription, _collection), 0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::LookUp__LookUpSubscription, _colObservableSub), 0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::LookUp__LookUpSubscription, _colSub), 0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::LookUp__LookUpSubscription, _diag), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::LookUp__LookUpSubscription, _hasCollection), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::LookUp__LookUpSubscription, _hasIndex), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::LookUp__LookUpSubscription, _index), 0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::LookUp__LookUpSubscription, _indexForwarder), 0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::LookUp__LookUpSubscription, _indexSub), 0,
        ::TYPES[1/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::LookUp__LookUpSubscription, _listener), 0,
        ::g::Fuse::Reactive::LookUp_typeof(), offsetof(::g::Fuse::Reactive::LookUp__LookUpSubscription, _lu), 0);
}

LookUp__LookUpSubscription_type* LookUp__LookUpSubscription_typeof()
{
    static uSStrong<LookUp__LookUpSubscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(LookUp__LookUpSubscription);
    options.TypeSize = sizeof(LookUp__LookUpSubscription_type);
    type = (LookUp__LookUpSubscription_type*)uClassType::New("Fuse.Reactive.LookUp.LookUpSubscription", options);
    type->fp_build_ = LookUp__LookUpSubscription_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))LookUp__LookUpSubscription__Dispose_fn;
    type->interface2.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))LookUp__LookUpSubscription__OnNewData_fn;
    return type;
}

// public LookUpSubscription(Fuse.Reactive.LookUp lu, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :360
void LookUp__LookUpSubscription__ctor__fn(LookUp__LookUpSubscription* __this, ::g::Fuse::Reactive::LookUp* lu, uObject* context, uObject* listener)
{
    __this->ctor_(lu, context, listener);
}

// public void ClearDiagnostic() :406
void LookUp__LookUpSubscription__ClearDiagnostic_fn(LookUp__LookUpSubscription* __this)
{
    __this->ClearDiagnostic();
}

// public void Dispose() :512
void LookUp__LookUpSubscription__Dispose_fn(LookUp__LookUpSubscription* __this)
{
    __this->Dispose();
}

// private void DisposeCollectionObservableSub() :446
void LookUp__LookUpSubscription__DisposeCollectionObservableSub_fn(LookUp__LookUpSubscription* __this)
{
    __this->DisposeCollectionObservableSub();
}

// private void DisposeIndexSub() :422
void LookUp__LookUpSubscription__DisposeIndexSub_fn(LookUp__LookUpSubscription* __this)
{
    __this->DisposeIndexSub();
}

// public LookUpSubscription New(Fuse.Reactive.LookUp lu, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :360
void LookUp__LookUpSubscription__New1_fn(::g::Fuse::Reactive::LookUp* lu, uObject* context, uObject* listener, LookUp__LookUpSubscription** __retval)
{
    *__retval = LookUp__LookUpSubscription::New1(lu, context, listener);
}

// private void NewCollection(object col) :432
void LookUp__LookUpSubscription__NewCollection_fn(LookUp__LookUpSubscription* __this, uObject* col)
{
    __this->NewCollection(col);
}

// private void NewIndex(object ind) :381
void LookUp__LookUpSubscription__NewIndex_fn(LookUp__LookUpSubscription* __this, uObject* ind)
{
    __this->NewIndex(ind);
}

// public void OnNewData(Fuse.Reactive.IExpression source, object value) :373
void LookUp__LookUpSubscription__OnNewData_fn(LookUp__LookUpSubscription* __this, uObject* source, uObject* value)
{
    __this->OnNewData(source, value);
}

// private void PushNewData(object value) :507
void LookUp__LookUpSubscription__PushNewData_fn(LookUp__LookUpSubscription* __this, uObject* value)
{
    __this->PushNewData(value);
}

// private void ResultChanged() :455
void LookUp__LookUpSubscription__ResultChanged_fn(LookUp__LookUpSubscription* __this)
{
    __this->ResultChanged();
}

// public void SetDiagnostic(string message, Fuse.Reactive.IExpression source) :400
void LookUp__LookUpSubscription__SetDiagnostic_fn(LookUp__LookUpSubscription* __this, uString* message, uObject* source)
{
    __this->SetDiagnostic(message, source);
}

// public LookUpSubscription(Fuse.Reactive.LookUp lu, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [instance] :360
void LookUp__LookUpSubscription::ctor_(::g::Fuse::Reactive::LookUp* lu, uObject* context, uObject* listener)
{
    _listener = listener;
    _lu = lu;
    _colSub = uPtr(uPtr(_lu)->Index())->Subscribe(context, (uObject*)this);
    _indexSub = uPtr(uPtr(_lu)->Collection())->Subscribe(context, (uObject*)this);
}

// public void ClearDiagnostic() [instance] :406
void LookUp__LookUpSubscription::ClearDiagnostic()
{
    if (_diag != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_diag), ::TYPES[0/*Uno.IDisposable*/]));
        _diag = NULL;
    }
}

// public void Dispose() [instance] :512
void LookUp__LookUpSubscription::Dispose()
{
    ClearDiagnostic();
    DisposeCollectionObservableSub();
    DisposeIndexSub();

    if (_colSub != NULL)
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_colSub), ::TYPES[0/*Uno.IDisposable*/]));

    if (_indexSub != NULL)
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_indexSub), ::TYPES[0/*Uno.IDisposable*/]));

    _colSub = NULL;
    _indexSub = NULL;
    _collection = NULL;
    _listener = NULL;
    _index = NULL;
    _lu = NULL;
}

// private void DisposeCollectionObservableSub() [instance] :446
void LookUp__LookUpSubscription::DisposeCollectionObservableSub()
{
    if (_colObservableSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_colObservableSub), ::TYPES[0/*Uno.IDisposable*/]));
        _colObservableSub = NULL;
    }
}

// private void DisposeIndexSub() [instance] :422
void LookUp__LookUpSubscription::DisposeIndexSub()
{
    if (_indexForwarder != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_indexForwarder), ::TYPES[0/*Uno.IDisposable*/]));
        _indexForwarder = NULL;
    }
}

// private void NewCollection(object col) [instance] :432
void LookUp__LookUpSubscription::NewCollection(uObject* col)
{
    _collection = col;
    _hasCollection = true;
    DisposeCollectionObservableSub();
    uObject* obs = uAs<uObject*>(col, ::TYPES[5/*Fuse.Reactive.IObservable*/]);

    if (obs != NULL)
        _colObservableSub = ::g::Fuse::Reactive::IObservable::Subscribe(uInterface(uPtr(obs), ::TYPES[5/*Fuse.Reactive.IObservable*/]), (uObject*)this);

    ResultChanged();
}

// private void NewIndex(object ind) [instance] :381
void LookUp__LookUpSubscription::NewIndex(uObject* ind)
{
    DisposeIndexSub();
    uObject* obs = uAs<uObject*>(ind, ::TYPES[5/*Fuse.Reactive.IObservable*/]);

    if (obs != NULL)
        _indexForwarder = (uObject*)::g::Fuse::Reactive::ValueForwarder::New1(obs, (uObject*)this);
    else
    {
        _index = ind;
        _hasIndex = true;
        ResultChanged();
    }
}

// public void OnNewData(Fuse.Reactive.IExpression source, object value) [instance] :373
void LookUp__LookUpSubscription::OnNewData(uObject* source, uObject* value)
{
    if (_lu == NULL)
        return;

    if (source == uPtr(_lu)->Index())
        NewIndex(value);

    if (source == uPtr(_lu)->Collection())
        NewCollection(value);
}

// private void PushNewData(object value) [instance] :507
void LookUp__LookUpSubscription::PushNewData(uObject* value)
{
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[1/*Fuse.Reactive.IListener*/]), (uObject*)_lu, value);
}

// private void ResultChanged() [instance] :455
void LookUp__LookUpSubscription::ResultChanged()
{
    if (_listener == NULL)
        return;

    ClearDiagnostic();

    if (!_hasIndex)
        return;

    if (!_hasCollection)
        return;

    if ((_index == NULL) || (_collection == NULL))
        PushNewData(NULL);

    uObject* arr = uAs<uObject*>(_collection, ::TYPES[23/*Fuse.IArray*/]);

    if (arr != NULL)
    {
        int index = 0;

        try
        {
            index = ::g::Fuse::Marshal::ToInt(_index);
        }
        catch (const uThrowable& __t)
        {
            if (uIs(__t.Exception, ::TYPES[37/*Fuse.MarshalException*/]))
            {
                ::g::Fuse::MarshalException* me = (::g::Fuse::MarshalException*)__t.Exception;
                SetDiagnostic(::g::Uno::String::op_Addition2(::STRINGS[32/*"Index must ...*/], uPtr(me)->Message()), (uObject*)uPtr(_lu)->Index());
                return;
            }
            else throw __t;
        }

        if ((index >= 0) && (index < ::g::Fuse::IArray::Length(uInterface(uPtr(arr), ::TYPES[23/*Fuse.IArray*/]))))
            PushNewData(::g::Fuse::IArray::Item(uInterface(uPtr(arr), ::TYPES[23/*Fuse.IArray*/]), index));
        else
            SetDiagnostic(::STRINGS[33/*"Index was o...*/], (uObject*)uPtr(_lu)->Index());

        return;
    }

    uObject* obj = uAs<uObject*>(_collection, ::TYPES[24/*Fuse.IObject*/]);

    if (obj != NULL)
    {
        uString* key = ::g::Uno::Object::ToString(uPtr(_index));

        if (::g::Fuse::IObject::ContainsKey(uInterface(uPtr(obj), ::TYPES[24/*Fuse.IObject*/]), key))
            PushNewData(::g::Fuse::IObject::Item(uInterface(uPtr(obj), ::TYPES[24/*Fuse.IObject*/]), key));
        else
            SetDiagnostic(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[34/*"Object does...*/], key), ::STRINGS[7/*"'"*/]), (uObject*)uPtr(_lu)->Index());

        return;
    }

    SetDiagnostic(::g::Uno::String::op_Addition1(::STRINGS[35/*"Look-up ope...*/], _collection), (uObject*)uPtr(_lu)->Collection());
}

// public void SetDiagnostic(string message, Fuse.Reactive.IExpression source) [instance] :400
void LookUp__LookUpSubscription::SetDiagnostic(uString* message, uObject* source)
{
    ClearDiagnostic();
    _diag = ::g::Fuse::Diagnostics::ReportTemporalUserWarning(message, source);
}

// public LookUpSubscription New(Fuse.Reactive.LookUp lu, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :360
LookUp__LookUpSubscription* LookUp__LookUpSubscription::New1(::g::Fuse::Reactive::LookUp* lu, uObject* context, uObject* listener)
{
    LookUp__LookUpSubscription* obj1 = (LookUp__LookUpSubscription*)uNew(LookUp__LookUpSubscription_typeof());
    obj1->ctor_(lu, context, listener);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Name :257
// {
static void Name_build(uType* type)
{
    ::STRINGS[36] = uString::Const("Named object not found: ");
    ::TYPES[3] = ::g::Fuse::Reactive::IContext_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::ConstantExpression_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::Name, _Identifier), 0);
}

::g::Fuse::Reactive::ConstantExpression_type* Name_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ConstantExpression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ConstantExpression_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Name);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ConstantExpression_type);
    type = (::g::Fuse::Reactive::ConstantExpression_type*)uClassType::New("Fuse.Reactive.Name", options);
    type->fp_build_ = Name_build;
    type->fp_GetValue = (void(*)(::g::Fuse::Reactive::ConstantExpression*, uObject*, uObject**))Name__GetValue_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Name__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::ConstantExpression__Subscribe_fn;
    return type;
}

// public override sealed object GetValue(Fuse.Reactive.IContext context) :263
void Name__GetValue_fn(Name* __this, uObject* context, uObject** __retval)
{
    if (::g::Fuse::Reactive::IContext::NameTable(uInterface(uPtr(context), ::TYPES[3/*Fuse.Reactive.IContext*/])) != NULL)
    {
        uObject* obj = uPtr(::g::Fuse::Reactive::IContext::NameTable(uInterface(uPtr(context), ::TYPES[3/*Fuse.Reactive.IContext*/])))->Item(__this->Identifier());

        if (obj != NULL)
            return *__retval = obj, void();
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::STRINGS[36/*"Named objec...*/], __this->Identifier())));
}

// public generated string get_Identifier() :259
void Name__get_Identifier_fn(Name* __this, uString** __retval)
{
    *__retval = __this->Identifier();
}

// private generated void set_Identifier(string value) :259
void Name__set_Identifier_fn(Name* __this, uString* value)
{
    __this->Identifier(value);
}

// public override sealed string ToString() :273
void Name__ToString_fn(Name* __this, uString** __retval)
{
    return *__retval = __this->Identifier(), void();
}

// public generated string get_Identifier() [instance] :259
uString* Name::Identifier()
{
    return _Identifier;
}

// private generated void set_Identifier(string value) [instance] :259
void Name::Identifier(uString* value)
{
    _Identifier = value;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\$.uno
// ----------------------------------------------------------------------------------

// private sealed class Instantiator.ObservableLink :1381
// {
static void Instantiator__ObservableLink_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::ValueObserver_type, interface0),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::ValueObserver_type, interface1));
    type->SetFields(2,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Instantiator__ObservableLink, _currentData), 0,
        ::g::Fuse::Reactive::Instantiator__WindowItem_typeof(), offsetof(::g::Fuse::Reactive::Instantiator__ObservableLink, _target), 0);
}

::g::Fuse::Reactive::ValueObserver_type* Instantiator__ObservableLink_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ValueObserver_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ValueObserver_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Instantiator__ObservableLink);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ValueObserver_type);
    type = (::g::Fuse::Reactive::ValueObserver_type*)uClassType::New("Fuse.Reactive.Instantiator.ObservableLink", options);
    type->fp_build_ = Instantiator__ObservableLink_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::ValueObserver*))Instantiator__ObservableLink__Dispose_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Instantiator__ObservableLink__Dispose_fn;
    return type;
}

// public ObservableLink(Fuse.Reactive.IObservable obs, Fuse.Reactive.Instantiator.WindowItem target) :1385
void Instantiator__ObservableLink__ctor_1_fn(Instantiator__ObservableLink* __this, uObject* obs, ::g::Fuse::Reactive::Instantiator__WindowItem* target)
{
    __this->ctor_1(obs, target);
}

// public object get_Data() :1399
void Instantiator__ObservableLink__get_Data_fn(Instantiator__ObservableLink* __this, uObject** __retval)
{
    *__retval = __this->Data();
}

// public override sealed void Dispose() :1391
void Instantiator__ObservableLink__Dispose_fn(Instantiator__ObservableLink* __this)
{
    ::g::Fuse::Reactive::ValueObserver__Dispose_fn(__this);
    __this->_target = NULL;
    __this->_currentData = NULL;
}

// public ObservableLink New(Fuse.Reactive.IObservable obs, Fuse.Reactive.Instantiator.WindowItem target) :1385
void Instantiator__ObservableLink__New1_fn(uObject* obs, ::g::Fuse::Reactive::Instantiator__WindowItem* target, Instantiator__ObservableLink** __retval)
{
    *__retval = Instantiator__ObservableLink::New1(obs, target);
}

// public ObservableLink(Fuse.Reactive.IObservable obs, Fuse.Reactive.Instantiator.WindowItem target) [instance] :1385
void Instantiator__ObservableLink::ctor_1(uObject* obs, ::g::Fuse::Reactive::Instantiator__WindowItem* target)
{
    ctor_();
    _target = target;
    Subscribe(obs);
}

// public object get_Data() [instance] :1399
uObject* Instantiator__ObservableLink::Data()
{
    return _currentData;
}

// public ObservableLink New(Fuse.Reactive.IObservable obs, Fuse.Reactive.Instantiator.WindowItem target) [static] :1385
Instantiator__ObservableLink* Instantiator__ObservableLink::New1(uObject* obs, ::g::Fuse::Reactive::Instantiator__WindowItem* target)
{
    Instantiator__ObservableLink* obj1 = (Instantiator__ObservableLink*)uNew(Instantiator__ObservableLink_typeof());
    obj1->ctor_1(obs, target);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// private sealed class InnerListener.ObservableSubscription :1833
// {
static void InnerListener__ObservableSubscription_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::ValueObserver_type, interface0),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::ValueObserver_type, interface1));
    type->SetFields(2,
        ::g::Fuse::Reactive::InnerListener_typeof(), offsetof(::g::Fuse::Reactive::InnerListener__ObservableSubscription, _listener), 0,
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InnerListener__ObservableSubscription, _source), 0);
}

::g::Fuse::Reactive::ValueObserver_type* InnerListener__ObservableSubscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ValueObserver_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ValueObserver_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(InnerListener__ObservableSubscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ValueObserver_type);
    type = (::g::Fuse::Reactive::ValueObserver_type*)uClassType::New("Fuse.Reactive.InnerListener.ObservableSubscription", options);
    type->fp_build_ = InnerListener__ObservableSubscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::ValueObserver*))InnerListener__ObservableSubscription__Dispose_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))InnerListener__ObservableSubscription__Dispose_fn;
    return type;
}

// public ObservableSubscription(Fuse.Reactive.IExpression source, Fuse.Reactive.IObservable obs, Fuse.Reactive.InnerListener listener) :1838
void InnerListener__ObservableSubscription__ctor_1_fn(InnerListener__ObservableSubscription* __this, uObject* source, uObject* obs, ::g::Fuse::Reactive::InnerListener* listener)
{
    __this->ctor_1(source, obs, listener);
}

// public override sealed void Dispose() :1845
void InnerListener__ObservableSubscription__Dispose_fn(InnerListener__ObservableSubscription* __this)
{
    ::g::Fuse::Reactive::ValueObserver__Dispose_fn(__this);
    __this->_source = NULL;
    __this->_listener = NULL;
}

// public ObservableSubscription New(Fuse.Reactive.IExpression source, Fuse.Reactive.IObservable obs, Fuse.Reactive.InnerListener listener) :1838
void InnerListener__ObservableSubscription__New1_fn(uObject* source, uObject* obs, ::g::Fuse::Reactive::InnerListener* listener, InnerListener__ObservableSubscription** __retval)
{
    *__retval = InnerListener__ObservableSubscription::New1(source, obs, listener);
}

// public ObservableSubscription(Fuse.Reactive.IExpression source, Fuse.Reactive.IObservable obs, Fuse.Reactive.InnerListener listener) [instance] :1838
void InnerListener__ObservableSubscription::ctor_1(uObject* source, uObject* obs, ::g::Fuse::Reactive::InnerListener* listener)
{
    ctor_();
    _listener = listener;
    _source = source;
    Subscribe(obs);
}

// public ObservableSubscription New(Fuse.Reactive.IExpression source, Fuse.Reactive.IObservable obs, Fuse.Reactive.InnerListener listener) [static] :1838
InnerListener__ObservableSubscription* InnerListener__ObservableSubscription::New1(uObject* source, uObject* obs, ::g::Fuse::Reactive::InnerListener* listener)
{
    InnerListener__ObservableSubscription* obj1 = (InnerListener__ObservableSubscription*)uNew(InnerListener__ObservableSubscription_typeof());
    obj1->ctor_1(source, obs, listener);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Property :1442
// {
static void Property_build(uType* type)
{
    ::TYPES[38] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), offsetof(::g::Fuse::Reactive::Property, _Accessor), 0,
        ::g::Fuse::Reactive::ConstantExpression_typeof(), offsetof(::g::Fuse::Reactive::Property, _Object), 0);
}

::g::Fuse::Reactive::Expression_type* Property_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Property);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.Property", options);
    type->fp_build_ = Property_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))Property__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))Property__Subscribe_fn;
    return type;
}

// public Property(Fuse.Reactive.ConstantExpression obj, Uno.UX.PropertyAccessor accessor) :1448
void Property__ctor_1_fn(Property* __this, ::g::Fuse::Reactive::ConstantExpression* obj, ::g::Uno::UX::PropertyAccessor* accessor)
{
    __this->ctor_1(obj, accessor);
}

// public generated Uno.UX.PropertyAccessor get_Accessor() :1445
void Property__get_Accessor_fn(Property* __this, ::g::Uno::UX::PropertyAccessor** __retval)
{
    *__retval = __this->Accessor();
}

// private generated void set_Accessor(Uno.UX.PropertyAccessor value) :1445
void Property__set_Accessor_fn(Property* __this, ::g::Uno::UX::PropertyAccessor* value)
{
    __this->Accessor(value);
}

// public Property New(Fuse.Reactive.ConstantExpression obj, Uno.UX.PropertyAccessor accessor) :1448
void Property__New1_fn(::g::Fuse::Reactive::ConstantExpression* obj, ::g::Uno::UX::PropertyAccessor* accessor, Property** __retval)
{
    *__retval = Property::New1(obj, accessor);
}

// public generated Fuse.Reactive.ConstantExpression get_Object() :1444
void Property__get_Object_fn(Property* __this, ::g::Fuse::Reactive::ConstantExpression** __retval)
{
    *__retval = __this->Object();
}

// private generated void set_Object(Fuse.Reactive.ConstantExpression value) :1444
void Property__set_Object_fn(Property* __this, ::g::Fuse::Reactive::ConstantExpression* value)
{
    __this->Object(value);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :1453
void Property__Subscribe_fn(Property* __this, uObject* context, uObject* listener, uObject** __retval)
{
    ::g::Uno::UX::PropertyObject* obj = uCast< ::g::Uno::UX::PropertyObject*>(uPtr(__this->Object())->GetValue(context), ::TYPES[38/*Uno.UX.PropertyObject*/]);
    return *__retval = (uObject*)Property__Subscription::New1(__this, obj, __this->Accessor(), listener), void();
}

// public Property(Fuse.Reactive.ConstantExpression obj, Uno.UX.PropertyAccessor accessor) [instance] :1448
void Property::ctor_1(::g::Fuse::Reactive::ConstantExpression* obj, ::g::Uno::UX::PropertyAccessor* accessor)
{
    ctor_();
    Object(obj);
    Accessor(accessor);
}

// public generated Uno.UX.PropertyAccessor get_Accessor() [instance] :1445
::g::Uno::UX::PropertyAccessor* Property::Accessor()
{
    return _Accessor;
}

// private generated void set_Accessor(Uno.UX.PropertyAccessor value) [instance] :1445
void Property::Accessor(::g::Uno::UX::PropertyAccessor* value)
{
    _Accessor = value;
}

// public generated Fuse.Reactive.ConstantExpression get_Object() [instance] :1444
::g::Fuse::Reactive::ConstantExpression* Property::Object()
{
    return _Object;
}

// private generated void set_Object(Fuse.Reactive.ConstantExpression value) [instance] :1444
void Property::Object(::g::Fuse::Reactive::ConstantExpression* value)
{
    _Object = value;
}

// public Property New(Fuse.Reactive.ConstantExpression obj, Uno.UX.PropertyAccessor accessor) [static] :1448
Property* Property::New1(::g::Fuse::Reactive::ConstantExpression* obj, ::g::Uno::UX::PropertyAccessor* accessor)
{
    Property* obj1 = (Property*)uNew(Property_typeof());
    obj1->ctor_1(obj, accessor);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public abstract class QuaternaryOperator :1518
// {
static void QuaternaryOperator_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(QuaternaryOperator_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(::g::Fuse::Reactive::QuaternaryOperator, _First), 0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(::g::Fuse::Reactive::QuaternaryOperator, _Fourth), 0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(::g::Fuse::Reactive::QuaternaryOperator, _Second), 0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(::g::Fuse::Reactive::QuaternaryOperator, _Third), 0);
}

QuaternaryOperator_type* QuaternaryOperator_typeof()
{
    static uSStrong<QuaternaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(QuaternaryOperator);
    options.TypeSize = sizeof(QuaternaryOperator_type);
    type = (QuaternaryOperator_type*)uClassType::New("Fuse.Reactive.QuaternaryOperator", options);
    type->fp_build_ = QuaternaryOperator_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))QuaternaryOperator__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))QuaternaryOperator__Subscribe_fn;
    return type;
}

// public generated Fuse.Reactive.Expression get_First() :1520
void QuaternaryOperator__get_First_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->First();
}

// private generated void set_First(Fuse.Reactive.Expression value) :1520
void QuaternaryOperator__set_First_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->First(value);
}

// public generated Fuse.Reactive.Expression get_Fourth() :1523
void QuaternaryOperator__get_Fourth_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Fourth();
}

// private generated void set_Fourth(Fuse.Reactive.Expression value) :1523
void QuaternaryOperator__set_Fourth_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Fourth(value);
}

// protected bool get_IsFirstOptional() :1538
void QuaternaryOperator__get_IsFirstOptional_fn(QuaternaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsFirstOptional();
}

// protected bool get_IsFourthOptional() :1541
void QuaternaryOperator__get_IsFourthOptional_fn(QuaternaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsFourthOptional();
}

// protected bool get_IsSecondOptional() :1539
void QuaternaryOperator__get_IsSecondOptional_fn(QuaternaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsSecondOptional();
}

// protected bool get_IsThirdOptional() :1540
void QuaternaryOperator__get_IsThirdOptional_fn(QuaternaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsThirdOptional();
}

// public generated Fuse.Reactive.Expression get_Second() :1521
void QuaternaryOperator__get_Second_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Second();
}

// private generated void set_Second(Fuse.Reactive.Expression value) :1521
void QuaternaryOperator__set_Second_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Second(value);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :1533
void QuaternaryOperator__Subscribe_fn(QuaternaryOperator* __this, uObject* context, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)QuaternaryOperator__Subscription::Create(__this, context, listener), void();
}

// public generated Fuse.Reactive.Expression get_Third() :1522
void QuaternaryOperator__get_Third_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Third();
}

// private generated void set_Third(Fuse.Reactive.Expression value) :1522
void QuaternaryOperator__set_Third_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Third(value);
}

// public generated Fuse.Reactive.Expression get_First() [instance] :1520
::g::Fuse::Reactive::Expression* QuaternaryOperator::First()
{
    return _First;
}

// private generated void set_First(Fuse.Reactive.Expression value) [instance] :1520
void QuaternaryOperator::First(::g::Fuse::Reactive::Expression* value)
{
    _First = value;
}

// public generated Fuse.Reactive.Expression get_Fourth() [instance] :1523
::g::Fuse::Reactive::Expression* QuaternaryOperator::Fourth()
{
    return _Fourth;
}

// private generated void set_Fourth(Fuse.Reactive.Expression value) [instance] :1523
void QuaternaryOperator::Fourth(::g::Fuse::Reactive::Expression* value)
{
    _Fourth = value;
}

// protected bool get_IsFirstOptional() [instance] :1538
bool QuaternaryOperator::IsFirstOptional()
{
    return false;
}

// protected bool get_IsFourthOptional() [instance] :1541
bool QuaternaryOperator::IsFourthOptional()
{
    return false;
}

// protected bool get_IsSecondOptional() [instance] :1539
bool QuaternaryOperator::IsSecondOptional()
{
    return false;
}

// protected bool get_IsThirdOptional() [instance] :1540
bool QuaternaryOperator::IsThirdOptional()
{
    return false;
}

// public generated Fuse.Reactive.Expression get_Second() [instance] :1521
::g::Fuse::Reactive::Expression* QuaternaryOperator::Second()
{
    return _Second;
}

// private generated void set_Second(Fuse.Reactive.Expression value) [instance] :1521
void QuaternaryOperator::Second(::g::Fuse::Reactive::Expression* value)
{
    _Second = value;
}

// public generated Fuse.Reactive.Expression get_Third() [instance] :1522
::g::Fuse::Reactive::Expression* QuaternaryOperator::Third()
{
    return _Third;
}

// private generated void set_Third(Fuse.Reactive.Expression value) [instance] :1522
void QuaternaryOperator::Third(::g::Fuse::Reactive::Expression* value)
{
    _Third = value;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Resource :1647
// {
static void Resource_build(uType* type)
{
    ::TYPES[3] = ::g::Fuse::Reactive::IContext_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::Resource, _Key), 0);
}

::g::Fuse::Reactive::Expression_type* Resource_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Resource);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.Resource", options);
    type->fp_build_ = Resource_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))Resource__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))Resource__Subscribe_fn;
    return type;
}

// public generated string get_Key() :1649
void Resource__get_Key_fn(Resource* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(string value) :1649
void Resource__set_Key_fn(Resource* __this, uString* value)
{
    __this->Key(value);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :1655
void Resource__Subscribe_fn(Resource* __this, uObject* context, uObject* listener, uObject** __retval)
{
    return *__retval = ::g::Fuse::Reactive::IContext::SubscribeResource(uInterface(uPtr(context), ::TYPES[3/*Fuse.Reactive.IContext*/]), (uObject*)__this, __this->Key(), listener), void();
}

// public generated string get_Key() [instance] :1649
uString* Resource::Key()
{
    return _Key;
}

// private generated void set_Key(string value) [instance] :1649
void Resource::Key(uString* value)
{
    _Key = value;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\subscription\$.uno
// -----------------------------------------------------------------------------------------------

// internal sealed class ResourceSubscription :86
// {
static void ResourceSubscription_build(uType* type)
{
    ::STRINGS[37] = uString::Const("{Resource ");
    ::STRINGS[13] = uString::Const("} not found in data context");
    ::TYPES[26] = ::g::Uno::Action_typeof();
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    ::TYPES[39] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::TYPES[0/*Uno.IDisposable*/], offsetof(ResourceSubscription_type, interface0));
    type->SetFields(0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::ResourceSubscription, _diag), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::ResourceSubscription, _key), 0,
        ::TYPES[1/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::ResourceSubscription, _listener), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Reactive::ResourceSubscription, _origin), 0,
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::ResourceSubscription, _source), 0,
        ::g::Uno::Type_typeof(), offsetof(::g::Fuse::Reactive::ResourceSubscription, _type), 0);
}

ResourceSubscription_type* ResourceSubscription_typeof()
{
    static uSStrong<ResourceSubscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ResourceSubscription);
    options.TypeSize = sizeof(ResourceSubscription_type);
    type = (ResourceSubscription_type*)uClassType::New("Fuse.Reactive.ResourceSubscription", options);
    type->fp_build_ = ResourceSubscription_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))ResourceSubscription__Dispose_fn;
    return type;
}

// public ResourceSubscription(Fuse.Reactive.IExpression source, Fuse.Node origin, string key, Fuse.Reactive.IListener listener, Uno.Type type) :95
void ResourceSubscription__ctor__fn(ResourceSubscription* __this, uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener, uType* type)
{
    __this->ctor_(source, origin, key, listener, type);
}

// private bool Accept(object o) :139
void ResourceSubscription__Accept_fn(ResourceSubscription* __this, uObject* o, bool* __retval)
{
    *__retval = __this->Accept(o);
}

// private void ClearDiagnostic() :115
void ResourceSubscription__ClearDiagnostic_fn(ResourceSubscription* __this)
{
    __this->ClearDiagnostic();
}

// public void Dispose() :107
void ResourceSubscription__Dispose_fn(ResourceSubscription* __this)
{
    __this->Dispose();
}

// public ResourceSubscription New(Fuse.Reactive.IExpression source, Fuse.Node origin, string key, Fuse.Reactive.IListener listener, Uno.Type type) :95
void ResourceSubscription__New1_fn(uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener, uType* type, ResourceSubscription** __retval)
{
    *__retval = ResourceSubscription::New1(source, origin, key, listener, type);
}

// private void OnChanged() :124
void ResourceSubscription__OnChanged_fn(ResourceSubscription* __this)
{
    __this->OnChanged();
}

// public ResourceSubscription(Fuse.Reactive.IExpression source, Fuse.Node origin, string key, Fuse.Reactive.IListener listener, Uno.Type type) [instance] :95
void ResourceSubscription::ctor_(uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener, uType* type)
{
    _source = source;
    _origin = origin;
    _key = key;
    _type = type;
    _listener = listener;
    ::g::Fuse::Resources::ResourceRegistry::AddResourceChangedHandler(_key, uDelegate::New(::TYPES[26/*Uno.Action*/], (void*)ResourceSubscription__OnChanged_fn, this));
    OnChanged();
}

// private bool Accept(object o) [instance] :139
bool ResourceSubscription::Accept(uObject* o)
{
    return ::g::Fuse::Marshal::Is(o, _type);
}

// private void ClearDiagnostic() [instance] :115
void ResourceSubscription::ClearDiagnostic()
{
    if (_diag != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_diag), ::TYPES[0/*Uno.IDisposable*/]));
        _diag = NULL;
    }
}

// public void Dispose() [instance] :107
void ResourceSubscription::Dispose()
{
    ClearDiagnostic();
    ::g::Fuse::Resources::ResourceRegistry::RemoveResourceChangedHandler(_key, uDelegate::New(::TYPES[26/*Uno.Action*/], (void*)ResourceSubscription__OnChanged_fn, this));
    _listener = NULL;
    _origin = NULL;
}

// private void OnChanged() [instance] :124
void ResourceSubscription::OnChanged()
{
    ClearDiagnostic();
    uObject* resource;

    if (uPtr(_origin)->TryGetResource(_key, uDelegate::New(::TYPES[39/*Uno.Predicate<object>*/], (void*)ResourceSubscription__Accept_fn, this), &resource))
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[1/*Fuse.Reactive.IListener*/]), _source, resource);
    else
        _diag = ::g::Fuse::Diagnostics::ReportTemporalUserWarning(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[37/*"{Resource "*/], _key), ::STRINGS[13/*"} not found...*/]), _origin);
}

// public ResourceSubscription New(Fuse.Reactive.IExpression source, Fuse.Node origin, string key, Fuse.Reactive.IListener listener, Uno.Type type) [static] :95
ResourceSubscription* ResourceSubscription::New1(uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener, uType* type)
{
    ResourceSubscription* obj1 = (ResourceSubscription*)uNew(ResourceSubscription_typeof());
    obj1->ctor_(source, origin, key, listener, type);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public abstract class SimpleVarArgFunction :2141
// {
static void SimpleVarArgFunction_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(1);
}

::g::Fuse::Reactive::Expression_type* SimpleVarArgFunction_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::VarArgFunction_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SimpleVarArgFunction);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.SimpleVarArgFunction", options);
    type->fp_build_ = SimpleVarArgFunction_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))SimpleVarArgFunction__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))SimpleVarArgFunction__Subscribe_fn;
    return type;
}

// protected void OnNewArguments(Fuse.Reactive.VarArgFunction.Argument[] args, Fuse.Reactive.IListener listener) :2176
void SimpleVarArgFunction__OnNewArguments_fn(SimpleVarArgFunction* __this, uArray* args, uObject* listener)
{
    __this->OnNewArguments(args, listener);
}

// protected void OnNewPartialArguments(Fuse.Reactive.VarArgFunction.Argument[] args, Fuse.Reactive.IListener listener) :2158
void SimpleVarArgFunction__OnNewPartialArguments_fn(SimpleVarArgFunction* __this, uArray* args, uObject* listener)
{
    __this->OnNewPartialArguments(args, listener);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :2143
void SimpleVarArgFunction__Subscribe_fn(SimpleVarArgFunction* __this, uObject* context, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)SimpleVarArgFunction__Subscription::New1(__this, context, listener), void();
}

// protected void OnNewArguments(Fuse.Reactive.VarArgFunction.Argument[] args, Fuse.Reactive.IListener listener) [instance] :2176
void SimpleVarArgFunction::OnNewArguments(uArray* args, uObject* listener)
{
}

// protected void OnNewPartialArguments(Fuse.Reactive.VarArgFunction.Argument[] args, Fuse.Reactive.IListener listener) [instance] :2158
void SimpleVarArgFunction::OnNewPartialArguments(uArray* args, uObject* listener)
{
    for (int i = 0; i < uPtr(args)->Length(); i++)
        if (!uPtr(uPtr(args)->Strong< ::g::Fuse::Reactive::VarArgFunction__Argument*>(i))->HasValue())
            return;

    OnNewArguments(args, listener);
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Snapshot :1674
// {
static void Snapshot_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(::g::Fuse::Reactive::Snapshot, _Source), 0);
}

::g::Fuse::Reactive::Expression_type* Snapshot_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Snapshot);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.Snapshot", options);
    type->fp_build_ = Snapshot_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))Snapshot__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))Snapshot__Subscribe_fn;
    return type;
}

// public generated Fuse.Reactive.Expression get_Source() :1676
void Snapshot__get_Source_fn(Snapshot* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Fuse.Reactive.Expression value) :1676
void Snapshot__set_Source_fn(Snapshot* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Source(value);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :1684
void Snapshot__Subscribe_fn(Snapshot* __this, uObject* context, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)Snapshot__Subscription::New1(__this, context, listener), void();
}

// public generated Fuse.Reactive.Expression get_Source() [instance] :1676
::g::Fuse::Reactive::Expression* Snapshot::Source()
{
    return _Source;
}

// private generated void set_Source(Fuse.Reactive.Expression value) [instance] :1676
void Snapshot::Source(::g::Fuse::Reactive::Expression* value)
{
    _Source = value;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// private sealed class TernaryOperator.Subscription :1893
// {
static void TernaryOperator__Subscription_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    ::TYPES[37] = ::g::Fuse::MarshalException_typeof();
    ::TYPES[1] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::TYPES[0/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface0),
        ::TYPES[1/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface1));
    type->SetFields(2,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator__Subscription, _first), 0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::TernaryOperator__Subscription, _firstSub), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator__Subscription, _hasFirst), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator__Subscription, _hasSecond), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator__Subscription, _hasThird), 0,
        ::TYPES[1/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::TernaryOperator__Subscription, _listener), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator__Subscription, _second), 0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::TernaryOperator__Subscription, _secondSub), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator__Subscription, _third), 0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::TernaryOperator__Subscription, _thirdSub), 0,
        ::g::Fuse::Reactive::TernaryOperator_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator__Subscription, _to), 0);
}

::g::Fuse::Reactive::InnerListener_type* TernaryOperator__Subscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InnerListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InnerListener_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TernaryOperator__Subscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InnerListener_type);
    type = (::g::Fuse::Reactive::InnerListener_type*)uClassType::New("Fuse.Reactive.TernaryOperator.Subscription", options);
    type->fp_build_ = TernaryOperator__Subscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))TernaryOperator__Subscription__Dispose_fn;
    type->fp_OnNewData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*, uObject*))TernaryOperator__Subscription__OnNewData_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))TernaryOperator__Subscription__Dispose_fn;
    return type;
}

// protected Subscription(Fuse.Reactive.TernaryOperator to, Fuse.Reactive.IListener listener) :1905
void TernaryOperator__Subscription__ctor_1_fn(TernaryOperator__Subscription* __this, ::g::Fuse::Reactive::TernaryOperator* to, uObject* listener)
{
    __this->ctor_1(to, listener);
}

// public static Fuse.Reactive.TernaryOperator.Subscription Create(Fuse.Reactive.TernaryOperator to, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :1911
void TernaryOperator__Subscription__Create_fn(::g::Fuse::Reactive::TernaryOperator* to, uObject* context, uObject* listener, TernaryOperator__Subscription** __retval)
{
    *__retval = TernaryOperator__Subscription::Create(to, context, listener);
}

// public override sealed void Dispose() :1951
void TernaryOperator__Subscription__Dispose_fn(TernaryOperator__Subscription* __this)
{
    ::g::Fuse::Reactive::InnerListener__Dispose_fn(__this);

    if (__this->_firstSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_firstSub), ::TYPES[0/*Uno.IDisposable*/]));
        __this->_firstSub = NULL;
    }

    if (__this->_secondSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_secondSub), ::TYPES[0/*Uno.IDisposable*/]));
        __this->_secondSub = NULL;
    }

    if (__this->_thirdSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_thirdSub), ::TYPES[0/*Uno.IDisposable*/]));
        __this->_thirdSub = NULL;
    }

    __this->_listener = NULL;
}

// protected void Init(Fuse.Reactive.IContext context) :1920
void TernaryOperator__Subscription__Init_fn(TernaryOperator__Subscription* __this, uObject* context)
{
    __this->Init(context);
}

// protected Subscription New(Fuse.Reactive.TernaryOperator to, Fuse.Reactive.IListener listener) :1905
void TernaryOperator__Subscription__New1_fn(::g::Fuse::Reactive::TernaryOperator* to, uObject* listener, TernaryOperator__Subscription** __retval)
{
    *__retval = TernaryOperator__Subscription::New1(to, listener);
}

// protected override sealed void OnNewData(Fuse.Reactive.IExpression source, object value) :1927
void TernaryOperator__Subscription__OnNewData_fn(TernaryOperator__Subscription* __this, uObject* source, uObject* value)
{
    if (source == uPtr(__this->_to)->First())
    {
        __this->_hasFirst = true;
        __this->_first = value;
    }

    if (source == uPtr(__this->_to)->Second())
    {
        __this->_hasSecond = true;
        __this->_second = value;
    }

    if (source == uPtr(__this->_to)->Third())
    {
        __this->_hasThird = true;
        __this->_third = value;
    }

    if (((__this->_hasFirst || uPtr(__this->_to)->IsFirstOptional()) && (__this->_hasSecond || uPtr(__this->_to)->IsSecondOptional())) && (__this->_hasThird || uPtr(__this->_to)->IsThirdOptional()))
        __this->OnNewOperands(__this->_first, __this->_second, __this->_third);
}

// protected void OnNewOperands(object first, object second, object third) :1937
void TernaryOperator__Subscription__OnNewOperands_fn(TernaryOperator__Subscription* __this, uObject* first, uObject* second, uObject* third)
{
    __this->OnNewOperands(first, second, third);
}

// protected Subscription(Fuse.Reactive.TernaryOperator to, Fuse.Reactive.IListener listener) [instance] :1905
void TernaryOperator__Subscription::ctor_1(::g::Fuse::Reactive::TernaryOperator* to, uObject* listener)
{
    ctor_();
    _to = to;
    _listener = listener;
}

// protected void Init(Fuse.Reactive.IContext context) [instance] :1920
void TernaryOperator__Subscription::Init(uObject* context)
{
    _firstSub = uPtr(uPtr(_to)->First())->Subscribe(context, (uObject*)this);
    _secondSub = uPtr(uPtr(_to)->Second())->Subscribe(context, (uObject*)this);
    _thirdSub = uPtr(uPtr(_to)->Third())->Subscribe(context, (uObject*)this);
}

// protected void OnNewOperands(object first, object second, object third) [instance] :1937
void TernaryOperator__Subscription::OnNewOperands(uObject* first, uObject* second, uObject* third)
{
    ClearDiagnostic();

    try
    {
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[1/*Fuse.Reactive.IListener*/]), (uObject*)_to, uPtr(_to)->Compute(first, second, third));
    }
    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[37/*Fuse.MarshalException*/]))
        {
            ::g::Fuse::MarshalException* me = (::g::Fuse::MarshalException*)__t.Exception;
            SetDiagnostic(uPtr(me)->Message(), (uObject*)_to);
        }
        else throw __t;
    }
}

// public static Fuse.Reactive.TernaryOperator.Subscription Create(Fuse.Reactive.TernaryOperator to, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :1911
TernaryOperator__Subscription* TernaryOperator__Subscription::Create(::g::Fuse::Reactive::TernaryOperator* to, uObject* context, uObject* listener)
{
    TernaryOperator__Subscription* sub = TernaryOperator__Subscription::New1(to, listener);
    sub->Init(context);
    return sub;
}

// protected Subscription New(Fuse.Reactive.TernaryOperator to, Fuse.Reactive.IListener listener) [static] :1905
TernaryOperator__Subscription* TernaryOperator__Subscription::New1(::g::Fuse::Reactive::TernaryOperator* to, uObject* listener)
{
    TernaryOperator__Subscription* obj1 = (TernaryOperator__Subscription*)uNew(TernaryOperator__Subscription_typeof());
    obj1->ctor_1(to, listener);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// private sealed class Snapshot.Subscription :1689
// {
static void Snapshot__Subscription_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    ::TYPES[1] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::TYPES[0/*Uno.IDisposable*/], offsetof(Snapshot__Subscription_type, interface0),
        ::TYPES[1/*Fuse.Reactive.IListener*/], offsetof(Snapshot__Subscription_type, interface1));
    type->SetFields(0,
        ::TYPES[1/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::Snapshot__Subscription, _listener), 0,
        ::g::Fuse::Reactive::Snapshot_typeof(), offsetof(::g::Fuse::Reactive::Snapshot__Subscription, _snap), 0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::Snapshot__Subscription, _sub), 0);
}

Snapshot__Subscription_type* Snapshot__Subscription_typeof()
{
    static uSStrong<Snapshot__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Snapshot__Subscription);
    options.TypeSize = sizeof(Snapshot__Subscription_type);
    type = (Snapshot__Subscription_type*)uClassType::New("Fuse.Reactive.Snapshot.Subscription", options);
    type->fp_build_ = Snapshot__Subscription_build;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))Snapshot__Subscription__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Snapshot__Subscription__Dispose_fn;
    return type;
}

// public Subscription(Fuse.Reactive.Snapshot snap, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :1695
void Snapshot__Subscription__ctor__fn(Snapshot__Subscription* __this, ::g::Fuse::Reactive::Snapshot* snap, uObject* context, uObject* listener)
{
    __this->ctor_(snap, context, listener);
}

// public void Dispose() :1702
void Snapshot__Subscription__Dispose_fn(Snapshot__Subscription* __this)
{
    __this->Dispose();
}

// private void Fuse.Reactive.IListener.OnNewData(Fuse.Reactive.IExpression source, object value) :1712
void Snapshot__Subscription__FuseReactiveIListenerOnNewData_fn(Snapshot__Subscription* __this, uObject* source, uObject* value)
{
    if (__this->_listener != NULL)
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(__this->_listener), ::TYPES[1/*Fuse.Reactive.IListener*/]), (uObject*)__this->_snap, value);

    __this->Dispose();
}

// public Subscription New(Fuse.Reactive.Snapshot snap, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :1695
void Snapshot__Subscription__New1_fn(::g::Fuse::Reactive::Snapshot* snap, uObject* context, uObject* listener, Snapshot__Subscription** __retval)
{
    *__retval = Snapshot__Subscription::New1(snap, context, listener);
}

// public Subscription(Fuse.Reactive.Snapshot snap, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [instance] :1695
void Snapshot__Subscription::ctor_(::g::Fuse::Reactive::Snapshot* snap, uObject* context, uObject* listener)
{
    _snap = snap;
    _listener = listener;
    _sub = uPtr(uPtr(_snap)->Source())->Subscribe(context, (uObject*)this);
}

// public void Dispose() [instance] :1702
void Snapshot__Subscription::Dispose()
{
    _listener = NULL;

    if (_sub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_sub), ::TYPES[0/*Uno.IDisposable*/]));
        _sub = NULL;
    }
}

// public Subscription New(Fuse.Reactive.Snapshot snap, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :1695
Snapshot__Subscription* Snapshot__Subscription::New1(::g::Fuse::Reactive::Snapshot* snap, uObject* context, uObject* listener)
{
    Snapshot__Subscription* obj1 = (Snapshot__Subscription*)uNew(Snapshot__Subscription_typeof());
    obj1->ctor_(snap, context, listener);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// protected sealed class UnaryOperator.Subscription :2010
// {
static void UnaryOperator__Subscription_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    ::TYPES[37] = ::g::Fuse::MarshalException_typeof();
    type->SetInterfaces(
        ::TYPES[0/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::InnerListener_type, interface1));
    type->SetFields(2,
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator__Subscription, _listener), 0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::UnaryOperator__Subscription, _operandSub), 0,
        ::g::Fuse::Reactive::UnaryOperator_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator__Subscription, _uo), 0);
}

::g::Fuse::Reactive::InnerListener_type* UnaryOperator__Subscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InnerListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InnerListener_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(UnaryOperator__Subscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InnerListener_type);
    type = (::g::Fuse::Reactive::InnerListener_type*)uClassType::New("Fuse.Reactive.UnaryOperator.Subscription", options);
    type->fp_build_ = UnaryOperator__Subscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))UnaryOperator__Subscription__Dispose_fn;
    type->fp_OnNewData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*, uObject*))UnaryOperator__Subscription__OnNewData_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))UnaryOperator__Subscription__Dispose_fn;
    return type;
}

// protected Subscription(Fuse.Reactive.UnaryOperator uo, Fuse.Reactive.IListener listener) :2016
void UnaryOperator__Subscription__ctor_1_fn(UnaryOperator__Subscription* __this, ::g::Fuse::Reactive::UnaryOperator* uo, uObject* listener)
{
    __this->ctor_1(uo, listener);
}

// public static Fuse.Reactive.UnaryOperator.Subscription Create(Fuse.Reactive.UnaryOperator uo, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :2022
void UnaryOperator__Subscription__Create_fn(::g::Fuse::Reactive::UnaryOperator* uo, uObject* context, uObject* listener, UnaryOperator__Subscription** __retval)
{
    *__retval = UnaryOperator__Subscription::Create(uo, context, listener);
}

// public override sealed void Dispose() :2036
void UnaryOperator__Subscription__Dispose_fn(UnaryOperator__Subscription* __this)
{
    ::g::Fuse::Reactive::InnerListener__Dispose_fn(__this);

    if (__this->_operandSub != NULL)
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_operandSub), ::TYPES[0/*Uno.IDisposable*/]));

    __this->_operandSub = NULL;
}

// protected void Init(Fuse.Reactive.IContext context) :2031
void UnaryOperator__Subscription__Init_fn(UnaryOperator__Subscription* __this, uObject* context)
{
    __this->Init(context);
}

// protected Subscription New(Fuse.Reactive.UnaryOperator uo, Fuse.Reactive.IListener listener) :2016
void UnaryOperator__Subscription__New1_fn(::g::Fuse::Reactive::UnaryOperator* uo, uObject* listener, UnaryOperator__Subscription** __retval)
{
    *__retval = UnaryOperator__Subscription::New1(uo, listener);
}

// protected override sealed void OnNewData(Fuse.Reactive.IExpression source, object value) :2043
void UnaryOperator__Subscription__OnNewData_fn(UnaryOperator__Subscription* __this, uObject* source, uObject* value)
{
    __this->OnNewOperand(value);
}

// protected void OnNewOperand(object value) :2048
void UnaryOperator__Subscription__OnNewOperand_fn(UnaryOperator__Subscription* __this, uObject* value)
{
    __this->OnNewOperand(value);
}

// protected Subscription(Fuse.Reactive.UnaryOperator uo, Fuse.Reactive.IListener listener) [instance] :2016
void UnaryOperator__Subscription::ctor_1(::g::Fuse::Reactive::UnaryOperator* uo, uObject* listener)
{
    ctor_();
    _uo = uo;
    _listener = listener;
}

// protected void Init(Fuse.Reactive.IContext context) [instance] :2031
void UnaryOperator__Subscription::Init(uObject* context)
{
    _operandSub = uPtr(uPtr(_uo)->Operand())->Subscribe(context, (uObject*)this);
}

// protected void OnNewOperand(object value) [instance] :2048
void UnaryOperator__Subscription::OnNewOperand(uObject* value)
{
    ClearDiagnostic();

    try
    {
        uPtr(_uo)->OnNewOperand(_listener, value);
    }
    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[37/*Fuse.MarshalException*/]))
        {
            ::g::Fuse::MarshalException* me = (::g::Fuse::MarshalException*)__t.Exception;
            SetDiagnostic(uPtr(me)->Message(), (uObject*)_uo);
        }
        else throw __t;
    }
}

// public static Fuse.Reactive.UnaryOperator.Subscription Create(Fuse.Reactive.UnaryOperator uo, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :2022
UnaryOperator__Subscription* UnaryOperator__Subscription::Create(::g::Fuse::Reactive::UnaryOperator* uo, uObject* context, uObject* listener)
{
    UnaryOperator__Subscription* sub = UnaryOperator__Subscription::New1(uo, listener);
    sub->Init(context);
    return sub;
}

// protected Subscription New(Fuse.Reactive.UnaryOperator uo, Fuse.Reactive.IListener listener) [static] :2016
UnaryOperator__Subscription* UnaryOperator__Subscription::New1(::g::Fuse::Reactive::UnaryOperator* uo, uObject* listener)
{
    UnaryOperator__Subscription* obj1 = (UnaryOperator__Subscription*)uNew(UnaryOperator__Subscription_typeof());
    obj1->ctor_1(uo, listener);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// private sealed class BinaryOperator.Subscription :42
// {
static void BinaryOperator__Subscription_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    ::TYPES[37] = ::g::Fuse::MarshalException_typeof();
    type->SetInterfaces(
        ::TYPES[0/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::InnerListener_type, interface1));
    type->SetFields(2,
        ::g::Fuse::Reactive::BinaryOperator_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator__Subscription, _bo), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator__Subscription, _hasLeft), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator__Subscription, _hasRight), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator__Subscription, _left), 0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::BinaryOperator__Subscription, _leftSub), 0,
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator__Subscription, _listener), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator__Subscription, _right), 0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::BinaryOperator__Subscription, _rightSub), 0);
}

::g::Fuse::Reactive::InnerListener_type* BinaryOperator__Subscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InnerListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InnerListener_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(BinaryOperator__Subscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InnerListener_type);
    type = (::g::Fuse::Reactive::InnerListener_type*)uClassType::New("Fuse.Reactive.BinaryOperator.Subscription", options);
    type->fp_build_ = BinaryOperator__Subscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))BinaryOperator__Subscription__Dispose_fn;
    type->fp_OnNewData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*, uObject*))BinaryOperator__Subscription__OnNewData_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))BinaryOperator__Subscription__Dispose_fn;
    return type;
}

// protected Subscription(Fuse.Reactive.BinaryOperator bo, Fuse.Reactive.IListener listener) :54
void BinaryOperator__Subscription__ctor_1_fn(BinaryOperator__Subscription* __this, ::g::Fuse::Reactive::BinaryOperator* bo, uObject* listener)
{
    __this->ctor_1(bo, listener);
}

// public static Fuse.Reactive.BinaryOperator.Subscription Create(Fuse.Reactive.BinaryOperator bo, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :60
void BinaryOperator__Subscription__Create_fn(::g::Fuse::Reactive::BinaryOperator* bo, uObject* context, uObject* listener, BinaryOperator__Subscription** __retval)
{
    *__retval = BinaryOperator__Subscription::Create(bo, context, listener);
}

// public override sealed void Dispose() :98
void BinaryOperator__Subscription__Dispose_fn(BinaryOperator__Subscription* __this)
{
    ::g::Fuse::Reactive::InnerListener__Dispose_fn(__this);

    if (__this->_leftSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_leftSub), ::TYPES[0/*Uno.IDisposable*/]));
        __this->_leftSub = NULL;
    }

    if (__this->_rightSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_rightSub), ::TYPES[0/*Uno.IDisposable*/]));
        __this->_rightSub = NULL;
    }

    __this->_listener = NULL;
}

// protected void Init(Fuse.Reactive.IContext context) :69
void BinaryOperator__Subscription__Init_fn(BinaryOperator__Subscription* __this, uObject* context)
{
    __this->Init(context);
}

// protected Subscription New(Fuse.Reactive.BinaryOperator bo, Fuse.Reactive.IListener listener) :54
void BinaryOperator__Subscription__New1_fn(::g::Fuse::Reactive::BinaryOperator* bo, uObject* listener, BinaryOperator__Subscription** __retval)
{
    *__retval = BinaryOperator__Subscription::New1(bo, listener);
}

// protected override sealed void OnNewData(Fuse.Reactive.IExpression source, object value) :75
void BinaryOperator__Subscription__OnNewData_fn(BinaryOperator__Subscription* __this, uObject* source, uObject* value)
{
    if (source == uPtr(__this->_bo)->Left())
    {
        __this->_hasLeft = true;
        __this->_left = value;
    }

    if (source == uPtr(__this->_bo)->Right())
    {
        __this->_hasRight = true;
        __this->_right = value;
    }

    if ((__this->_hasLeft || uPtr(__this->_bo)->IsLeftOptional()) && (__this->_hasRight || uPtr(__this->_bo)->IsRightOptional()))
        __this->OnNewOperands(__this->_left, __this->_right);
}

// protected void OnNewOperands(object left, object right) :84
void BinaryOperator__Subscription__OnNewOperands_fn(BinaryOperator__Subscription* __this, uObject* left, uObject* right)
{
    __this->OnNewOperands(left, right);
}

// protected Subscription(Fuse.Reactive.BinaryOperator bo, Fuse.Reactive.IListener listener) [instance] :54
void BinaryOperator__Subscription::ctor_1(::g::Fuse::Reactive::BinaryOperator* bo, uObject* listener)
{
    ctor_();
    _bo = bo;
    _listener = listener;
}

// protected void Init(Fuse.Reactive.IContext context) [instance] :69
void BinaryOperator__Subscription::Init(uObject* context)
{
    _leftSub = uPtr(uPtr(_bo)->Left())->Subscribe(context, (uObject*)this);
    _rightSub = uPtr(uPtr(_bo)->Right())->Subscribe(context, (uObject*)this);
}

// protected void OnNewOperands(object left, object right) [instance] :84
void BinaryOperator__Subscription::OnNewOperands(uObject* left, uObject* right)
{
    ClearDiagnostic();

    try
    {
        uPtr(_bo)->OnNewOperands(_listener, left, right);
    }
    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[37/*Fuse.MarshalException*/]))
        {
            ::g::Fuse::MarshalException* me = (::g::Fuse::MarshalException*)__t.Exception;
            SetDiagnostic(uPtr(me)->Message(), (uObject*)_bo);
        }
        else throw __t;
    }
}

// public static Fuse.Reactive.BinaryOperator.Subscription Create(Fuse.Reactive.BinaryOperator bo, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :60
BinaryOperator__Subscription* BinaryOperator__Subscription::Create(::g::Fuse::Reactive::BinaryOperator* bo, uObject* context, uObject* listener)
{
    BinaryOperator__Subscription* res = BinaryOperator__Subscription::New1(bo, listener);
    res->Init(context);
    return res;
}

// protected Subscription New(Fuse.Reactive.BinaryOperator bo, Fuse.Reactive.IListener listener) [static] :54
BinaryOperator__Subscription* BinaryOperator__Subscription::New1(::g::Fuse::Reactive::BinaryOperator* bo, uObject* listener)
{
    BinaryOperator__Subscription* obj1 = (BinaryOperator__Subscription*)uNew(BinaryOperator__Subscription_typeof());
    obj1->ctor_1(bo, listener);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// private sealed class QuaternaryOperator.Subscription :1545
// {
static void QuaternaryOperator__Subscription_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    ::TYPES[37] = ::g::Fuse::MarshalException_typeof();
    ::TYPES[1] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::TYPES[0/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface0),
        ::TYPES[1/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface1));
    type->SetFields(2,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _first), 0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _firstSub), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _fourth), 0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _fourthSub), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _hasFirst), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _hasFourth), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _hasSecond), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _hasThird), 0,
        ::TYPES[1/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _listener), 0,
        ::g::Fuse::Reactive::QuaternaryOperator_typeof(), offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _qo), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _second), 0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _secondSub), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _third), 0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _thirdSub), 0);
}

::g::Fuse::Reactive::InnerListener_type* QuaternaryOperator__Subscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InnerListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InnerListener_typeof();
    options.FieldCount = 16;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(QuaternaryOperator__Subscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InnerListener_type);
    type = (::g::Fuse::Reactive::InnerListener_type*)uClassType::New("Fuse.Reactive.QuaternaryOperator.Subscription", options);
    type->fp_build_ = QuaternaryOperator__Subscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))QuaternaryOperator__Subscription__Dispose_fn;
    type->fp_OnNewData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*, uObject*))QuaternaryOperator__Subscription__OnNewData_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))QuaternaryOperator__Subscription__Dispose_fn;
    return type;
}

// protected Subscription(Fuse.Reactive.QuaternaryOperator qo, Fuse.Reactive.IListener listener) :1558
void QuaternaryOperator__Subscription__ctor_1_fn(QuaternaryOperator__Subscription* __this, ::g::Fuse::Reactive::QuaternaryOperator* qo, uObject* listener)
{
    __this->ctor_1(qo, listener);
}

// public static Fuse.Reactive.QuaternaryOperator.Subscription Create(Fuse.Reactive.QuaternaryOperator qo, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :1564
void QuaternaryOperator__Subscription__Create_fn(::g::Fuse::Reactive::QuaternaryOperator* qo, uObject* context, uObject* listener, QuaternaryOperator__Subscription** __retval)
{
    *__retval = QuaternaryOperator__Subscription::Create(qo, context, listener);
}

// public override sealed void Dispose() :1606
void QuaternaryOperator__Subscription__Dispose_fn(QuaternaryOperator__Subscription* __this)
{
    ::g::Fuse::Reactive::InnerListener__Dispose_fn(__this);

    if (__this->_firstSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_firstSub), ::TYPES[0/*Uno.IDisposable*/]));
        __this->_firstSub = NULL;
    }

    if (__this->_secondSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_secondSub), ::TYPES[0/*Uno.IDisposable*/]));
        __this->_secondSub = NULL;
    }

    if (__this->_thirdSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_thirdSub), ::TYPES[0/*Uno.IDisposable*/]));
        __this->_thirdSub = NULL;
    }

    if (__this->_fourthSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_fourthSub), ::TYPES[0/*Uno.IDisposable*/]));
        __this->_fourthSub = NULL;
    }

    __this->_listener = NULL;
}

// protected void Init(Fuse.Reactive.IContext context) :1573
void QuaternaryOperator__Subscription__Init_fn(QuaternaryOperator__Subscription* __this, uObject* context)
{
    __this->Init(context);
}

// protected Subscription New(Fuse.Reactive.QuaternaryOperator qo, Fuse.Reactive.IListener listener) :1558
void QuaternaryOperator__Subscription__New1_fn(::g::Fuse::Reactive::QuaternaryOperator* qo, uObject* listener, QuaternaryOperator__Subscription** __retval)
{
    *__retval = QuaternaryOperator__Subscription::New1(qo, listener);
}

// protected override sealed void OnNewData(Fuse.Reactive.IExpression source, object value) :1581
void QuaternaryOperator__Subscription__OnNewData_fn(QuaternaryOperator__Subscription* __this, uObject* source, uObject* value)
{
    if (source == uPtr(__this->_qo)->First())
    {
        __this->_hasFirst = true;
        __this->_first = value;
    }

    if (source == uPtr(__this->_qo)->Second())
    {
        __this->_hasSecond = true;
        __this->_second = value;
    }

    if (source == uPtr(__this->_qo)->Third())
    {
        __this->_hasThird = true;
        __this->_third = value;
    }

    if (source == uPtr(__this->_qo)->Fourth())
    {
        __this->_hasFourth = true;
        __this->_fourth = value;
    }

    if ((((__this->_hasFirst || uPtr(__this->_qo)->IsFirstOptional()) && (__this->_hasSecond || uPtr(__this->_qo)->IsSecondOptional())) && (__this->_hasThird || uPtr(__this->_qo)->IsThirdOptional())) && (__this->_hasFourth || uPtr(__this->_qo)->IsFourthOptional()))
        __this->OnNewOperands(__this->_first, __this->_second, __this->_third, __this->_fourth);
}

// protected void OnNewOperands(object first, object second, object third, object fourth) :1592
void QuaternaryOperator__Subscription__OnNewOperands_fn(QuaternaryOperator__Subscription* __this, uObject* first, uObject* second, uObject* third, uObject* fourth)
{
    __this->OnNewOperands(first, second, third, fourth);
}

// protected Subscription(Fuse.Reactive.QuaternaryOperator qo, Fuse.Reactive.IListener listener) [instance] :1558
void QuaternaryOperator__Subscription::ctor_1(::g::Fuse::Reactive::QuaternaryOperator* qo, uObject* listener)
{
    ctor_();
    _qo = qo;
    _listener = listener;
}

// protected void Init(Fuse.Reactive.IContext context) [instance] :1573
void QuaternaryOperator__Subscription::Init(uObject* context)
{
    _firstSub = uPtr(uPtr(_qo)->First())->Subscribe(context, (uObject*)this);
    _secondSub = uPtr(uPtr(_qo)->Second())->Subscribe(context, (uObject*)this);
    _thirdSub = uPtr(uPtr(_qo)->Third())->Subscribe(context, (uObject*)this);
    _fourthSub = uPtr(uPtr(_qo)->Fourth())->Subscribe(context, (uObject*)this);
}

// protected void OnNewOperands(object first, object second, object third, object fourth) [instance] :1592
void QuaternaryOperator__Subscription::OnNewOperands(uObject* first, uObject* second, uObject* third, uObject* fourth)
{
    ClearDiagnostic();

    try
    {
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[1/*Fuse.Reactive.IListener*/]), (uObject*)_qo, uPtr(_qo)->Compute(first, second, third, fourth));
    }
    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[37/*Fuse.MarshalException*/]))
        {
            ::g::Fuse::MarshalException* me = (::g::Fuse::MarshalException*)__t.Exception;
            SetDiagnostic(uPtr(me)->Message(), (uObject*)_qo);
        }
        else throw __t;
    }
}

// public static Fuse.Reactive.QuaternaryOperator.Subscription Create(Fuse.Reactive.QuaternaryOperator qo, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :1564
QuaternaryOperator__Subscription* QuaternaryOperator__Subscription::Create(::g::Fuse::Reactive::QuaternaryOperator* qo, uObject* context, uObject* listener)
{
    QuaternaryOperator__Subscription* res = QuaternaryOperator__Subscription::New1(qo, listener);
    res->Init(context);
    return res;
}

// protected Subscription New(Fuse.Reactive.QuaternaryOperator qo, Fuse.Reactive.IListener listener) [static] :1558
QuaternaryOperator__Subscription* QuaternaryOperator__Subscription::New1(::g::Fuse::Reactive::QuaternaryOperator* qo, uObject* listener)
{
    QuaternaryOperator__Subscription* obj1 = (QuaternaryOperator__Subscription*)uNew(QuaternaryOperator__Subscription_typeof());
    obj1->ctor_1(qo, listener);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// private sealed class Property.Subscription :1459
// {
static void Property__Subscription_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(Property__Subscription_type, interface0),
        ::g::Fuse::Reactive::IWriteable_typeof(), offsetof(Property__Subscription_type, interface1),
        ::g::Uno::IDisposable_typeof(), offsetof(Property__Subscription_type, interface2));
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), offsetof(::g::Fuse::Reactive::Property__Subscription, _accessor), 0,
        ::TYPES[1/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::Property__Subscription, _listener), 0,
        ::g::Uno::UX::PropertyObject_typeof(), offsetof(::g::Fuse::Reactive::Property__Subscription, _object), 0,
        ::g::Fuse::Reactive::Property_typeof(), offsetof(::g::Fuse::Reactive::Property__Subscription, _prop), 0);
}

Property__Subscription_type* Property__Subscription_typeof()
{
    static uSStrong<Property__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Property__Subscription);
    options.TypeSize = sizeof(Property__Subscription_type);
    type = (Property__Subscription_type*)uClassType::New("Fuse.Reactive.Property.Subscription", options);
    type->fp_build_ = Property__Subscription_build;
    type->interface0.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))Property__Subscription__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface1.fp_SetExclusive = (void(*)(uObject*, uObject*))Property__Subscription__SetExclusive_fn;
    type->interface2.fp_Dispose = (void(*)(uObject*))Property__Subscription__Dispose_fn;
    return type;
}

// public Subscription(Fuse.Reactive.Property prop, Uno.UX.PropertyObject obj, Uno.UX.PropertyAccessor accessor, Fuse.Reactive.IListener listener) :1466
void Property__Subscription__ctor__fn(Property__Subscription* __this, ::g::Fuse::Reactive::Property* prop, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::PropertyAccessor* accessor, uObject* listener)
{
    __this->ctor_(prop, obj, accessor, listener);
}

// public void Dispose() :1485
void Property__Subscription__Dispose_fn(Property__Subscription* __this)
{
    __this->Dispose();
}

// public Subscription New(Fuse.Reactive.Property prop, Uno.UX.PropertyObject obj, Uno.UX.PropertyAccessor accessor, Fuse.Reactive.IListener listener) :1466
void Property__Subscription__New1_fn(::g::Fuse::Reactive::Property* prop, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::PropertyAccessor* accessor, uObject* listener, Property__Subscription** __retval)
{
    *__retval = Property__Subscription::New1(prop, obj, accessor, listener);
}

// private void PushValue() :1498
void Property__Subscription__PushValue_fn(Property__Subscription* __this)
{
    __this->PushValue();
}

// public void SetExclusive(object value) :1478
void Property__Subscription__SetExclusive_fn(Property__Subscription* __this, uObject* value)
{
    __this->SetExclusive(value);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :1493
void Property__Subscription__UnoUXIPropertyListenerOnPropertyChanged_fn(Property__Subscription* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    ::g::Uno::UX::Selector prop_ = *prop;

    if (::g::Uno::UX::Selector__op_Equality(prop_, uPtr(__this->_accessor)->Name()))
        __this->PushValue();
}

// public Subscription(Fuse.Reactive.Property prop, Uno.UX.PropertyObject obj, Uno.UX.PropertyAccessor accessor, Fuse.Reactive.IListener listener) [instance] :1466
void Property__Subscription::ctor_(::g::Fuse::Reactive::Property* prop, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::PropertyAccessor* accessor, uObject* listener)
{
    _prop = prop;
    _listener = listener;
    _accessor = accessor;
    _object = obj;
    uPtr(_object)->AddPropertyListener((uObject*)this);
    PushValue();
}

// public void Dispose() [instance] :1485
void Property__Subscription::Dispose()
{
    uPtr(_object)->RemovePropertyListener((uObject*)this);
    _accessor = NULL;
    _object = NULL;
    _listener = NULL;
}

// private void PushValue() [instance] :1498
void Property__Subscription::PushValue()
{
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[1/*Fuse.Reactive.IListener*/]), (uObject*)_prop, uPtr(_accessor)->GetAsObject(_object));
}

// public void SetExclusive(object value) [instance] :1478
void Property__Subscription::SetExclusive(uObject* value)
{
    uObject* res;

    if (::g::Fuse::Marshal::TryConvertTo(uPtr(_accessor)->PropertyType(), value, &res, _object))
        uPtr(_accessor)->SetAsObject(_object, res, (uObject*)this);
}

// public Subscription New(Fuse.Reactive.Property prop, Uno.UX.PropertyObject obj, Uno.UX.PropertyAccessor accessor, Fuse.Reactive.IListener listener) [static] :1466
Property__Subscription* Property__Subscription::New1(::g::Fuse::Reactive::Property* prop, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::PropertyAccessor* accessor, uObject* listener)
{
    Property__Subscription* obj1 = (Property__Subscription*)uNew(Property__Subscription_typeof());
    obj1->ctor_(prop, obj, accessor, listener);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class SimpleVarArgFunction.Subscription :2181
// {
static void SimpleVarArgFunction__Subscription_build(uType* type)
{
    ::TYPES[40] = ::g::Fuse::Reactive::VarArgFunction__Argument_typeof()->Array();
    ::TYPES[34] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Expression_typeof(), NULL);
    ::TYPES[35] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Expression_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::InnerListener_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::InnerListener_type, interface1));
    type->SetFields(2,
        ::TYPES[40/*Fuse.Reactive.VarArgFunction.Argument[]*/], offsetof(::g::Fuse::Reactive::SimpleVarArgFunction__Subscription, _arguments), 0,
        ::g::Fuse::Reactive::SimpleVarArgFunction_typeof(), offsetof(::g::Fuse::Reactive::SimpleVarArgFunction__Subscription, _func), 0,
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::SimpleVarArgFunction__Subscription, _listener), 0);
}

::g::Fuse::Reactive::InnerListener_type* SimpleVarArgFunction__Subscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InnerListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InnerListener_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(SimpleVarArgFunction__Subscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InnerListener_type);
    type = (::g::Fuse::Reactive::InnerListener_type*)uClassType::New("Fuse.Reactive.SimpleVarArgFunction.Subscription", options);
    type->fp_build_ = SimpleVarArgFunction__Subscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))SimpleVarArgFunction__Subscription__Dispose_fn;
    type->fp_OnNewData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*, uObject*))SimpleVarArgFunction__Subscription__OnNewData_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))SimpleVarArgFunction__Subscription__Dispose_fn;
    return type;
}

// public Subscription(Fuse.Reactive.SimpleVarArgFunction func, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :2187
void SimpleVarArgFunction__Subscription__ctor_1_fn(SimpleVarArgFunction__Subscription* __this, ::g::Fuse::Reactive::SimpleVarArgFunction* func, uObject* context, uObject* listener)
{
    __this->ctor_1(func, context, listener);
}

// public override sealed void Dispose() :2224
void SimpleVarArgFunction__Subscription__Dispose_fn(SimpleVarArgFunction__Subscription* __this)
{
    ::g::Fuse::Reactive::InnerListener__Dispose_fn(__this);

    for (int i = 0; i < uPtr(__this->_arguments)->Length(); i++)
        uPtr(uPtr(__this->_arguments)->Strong< ::g::Fuse::Reactive::VarArgFunction__Argument*>(i))->Dispose();

    __this->_listener = NULL;
    __this->_func = NULL;
    __this->_arguments = NULL;
}

// public Subscription New(Fuse.Reactive.SimpleVarArgFunction func, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :2187
void SimpleVarArgFunction__Subscription__New1_fn(::g::Fuse::Reactive::SimpleVarArgFunction* func, uObject* context, uObject* listener, SimpleVarArgFunction__Subscription** __retval)
{
    *__retval = SimpleVarArgFunction__Subscription::New1(func, context, listener);
}

// protected override sealed void OnNewData(Fuse.Reactive.IExpression source, object value) :2207
void SimpleVarArgFunction__Subscription__OnNewData_fn(SimpleVarArgFunction__Subscription* __this, uObject* source, uObject* value)
{
    ::g::Fuse::Reactive::Expression* ret3;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(__this->_func)->Arguments()), ::TYPES[34/*Uno.Collections.ICollection<Fuse.Reactive.Expression>*/])); i++)
        if ((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(__this->_func)->Arguments()), ::TYPES[35/*Uno.Collections.IList<Fuse.Reactive.Expression>*/]), uCRef<int>(i), &ret3), ret3) == source)
        {
            uPtr(uPtr(__this->_arguments)->Strong< ::g::Fuse::Reactive::VarArgFunction__Argument*>(i))->Value(value);
            uPtr(uPtr(__this->_arguments)->Strong< ::g::Fuse::Reactive::VarArgFunction__Argument*>(i))->HasValue(true);
        }

    __this->PushData();
}

// internal void PushData() :2219
void SimpleVarArgFunction__Subscription__PushData_fn(SimpleVarArgFunction__Subscription* __this)
{
    __this->PushData();
}

// public Subscription(Fuse.Reactive.SimpleVarArgFunction func, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [instance] :2187
void SimpleVarArgFunction__Subscription::ctor_1(::g::Fuse::Reactive::SimpleVarArgFunction* func, uObject* context, uObject* listener)
{
    ::g::Fuse::Reactive::Expression* ret2;
    ctor_();
    _func = func;
    _listener = listener;
    _arguments = uArray::New(::TYPES[40/*Fuse.Reactive.VarArgFunction.Argument[]*/], ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(func)->Arguments()), ::TYPES[34/*Uno.Collections.ICollection<Fuse.Reactive.Expression>*/])));

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(func->Arguments()), ::TYPES[34/*Uno.Collections.ICollection<Fuse.Reactive.Expression>*/])); i++)
        uPtr(_arguments)->Strong< ::g::Fuse::Reactive::VarArgFunction__Argument*>(i) = ::g::Fuse::Reactive::VarArgFunction__Argument::New1();

    for (int i1 = 0; i1 < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(func->Arguments()), ::TYPES[34/*Uno.Collections.ICollection<Fuse.Reactive.Expression>*/])); i1++)
        uPtr(uPtr(_arguments)->Strong< ::g::Fuse::Reactive::VarArgFunction__Argument*>(i1))->Subscription = uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(func)->Arguments()), ::TYPES[35/*Uno.Collections.IList<Fuse.Reactive.Expression>*/]), uCRef<int>(i1), &ret2), ret2))->Subscribe(context, (uObject*)this);

    PushData();
}

// internal void PushData() [instance] :2219
void SimpleVarArgFunction__Subscription::PushData()
{
    uPtr(_func)->OnNewPartialArguments(_arguments, _listener);
}

// public Subscription New(Fuse.Reactive.SimpleVarArgFunction func, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :2187
SimpleVarArgFunction__Subscription* SimpleVarArgFunction__Subscription::New1(::g::Fuse::Reactive::SimpleVarArgFunction* func, uObject* context, uObject* listener)
{
    SimpleVarArgFunction__Subscription* obj1 = (SimpleVarArgFunction__Subscription*)uNew(SimpleVarArgFunction__Subscription_typeof());
    obj1->ctor_1(func, context, listener);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\$.uno
// ----------------------------------------------------------------------------------

// private struct Instantiator.TemplateMatch :1827
// {
static void Instantiator__TemplateMatch_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::Instantiator__TemplateMatch, All), 0,
        ::g::Uno::UX::Template_typeof(), offsetof(::g::Fuse::Reactive::Instantiator__TemplateMatch, Template), 0);
}

uStructType* Instantiator__TemplateMatch_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(Instantiator__TemplateMatch);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Reactive.Instantiator.TemplateMatch", options);
    type->fp_build_ = Instantiator__TemplateMatch_build;
    return type;
}

// public bool Matches(Fuse.Reactive.Instantiator.TemplateMatch b) :1834
void Instantiator__TemplateMatch__Matches_fn(Instantiator__TemplateMatch* __this, Instantiator__TemplateMatch* b, bool* __retval)
{
    *__retval = __this->Matches(*b);
}

// public bool Matches(Fuse.Reactive.Instantiator.TemplateMatch b) [instance] :1834
bool Instantiator__TemplateMatch::Matches(Instantiator__TemplateMatch b)
{
    if (All != b.All)
        return false;

    return Template == b.Template;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public abstract class TernaryOperator :1869
// {
static void TernaryOperator_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(TernaryOperator_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator, _First), 0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator, _Second), 0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator, _Third), 0);
}

TernaryOperator_type* TernaryOperator_typeof()
{
    static uSStrong<TernaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TernaryOperator);
    options.TypeSize = sizeof(TernaryOperator_type);
    type = (TernaryOperator_type*)uClassType::New("Fuse.Reactive.TernaryOperator", options);
    type->fp_build_ = TernaryOperator_build;
    type->fp_get_IsThirdOptional = TernaryOperator__get_IsThirdOptional_fn;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))TernaryOperator__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))TernaryOperator__Subscribe_fn;
    return type;
}

// public generated Fuse.Reactive.Expression get_First() :1871
void TernaryOperator__get_First_fn(TernaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->First();
}

// private generated void set_First(Fuse.Reactive.Expression value) :1871
void TernaryOperator__set_First_fn(TernaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->First(value);
}

// protected bool get_IsFirstOptional() :1887
void TernaryOperator__get_IsFirstOptional_fn(TernaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsFirstOptional();
}

// protected bool get_IsSecondOptional() :1888
void TernaryOperator__get_IsSecondOptional_fn(TernaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsSecondOptional();
}

// protected virtual bool get_IsThirdOptional() :1889
void TernaryOperator__get_IsThirdOptional_fn(TernaryOperator* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public generated Fuse.Reactive.Expression get_Second() :1872
void TernaryOperator__get_Second_fn(TernaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Second();
}

// private generated void set_Second(Fuse.Reactive.Expression value) :1872
void TernaryOperator__set_Second_fn(TernaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Second(value);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :1882
void TernaryOperator__Subscribe_fn(TernaryOperator* __this, uObject* context, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)TernaryOperator__Subscription::Create(__this, context, listener), void();
}

// public generated Fuse.Reactive.Expression get_Third() :1873
void TernaryOperator__get_Third_fn(TernaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Third();
}

// private generated void set_Third(Fuse.Reactive.Expression value) :1873
void TernaryOperator__set_Third_fn(TernaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Third(value);
}

// public generated Fuse.Reactive.Expression get_First() [instance] :1871
::g::Fuse::Reactive::Expression* TernaryOperator::First()
{
    return _First;
}

// private generated void set_First(Fuse.Reactive.Expression value) [instance] :1871
void TernaryOperator::First(::g::Fuse::Reactive::Expression* value)
{
    _First = value;
}

// protected bool get_IsFirstOptional() [instance] :1887
bool TernaryOperator::IsFirstOptional()
{
    return false;
}

// protected bool get_IsSecondOptional() [instance] :1888
bool TernaryOperator::IsSecondOptional()
{
    return false;
}

// public generated Fuse.Reactive.Expression get_Second() [instance] :1872
::g::Fuse::Reactive::Expression* TernaryOperator::Second()
{
    return _Second;
}

// private generated void set_Second(Fuse.Reactive.Expression value) [instance] :1872
void TernaryOperator::Second(::g::Fuse::Reactive::Expression* value)
{
    _Second = value;
}

// public generated Fuse.Reactive.Expression get_Third() [instance] :1873
::g::Fuse::Reactive::Expression* TernaryOperator::Third()
{
    return _Third;
}

// private generated void set_Third(Fuse.Reactive.Expression value) [instance] :1873
void TernaryOperator::Third(::g::Fuse::Reactive::Expression* value)
{
    _Third = value;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class This :279
// {
static void This_build(uType* type)
{
    ::STRINGS[38] = uString::Const("Name table missing 'this' pointer");
    ::STRINGS[39] = uString::Const("this");
    ::TYPES[3] = ::g::Fuse::Reactive::IContext_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::ConstantExpression_type, interface0));
}

::g::Fuse::Reactive::ConstantExpression_type* This_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ConstantExpression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ConstantExpression_typeof();
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(This);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ConstantExpression_type);
    type = (::g::Fuse::Reactive::ConstantExpression_type*)uClassType::New("Fuse.Reactive.This", options);
    type->fp_build_ = This_build;
    type->fp_GetValue = (void(*)(::g::Fuse::Reactive::ConstantExpression*, uObject*, uObject**))This__GetValue_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))This__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::ConstantExpression__Subscribe_fn;
    return type;
}

// public override sealed object GetValue(Fuse.Reactive.IContext context) :281
void This__GetValue_fn(This* __this, uObject* context, uObject** __retval)
{
    if (::g::Fuse::Reactive::IContext::NameTable(uInterface(uPtr(context), ::TYPES[3/*Fuse.Reactive.IContext*/])) != NULL)
    {
        uObject* obj = uPtr(::g::Fuse::Reactive::IContext::NameTable(uInterface(uPtr(context), ::TYPES[3/*Fuse.Reactive.IContext*/])))->This();

        if (obj != NULL)
            return *__retval = obj, void();
    }

    U_THROW(::g::Uno::Exception::New2(::STRINGS[38/*"Name table ...*/]));
}

// public override sealed string ToString() :291
void This__ToString_fn(This* __this, uString** __retval)
{
    return *__retval = ::STRINGS[39/*"this"*/], void();
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public abstract class UnaryOperator :1987
// {
static void UnaryOperator_build(uType* type)
{
    ::STRINGS[0] = uString::Const(" does not implement the required methods");
    ::TYPES[1] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator, _Operand), 0);
}

::g::Fuse::Reactive::Expression_type* UnaryOperator_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UnaryOperator);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.UnaryOperator", options);
    type->fp_build_ = UnaryOperator_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))UnaryOperator__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))UnaryOperator__Subscribe_fn;
    return type;
}

// protected object Compute(object operand) :2000
void UnaryOperator__Compute_fn(UnaryOperator* __this, uObject* operand, uObject** __retval)
{
    *__retval = __this->Compute(operand);
}

// protected void OnNewOperand(Fuse.Reactive.IListener listener, object operand) :2005
void UnaryOperator__OnNewOperand_fn(UnaryOperator* __this, uObject* listener, uObject* operand)
{
    __this->OnNewOperand(listener, operand);
}

// public generated Fuse.Reactive.Expression get_Operand() :1989
void UnaryOperator__get_Operand_fn(UnaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Operand();
}

// private generated void set_Operand(Fuse.Reactive.Expression value) :1989
void UnaryOperator__set_Operand_fn(UnaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Operand(value);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :1995
void UnaryOperator__Subscribe_fn(UnaryOperator* __this, uObject* context, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)UnaryOperator__Subscription::Create(__this, context, listener), void();
}

// protected object Compute(object operand) [instance] :2000
uObject* UnaryOperator::Compute(uObject* operand)
{
    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::Type::FullName(uPtr(::g::Uno::Object::GetType(this))), ::STRINGS[0/*" does not i...*/])));
}

// protected void OnNewOperand(Fuse.Reactive.IListener listener, object operand) [instance] :2005
void UnaryOperator::OnNewOperand(uObject* listener, uObject* operand)
{
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(listener), ::TYPES[1/*Fuse.Reactive.IListener*/]), (uObject*)this, Compute(operand));
}

// public generated Fuse.Reactive.Expression get_Operand() [instance] :1989
::g::Fuse::Reactive::Expression* UnaryOperator::Operand()
{
    return _Operand;
}

// private generated void set_Operand(Fuse.Reactive.Expression value) [instance] :1989
void UnaryOperator::Operand(::g::Fuse::Reactive::Expression* value)
{
    _Operand = value;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive\1.2.0\$.uno
// -------------------------------------------------------------------------

// internal sealed class ValueForwarder :196
// {
static void ValueForwarder_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::ValueObserver_type, interface0),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::ValueObserver_type, interface1));
    type->SetFields(2,
        ValueForwarder__IValueListener_typeof(), offsetof(::g::Fuse::Reactive::ValueForwarder, _listener), 0);
}

::g::Fuse::Reactive::ValueObserver_type* ValueForwarder_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ValueObserver_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ValueObserver_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ValueForwarder);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ValueObserver_type);
    type = (::g::Fuse::Reactive::ValueObserver_type*)uClassType::New("Fuse.Reactive.ValueForwarder", options);
    type->fp_build_ = ValueForwarder_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Reactive::ValueObserver__Dispose_fn;
    return type;
}

// public ValueForwarder(Fuse.Reactive.IObservable obs, Fuse.Reactive.ValueForwarder.IValueListener listener) :201
void ValueForwarder__ctor_1_fn(ValueForwarder* __this, uObject* obs, uObject* listener)
{
    __this->ctor_1(obs, listener);
}

// public ValueForwarder New(Fuse.Reactive.IObservable obs, Fuse.Reactive.ValueForwarder.IValueListener listener) :201
void ValueForwarder__New1_fn(uObject* obs, uObject* listener, ValueForwarder** __retval)
{
    *__retval = ValueForwarder::New1(obs, listener);
}

// public ValueForwarder(Fuse.Reactive.IObservable obs, Fuse.Reactive.ValueForwarder.IValueListener listener) [instance] :201
void ValueForwarder::ctor_1(uObject* obs, uObject* listener)
{
    ctor_();
    _listener = listener;
    Subscribe(obs);
}

// public ValueForwarder New(Fuse.Reactive.IObservable obs, Fuse.Reactive.ValueForwarder.IValueListener listener) [static] :201
ValueForwarder* ValueForwarder::New1(uObject* obs, uObject* listener)
{
    ValueForwarder* obj1 = (ValueForwarder*)uNew(ValueForwarder_typeof());
    obj1->ctor_1(obs, listener);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive\1.2.0\$.uno
// -------------------------------------------------------------------------

// internal abstract class ValueObserver :126
// {
static void ValueObserver_build(uType* type)
{
    ::TYPES[5] = ::g::Fuse::Reactive::IObservable_typeof();
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::TYPES[0/*Uno.IDisposable*/], offsetof(ValueObserver_type, interface0),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(ValueObserver_type, interface1));
    type->SetFields(0,
        ::TYPES[5/*Fuse.Reactive.IObservable*/], offsetof(::g::Fuse::Reactive::ValueObserver, _obs), 0,
        ::TYPES[0/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::ValueObserver, _obsSub), 0);
}

ValueObserver_type* ValueObserver_typeof()
{
    static uSStrong<ValueObserver_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ValueObserver);
    options.TypeSize = sizeof(ValueObserver_type);
    type = (ValueObserver_type*)uClassType::New("Fuse.Reactive.ValueObserver", options);
    type->fp_build_ = ValueObserver_build;
    type->fp_Dispose = ValueObserver__Dispose_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ValueObserver__Dispose_fn;
    return type;
}

// protected generated ValueObserver() :126
void ValueObserver__ctor__fn(ValueObserver* __this)
{
    __this->ctor_();
}

// public virtual void Dispose() :146
void ValueObserver__Dispose_fn(ValueObserver* __this)
{
    __this->Unsubscribe();
}

// protected void Subscribe(Fuse.Reactive.IObservable obs) :133
void ValueObserver__Subscribe_fn(ValueObserver* __this, uObject* obs)
{
    __this->Subscribe(obs);
}

// protected void Unsubscribe() :139
void ValueObserver__Unsubscribe_fn(ValueObserver* __this)
{
    __this->Unsubscribe();
}

// protected generated ValueObserver() [instance] :126
void ValueObserver::ctor_()
{
}

// protected void Subscribe(Fuse.Reactive.IObservable obs) [instance] :133
void ValueObserver::Subscribe(uObject* obs)
{
    _obs = obs;
    _obsSub = ::g::Fuse::Reactive::IObservable::Subscribe(uInterface(uPtr(obs), ::TYPES[5/*Fuse.Reactive.IObservable*/]), (uObject*)this);
}

// protected void Unsubscribe() [instance] :139
void ValueObserver::Unsubscribe()
{
    if (_obsSub != NULL)
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_obsSub), ::TYPES[0/*Uno.IDisposable*/]));

    _obsSub = NULL;
    _obs = NULL;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public abstract class VarArgFunction :2092
// {
static void VarArgFunction_build(uType* type)
{
    ::STRINGS[4] = uString::Const("(");
    ::STRINGS[2] = uString::Const(",");
    ::STRINGS[3] = uString::Const(")");
    ::TYPES[34] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Expression_typeof(), NULL);
    ::TYPES[35] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Expression_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Reactive::Expression_typeof(), NULL), offsetof(::g::Fuse::Reactive::VarArgFunction, _args), 0);
}

::g::Fuse::Reactive::Expression_type* VarArgFunction_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(VarArgFunction);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.VarArgFunction", options);
    type->fp_build_ = VarArgFunction_build;
    return type;
}

// public Uno.Collections.IList<Fuse.Reactive.Expression> get_Arguments() :2121
void VarArgFunction__get_Arguments_fn(VarArgFunction* __this, uObject** __retval)
{
    *__retval = __this->Arguments();
}

// protected string FormatString(string funcName) :2124
void VarArgFunction__FormatString_fn(VarArgFunction* __this, uString* funcName, uString** __retval)
{
    *__retval = __this->FormatString(funcName);
}

// public Uno.Collections.IList<Fuse.Reactive.Expression> get_Arguments() [instance] :2121
uObject* VarArgFunction::Arguments()
{
    return (uObject*)_args;
}

// protected string FormatString(string funcName) [instance] :2124
uString* VarArgFunction::FormatString(uString* funcName)
{
    ::g::Fuse::Reactive::Expression* ret1;
    uString* q = ::g::Uno::String::op_Addition2(funcName, ::STRINGS[4/*"("*/]);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Arguments()), ::TYPES[34/*Uno.Collections.ICollection<Fuse.Reactive.Expression>*/])); ++i)
    {
        if (i > 0)
            q = ::g::Uno::String::op_Addition2(q, ::STRINGS[2/*","*/]);

        q = ::g::Uno::String::op_Addition2(q, ::g::Uno::Object::ToString(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Arguments()), ::TYPES[35/*Uno.Collections.IList<Fuse.Reactive.Expression>*/]), uCRef<int>(i), &ret1), ret1))));
    }

    q = ::g::Uno::String::op_Addition2(q, ::STRINGS[3/*")"*/]);
    return q;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\$.uno
// ----------------------------------------------------------------------------------

// private sealed class Instantiator.WindowItem :2185
// {
static void Instantiator__WindowItem_build(uType* type)
{
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Instantiator__WindowItem, Data), 0,
        ::g::Fuse::Reactive::Instantiator__ObservableLink_typeof(), offsetof(::g::Fuse::Reactive::Instantiator__WindowItem, DataLink), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Instantiator__WindowItem, Id), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Reactive::Instantiator__WindowItem, Nodes), 0,
        ::g::Fuse::Reactive::Instantiator__TemplateMatch_typeof(), offsetof(::g::Fuse::Reactive::Instantiator__WindowItem, Template), 0);
}

uType* Instantiator__WindowItem_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Instantiator__WindowItem);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.Instantiator.WindowItem", options);
    type->fp_build_ = Instantiator__WindowItem_build;
    type->fp_ctor_ = (void*)Instantiator__WindowItem__New1_fn;
    return type;
}

// public WindowItem() :2199
void Instantiator__WindowItem__ctor__fn(Instantiator__WindowItem* __this)
{
    __this->ctor_();
}

// public object get_CurrentData() :2205
void Instantiator__WindowItem__get_CurrentData_fn(Instantiator__WindowItem* __this, uObject** __retval)
{
    *__retval = __this->CurrentData();
}

// public WindowItem New() :2199
void Instantiator__WindowItem__New1_fn(Instantiator__WindowItem** __retval)
{
    *__retval = Instantiator__WindowItem::New1();
}

// public void Unlink() :2212
void Instantiator__WindowItem__Unlink_fn(Instantiator__WindowItem* __this)
{
    __this->Unlink();
}

// public WindowItem() [instance] :2199
void Instantiator__WindowItem::ctor_()
{
}

// public object get_CurrentData() [instance] :2205
uObject* Instantiator__WindowItem::CurrentData()
{
    return (DataLink != NULL) ? (uObject*)uPtr(DataLink)->Data() : (uObject*)Data;
}

// public void Unlink() [instance] :2212
void Instantiator__WindowItem::Unlink()
{
    if (DataLink != NULL)
    {
        Data = uPtr(DataLink)->Data();
        uPtr(DataLink)->Dispose();
        DataLink = NULL;
    }
}

// public WindowItem New() [static] :2199
Instantiator__WindowItem* Instantiator__WindowItem::New1()
{
    Instantiator__WindowItem* obj1 = (Instantiator__WindowItem*)uNew(Instantiator__WindowItem_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}} // ::g::Fuse::Reactive
