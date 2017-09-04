// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Binding.h>
#include <Fuse.DeferredManager.h>
#include <Fuse.Diagnostic.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.DiagnosticType.h>
#include <Fuse.IArray.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.Internal.ObjectL-a57e6857.h>
#include <Fuse.Internal.ObjectList-1.h>
#include <Fuse.IObject.h>
#include <Fuse.IProperties.h>
#include <Fuse.IRaw.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Json.h>
#include <Fuse.Marshal.h>
#include <Fuse.MarshalException.h>
#include <Fuse.NameRegistry.h>
#include <Fuse.NameValuePair.h>
#include <Fuse.Node.h>
#include <Fuse.Platform.ApplicationState.h>
#include <Fuse.Platform.Lifecycle.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Reactive.Abs.h>
#include <Fuse.Reactive.Acos.h>
#include <Fuse.Reactive.Add.h>
#include <Fuse.Reactive.Alternate.h>
#include <Fuse.Reactive.ArrayMirror.h>
#include <Fuse.Reactive.Asin.h>
#include <Fuse.Reactive.Atan.h>
#include <Fuse.Reactive.Atan2.h>
#include <Fuse.Reactive.BinaryF-177abc0d.h>
#include <Fuse.Reactive.BinaryF-f494d274.h>
#include <Fuse.Reactive.BinaryO-44e56a7e.h>
#include <Fuse.Reactive.BinaryOperator.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Case.h>
#include <Fuse.Reactive.Ceil.h>
#include <Fuse.Reactive.Clamp.h>
#include <Fuse.Reactive.ClassInstance.h>
#include <Fuse.Reactive.Closure.h>
#include <Fuse.Reactive.ClosureArgs.h>
#include <Fuse.Reactive.ClosureHandler.h>
#include <Fuse.Reactive.Conditional.h>
#include <Fuse.Reactive.Console.h>
#include <Fuse.Reactive.Constan-264ec80.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.Cos.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.DataSubscription.h>
#include <Fuse.Reactive.DataToR-16f9ac8f.h>
#include <Fuse.Reactive.DataToResource.h>
#include <Fuse.Reactive.DebugLog.h>
#include <Fuse.Reactive.DegreesToRadians.h>
#include <Fuse.Reactive.Diagnos-fd30c5a5.h>
#include <Fuse.Reactive.Divide.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.Equal.h>
#include <Fuse.Reactive.Even.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.EventRecord.h>
#include <Fuse.Reactive.Exp.h>
#include <Fuse.Reactive.Exp2.h>
#include <Fuse.Reactive.Express-ee33104d.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.Floor.h>
#include <Fuse.Reactive.Fract.h>
#include <Fuse.Reactive.Functio-f65ac39e.h>
#include <Fuse.Reactive.FunctionMirror.h>
#include <Fuse.Reactive.FuseJS.Builtins.h>
#include <Fuse.Reactive.GreaterOrEqual.h>
#include <Fuse.Reactive.GreaterThan.h>
#include <Fuse.Reactive.IContext.h>
#include <Fuse.Reactive.IEventHandler.h>
#include <Fuse.Reactive.IEventRecord.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.IndexFunction.h>
#include <Fuse.Reactive.InfixOperator.h>
#include <Fuse.Reactive.InnerLi-d480603c.h>
#include <Fuse.Reactive.InnerListener.h>
#include <Fuse.Reactive.Instance.h>
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
#include <Fuse.Reactive.Interna-2d54a663.h>
#include <Fuse.Reactive.Interna-5501e448.h>
#include <Fuse.Reactive.Interna-d7d4e77c.h>
#include <Fuse.Reactive.Internal.PatchOp.h>
#include <Fuse.Reactive.IObservable.h>
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Reactive.ISubscription.h>
#include <Fuse.Reactive.IWriteable.h>
#include <Fuse.Reactive.JavaScr-6ae501cc.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.LazyObs-f17cb610.h>
#include <Fuse.Reactive.Lerp.h>
#include <Fuse.Reactive.LessOrEqual.h>
#include <Fuse.Reactive.LessThan.h>
#include <Fuse.Reactive.ListMirror.h>
#include <Fuse.Reactive.Log.h>
#include <Fuse.Reactive.Log2.h>
#include <Fuse.Reactive.LogicalAnd.h>
#include <Fuse.Reactive.LogicalOr.h>
#include <Fuse.Reactive.LookUp.-f2be5323.h>
#include <Fuse.Reactive.LookUp.h>
#include <Fuse.Reactive.Match.h>
#include <Fuse.Reactive.Max.h>
#include <Fuse.Reactive.Member.-74fc418b.h>
#include <Fuse.Reactive.Member.h>
#include <Fuse.Reactive.Min.h>
#include <Fuse.Reactive.Mod.h>
#include <Fuse.Reactive.ModuleInstance.h>
#include <Fuse.Reactive.Multiply.h>
#include <Fuse.Reactive.Name.h>
#include <Fuse.Reactive.NameValuePair.h>
#include <Fuse.Reactive.Negate.h>
#include <Fuse.Reactive.NotEqual.h>
#include <Fuse.Reactive.NullCoalesce.h>
#include <Fuse.Reactive.ObjectMirror.h>
#include <Fuse.Reactive.Observa-1fc6e0be.h>
#include <Fuse.Reactive.Observa-38896f02.h>
#include <Fuse.Reactive.Observa-3a149fa6.h>
#include <Fuse.Reactive.Observa-4374fb9b.h>
#include <Fuse.Reactive.Observa-462e40f6.h>
#include <Fuse.Reactive.Observa-9616d070.h>
#include <Fuse.Reactive.Observa-aeda3ee7.h>
#include <Fuse.Reactive.Observa-b5abfc6.h>
#include <Fuse.Reactive.Observable.Add.h>
#include <Fuse.Reactive.Observable.Clear.h>
#include <Fuse.Reactive.Observable.h>
#include <Fuse.Reactive.Observable.NewAt.h>
#include <Fuse.Reactive.Observable.Set.h>
#include <Fuse.Reactive.Observa-e52f656c.h>
#include <Fuse.Reactive.Observa-f11631de.h>
#include <Fuse.Reactive.Odd.h>
#include <Fuse.Reactive.OffsetI-b46b8d5b.h>
#include <Fuse.Reactive.Paramet-7c20ce6b.h>
#include <Fuse.Reactive.Parameter.h>
#include <Fuse.Reactive.Pow.h>
#include <Fuse.Reactive.Propert-3b65e5e6.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Reactive.PropertyBinding.h>
#include <Fuse.Reactive.Quatern-13eb7fcd.h>
#include <Fuse.Reactive.Quatern-4692c3b2.h>
#include <Fuse.Reactive.RadiansToDegrees.h>
#include <Fuse.Reactive.Resourc-a4dc08c7.h>
#include <Fuse.Reactive.Resource.h>
#include <Fuse.Reactive.ResourceBinding.h>
#include <Fuse.Reactive.Rootabl-2ff41d03.h>
#include <Fuse.Reactive.Round.h>
#include <Fuse.Reactive.Select.h>
#include <Fuse.Reactive.Sign.h>
#include <Fuse.Reactive.SimpleV-1e1b52a3.h>
#include <Fuse.Reactive.SimpleV-31a29f4e.h>
#include <Fuse.Reactive.Sin.h>
#include <Fuse.Reactive.Snapsho-9e1b433f.h>
#include <Fuse.Reactive.Snapshot.h>
#include <Fuse.Reactive.Sqrt.h>
#include <Fuse.Reactive.Subtract.h>
#include <Fuse.Reactive.Tan.h>
#include <Fuse.Reactive.Ternary-ba5fcd50.h>
#include <Fuse.Reactive.TernaryOperator.h>
#include <Fuse.Reactive.This.h>
#include <Fuse.Reactive.ThreadW-2c6de4b3.h>
#include <Fuse.Reactive.ThreadW-a73c34f4.h>
#include <Fuse.Reactive.ThreadW-e549989c.h>
#include <Fuse.Reactive.ThreadWorker.h>
#include <Fuse.Reactive.ToLower.h>
#include <Fuse.Reactive.ToUpper.h>
#include <Fuse.Reactive.Trunc.h>
#include <Fuse.Reactive.UnaryFl-1bdb1fc6.h>
#include <Fuse.Reactive.UnaryFl-dfc153fb.h>
#include <Fuse.Reactive.UnaryOp-a08b90b8.h>
#include <Fuse.Reactive.UnaryOperator.h>
#include <Fuse.Reactive.ValueFo-a26c06f.h>
#include <Fuse.Reactive.ValueForwarder.h>
#include <Fuse.Reactive.ValueMirror.h>
#include <Fuse.Reactive.ValueObserver.h>
#include <Fuse.Reactive.VarArgF-8afe3c06.h>
#include <Fuse.Reactive.VarArgFunction.h>
#include <Fuse.Reactive.Vector.Array.h>
#include <Fuse.Reactive.Vector.h>
#include <Fuse.Reactive.WhileCount.h>
#include <Fuse.Reactive.WhileCount.Range.h>
#include <Fuse.Reactive.WhileEmpty.h>
#include <Fuse.Reactive.WhileNotEmpty.h>
#include <Fuse.Reactive.With.h>
#include <Fuse.Resources.Resour-fabdcc8b.h>
#include <Fuse.Scripting.AppInitialized.h>
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.External.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.IEvent-434826af.h>
#include <Fuse.Scripting.IScriptEvent.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Scripting.Module.h>
#include <Fuse.Scripting.ModuleResult.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.Script-102b1113.h>
#include <Fuse.Scripting.ScriptClass.h>
#include <Fuse.Scripting.ScriptException.h>
#include <Fuse.Scripting.ScriptMember.h>
#include <Fuse.Scripting.ScriptMethod.h>
#include <Fuse.Scripting.ScriptModule.h>
#include <Fuse.Scripting.ScriptProperty.h>
#include <Fuse.Scripting.V8.Context.h>
#include <Fuse.Triggers.BusyTask.h>
#include <Fuse.Triggers.BusyTaskActivity.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Fuse.WrapException.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Application.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dicti-87d2e37d.h>
#include <Uno.Collections.Dicti-98f6bc43.h>
#include <Uno.Collections.Dicti-d1699346.h>
#include <Uno.Collections.Dicti-d6e3a7c5.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.Enume-8ddd045.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.List--251bdc7d.h>
#include <Uno.Collections.RootableList-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.Debug-5d778620.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Int3.h>
#include <Uno.Int4.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.Runtime.Implement-eca777ec.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Threading.Concurr-cd310558.h>
#include <Uno.Threading.EventWaitHandle.h>
#include <Uno.Threading.ManualResetEvent.h>
#include <Uno.Threading.Monitor.h>
#include <Uno.Threading.Thread.h>
#include <Uno.Threading.ThreadStart.h>
#include <Uno.Type.h>
#include <Uno.UInt.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Template.h>
static uString* STRINGS[174];
static uType* TYPES[122];

namespace g{
namespace Fuse{
namespace Reactive{

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Abs :825
// {
static void Abs_build(uType* type)
{
    ::STRINGS[0] = uString::Const("abs");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Abs__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Abs_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Abs);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Abs", options);
    type->fp_build_ = Abs_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Abs(Fuse.Reactive.Expression operand) :828
void Abs__ctor_3_fn(Abs* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public Abs New(Fuse.Reactive.Expression operand) :828
void Abs__New1_fn(::g::Fuse::Reactive::Expression* operand, Abs** __retval)
{
    *__retval = Abs::New1(operand);
}

// public Abs(Fuse.Reactive.Expression operand) [instance] :828
void Abs::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[0/*"abs"*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Abs_fn));
}

// public Abs New(Fuse.Reactive.Expression operand) [static] :828
Abs* Abs::New1(::g::Fuse::Reactive::Expression* operand)
{
    Abs* obj1 = (Abs*)uNew(Abs_typeof());
    obj1->ctor_3(operand);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Acos :795
// {
static void Acos_build(uType* type)
{
    ::STRINGS[1] = uString::Const("acos");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Acos__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Acos_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Acos);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Acos", options);
    type->fp_build_ = Acos_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Acos(Fuse.Reactive.Expression operand) :798
void Acos__ctor_3_fn(Acos* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public Acos New(Fuse.Reactive.Expression operand) :798
void Acos__New1_fn(::g::Fuse::Reactive::Expression* operand, Acos** __retval)
{
    *__retval = Acos::New1(operand);
}

// public Acos(Fuse.Reactive.Expression operand) [instance] :798
void Acos::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[1/*"acos"*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Acos_fn));
}

// public Acos New(Fuse.Reactive.Expression operand) [static] :798
Acos* Acos::New1(::g::Fuse::Reactive::Expression* operand)
{
    Acos* obj1 = (Acos*)uNew(Acos_typeof());
    obj1->ctor_3(operand);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Add :1148
// {
static void Add_build(uType* type)
{
    ::STRINGS[2] = uString::Const("+");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Add__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::InfixOperator_type* Add_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Add);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.Add", options);
    type->fp_build_ = Add_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))Add__Compute_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))Add__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public Add(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :1151
void Add__ctor_3_fn(Add* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_3(left, right);
}

// protected override sealed object Compute(object left, object right) :1152
void Add__Compute_fn(Add* __this, uObject* left, uObject* right, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Add", "Compute(object,object)");
    return *__retval = ::g::Fuse::Marshal::Add(left, right), void();
}

// public Add New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :1151
void Add__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, Add** __retval)
{
    *__retval = Add::New1(left, right);
}

// public override sealed string get_Symbol() :1157
void Add__get_Symbol_fn(Add* __this, uString** __retval)
{
    return *__retval = ::STRINGS[2/*"+"*/], void();
}

// public Add(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :1151
void Add::ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_2(left, right);
}

// public Add New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :1151
Add* Add::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    Add* obj1 = (Add*)uNew(Add_typeof());
    obj1->ctor_3(left, right);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.JavaScript\1.2.0\$.uno
// ------------------------------------------------------------------------------------

// private sealed class Observable.Add :1185
// {
static void Observable__Add_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Observable__Add, _value), 0);
}

::g::Fuse::Reactive::Observable__Operation_type* Observable__Add_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Observable__Operation_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Observable__Add);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Observable__Operation_type);
    type = (::g::Fuse::Reactive::Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.Add", options);
    type->fp_build_ = Observable__Add_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Reactive::Observable__Operation*, uObject*))Observable__Add__OnPerform_fn;
    return type;
}

// public Add(Fuse.Reactive.Observable obs, object value) :1189
void Observable__Add__ctor_1_fn(Observable__Add* __this, ::g::Fuse::Reactive::Observable* obs, uObject* value)
{
    __this->ctor_1(obs, value);
}

// public Add New(Fuse.Reactive.Observable obs, object value) :1189
void Observable__Add__New1_fn(::g::Fuse::Reactive::Observable* obs, uObject* value, Observable__Add** __retval)
{
    *__retval = Observable__Add::New1(obs, value);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription> sub) :1194
void Observable__Add__OnPerform_fn(Observable__Add* __this, uObject* sub)
{
    uStackFrame __("Fuse.Reactive.Observable.Add", "OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>)");
    ::g::Fuse::Reactive::Observable__Subscription* ret2;
    ::g::Fuse::Reactive::Observable__Subscription* ret3;
    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(__this->Observable())->_values), __this->_value);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Reactive.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(-1))
            ::g::Fuse::Reactive::IObserver::OnAdd(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[3/*Fuse.Reactive.IObserver*/]), __this->_value);
}

// public Add(Fuse.Reactive.Observable obs, object value) [instance] :1189
void Observable__Add::ctor_1(::g::Fuse::Reactive::Observable* obs, uObject* value)
{
    ctor_(obs);
    _value = value;
}

// public Add New(Fuse.Reactive.Observable obs, object value) [static] :1189
Observable__Add* Observable__Add::New1(::g::Fuse::Reactive::Observable* obs, uObject* value)
{
    Observable__Add* obj1 = (Observable__Add*)uNew(Observable__Add_typeof());
    obj1->ctor_1(obs, value);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Alternate :658
// {
static void Alternate_build(uType* type)
{
    ::STRINGS[3] = uString::Const("alternate(");
    ::STRINGS[4] = uString::Const(", ");
    ::STRINGS[5] = uString::Const(")");
    ::TYPES[4] = ::g::Fuse::Marshal_typeof()->MakeMethod(1/*TryToType<float>*/, ::g::Uno::Float_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Alternate__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::BinaryOperator_type* Alternate_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::BinaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::BinaryOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Alternate);
    options.TypeSize = sizeof(::g::Fuse::Reactive::BinaryOperator_type);
    type = (::g::Fuse::Reactive::BinaryOperator_type*)uClassType::New("Fuse.Reactive.Alternate", options);
    type->fp_build_ = Alternate_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))Alternate__Compute_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Alternate__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public Alternate(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :661
void Alternate__ctor_2_fn(Alternate* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_2(left, right);
}

// protected override sealed object Compute(object left, object right) :662
void Alternate__Compute_fn(Alternate* __this, uObject* left, uObject* right, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Alternate", "Compute(object,object)");
    bool ret2;
    bool ret3;
    float fvalue = 0.0f;
    float fgroup = 0.0f;

    if (!(::g::Fuse::Marshal__TryToType_fn(::TYPES[4/*Fuse.Marshal.TryToType<float>*/], left, &fvalue, &ret2), ret2) || !(::g::Fuse::Marshal__TryToType_fn(::TYPES[4/*Fuse.Marshal.TryToType<float>*/], right, &fgroup, &ret3), ret3))
        return *__retval = NULL, void();

    int value = (int)::g::Uno::Math::Round2(fvalue);
    int group = (int)::g::Uno::Math::Round2(fgroup);
    bool b = (value >= 0) ? (value % (group * 2)) < group : (-(value + 1) % (group * 2)) >= group;
    return *__retval = uBox(::TYPES[18/*bool*/], b), void();
}

// public Alternate New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :661
void Alternate__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, Alternate** __retval)
{
    *__retval = Alternate::New1(left, right);
}

// public override sealed string ToString() :677
void Alternate__ToString_fn(Alternate* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.Alternate", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[3/*"alternate("*/], __this->Left()), ::STRINGS[4/*", "*/]), __this->Right()), ::STRINGS[5/*")"*/]), void();
}

// public Alternate(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :661
void Alternate::ctor_2(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_1(left, right);
}

// public Alternate New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :661
Alternate* Alternate::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    Alternate* obj1 = (Alternate*)uNew(Alternate_typeof());
    obj1->ctor_2(left, right);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// protected sealed class VarArgFunction.Argument :2095
// {
static void VarArgFunction__Argument_build(uType* type)
{
    ::TYPES[5] = ::g::Uno::IDisposable_typeof();
    type->SetFields(0,
        ::TYPES[5/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::VarArgFunction__Argument, Subscription), 0,
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
    uStackFrame __("Fuse.Reactive.VarArgFunction.Argument", "Dispose()");

    if (Subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(Subscription), ::TYPES[5/*Uno.IDisposable*/]));
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

// private sealed class Vector.Array :2259
// {
static void Vector__Array_build(uType* type)
{
    ::STRINGS[6] = uString::Const("(");
    ::STRINGS[4] = uString::Const(", ");
    ::STRINGS[5] = uString::Const(")");
    ::TYPES[6] = uObject_typeof()->Array();
    type->SetInterfaces(
        ::g::Fuse::IArray_typeof(), offsetof(Vector__Array_type, interface0));
    type->SetFields(0,
        ::TYPES[6/*object[]*/], offsetof(::g::Fuse::Reactive::Vector__Array, _items), 0);
}

Vector__Array_type* Vector__Array_typeof()
{
    static uSStrong<Vector__Array_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Vector__Array);
    options.TypeSize = sizeof(Vector__Array_type);
    type = (Vector__Array_type*)uClassType::New("Fuse.Reactive.Vector.Array", options);
    type->fp_build_ = Vector__Array_build;
    type->fp_ToString = (void(*)(uObject*, uString**))Vector__Array__ToString_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uObject**))Vector__Array__FuseIArrayget_Item_fn;
    type->interface0.fp_get_Length = (void(*)(uObject*, int*))Vector__Array__FuseIArrayget_Length_fn;
    return type;
}

// public Array(Fuse.Reactive.VarArgFunction.Argument[] args) :2262
void Vector__Array__ctor__fn(Vector__Array* __this, uArray* args)
{
    __this->ctor_(args);
}

// private object Fuse.IArray.get_Item(int index) :2268
void Vector__Array__FuseIArrayget_Item_fn(Vector__Array* __this, int* index, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Vector.Array", "Fuse.IArray.get_Item(int)");
    int index_ = *index;
    return *__retval = uPtr(__this->_items)->Strong<uObject*>(index_), void();
}

// private int Fuse.IArray.get_Length() :2269
void Vector__Array__FuseIArrayget_Length_fn(Vector__Array* __this, int* __retval)
{
    uStackFrame __("Fuse.Reactive.Vector.Array", "Fuse.IArray.get_Length()");
    return *__retval = uPtr(__this->_items)->Length(), void();
}

// public Array New(Fuse.Reactive.VarArgFunction.Argument[] args) :2262
void Vector__Array__New1_fn(uArray* args, Vector__Array** __retval)
{
    *__retval = Vector__Array::New1(args);
}

// public override sealed string ToString() :2271
void Vector__Array__ToString_fn(Vector__Array* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.Vector.Array", "ToString()");
    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();
    sb->Append2(::STRINGS[6/*"("*/]);

    for (int i = 0; i < uPtr(__this->_items)->Length(); i++)
    {
        if (i > 0)
            uPtr(sb)->Append2(::STRINGS[4/*", "*/]);

        uPtr(sb)->Append2(::g::Uno::Object::ToString(uPtr(uPtr(__this->_items)->Strong<uObject*>(i))));
    }

    sb->Append2(::STRINGS[5/*")"*/]);
    return *__retval = sb->ToString(), void();
}

// public Array(Fuse.Reactive.VarArgFunction.Argument[] args) [instance] :2262
void Vector__Array::ctor_(uArray* args)
{
    uStackFrame __("Fuse.Reactive.Vector.Array", ".ctor(Fuse.Reactive.VarArgFunction.Argument[])");
    _items = uArray::New(::TYPES[6/*object[]*/], uPtr(args)->Length());

    for (int i = 0; i < args->Length(); i++)
        uPtr(_items)->Strong<uObject*>(i) = uPtr(uPtr(args)->Strong< ::g::Fuse::Reactive::VarArgFunction__Argument*>(i))->Value();
}

// public Array New(Fuse.Reactive.VarArgFunction.Argument[] args) [static] :2262
Vector__Array* Vector__Array::New1(uArray* args)
{
    Vector__Array* obj1 = (Vector__Array*)uNew(Vector__Array_typeof());
    obj1->ctor_(args);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.JavaScript\1.2.0\$.uno
// ------------------------------------------------------------------------------------

// internal sealed class ArrayMirror :8
// {
static void ArrayMirror_build(uType* type)
{
    ::TYPES[6] = uObject_typeof()->Array();
    ::TYPES[7] = ::g::Fuse::Reactive::ValueMirror_typeof();
    type->SetInterfaces(
        ::g::Fuse::IRaw_typeof(), offsetof(::g::Fuse::Reactive::ListMirror_type, interface0),
        ::g::Fuse::IArray_typeof(), offsetof(::g::Fuse::Reactive::ListMirror_type, interface1));
    type->SetFields(1,
        ::TYPES[6/*object[]*/], offsetof(::g::Fuse::Reactive::ArrayMirror, _items), 0);
}

::g::Fuse::Reactive::ListMirror_type* ArrayMirror_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ListMirror_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ListMirror_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ArrayMirror);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ListMirror_type);
    type = (::g::Fuse::Reactive::ListMirror_type*)uClassType::New("Fuse.Reactive.ArrayMirror", options);
    type->fp_build_ = ArrayMirror_build;
    type->fp_get_Item = (void(*)(::g::Fuse::Reactive::ListMirror*, int*, uObject**))ArrayMirror__get_Item_fn;
    type->fp_get_Length = (void(*)(::g::Fuse::Reactive::ListMirror*, int*))ArrayMirror__get_Length_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Reactive::ValueMirror*))ArrayMirror__Unsubscribe_fn;
    type->interface1.fp_get_Length = (void(*)(uObject*, int*))ArrayMirror__get_Length_fn;
    type->interface1.fp_get_Item = (void(*)(uObject*, int*, uObject**))ArrayMirror__get_Item_fn;
    type->interface0.fp_get_Raw = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::ValueMirror__get_Raw_fn;
    return type;
}

// internal ArrayMirror(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Array arr) :12
void ArrayMirror__ctor_2_fn(ArrayMirror* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* arr)
{
    __this->ctor_2(worker, arr);
}

// public override sealed object get_Item(int index) :32
void ArrayMirror__get_Item_fn(ArrayMirror* __this, int* index, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.ArrayMirror", "get_Item(int)");
    int index_ = *index;
    return *__retval = uPtr(__this->_items)->Strong<uObject*>(index_), void();
}

// internal object[] get_ItemsReadonly() :19
void ArrayMirror__get_ItemsReadonly_fn(ArrayMirror* __this, uArray** __retval)
{
    *__retval = __this->ItemsReadonly();
}

// public override sealed int get_Length() :37
void ArrayMirror__get_Length_fn(ArrayMirror* __this, int* __retval)
{
    uStackFrame __("Fuse.Reactive.ArrayMirror", "get_Length()");
    return *__retval = uPtr(__this->_items)->Length(), void();
}

// internal ArrayMirror New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Array arr) :12
void ArrayMirror__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* arr, ArrayMirror** __retval)
{
    *__retval = ArrayMirror::New1(worker, arr);
}

// public override sealed void Unsubscribe() :21
void ArrayMirror__Unsubscribe_fn(ArrayMirror* __this)
{
    uStackFrame __("Fuse.Reactive.ArrayMirror", "Unsubscribe()");

    for (int i = 0; i < uPtr(__this->_items)->Length(); i++)
    {
        ::g::Fuse::Reactive::ValueMirror* d = uAs< ::g::Fuse::Reactive::ValueMirror*>(uPtr(__this->_items)->Strong<uObject*>(i), ::TYPES[7/*Fuse.Reactive.ValueMirror*/]);

        if (d != NULL)
            uPtr(d)->Unsubscribe();
    }
}

// internal ArrayMirror(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Array arr) [instance] :12
void ArrayMirror::ctor_2(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* arr)
{
    uStackFrame __("Fuse.Reactive.ArrayMirror", ".ctor(Fuse.Reactive.ThreadWorker,Fuse.Scripting.Array)");
    ctor_1(arr);
    _items = uArray::New(::TYPES[6/*object[]*/], uPtr(arr)->Length());

    for (int i = 0; i < uPtr(_items)->Length(); i++)
        uPtr(_items)->Strong<uObject*>(i) = uPtr(worker)->Reflect(uPtr(arr)->Item(i));
}

// internal object[] get_ItemsReadonly() [instance] :19
uArray* ArrayMirror::ItemsReadonly()
{
    return _items;
}

// internal ArrayMirror New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Array arr) [static] :12
ArrayMirror* ArrayMirror::New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* arr)
{
    ArrayMirror* obj1 = (ArrayMirror*)uNew(ArrayMirror_typeof());
    obj1->ctor_2(worker, arr);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Asin :786
// {
static void Asin_build(uType* type)
{
    ::STRINGS[7] = uString::Const("asin");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Asin__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Asin_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Asin);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Asin", options);
    type->fp_build_ = Asin_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Asin(Fuse.Reactive.Expression operand) :789
void Asin__ctor_3_fn(Asin* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public Asin New(Fuse.Reactive.Expression operand) :789
void Asin__New1_fn(::g::Fuse::Reactive::Expression* operand, Asin** __retval)
{
    *__retval = Asin::New1(operand);
}

// public Asin(Fuse.Reactive.Expression operand) [instance] :789
void Asin::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[7/*"asin"*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Asin_fn));
}

// public Asin New(Fuse.Reactive.Expression operand) [static] :789
Asin* Asin::New1(::g::Fuse::Reactive::Expression* operand)
{
    Asin* obj1 = (Asin*)uNew(Asin_typeof());
    obj1->ctor_3(operand);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Atan :804
// {
static void Atan_build(uType* type)
{
    ::STRINGS[8] = uString::Const("atan");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Atan__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Atan_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Atan);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Atan", options);
    type->fp_build_ = Atan_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Atan(Fuse.Reactive.Expression operand) :807
void Atan__ctor_3_fn(Atan* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public Atan New(Fuse.Reactive.Expression operand) :807
void Atan__New1_fn(::g::Fuse::Reactive::Expression* operand, Atan** __retval)
{
    *__retval = Atan::New1(operand);
}

// public Atan(Fuse.Reactive.Expression operand) [instance] :807
void Atan::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[8/*"atan"*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Atan_fn));
}

// public Atan New(Fuse.Reactive.Expression operand) [static] :807
Atan* Atan::New1(::g::Fuse::Reactive::Expression* operand)
{
    Atan* obj1 = (Atan*)uNew(Atan_typeof());
    obj1->ctor_3(operand);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Atan2 :817
// {
static void Atan2_build(uType* type)
{
    ::STRINGS[9] = uString::Const("atan2");
    ::TYPES[8] = ::g::Fuse::Reactive::BinaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator_type, interface0));
    type->SetFields(4);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Atan2__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::BinaryOperator_type* Atan2_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::BinaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::BinaryFloatOperator_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Atan2);
    options.TypeSize = sizeof(::g::Fuse::Reactive::BinaryOperator_type);
    type = (::g::Fuse::Reactive::BinaryOperator_type*)uClassType::New("Fuse.Reactive.Atan2", options);
    type->fp_build_ = Atan2_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public Atan2(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :820
void Atan2__ctor_3_fn(Atan2* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_3(left, right);
}

// public Atan2 New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :820
void Atan2__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, Atan2** __retval)
{
    *__retval = Atan2::New1(left, right);
}

// public Atan2(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :820
void Atan2::ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_2(left, right, ::STRINGS[9/*"atan2"*/], uDelegate::New(::TYPES[8/*Fuse.Reactive.BinaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Atan21_fn));
}

// public Atan2 New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :820
Atan2* Atan2::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    Atan2* obj1 = (Atan2*)uNew(Atan2_typeof());
    obj1->ctor_3(left, right);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public abstract class BinaryFloatOperator :731
// {
static void BinaryFloatOperator_build(uType* type)
{
    ::STRINGS[6] = uString::Const("(");
    ::STRINGS[10] = uString::Const(",");
    ::STRINGS[5] = uString::Const(")");
    ::TYPES[9] = ::g::Fuse::Marshal_typeof()->MakeMethod(1/*TryToType<double>*/, ::g::Uno::Double_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator_type, interface0));
    type->SetFields(2,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::BinaryFloatOperator, _name), 0,
        BinaryFloatOperator__FloatOp_typeof(), offsetof(::g::Fuse::Reactive::BinaryFloatOperator, _op), 0);
}

::g::Fuse::Reactive::BinaryOperator_type* BinaryFloatOperator_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::BinaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::BinaryOperator_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(BinaryFloatOperator);
    options.TypeSize = sizeof(::g::Fuse::Reactive::BinaryOperator_type);
    type = (::g::Fuse::Reactive::BinaryOperator_type*)uClassType::New("Fuse.Reactive.BinaryFloatOperator", options);
    type->fp_build_ = BinaryFloatOperator_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))BinaryFloatOperator__Compute_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))BinaryFloatOperator__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// internal BinaryFloatOperator(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right, string name, Fuse.Reactive.BinaryFloatOperator.FloatOp op) :736
void BinaryFloatOperator__ctor_2_fn(BinaryFloatOperator* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, uString* name, uDelegate* op)
{
    __this->ctor_2(left, right, name, op);
}

// protected override sealed object Compute(object left, object right) :742
void BinaryFloatOperator__Compute_fn(BinaryFloatOperator* __this, uObject* left, uObject* right, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.BinaryFloatOperator", "Compute(object,object)");
    bool ret1;
    bool ret2;
    double ret3;
    double lv = 0.0;
    double rv = 0.0;

    if (!(::g::Fuse::Marshal__TryToType_fn(::TYPES[9/*Fuse.Marshal.TryToType<double>*/], left, &lv, &ret1), ret1) || !(::g::Fuse::Marshal__TryToType_fn(::TYPES[9/*Fuse.Marshal.TryToType<double>*/], right, &rv, &ret2), ret2))
        return *__retval = NULL, void();

    return *__retval = uBox(::TYPES[20/*double*/], (uPtr(__this->_op)->Invoke(&ret3, 2, uCRef(lv), uCRef(rv)), ret3)), void();
}

// public override sealed string ToString() :751
void BinaryFloatOperator__ToString_fn(BinaryFloatOperator* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.BinaryFloatOperator", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(__this->_name, ::STRINGS[6/*"("*/]), __this->Left()), ::STRINGS[10/*","*/]), __this->Right()), ::STRINGS[5/*")"*/]), void();
}

// internal BinaryFloatOperator(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right, string name, Fuse.Reactive.BinaryFloatOperator.FloatOp op) [instance] :736
void BinaryFloatOperator::ctor_2(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, uString* name, uDelegate* op)
{
    ctor_1(left, right);
    _name = name;
    _op = op;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public abstract class BinaryOperator :14
// {
static void BinaryOperator_build(uType* type)
{
    ::STRINGS[11] = uString::Const(" does not implement the required methods");
    ::TYPES[10] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(BinaryOperator_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator, _Left), 0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator, _Right), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Left", NULL, (void*)BinaryOperator__get_Left_fn, 0, false, ::g::Fuse::Reactive::Expression_typeof(), 0),
        new uFunction("get_Right", NULL, (void*)BinaryOperator__get_Right_fn, 0, false, ::g::Fuse::Reactive::Expression_typeof(), 0));
}

BinaryOperator_type* BinaryOperator_typeof()
{
    static uSStrong<BinaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(BinaryOperator);
    options.TypeSize = sizeof(BinaryOperator_type);
    type = (BinaryOperator_type*)uClassType::New("Fuse.Reactive.BinaryOperator", options);
    type->fp_build_ = BinaryOperator_build;
    type->fp_Compute = BinaryOperator__Compute_fn;
    type->fp_get_IsLeftOptional = BinaryOperator__get_IsLeftOptional_fn;
    type->fp_OnNewOperands = BinaryOperator__OnNewOperands_fn;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))BinaryOperator__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))BinaryOperator__Subscribe_fn;
    return type;
}

// protected BinaryOperator(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :18
void BinaryOperator__ctor_1_fn(BinaryOperator* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_1(left, right);
}

// protected virtual object Compute(object left, object right) :32
void BinaryOperator__Compute_fn(BinaryOperator* __this, uObject* left, uObject* right, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.BinaryOperator", "Compute(object,object)");
    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::Type::FullName(uPtr(::g::Uno::Object::GetType(__this))), ::STRINGS[11/*" does not i...*/])));
}

// protected virtual bool get_IsLeftOptional() :29
void BinaryOperator__get_IsLeftOptional_fn(BinaryOperator* __this, bool* __retval)
{
    return *__retval = false, void();
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

// protected virtual void OnNewOperands(Fuse.Reactive.IListener listener, object left, object right) :37
void BinaryOperator__OnNewOperands_fn(BinaryOperator* __this, uObject* listener, uObject* left, uObject* right)
{
    uStackFrame __("Fuse.Reactive.BinaryOperator", "OnNewOperands(Fuse.Reactive.IListener,object,object)");
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(listener), ::TYPES[10/*Fuse.Reactive.IListener*/]), (uObject*)__this, __this->Compute(left, right));
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
    uStackFrame __("Fuse.Reactive.BinaryOperator", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    return *__retval = (uObject*)BinaryOperator__Subscription::Create(__this, context, listener), void();
}

// protected BinaryOperator(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :18
void BinaryOperator::ctor_1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_();
    Left(left);
    Right(right);
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

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.JavaScript\1.2.0\$.uno
// ------------------------------------------------------------------------------------

// private sealed class FunctionMirror.CallClosure :202
// {
static void FunctionMirror__CallClosure_build(uType* type)
{
    ::STRINGS[12] = uString::Const("node");
    ::STRINGS[13] = uString::Const("data");
    ::STRINGS[14] = uString::Const("sender");
    ::TYPES[11] = ::g::Fuse::Reactive::IEventRecord_typeof();
    ::TYPES[12] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL), NULL);
    ::TYPES[13] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[14] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL), NULL);
    ::TYPES[15] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[16] = ::g::Fuse::Scripting::ScriptException_typeof();
    ::TYPES[6] = uObject_typeof()->Array();
    type->SetFields(0,
        ::TYPES[11/*Fuse.Reactive.IEventRecord*/], offsetof(::g::Fuse::Reactive::FunctionMirror__CallClosure, _e), 0,
        ::g::Fuse::Reactive::FunctionMirror_typeof(), offsetof(::g::Fuse::Reactive::FunctionMirror__CallClosure, _f), 0);
}

uType* FunctionMirror__CallClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FunctionMirror__CallClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FunctionMirror.CallClosure", options);
    type->fp_build_ = FunctionMirror__CallClosure_build;
    return type;
}

// public CallClosure(Fuse.Reactive.FunctionMirror f, Fuse.Reactive.IEventRecord e) :207
void FunctionMirror__CallClosure__ctor__fn(FunctionMirror__CallClosure* __this, ::g::Fuse::Reactive::FunctionMirror* f, uObject* e)
{
    __this->ctor_(f, e);
}

// public void Call() :213
void FunctionMirror__CallClosure__Call_fn(FunctionMirror__CallClosure* __this)
{
    __this->Call();
}

// public CallClosure New(Fuse.Reactive.FunctionMirror f, Fuse.Reactive.IEventRecord e) :207
void FunctionMirror__CallClosure__New1_fn(::g::Fuse::Reactive::FunctionMirror* f, uObject* e, FunctionMirror__CallClosure** __retval)
{
    *__retval = FunctionMirror__CallClosure::New1(f, e);
}

// public CallClosure(Fuse.Reactive.FunctionMirror f, Fuse.Reactive.IEventRecord e) [instance] :207
void FunctionMirror__CallClosure::ctor_(::g::Fuse::Reactive::FunctionMirror* f, uObject* e)
{
    _f = f;
    _e = e;
}

// public void Call() [instance] :213
void FunctionMirror__CallClosure::Call()
{
    uStackFrame __("Fuse.Reactive.FunctionMirror.CallClosure", "Call()");
    ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong<uObject*> > ret3;
    uPtr(_f)->ClearDiagnostic();
    ::g::Fuse::Scripting::Object* obj = uPtr(uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Context())->NewObject();

    if (::g::Fuse::Reactive::IEventRecord::Node(uInterface(uPtr(_e), ::TYPES[11/*Fuse.Reactive.IEventRecord*/])) != NULL)
        uPtr(obj)->Item(::STRINGS[12/*"node"*/], uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Unwrap(::g::Fuse::Reactive::IEventRecord::Node(uInterface(uPtr(_e), ::TYPES[11/*Fuse.Reactive.IEventRecord*/]))));

    if (::g::Fuse::Reactive::IEventRecord::Data(uInterface(uPtr(_e), ::TYPES[11/*Fuse.Reactive.IEventRecord*/])) != NULL)
        uPtr(obj)->Item(::STRINGS[13/*"data"*/], uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Unwrap(::g::Fuse::Reactive::IEventRecord::Data(uInterface(uPtr(_e), ::TYPES[11/*Fuse.Reactive.IEventRecord*/]))));

    if (::g::Uno::String::op_Inequality(::g::Uno::UX::Selector__op_Implicit1(::g::Fuse::Reactive::IEventRecord::Sender(uInterface(uPtr(_e), ::TYPES[11/*Fuse.Reactive.IEventRecord*/]))), NULL))
        uPtr(obj)->Item(::STRINGS[14/*"sender"*/], uBox(::TYPES[42/*Uno.UX.Selector*/], ::g::Fuse::Reactive::IEventRecord::Sender(uInterface(uPtr(_e), ::TYPES[11/*Fuse.Reactive.IEventRecord*/]))));

    if (::g::Fuse::Reactive::IEventRecord::Args(uInterface(uPtr(_e), ::TYPES[11/*Fuse.Reactive.IEventRecord*/])) != NULL)

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(::g::Fuse::Reactive::IEventRecord::Args(uInterface(uPtr(_e), ::TYPES[11/*Fuse.Reactive.IEventRecord*/]))), ::TYPES[12/*Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string, object>>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[13/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong<uObject*> > arg = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[14/*Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<string, object>>*/]), &ret3), ret3);
            uPtr(obj)->Item(arg.Key(::TYPES[15/*Uno.Collections.KeyValuePair<string, object>*/]), uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Unwrap(arg.Value(::TYPES[15/*Uno.Collections.KeyValuePair<string, object>*/])));
        }

    try
    {
        uPtr(uPtr(_f)->_func)->Call(uArray::Init<uObject*>(::TYPES[6/*object[]*/], 1, obj));
    }
    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[16/*Fuse.Scripting.ScriptException*/]))
        {
            ::g::Fuse::Scripting::ScriptException* ex = (::g::Fuse::Scripting::ScriptException*)__t.Exception;
            uPtr(_f)->SetDiagnostic(ex);
        }
        else throw __t;
    }
}

// public CallClosure New(Fuse.Reactive.FunctionMirror f, Fuse.Reactive.IEventRecord e) [static] :207
FunctionMirror__CallClosure* FunctionMirror__CallClosure::New1(::g::Fuse::Reactive::FunctionMirror* f, uObject* e)
{
    FunctionMirror__CallClosure* obj2 = (FunctionMirror__CallClosure*)uNew(FunctionMirror__CallClosure_typeof());
    obj2->ctor_(f, e);
    return obj2;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\$.uno
// ----------------------------------------------------------------------------------

// public sealed class Case :2729
// {
static void Case_build(uType* type)
{
    ::STRINGS[15] = uString::Const("Case already has a Match");
    ::TYPES[17] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[18] = ::g::Uno::Bool_typeof();
    ::TYPES[19] = ::g::Uno::Collections::RootableList_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[20] = ::g::Uno::Double_typeof();
    ::TYPES[21] = ::g::Uno::String_typeof();
    type->SetFields(0,
        ::TYPES[19/*Uno.Collections.RootableList<Uno.UX.Template>*/], offsetof(::g::Fuse::Reactive::Case, _factories), 0,
        ::g::Fuse::Reactive::Match_typeof(), offsetof(::g::Fuse::Reactive::Case, _match), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Case, _value), 0,
        ::TYPES[18/*bool*/], offsetof(::g::Fuse::Reactive::Case, _IsDefault), 0);
    type->Reflection.SetFunctions(12,
        new uFunction("get_Bool", NULL, (void*)Case__get_Bool_fn, 0, false, ::TYPES[18/*bool*/], 0),
        new uFunction("set_Bool", NULL, (void*)Case__set_Bool_fn, 0, false, uVoid_typeof(), 1, ::TYPES[18/*bool*/]),
        new uFunction("get_Factories", NULL, (void*)Case__get_Factories_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL), 0),
        new uFunction("get_IsDefault", NULL, (void*)Case__get_IsDefault_fn, 0, false, ::TYPES[18/*bool*/], 0),
        new uFunction("set_IsDefault", NULL, (void*)Case__set_IsDefault_fn, 0, false, uVoid_typeof(), 1, ::TYPES[18/*bool*/]),
        new uFunction(".ctor", NULL, (void*)Case__New1_fn, 0, true, type, 0),
        new uFunction("get_Number", NULL, (void*)Case__get_Number_fn, 0, false, ::TYPES[20/*double*/], 0),
        new uFunction("set_Number", NULL, (void*)Case__set_Number_fn, 0, false, uVoid_typeof(), 1, ::TYPES[20/*double*/]),
        new uFunction("get_String", NULL, (void*)Case__get_String_fn, 0, false, ::TYPES[21/*string*/], 0),
        new uFunction("set_String", NULL, (void*)Case__set_String_fn, 0, false, uVoid_typeof(), 1, ::TYPES[21/*string*/]),
        new uFunction("get_Value", NULL, (void*)Case__get_Value_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)Case__set_Value_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()));
}

uType* Case_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Case);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.Case", options);
    type->fp_build_ = Case_build;
    type->fp_ctor_ = (void*)Case__New1_fn;
    return type;
}

// public generated Case() :2729
void Case__ctor__fn(Case* __this)
{
    __this->ctor_();
}

// public bool get_Bool() :2788
void Case__get_Bool_fn(Case* __this, bool* __retval)
{
    *__retval = __this->Bool();
}

// public void set_Bool(bool value) :2789
void Case__set_Bool_fn(Case* __this, bool* value)
{
    __this->Bool(*value);
}

// public Uno.Collections.IList<Uno.UX.Template> get_Factories() :2808
void Case__get_Factories_fn(Case* __this, uObject** __retval)
{
    *__retval = __this->Factories();
}

// private void Invalidate() :2825
void Case__Invalidate_fn(Case* __this)
{
    __this->Invalidate();
}

// public generated bool get_IsDefault() :2796
void Case__get_IsDefault_fn(Case* __this, bool* __retval)
{
    *__retval = __this->IsDefault();
}

// public generated void set_IsDefault(bool value) :2797
void Case__set_IsDefault_fn(Case* __this, bool* value)
{
    __this->IsDefault(*value);
}

// private bool get_IsRooted() :2732
void Case__get_IsRooted_fn(Case* __this, bool* __retval)
{
    *__retval = __this->IsRooted();
}

// public generated Case New() :2729
void Case__New1_fn(Case** __retval)
{
    *__retval = Case::New1();
}

// public double get_Number() :2780
void Case__get_Number_fn(Case* __this, double* __retval)
{
    *__retval = __this->Number();
}

// public void set_Number(double value) :2781
void Case__set_Number_fn(Case* __this, double* value)
{
    __this->Number(*value);
}

// private void OnFactoriesChanged(Uno.UX.Template f) :2820
void Case__OnFactoriesChanged_fn(Case* __this, ::g::Uno::UX::Template* f)
{
    __this->OnFactoriesChanged(f);
}

// internal void Root(Fuse.Reactive.Match match) :2734
void Case__Root_fn(Case* __this, ::g::Fuse::Reactive::Match* match)
{
    __this->Root(match);
}

// public string get_String() :2772
void Case__get_String_fn(Case* __this, uString** __retval)
{
    *__retval = __this->String();
}

// public void set_String(string value) :2773
void Case__set_String_fn(Case* __this, uString* value)
{
    __this->String(value);
}

// internal void Unroot() :2743
void Case__Unroot_fn(Case* __this)
{
    __this->Unroot();
}

// public object get_Value() :2757
void Case__get_Value_fn(Case* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(object value) :2758
void Case__set_Value_fn(Case* __this, uObject* value)
{
    __this->Value(value);
}

// public generated Case() [instance] :2729
void Case::ctor_()
{
}

// public bool get_Bool() [instance] :2788
bool Case::Bool()
{
    uStackFrame __("Fuse.Reactive.Case", "get_Bool()");
    return uIs((uObject*)_value, ::TYPES[18/*bool*/]) ? uUnbox<bool>(::TYPES[18/*bool*/], _value) : false;
}

// public void set_Bool(bool value) [instance] :2789
void Case::Bool(bool value)
{
    Value(uBox(::TYPES[18/*bool*/], value));
}

// public Uno.Collections.IList<Uno.UX.Template> get_Factories() [instance] :2808
uObject* Case::Factories()
{
    uStackFrame __("Fuse.Reactive.Case", "get_Factories()");

    if (_factories == NULL)
    {
        _factories = ((::g::Uno::Collections::RootableList*)::g::Uno::Collections::RootableList::New1(::TYPES[19/*Uno.Collections.RootableList<Uno.UX.Template>*/]));

        if (IsRooted())
            uPtr(_factories)->Subscribe(uDelegate::New(::TYPES[17/*Uno.Action<Uno.UX.Template>*/], (void*)Case__OnFactoriesChanged_fn, this), uDelegate::New(::TYPES[17/*Uno.Action<Uno.UX.Template>*/], (void*)Case__OnFactoriesChanged_fn, this));
    }

    return (uObject*)_factories;
}

// private void Invalidate() [instance] :2825
void Case::Invalidate()
{
    uStackFrame __("Fuse.Reactive.Case", "Invalidate()");

    if (_match != NULL)
        uPtr(_match)->Invalidate();
}

// public generated bool get_IsDefault() [instance] :2796
bool Case::IsDefault()
{
    return _IsDefault;
}

// public generated void set_IsDefault(bool value) [instance] :2797
void Case::IsDefault(bool value)
{
    _IsDefault = value;
}

// private bool get_IsRooted() [instance] :2732
bool Case::IsRooted()
{
    return _match != NULL;
}

// public double get_Number() [instance] :2780
double Case::Number()
{
    uStackFrame __("Fuse.Reactive.Case", "get_Number()");
    return uIs((uObject*)_value, ::TYPES[20/*double*/]) ? uUnbox<double>(::TYPES[20/*double*/], _value) : 0.0;
}

// public void set_Number(double value) [instance] :2781
void Case::Number(double value)
{
    Value(uBox(::TYPES[20/*double*/], value));
}

// private void OnFactoriesChanged(Uno.UX.Template f) [instance] :2820
void Case::OnFactoriesChanged(::g::Uno::UX::Template* f)
{
    uStackFrame __("Fuse.Reactive.Case", "OnFactoriesChanged(Uno.UX.Template)");
    Invalidate();
}

// internal void Root(Fuse.Reactive.Match match) [instance] :2734
void Case::Root(::g::Fuse::Reactive::Match* match)
{
    uStackFrame __("Fuse.Reactive.Case", "Root(Fuse.Reactive.Match)");

    if (_match != NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[15/*"Case alread...*/]));

    _match = match;

    if (_factories != NULL)
        uPtr(_factories)->Subscribe(uDelegate::New(::TYPES[17/*Uno.Action<Uno.UX.Template>*/], (void*)Case__OnFactoriesChanged_fn, this), uDelegate::New(::TYPES[17/*Uno.Action<Uno.UX.Template>*/], (void*)Case__OnFactoriesChanged_fn, this));
}

// public string get_String() [instance] :2772
uString* Case::String()
{
    return uAs<uString*>(_value, ::TYPES[21/*string*/]);
}

// public void set_String(string value) [instance] :2773
void Case::String(uString* value)
{
    Value(value);
}

// internal void Unroot() [instance] :2743
void Case::Unroot()
{
    uStackFrame __("Fuse.Reactive.Case", "Unroot()");

    if (_factories != NULL)
        uPtr(_factories)->Unsubscribe();

    _match = NULL;
}

// public object get_Value() [instance] :2757
uObject* Case::Value()
{
    return _value;
}

// public void set_Value(object value) [instance] :2758
void Case::Value(uObject* value)
{
    uStackFrame __("Fuse.Reactive.Case", "set_Value(object)");

    if (_value != value)
    {
        _value = value;
        Invalidate();
    }
}

// public generated Case New() [static] :2729
Case* Case::New1()
{
    Case* obj1 = (Case*)uNew(Case_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Ceil :841
// {
static void Ceil_build(uType* type)
{
    ::STRINGS[16] = uString::Const("ceil");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Ceil__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Ceil_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Ceil);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Ceil", options);
    type->fp_build_ = Ceil_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Ceil(Fuse.Reactive.Expression operand) :844
void Ceil__ctor_3_fn(Ceil* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public Ceil New(Fuse.Reactive.Expression operand) :844
void Ceil__New1_fn(::g::Fuse::Reactive::Expression* operand, Ceil** __retval)
{
    *__retval = Ceil::New1(operand);
}

// public Ceil(Fuse.Reactive.Expression operand) [instance] :844
void Ceil::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[16/*"ceil"*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Ceil_fn));
}

// public Ceil New(Fuse.Reactive.Expression operand) [static] :844
Ceil* Ceil::New1(::g::Fuse::Reactive::Expression* operand)
{
    Ceil* obj1 = (Ceil*)uNew(Ceil_typeof());
    obj1->ctor_3(operand);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Clamp :1013
// {
static void Clamp_build(uType* type)
{
    ::STRINGS[17] = uString::Const("clamp(");
    ::STRINGS[10] = uString::Const(",");
    ::STRINGS[5] = uString::Const(")");
    ::TYPES[4] = ::g::Fuse::Marshal_typeof()->MakeMethod(1/*TryToType<float>*/, ::g::Uno::Float_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Clamp__New1_fn, 0, true, type, 3, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
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

// public Clamp(Fuse.Reactive.Expression first, Fuse.Reactive.Expression second, Fuse.Reactive.Expression third) :1016
void Clamp__ctor_2_fn(Clamp* __this, ::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third)
{
    __this->ctor_2(first, second, third);
}

// protected override sealed object Compute(object a, object mn, object mx) :1021
void Clamp__Compute_fn(Clamp* __this, uObject* a, uObject* mn, uObject* mx, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Clamp", "Compute(object,object,object)");
    bool ret2;
    bool ret3;
    ::g::Uno::Float4 av = ::g::Uno::Float4__New1(0.0f);
    float mxv = 0.0f, mnv = 0.0f;
    int size = 0;

    if ((!::g::Fuse::Marshal::TryToZeroFloat4(a, &av, &size) || !(::g::Fuse::Marshal__TryToType_fn(::TYPES[4/*Fuse.Marshal.TryToType<float>*/], mn, &mnv, &ret2), ret2)) || !(::g::Fuse::Marshal__TryToType_fn(::TYPES[4/*Fuse.Marshal.TryToType<float>*/], mx, &mxv, &ret3), ret3))
        return *__retval = NULL, void();

    if (size == 1)
        return *__retval = uBox(::TYPES[34/*float*/], ::g::Uno::Math::Clamp1(av.X, mnv, mxv)), void();

    if (size == 2)
        return *__retval = uBox(::TYPES[112/*float2*/], ::g::Uno::Math::Clamp2(::g::Uno::Float2__New2(av.X, av.Y), mnv, mxv)), void();

    if (size == 3)
        return *__retval = uBox(::TYPES[113/*float3*/], ::g::Uno::Math::Clamp4(::g::Uno::Float3__New2(av.X, av.Y, av.Z), mnv, mxv)), void();

    if (size == 4)
        return *__retval = uBox(::TYPES[114/*float4*/], ::g::Uno::Math::Clamp6(av, mnv, mxv)), void();

    return *__retval = NULL, void();
}

// public Clamp New(Fuse.Reactive.Expression first, Fuse.Reactive.Expression second, Fuse.Reactive.Expression third) :1016
void Clamp__New1_fn(::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third, Clamp** __retval)
{
    *__retval = Clamp::New1(first, second, third);
}

// public override sealed string ToString() :1042
void Clamp__ToString_fn(Clamp* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.Clamp", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[17/*"clamp("*/], __this->First()), ::STRINGS[10/*","*/]), __this->Second()), ::STRINGS[10/*","*/]), __this->Third()), ::STRINGS[5/*")"*/]), void();
}

// public Clamp(Fuse.Reactive.Expression first, Fuse.Reactive.Expression second, Fuse.Reactive.Expression third) [instance] :1016
void Clamp::ctor_2(::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third)
{
    ctor_1(first, second, third);
}

// public Clamp New(Fuse.Reactive.Expression first, Fuse.Reactive.Expression second, Fuse.Reactive.Expression third) [static] :1016
Clamp* Clamp::New1(::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third)
{
    Clamp* obj1 = (Clamp*)uNew(Clamp_typeof());
    obj1->ctor_2(first, second, third);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.JavaScript\1.2.0\$.uno
// ------------------------------------------------------------------------------------

// internal sealed class ClassInstance :53
// {
static void ClassInstance_build(uType* type)
{
    ::STRINGS[18] = uString::Const("_tempMethod");
    ::TYPES[22] = ::g::Fuse::INotifyUnrooted_typeof();
    ::TYPES[23] = ::g::Uno::Action_typeof();
    ::TYPES[24] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::UX::Property_typeof(), ::g::Fuse::Reactive::ObservableProperty_typeof(), NULL);
    ::TYPES[25] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[26] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL);
    ::TYPES[27] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL);
    ::TYPES[28] = ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator_typeof()->MakeType(::g::Uno::UX::Property_typeof(), ::g::Fuse::Reactive::ObservableProperty_typeof(), NULL);
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::ClassInstance, _obj), 0,
        ::TYPES[24/*Uno.Collections.Dictionary<Uno.UX.Property, Fuse.Reactive.ObservableProperty>*/], offsetof(::g::Fuse::Reactive::ClassInstance, _properties), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Fuse::Reactive::ClassInstance, _rootTable), 0,
        ::TYPES[25/*Fuse.Scripting.Object*/], offsetof(::g::Fuse::Reactive::ClassInstance, _self), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::ClassInstance, _worker), 0);
}

uType* ClassInstance_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ClassInstance);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.ClassInstance", options);
    type->fp_build_ = ClassInstance_build;
    return type;
}

// internal ClassInstance(Fuse.Reactive.ThreadWorker context, object obj, Uno.UX.NameTable rootTable) :72
void ClassInstance__ctor__fn(ClassInstance* __this, ::g::Fuse::Reactive::ThreadWorker* context, uObject* obj, ::g::Uno::UX::NameTable* rootTable)
{
    __this->ctor_(context, obj, rootTable);
}

// public void CallMethod(Fuse.Scripting.Function method, object[] args) :80
void ClassInstance__CallMethod_fn(ClassInstance* __this, ::g::Fuse::Scripting::Function* method, uArray* args)
{
    __this->CallMethod(method, args);
}

// private void DispatchUnroot() :117
void ClassInstance__DispatchUnroot_fn(ClassInstance* __this)
{
    __this->DispatchUnroot();
}

// private void EnsureHasProperties() :112
void ClassInstance__EnsureHasProperties_fn(ClassInstance* __this)
{
    __this->EnsureHasProperties();
}

// public void EnsureRooted() :88
void ClassInstance__EnsureRooted_fn(ClassInstance* __this)
{
    __this->EnsureRooted();
}

// internal Fuse.Scripting.Object GetPropertyObservable(Uno.UX.Property p) :124
void ClassInstance__GetPropertyObservable_fn(ClassInstance* __this, ::g::Uno::UX::Property* p, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->GetPropertyObservable(p);
}

// internal ClassInstance New(Fuse.Reactive.ThreadWorker context, object obj, Uno.UX.NameTable rootTable) :72
void ClassInstance__New1_fn(::g::Fuse::Reactive::ThreadWorker* context, uObject* obj, ::g::Uno::UX::NameTable* rootTable, ClassInstance** __retval)
{
    *__retval = ClassInstance::New1(context, obj, rootTable);
}

// private void Unroot() :137
void ClassInstance__Unroot_fn(ClassInstance* __this)
{
    __this->Unroot();
}

// internal ClassInstance(Fuse.Reactive.ThreadWorker context, object obj, Uno.UX.NameTable rootTable) [instance] :72
void ClassInstance::ctor_(::g::Fuse::Reactive::ThreadWorker* context, uObject* obj, ::g::Uno::UX::NameTable* rootTable)
{
    _worker = context;
    _rootTable = rootTable;
    _obj = obj;
}

// public void CallMethod(Fuse.Scripting.Function method, object[] args) [instance] :80
void ClassInstance::CallMethod(::g::Fuse::Scripting::Function* method, uArray* args)
{
    uStackFrame __("Fuse.Reactive.ClassInstance", "CallMethod(Fuse.Scripting.Function,object[])");
    uPtr(_self)->Item(::STRINGS[18/*"_tempMethod"*/], method);
    uPtr(_self)->CallMethod(::STRINGS[18/*"_tempMethod"*/], args);
}

// private void DispatchUnroot() [instance] :117
void ClassInstance::DispatchUnroot()
{
    uStackFrame __("Fuse.Reactive.ClassInstance", "DispatchUnroot()");
    uObject* n = (uObject*)uPtr(_rootTable)->This();
    ::g::Fuse::INotifyUnrooted::remove_Unrooted(uInterface(uPtr(n), ::TYPES[22/*Fuse.INotifyUnrooted*/]), uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)ClassInstance__DispatchUnroot_fn, this));
    uPtr(_worker)->Invoke(uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)ClassInstance__Unroot_fn, this));
}

// private void EnsureHasProperties() [instance] :112
void ClassInstance::EnsureHasProperties()
{
    if (_properties == NULL)
        _properties = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[24/*Uno.Collections.Dictionary<Uno.UX.Property, Fuse.Reactive.ObservableProperty>*/]));
}

// public void EnsureRooted() [instance] :88
void ClassInstance::EnsureRooted()
{
    uStackFrame __("Fuse.Reactive.ClassInstance", "EnsureRooted()");
    ::g::Uno::UX::Property* ret4;
    bool ret5;

    if (_self != NULL)
        return;

    uObject* n = uAs<uObject*>(_obj, ::TYPES[22/*Fuse.INotifyUnrooted*/]);

    if (n != NULL)
        ::g::Fuse::INotifyUnrooted::add_Unrooted(uInterface(uPtr(n), ::TYPES[22/*Fuse.INotifyUnrooted*/]), uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)ClassInstance__DispatchUnroot_fn, this));

    _self = uAs< ::g::Fuse::Scripting::Object*>(uPtr(_worker)->Unwrap(_obj), ::TYPES[25/*Fuse.Scripting.Object*/]);

    if (_properties == NULL)
    {
        if (_rootTable != NULL)
        {
            EnsureHasProperties();

            for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(_rootTable)->Properties()), ::TYPES[26/*Uno.Collections.ICollection<Uno.UX.Property>*/])); i++)
            {
                ::g::Uno::UX::Property* p = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(_rootTable)->Properties()), ::TYPES[27/*Uno.Collections.IList<Uno.UX.Property>*/]), uCRef<int>(i), &ret4), ret4);

                if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(_properties), p, &ret5), ret5))
                    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_properties), p, ::g::Fuse::Reactive::LazyObservableProperty::New2(_worker, _self, p));
            }
        }
    }
}

// internal Fuse.Scripting.Object GetPropertyObservable(Uno.UX.Property p) [instance] :124
::g::Fuse::Scripting::Object* ClassInstance::GetPropertyObservable(::g::Uno::UX::Property* p)
{
    uStackFrame __("Fuse.Reactive.ClassInstance", "GetPropertyObservable(Uno.UX.Property)");
    bool ret7;
    EnsureHasProperties();
    ::g::Fuse::Reactive::ObservableProperty* op;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_properties), p, (void**)(&op), &ret7), ret7))
    {
        op = ::g::Fuse::Reactive::ObservableProperty::New1(_worker, _self, p);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_properties), p, op);
    }

    return uPtr(uPtr(op)->GetObservable())->Object();
}

// private void Unroot() [instance] :137
void ClassInstance::Unroot()
{
    uStackFrame __("Fuse.Reactive.ClassInstance", "Unroot()");
    ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong< ::g::Fuse::Reactive::ObservableProperty*> > ret8;

    if (_self == NULL)
        return;

    if (_properties != NULL)

        for (::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong< ::g::Fuse::Reactive::ObservableProperty*> > enum2 = (::g::Uno::Collections::Dictionary__ValueCollection__GetEnumerator_fn(uPtr((::g::Uno::Collections::Dictionary__ValueCollection*)uPtr(_properties)->Values()), &ret8), ret8); enum2.MoveNext(::TYPES[28/*Uno.Collections.Dictionary<Uno.UX.Property, Fuse.Reactive.ObservableProperty>.ValueCollection.Enumerator*/]); )
        {
            ::g::Fuse::Reactive::ObservableProperty* p = enum2.Current(::TYPES[28/*Uno.Collections.Dictionary<Uno.UX.Property, Fuse.Reactive.ObservableProperty>.ValueCollection.Enumerator*/]);
            uPtr(p)->Reset();
        }

    _self = NULL;
}

// internal ClassInstance New(Fuse.Reactive.ThreadWorker context, object obj, Uno.UX.NameTable rootTable) [static] :72
ClassInstance* ClassInstance::New1(::g::Fuse::Reactive::ThreadWorker* context, uObject* obj, ::g::Uno::UX::NameTable* rootTable)
{
    ClassInstance* obj3 = (ClassInstance*)uNew(ClassInstance_typeof());
    obj3->ctor_(context, obj, rootTable);
    return obj3;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.JavaScript\1.2.0\$.uno
// ------------------------------------------------------------------------------------

// private sealed class Observable.Clear :1080
// {
static void Observable__Clear_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Observable__Clear, _origin), 0);
}

::g::Fuse::Reactive::Observable__Operation_type* Observable__Clear_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Observable__Operation_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Observable__Clear);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Observable__Operation_type);
    type = (::g::Fuse::Reactive::Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.Clear", options);
    type->fp_build_ = Observable__Clear_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Reactive::Observable__Operation*, uObject*))Observable__Clear__OnPerform_fn;
    return type;
}

// public Clear(Fuse.Reactive.Observable obs, int origin) :1084
void Observable__Clear__ctor_1_fn(Observable__Clear* __this, ::g::Fuse::Reactive::Observable* obs, int* origin)
{
    __this->ctor_1(obs, *origin);
}

// public Clear New(Fuse.Reactive.Observable obs, int origin) :1084
void Observable__Clear__New1_fn(::g::Fuse::Reactive::Observable* obs, int* origin, Observable__Clear** __retval)
{
    *__retval = Observable__Clear::New1(obs, *origin);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription> sub) :1089
void Observable__Clear__OnPerform_fn(Observable__Clear* __this, uObject* sub)
{
    uStackFrame __("Fuse.Reactive.Observable.Clear", "OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>)");
    ::g::Fuse::Reactive::Observable__Subscription* ret2;
    ::g::Fuse::Reactive::Observable__Subscription* ret3;
    uPtr(__this->Observable())->UnsubscribeValues();
    uPtr(uPtr(__this->Observable())->_values)->Clear();

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Reactive.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(__this->_origin))
            ::g::Fuse::Reactive::IObserver::OnClear(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[3/*Fuse.Reactive.IObserver*/]));
}

// public Clear(Fuse.Reactive.Observable obs, int origin) [instance] :1084
void Observable__Clear::ctor_1(::g::Fuse::Reactive::Observable* obs, int origin)
{
    ctor_(obs);
    _origin = origin;
}

// public Clear New(Fuse.Reactive.Observable obs, int origin) [static] :1084
Observable__Clear* Observable__Clear::New1(::g::Fuse::Reactive::Observable* obs, int origin)
{
    Observable__Clear* obj1 = (Observable__Clear*)uNew(Observable__Clear_typeof());
    obj1->ctor_1(obs, origin);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\$.uno
// ----------------------------------------------------------------------------------

// public sealed class Closure :45
// {
static void Closure_build(uType* type)
{
    ::TYPES[29] = ::g::Fuse::Reactive::ClosureHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5));
    type->SetFields(13,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Fuse::Reactive::Closure, _nameTable), 0,
        ::TYPES[29/*Fuse.Reactive.ClosureHandler*/], offsetof(::g::Fuse::Reactive::Closure, _ready), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)Closure__New2_fn, 0, true, type, 1, ::g::Uno::UX::NameTable_typeof()),
        new uFunction("add_Ready", NULL, (void*)Closure__add_Ready_fn, 0, false, uVoid_typeof(), 1, ::TYPES[29/*Fuse.Reactive.ClosureHandler*/]),
        new uFunction("remove_Ready", NULL, (void*)Closure__remove_Ready_fn, 0, false, uVoid_typeof(), 1, ::TYPES[29/*Fuse.Reactive.ClosureHandler*/]));
}

::g::Fuse::Node_type* Closure_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Node_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(Closure);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Reactive.Closure", options);
    type->fp_build_ = Closure_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Closure__OnRooted_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Closure(Uno.UX.NameTable nameTable) :50
void Closure__ctor_2_fn(Closure* __this, ::g::Uno::UX::NameTable* nameTable)
{
    __this->ctor_2(nameTable);
}

// public Closure New(Uno.UX.NameTable nameTable) :50
void Closure__New2_fn(::g::Uno::UX::NameTable* nameTable, Closure** __retval)
{
    *__retval = Closure::New2(nameTable);
}

// protected override sealed void OnRooted() :95
void Closure__OnRooted_fn(Closure* __this)
{
    uStackFrame __("Fuse.Reactive.Closure", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->ScheduleReady();
}

// public void add_Ready(Fuse.Reactive.ClosureHandler value) :82
void Closure__add_Ready_fn(Closure* __this, uDelegate* value)
{
    __this->add_Ready(value);
}

// public void remove_Ready(Fuse.Reactive.ClosureHandler value) :89
void Closure__remove_Ready_fn(Closure* __this, uDelegate* value)
{
    __this->remove_Ready(value);
}

// private void ScheduleReady() :101
void Closure__ScheduleReady_fn(Closure* __this)
{
    __this->ScheduleReady();
}

// public Closure(Uno.UX.NameTable nameTable) [instance] :50
void Closure::ctor_2(::g::Uno::UX::NameTable* nameTable)
{
    ctor_1();
    _nameTable = nameTable;
}

// public void add_Ready(Fuse.Reactive.ClosureHandler value) [instance] :82
void Closure::add_Ready(uDelegate* value)
{
    uStackFrame __("Fuse.Reactive.Closure", "add_Ready(Fuse.Reactive.ClosureHandler)");

    if (IsRootingCompleted())
        ScheduleReady();

    _ready = uCast<uDelegate*>(::g::Uno::Delegate::Combine(_ready, value), ::TYPES[29/*Fuse.Reactive.ClosureHandler*/]);
}

// public void remove_Ready(Fuse.Reactive.ClosureHandler value) [instance] :89
void Closure::remove_Ready(uDelegate* value)
{
    uStackFrame __("Fuse.Reactive.Closure", "remove_Ready(Fuse.Reactive.ClosureHandler)");
    _ready = uCast<uDelegate*>(::g::Uno::Delegate::Remove(_ready, value), ::TYPES[29/*Fuse.Reactive.ClosureHandler*/]);
}

// private void ScheduleReady() [instance] :101
void Closure::ScheduleReady()
{
    uStackFrame __("Fuse.Reactive.Closure", "ScheduleReady()");

    if (::g::Uno::Delegate::op_Inequality(_ready, NULL))
        uPtr(_ready)->Invoke(2, this, (::g::Fuse::Reactive::ClosureArgs*)::g::Fuse::Reactive::ClosureArgs::New2(_nameTable));
}

// public Closure New(Uno.UX.NameTable nameTable) [static] :50
Closure* Closure::New2(::g::Uno::UX::NameTable* nameTable)
{
    Closure* obj1 = (Closure*)uNew(Closure_typeof());
    obj1->ctor_2(nameTable);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\$.uno
// ----------------------------------------------------------------------------------

// public sealed class ClosureArgs :13
// {
static void ClosureArgs_build(uType* type)
{
    ::TYPES[30] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[31] = ::g::Uno::Collections::IList_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[32] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(ClosureArgs_type, interface0));
    type->SetFields(0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Fuse::Reactive::ClosureArgs, _names), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Serialize", NULL, (void*)ClosureArgs__Serialize_fn, 0, false, uVoid_typeof(), 1, ::TYPES[32/*Fuse.Scripting.IEventSerializer*/]));
}

ClosureArgs_type* ClosureArgs_typeof()
{
    static uSStrong<ClosureArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ClosureArgs);
    options.TypeSize = sizeof(ClosureArgs_type);
    type = (ClosureArgs_type*)uClassType::New("Fuse.Reactive.ClosureArgs", options);
    type->fp_build_ = ClosureArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))ClosureArgs__Serialize_fn;
    return type;
}

// internal ClosureArgs(Uno.UX.NameTable names) :17
void ClosureArgs__ctor_1_fn(ClosureArgs* __this, ::g::Uno::UX::NameTable* names)
{
    __this->ctor_1(names);
}

// internal ClosureArgs New(Uno.UX.NameTable names) :17
void ClosureArgs__New2_fn(::g::Uno::UX::NameTable* names, ClosureArgs** __retval)
{
    *__retval = ClosureArgs::New2(names);
}

// public void Serialize(Fuse.Scripting.IEventSerializer s) :22
void ClosureArgs__Serialize_fn(ClosureArgs* __this, uObject* s)
{
    __this->Serialize(s);
}

// internal ClosureArgs(Uno.UX.NameTable names) [instance] :17
void ClosureArgs::ctor_1(::g::Uno::UX::NameTable* names)
{
    ctor_();
    _names = names;
}

// public void Serialize(Fuse.Scripting.IEventSerializer s) [instance] :22
void ClosureArgs::Serialize(uObject* s)
{
    uStackFrame __("Fuse.Reactive.ClosureArgs", "Serialize(Fuse.Scripting.IEventSerializer)");
    uObject* ret2;
    ::g::Uno::UX::NameTable* nt = _names;
    int o = (nt != NULL) ? ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(nt)->Objects()), ::TYPES[30/*Uno.Collections.ICollection<object>*/])) - 1 : 0;

    while (nt != NULL)
    {
        for (int e = uPtr(uPtr(nt)->Entries)->Length(); (e--) > 0; )
        {
            uString* name = uPtr(uPtr(nt)->Entries)->Strong<uString*>(e);
            uObject* obj = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(_names)->Objects()), ::TYPES[31/*Uno.Collections.IList<object>*/]), uCRef<int>(o--), &ret2), ret2);
            ::g::Fuse::Scripting::IEventSerializer::AddObject(uInterface(uPtr(s), ::TYPES[32/*Fuse.Scripting.IEventSerializer*/]), name, obj);
        }

        nt = uPtr(nt)->ParentTable;
    }
}

// internal ClosureArgs New(Uno.UX.NameTable names) [static] :17
ClosureArgs* ClosureArgs::New2(::g::Uno::UX::NameTable* names)
{
    ClosureArgs* obj1 = (ClosureArgs*)uNew(ClosureArgs_typeof());
    obj1->ctor_1(names);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\$.uno
// ----------------------------------------------------------------------------------

// public delegate void ClosureHandler(object sender, Fuse.Reactive.ClosureArgs args) :40
uDelegateType* ClosureHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Reactive.ClosureHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Reactive::ClosureArgs_typeof());
    return type;
}

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Conditional :1212
// {
static void Conditional_build(uType* type)
{
    ::STRINGS[6] = uString::Const("(");
    ::STRINGS[19] = uString::Const(" ? ");
    ::STRINGS[20] = uString::Const(" : ");
    ::STRINGS[5] = uString::Const(")");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Conditional__New1_fn, 0, true, type, 3, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
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

// public Conditional(Fuse.Reactive.Expression condition, Fuse.Reactive.Expression trueValue, Fuse.Reactive.Expression falseValue) :1215
void Conditional__ctor_2_fn(Conditional* __this, ::g::Fuse::Reactive::Expression* condition, ::g::Fuse::Reactive::Expression* trueValue, ::g::Fuse::Reactive::Expression* falseValue)
{
    __this->ctor_2(condition, trueValue, falseValue);
}

// protected override sealed object Compute(object cond, object trueVal, object falseVal) :1218
void Conditional__Compute_fn(Conditional* __this, uObject* cond, uObject* trueVal, uObject* falseVal, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Conditional", "Compute(object,object,object)");

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

// public Conditional New(Fuse.Reactive.Expression condition, Fuse.Reactive.Expression trueValue, Fuse.Reactive.Expression falseValue) :1215
void Conditional__New1_fn(::g::Fuse::Reactive::Expression* condition, ::g::Fuse::Reactive::Expression* trueValue, ::g::Fuse::Reactive::Expression* falseValue, Conditional** __retval)
{
    *__retval = Conditional::New1(condition, trueValue, falseValue);
}

// public override sealed string ToString() :1227
void Conditional__ToString_fn(Conditional* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.Conditional", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[6/*"("*/], __this->First()), ::STRINGS[19/*" ? "*/]), __this->Second()), ::STRINGS[20/*" : "*/]), __this->Third()), ::STRINGS[5/*")"*/]), void();
}

// public Conditional(Fuse.Reactive.Expression condition, Fuse.Reactive.Expression trueValue, Fuse.Reactive.Expression falseValue) [instance] :1215
void Conditional::ctor_2(::g::Fuse::Reactive::Expression* condition, ::g::Fuse::Reactive::Expression* trueValue, ::g::Fuse::Reactive::Expression* falseValue)
{
    ctor_1(condition, trueValue, falseValue);
}

// public Conditional New(Fuse.Reactive.Expression condition, Fuse.Reactive.Expression trueValue, Fuse.Reactive.Expression falseValue) [static] :1215
Conditional* Conditional::New1(::g::Fuse::Reactive::Expression* condition, ::g::Fuse::Reactive::Expression* trueValue, ::g::Fuse::Reactive::Expression* falseValue)
{
    Conditional* obj1 = (Conditional*)uNew(Conditional_typeof());
    obj1->ctor_2(condition, trueValue, falseValue);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.JavaScript\1.2.0\fusejs\$.uno
// -------------------------------------------------------------------------------------------

// internal static class Console :106
// {
static void Console_build(uType* type)
{
    ::STRINGS[21] = uString::Const("C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Reactive.JavaScript/1.2.0/fusejs/$.uno");
    ::STRINGS[22] = uString::Const("null");
    ::STRINGS[23] = uString::Const("\"");
    ::STRINGS[24] = uString::Const("function");
    ::STRINGS[25] = uString::Const("Object");
    ::STRINGS[26] = uString::Const("");
    ::STRINGS[27] = uString::Const(": ");
    ::STRINGS[28] = uString::Const("Array[");
    ::STRINGS[29] = uString::Const("]");
    ::STRINGS[30] = uString::Const("  ");
    ::STRINGS[31] = uString::Const("log");
    ::STRINGS[32] = uString::Const("dir");
    ::STRINGS[33] = uString::Const("console");
    ::TYPES[33] = ::g::Uno::Int_typeof();
    ::TYPES[34] = ::g::Uno::Float_typeof();
    ::TYPES[20] = ::g::Uno::Double_typeof();
    ::TYPES[18] = ::g::Uno::Bool_typeof();
    ::TYPES[21] = ::g::Uno::String_typeof();
    ::TYPES[35] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[25] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[36] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[37] = ::g::Fuse::Scripting::Callback_typeof();
}

uClassType* Console_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.Console", options);
    type->fp_build_ = Console_build;
    return type;
}

// private static object Dir(object[] args) :127
void Console__Dir_fn(uArray* args, uObject** __retval)
{
    *__retval = Console::Dir(args);
}

// private static void Dir(Uno.Text.StringBuilder builder, object obj, [int maxDepth], [int indent]) :139
void Console__Dir1_fn(::g::Uno::Text::StringBuilder* builder, uObject* obj, int* maxDepth, int* indent)
{
    Console::Dir1(builder, obj, *maxDepth, *indent);
}

// private static void Indent(Uno.Text.StringBuilder builder, int indent) :208
void Console__Indent_fn(::g::Uno::Text::StringBuilder* builder, int* indent)
{
    Console::Indent(builder, *indent);
}

// public static void Init(Fuse.Scripting.Context c) :108
void Console__Init_fn(::g::Fuse::Scripting::Context* c)
{
    Console::Init(c);
}

// private static object Log(object[] args) :117
void Console__Log_fn(uArray* args, uObject** __retval)
{
    *__retval = Console::Log(args);
}

// private static object Dir(object[] args) [static] :127
uObject* Console::Dir(uArray* args)
{
    uStackFrame __("Fuse.Reactive.Console", "Dir(object[])");
    int maxDepth = 1;
    ::g::Uno::Text::StringBuilder* builder = ::g::Uno::Text::StringBuilder::New1();

    for (int i = 0; i < uPtr(args)->Length(); i++)
        Console::Dir1(builder, uPtr(args)->Strong<uObject*>(i), 1, 0);

    ::g::Uno::Diagnostics::Debug::Log5(builder->ToString(), 0, ::STRINGS[21/*"C:/Users/Lo...*/], 135);
    return NULL;
}

// private static void Dir(Uno.Text.StringBuilder builder, object obj, [int maxDepth], [int indent]) [static] :139
void Console::Dir1(::g::Uno::Text::StringBuilder* builder, uObject* obj, int maxDepth, int indent)
{
    uStackFrame __("Fuse.Reactive.Console", "Dir(Uno.Text.StringBuilder,object,[int],[int])");
    uArray* array1;
    int index2;
    int length3;
    indent++;

    if (obj == NULL)
    {
        uPtr(builder)->AppendLine(::STRINGS[22/*"null"*/]);
        return;
    }

    if ((uIs(obj, ::TYPES[33/*int*/]) || uIs(obj, ::TYPES[34/*float*/])) || uIs(obj, ::TYPES[20/*double*/]))
    {
        uPtr(builder)->AppendLine(::g::Uno::Object::ToString(uPtr(obj)));
        return;
    }

    if (uIs(obj, ::TYPES[18/*bool*/]))
    {
        uPtr(builder)->AppendLine(::g::Uno::String::ToLower(uPtr(::g::Uno::Object::ToString(uPtr(obj)))));
        return;
    }

    if (uIs(obj, ::TYPES[21/*string*/]))
    {
        uPtr(builder)->AppendLine(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[23/*"\""*/], ::g::Uno::Object::ToString(uPtr(obj))), ::STRINGS[23/*"\""*/]));
        return;
    }

    if (uIs(obj, ::TYPES[35/*Fuse.Scripting.Function*/]))
    {
        uPtr(builder)->AppendLine(::STRINGS[24/*"function"*/]);
        return;
    }

    if (uIs(obj, ::TYPES[25/*Fuse.Scripting.Object*/]))
    {
        ::g::Fuse::Scripting::Object* o = uCast< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[25/*Fuse.Scripting.Object*/]);
        uPtr(builder)->AppendLine(::STRINGS[25/*"Object"*/]);

        if (indent <= maxDepth)

            for (array1 = uPtr(o)->Keys(), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
            {
                uString* k = uPtr(array1)->Strong<uString*>(index2);
                Console::Indent(builder, indent);
                uPtr(builder)->Append2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[26/*""*/], k), ::STRINGS[27/*": "*/]));
                Console::Dir1(builder, uPtr(o)->Item(k), maxDepth, indent);
            }

        return;
    }

    if (uIs(obj, ::TYPES[36/*Fuse.Scripting.Array*/]))
    {
        ::g::Fuse::Scripting::Array* a = uCast< ::g::Fuse::Scripting::Array*>(obj, ::TYPES[36/*Fuse.Scripting.Array*/]);
        uPtr(builder)->AppendLine(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[28/*"Array["*/], uBox<int>(::TYPES[33/*int*/], uPtr(a)->Length())), ::STRINGS[29/*"]"*/]));

        if (indent <= maxDepth)

            for (int i = 0; i < uPtr(a)->Length(); i++)
            {
                Console::Indent(builder, indent);
                uPtr(builder)->Append2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[26/*""*/], uBox<int>(::TYPES[33/*int*/], i)), ::STRINGS[27/*": "*/]));
                Console::Dir1(builder, uPtr(a)->Item(i), maxDepth, indent);
            }

        return;
    }

    uPtr(builder)->AppendLine(::g::Uno::Object::ToString(uPtr(obj)));
}

// private static void Indent(Uno.Text.StringBuilder builder, int indent) [static] :208
void Console::Indent(::g::Uno::Text::StringBuilder* builder, int indent)
{
    uStackFrame __("Fuse.Reactive.Console", "Indent(Uno.Text.StringBuilder,int)");

    for (int i = 0; i < indent; i++)
        uPtr(builder)->Append2(::STRINGS[30/*"  "*/]);
}

// public static void Init(Fuse.Scripting.Context c) [static] :108
void Console::Init(::g::Fuse::Scripting::Context* c)
{
    uStackFrame __("Fuse.Reactive.Console", "Init(Fuse.Scripting.Context)");
    ::g::Fuse::Scripting::Object* console = uPtr(c)->NewObject();
    uPtr(console)->Item(::STRINGS[31/*"log"*/], uDelegate::New(::TYPES[37/*Fuse.Scripting.Callback*/], (void*)Console__Log_fn));
    console->Item(::STRINGS[32/*"dir"*/], uDelegate::New(::TYPES[37/*Fuse.Scripting.Callback*/], (void*)Console__Dir_fn));
    uPtr(c->GlobalObject())->Item(::STRINGS[33/*"console"*/], console);
}

// private static object Log(object[] args) [static] :117
uObject* Console::Log(uArray* args)
{
    uStackFrame __("Fuse.Reactive.Console", "Log(object[])");

    for (int i = 0; i < uPtr(args)->Length(); i++)
        ::g::Uno::Diagnostics::Debug::Log5((uPtr(args)->Strong<uObject*>(i) != NULL) ? (uString*)::g::Uno::Object::ToString(uPtr(uPtr(args)->Strong<uObject*>(i))) : ::STRINGS[22/*"null"*/], 0, ::STRINGS[21/*"C:/Users/Lo...*/], 121);

    return NULL;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Constant :244
// {
static void Constant_build(uType* type)
{
    ::STRINGS[34] = uString::Const("'");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::ConstantExpression_type, interface0));
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Constant, _Value), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)Constant__New1_fn, 0, true, type, 1, uObject_typeof()),
        new uFunction("get_Value", NULL, (void*)Constant__get_Value_fn, 0, false, uObject_typeof(), 0));
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
    uStackFrame __("Fuse.Reactive.Constant", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[34/*"'"*/], ::g::Uno::Object::ToString(uPtr(__this->Value()))), ::STRINGS[34/*"'"*/]), void();
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
    ::TYPES[10] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(ConstantExpression_type, interface0));
    type->Reflection.SetFunctions(1,
        new uFunction("GetValue", NULL, NULL, offsetof(ConstantExpression_type, fp_GetValue), false, uObject_typeof(), 1, ::g::Fuse::Reactive::IContext_typeof()));
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
    uStackFrame __("Fuse.Reactive.ConstantExpression", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(listener), ::TYPES[10/*Fuse.Reactive.IListener*/]), (uObject*)__this, __this->GetValue(context));
    return *__retval = NULL, void();
}

// protected generated ConstantExpression() [instance] :233
void ConstantExpression::ctor_1()
{
    ctor_();
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Cos :768
// {
static void Cos_build(uType* type)
{
    ::STRINGS[35] = uString::Const("cos");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Cos__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Cos_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Cos);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Cos", options);
    type->fp_build_ = Cos_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Cos(Fuse.Reactive.Expression operand) :771
void Cos__ctor_3_fn(Cos* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public Cos New(Fuse.Reactive.Expression operand) :771
void Cos__New1_fn(::g::Fuse::Reactive::Expression* operand, Cos** __retval)
{
    *__retval = Cos::New1(operand);
}

// public Cos(Fuse.Reactive.Expression operand) [instance] :771
void Cos::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[35/*"cos"*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Cos_fn));
}

// public Cos New(Fuse.Reactive.Expression operand) [static] :771
Cos* Cos::New1(::g::Fuse::Reactive::Expression* operand)
{
    Cos* obj1 = (Cos*)uNew(Cos_typeof());
    obj1->ctor_3(operand);
    return obj1;
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
    type->fp_ctor_ = (void*)Instantiator__CountItem__New1_fn;
    return type;
}

// public generated CountItem() :1163
void Instantiator__CountItem__ctor__fn(Instantiator__CountItem* __this)
{
    __this->ctor_();
}

// public generated CountItem New() :1163
void Instantiator__CountItem__New1_fn(Instantiator__CountItem** __retval)
{
    *__retval = Instantiator__CountItem::New1();
}

// public generated CountItem() [instance] :1163
void Instantiator__CountItem::ctor_()
{
}

// public generated CountItem New() [static] :1163
Instantiator__CountItem* Instantiator__CountItem::New1()
{
    Instantiator__CountItem* obj1 = (Instantiator__CountItem*)uNew(Instantiator__CountItem_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Data :297
// {
static void Data_build(uType* type)
{
    ::STRINGS[36] = uString::Const("{");
    ::STRINGS[37] = uString::Const("}");
    ::TYPES[38] = ::g::Fuse::Reactive::IContext_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::Data, _Key), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Key", NULL, (void*)Data__get_Key_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Data__New1_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
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

// public Data(string key) :301
void Data__ctor_1_fn(Data* __this, uString* key)
{
    __this->ctor_1(key);
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

// public Data New(string key) :301
void Data__New1_fn(uString* key, Data** __retval)
{
    *__retval = Data::New1(key);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :303
void Data__Subscribe_fn(Data* __this, uObject* context, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Data", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    return *__retval = ::g::Fuse::Reactive::IContext::Subscribe(uInterface(uPtr(context), ::TYPES[38/*Fuse.Reactive.IContext*/]), (uObject*)__this, __this->Key(), listener), void();
}

// public override sealed string ToString() :308
void Data__ToString_fn(Data* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.Data", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[36/*"{"*/], __this->Key()), ::STRINGS[37/*"}"*/]), void();
}

// public Data(string key) [instance] :301
void Data::ctor_1(uString* key)
{
    ctor_();
    Key(key);
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

// public Data New(string key) [static] :301
Data* Data::New1(uString* key)
{
    Data* obj1 = (Data*)uNew(Data_typeof());
    obj1->ctor_1(key);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\$.uno
// ----------------------------------------------------------------------------------

// public class DataBinding :154
// {
static void DataBinding_build(uType* type)
{
    ::STRINGS[26] = uString::Const("");
    ::STRINGS[38] = uString::Const("Cannot bind '");
    ::STRINGS[39] = uString::Const("' to property '");
    ::STRINGS[40] = uString::Const("'. The observable must contain exactly one ");
    ::STRINGS[41] = uString::Const(".");
    ::STRINGS[42] = uString::Const("C:\\Users\\Lotus\\AppData\\Local\\Fusetools\\Packages\\Fuse.Reactive.Bindings\\1.2.0\\$.uno");
    ::STRINGS[43] = uString::Const("InvalidListOperation");
    ::STRINGS[44] = uString::Const("TryPushAsMarshalledValue");
    ::STRINGS[45] = uString::Const("number");
    ::STRINGS[46] = uString::Const("string");
    ::STRINGS[47] = uString::Const("value that can be converted to type ");
    ::TYPES[39] = ::g::Fuse::IArray_typeof();
    ::TYPES[5] = ::g::Uno::IDisposable_typeof();
    ::TYPES[40] = ::g::Uno::Type_typeof();
    ::TYPES[41] = ::g::Fuse::Reactive::IObservable_typeof();
    ::TYPES[42] = ::g::Uno::UX::Selector_typeof();
    ::TYPES[21] = ::g::Uno::String_typeof();
    ::TYPES[43] = ::g::Uno::Exception_typeof();
    ::TYPES[44] = ::g::Uno::Predicate_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[45] = ::g::Fuse::Reactive::ISubscription_typeof();
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
        ::TYPES[21/*string*/], offsetof(::g::Fuse::Reactive::DataBinding, _registryName), 0,
        ::TYPES[45/*Fuse.Reactive.ISubscription*/], offsetof(::g::Fuse::Reactive::DataBinding, _subscription), 0,
        ::g::Uno::UX::Property_typeof(), offsetof(::g::Fuse::Reactive::DataBinding, _Target), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)DataBinding__New1_fn, 0, true, type, 4, ::g::Uno::UX::Property_typeof(), ::g::Fuse::Reactive::IExpression_typeof(), ::g::Uno::UX::NameTable_typeof(), ::g::Fuse::Reactive::BindingMode_typeof()),
        new uFunction("get_Target", NULL, (void*)DataBinding__get_Target_fn, 0, false, ::g::Uno::UX::Property_typeof(), 0));
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
    type->interface2.fp_OnClear = (void(*)(uObject*))DataBinding__FuseReactiveIObserverOnClear_fn;
    type->interface2.fp_OnSet = (void(*)(uObject*, uObject*))DataBinding__FuseReactiveIObserverOnSet_fn;
    type->interface2.fp_OnAdd = (void(*)(uObject*, uObject*))DataBinding__FuseReactiveIObserverOnAdd_fn;
    type->interface2.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))DataBinding__FuseReactiveIObserverOnNewAt_fn;
    type->interface2.fp_OnFailed = (void(*)(uObject*, uString*))DataBinding__FuseReactiveIObserverOnFailed_fn;
    type->interface2.fp_OnNewAll = (void(*)(uObject*, uObject*))DataBinding__FuseReactiveIObserverOnNewAll_fn;
    type->interface2.fp_OnRemoveAt = (void(*)(uObject*, int*))DataBinding__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface2.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))DataBinding__FuseReactiveIObserverOnInsertAt_fn;
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
    uStackFrame __("Fuse.Reactive.DataBinding", "Fuse.INameListener.OnNameChanged(Fuse.Node,Uno.UX.Selector)");
    __this->PushValue(__this->_currentValue);
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :203
void DataBinding__FuseReactiveIObserverOnAdd_fn(DataBinding* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "Fuse.Reactive.IObserver.OnAdd(object)");
    __this->InvalidListOperation();
}

// private void Fuse.Reactive.IObserver.OnClear() :181
void DataBinding__FuseReactiveIObserverOnClear_fn(DataBinding* __this)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "Fuse.Reactive.IObserver.OnClear()");
    __this->ClearValue();
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :213
void DataBinding__FuseReactiveIObserverOnFailed_fn(DataBinding* __this, uString* message)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "Fuse.Reactive.IObserver.OnFailed(string)");
    __this->ClearValue();
    __this->MarkFailed(message);
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :230
void DataBinding__FuseReactiveIObserverOnInsertAt_fn(DataBinding* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "Fuse.Reactive.IObserver.OnInsertAt(int,object)");
    __this->InvalidListOperation();
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values) :219
void DataBinding__FuseReactiveIObserverOnNewAll_fn(DataBinding* __this, uObject* values)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray)");

    if (::g::Fuse::IArray::Length(uInterface(uPtr(values), ::TYPES[39/*Fuse.IArray*/])) > 0)
        __this->InvalidListOperation();
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :208
void DataBinding__FuseReactiveIObserverOnNewAt_fn(DataBinding* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "Fuse.Reactive.IObserver.OnNewAt(int,object)");
    __this->InvalidListOperation();
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :225
void DataBinding__FuseReactiveIObserverOnRemoveAt_fn(DataBinding* __this, int* index)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "Fuse.Reactive.IObserver.OnRemoveAt(int)");
    __this->InvalidListOperation();
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :186
void DataBinding__FuseReactiveIObserverOnSet_fn(DataBinding* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "Fuse.Reactive.IObserver.OnSet(object)");
    __this->PushValue(newValue);
}

// private void InvalidListOperation() :198
void DataBinding__InvalidListOperation_fn(DataBinding* __this)
{
    __this->InvalidListOperation();
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
    uStackFrame __("Fuse.Reactive.DataBinding", "NewValue(object)");

    if (__this->_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_subscription), ::TYPES[5/*Uno.IDisposable*/]));
        __this->_subscription = NULL;
    }

    if (::g::Fuse::Marshal::Is(value, uPtr(__this->Target())->PropertyType()))
        __this->PushValue(value);
    else if (::g::Fuse::Marshal::Is(value, ::TYPES[41/*Fuse.Reactive.IObservable*/]))
    {
        uObject* obs = (uObject*)value;
        __this->_subscription = ::g::Fuse::Reactive::IObservable::Subscribe(uInterface(uPtr(obs), ::TYPES[41/*Fuse.Reactive.IObservable*/]), (uObject*)__this);
    }
    else
        __this->PushValue(value);
}

// protected override sealed void OnRooted() :235
void DataBinding__OnRooted_fn(DataBinding* __this)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "OnRooted()");
    ::g::Fuse::Reactive::ExpressionBinding__OnRooted_fn(__this);

    if (__this->Write() && uPtr(__this->Target())->SupportsOriginSetter())
        uPtr(__this->Target())->AddListener((uObject*)__this);
}

// protected override sealed void OnUnrooted() :254
void DataBinding__OnUnrooted_fn(DataBinding* __this)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "OnUnrooted()");
    __this->ClearFailed();
    __this->UnlistenNameRegistry();

    if (__this->Write() && uPtr(__this->Target())->SupportsOriginSetter())
        uPtr(__this->Target())->RemoveListener((uObject*)__this);

    if (__this->_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_subscription), ::TYPES[5/*Uno.IDisposable*/]));
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
    uStackFrame __("Fuse.Reactive.DataBinding", "SubscribeResource(Fuse.Reactive.IExpression,string,Fuse.Reactive.IListener)");
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

// private static string TypeToJSName(Uno.Type t) :191
void DataBinding__TypeToJSName_fn(uType* t, uString** __retval)
{
    *__retval = DataBinding::TypeToJSName(t);
}

// private void UnlistenNameRegistry() :358
void DataBinding__UnlistenNameRegistry_fn(DataBinding* __this)
{
    __this->UnlistenNameRegistry();
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :287
void DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn(DataBinding* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");
    ::g::Uno::UX::Selector prop_ = *prop;

    if (::g::Uno::UX::Selector__op_Equality(prop_, uPtr(__this->Target())->Name()))
    {
        if (__this->_subscription != NULL)
        {
            if (__this->Write())
                ::g::Fuse::Reactive::ISubscription::SetExclusive(uInterface(uPtr(__this->_subscription), ::TYPES[45/*Fuse.Reactive.ISubscription*/]), uPtr(__this->Target())->GetAsObject1());
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
    uStackFrame __("Fuse.Reactive.DataBinding", "Acceptor(object)");
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
    uStackFrame __("Fuse.Reactive.DataBinding", "ClearFailed()");

    if (Parent() != NULL)
        ::g::Fuse::Triggers::BusyTask::SetBusy(Parent(), &_busyTask, 0, ::STRINGS[26/*""*/]);
}

// private void ClearValue() [instance] :277
void DataBinding::ClearValue()
{
    uStackFrame __("Fuse.Reactive.DataBinding", "ClearValue()");

    if (Clear())
        SetTarget(NULL);
}

// private void InvalidListOperation() [instance] :198
void DataBinding::InvalidListOperation()
{
    uStackFrame __("Fuse.Reactive.DataBinding", "InvalidListOperation()");
    ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[38/*"Cannot bind '"*/], Key()), ::STRINGS[39/*"' to proper...*/]), ::g::Uno::UX::Selector__op_Implicit1(uPtr(Target())->Name())), ::STRINGS[40/*"'. The obse...*/]), DataBinding::TypeToJSName(uPtr(Target())->PropertyType())), ::STRINGS[41/*"."*/]), this, ::STRINGS[42/*"C:\\Users\\...*/], 200, ::STRINGS[43/*"InvalidList...*/], NULL);
}

// private void MarkFailed(string message) [instance] :243
void DataBinding::MarkFailed(uString* message)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "MarkFailed(string)");
    ::g::Fuse::Triggers::BusyTask::SetBusy(Parent(), &_busyTask, 16, message);
}

// protected void PushValue(object newValue) [instance] :333
void DataBinding::PushValue(uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "PushValue(object)");

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
    uStackFrame __("Fuse.Reactive.DataBinding", "SetTarget(object)");
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
    uStackFrame __("Fuse.Reactive.DataBinding", "TryPushAsMarshalledValue(object)");
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
            ::g::Fuse::Diagnostics::UserError(e->ToString(), Target(), ::STRINGS[42/*"C:\\Users\\...*/], 421, ::STRINGS[44/*"TryPushAsMa...*/], NULL);
        }
    }
}

// private bool TryPushAsName(object newValue) [instance] :367
bool DataBinding::TryPushAsName(uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "TryPushAsName(object)");
    ::g::Uno::UX::Selector name = DataBinding::ToSelector(newValue);

    if (!name.IsNull())
    {
        UnlistenNameRegistry();
        _registryName = ::g::Uno::UX::Selector__op_Implicit1(name);
        ::g::Fuse::NameRegistry::AddListener(::g::Uno::UX::Selector__op_Implicit(_registryName), (uObject*)this);
        ::g::Fuse::Node* k = uPtr(Parent())->FindNodeByName(name, uDelegate::New(::TYPES[44/*Uno.Predicate<Fuse.Node>*/], (void*)DataBinding__Acceptor_fn, this));

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
    uStackFrame __("Fuse.Reactive.DataBinding", "TryPushAsValue(object)");

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
    uStackFrame __("Fuse.Reactive.DataBinding", "UnlistenNameRegistry()");

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
    uStackFrame __("Fuse.Reactive.DataBinding", "ToSelector(object)");
    return uIs(newValue, ::TYPES[42/*Uno.UX.Selector*/]) ? uUnbox< ::g::Uno::UX::Selector>(::TYPES[42/*Uno.UX.Selector*/], newValue) : uIs(newValue, ::TYPES[21/*string*/]) ? ::g::Uno::UX::Selector__New1(uCast<uString*>(newValue, ::TYPES[21/*string*/])) : uDefault< ::g::Uno::UX::Selector>();
}

// private static string TypeToJSName(Uno.Type t) [static] :191
uString* DataBinding::TypeToJSName(uType* t)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "TypeToJSName(Uno.Type)");

    if ((::g::Uno::Type::op_Equality(t, ::TYPES[33/*int*/]) || ::g::Uno::Type::op_Equality(t, ::TYPES[34/*float*/])) || ::g::Uno::Type::op_Equality(t, ::TYPES[20/*double*/]))
        return ::STRINGS[45/*"number"*/];

    if (::g::Uno::Type::op_Equality(t, ::TYPES[21/*string*/]))
        return ::STRINGS[46/*"string"*/];

    return ::g::Uno::String::op_Addition2(::STRINGS[47/*"value that ...*/], ::g::Uno::Type::FullName(uPtr(t)));
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\subscription\$.uno
// -----------------------------------------------------------------------------------------------

// internal sealed class DataSubscription :8
// {
static void DataSubscription_build(uType* type)
{
    ::STRINGS[36] = uString::Const("{");
    ::STRINGS[48] = uString::Const("} not found in data context");
    ::TYPES[5] = ::g::Uno::IDisposable_typeof();
    ::TYPES[10] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::g::Fuse::Node__IDataEnumerator_typeof(), offsetof(DataSubscription_type, interface0),
        ::TYPES[5/*Uno.IDisposable*/], offsetof(DataSubscription_type, interface1),
        ::g::Fuse::Node__IDataListener_typeof(), offsetof(DataSubscription_type, interface2));
    type->SetFields(1,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::DataSubscription, _currentData), 0,
        ::TYPES[5/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::DataSubscription, _diag), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::DataSubscription, _isResolved), 0,
        ::TYPES[10/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::DataSubscription, _listener), 0,
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
    uStackFrame __("Fuse.Reactive.DataSubscription", "Fuse.Node.IDataListener.OnDataChanged()");
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
    uStackFrame __("Fuse.Reactive.DataSubscription", "Resolve(object)");
    __this->_isResolved = true;

    if (data != __this->_currentData)
    {
        __this->_currentData = data;
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(__this->_listener), ::TYPES[10/*Fuse.Reactive.IListener*/]), __this->_source, data);
    }
}

// public DataSubscription(Fuse.Reactive.IExpression source, Fuse.Node origin, string key, Fuse.Reactive.IListener listener) [instance] :15
void DataSubscription::ctor_1(uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener)
{
    uStackFrame __("Fuse.Reactive.DataSubscription", ".ctor(Fuse.Reactive.IExpression,Fuse.Node,string,Fuse.Reactive.IListener)");
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
    uStackFrame __("Fuse.Reactive.DataSubscription", "ClearDiagnostic()");

    if (_diag != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_diag), ::TYPES[5/*Uno.IDisposable*/]));
        _diag = NULL;
    }
}

// public void Dispose() [instance] :52
void DataSubscription::Dispose()
{
    uStackFrame __("Fuse.Reactive.DataSubscription", "Dispose()");
    ClearDiagnostic();
    uPtr(_origin)->RemoveDataListener(Key(), (uObject*)this);
    _origin = NULL;
    _source = NULL;
    _listener = NULL;
}

// private void FindData() [instance] :28
void DataSubscription::FindData()
{
    uStackFrame __("Fuse.Reactive.DataSubscription", "FindData()");

    if (_origin == NULL)
        return;

    ClearDiagnostic();
    _isResolved = false;
    uPtr(_origin)->EnumerateData((uObject*)this);

    if (!_isResolved)
        _diag = ::g::Fuse::Diagnostics::ReportTemporalUserWarning(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[36/*"{"*/], Key()), ::STRINGS[48/*"} not found...*/]), _origin);
}

// public DataSubscription New(Fuse.Reactive.IExpression source, Fuse.Node origin, string key, Fuse.Reactive.IListener listener) [static] :15
DataSubscription* DataSubscription::New1(uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener)
{
    DataSubscription* obj1 = (DataSubscription*)uNew(DataSubscription_typeof());
    obj1->ctor_1(source, origin, key, listener);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class DataToResource :154
// {
static void DataToResource_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(1);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DataToResource__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* DataToResource_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryOperator_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DataToResource);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.DataToResource", options);
    type->fp_build_ = DataToResource_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))DataToResource__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))DataToResource__Subscribe_fn;
    return type;
}

// public DataToResource(Fuse.Reactive.Expression data) :157
void DataToResource__ctor_2_fn(DataToResource* __this, ::g::Fuse::Reactive::Expression* data)
{
    __this->ctor_2(data);
}

// public DataToResource New(Fuse.Reactive.Expression data) :157
void DataToResource__New1_fn(::g::Fuse::Reactive::Expression* data, DataToResource** __retval)
{
    *__retval = DataToResource::New1(data);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :162
void DataToResource__Subscribe_fn(DataToResource* __this, uObject* context, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.DataToResource", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    return *__retval = (uObject*)DataToResource__DataToResourceSubscription::New2(__this, context, listener), void();
}

// public DataToResource(Fuse.Reactive.Expression data) [instance] :157
void DataToResource::ctor_2(::g::Fuse::Reactive::Expression* data)
{
    ctor_1(data);
}

// public DataToResource New(Fuse.Reactive.Expression data) [static] :157
DataToResource* DataToResource::New1(::g::Fuse::Reactive::Expression* data)
{
    DataToResource* obj1 = (DataToResource*)uNew(DataToResource_typeof());
    obj1->ctor_2(data);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// private sealed class DataToResource.DataToResourceSubscription :167
// {
static void DataToResource__DataToResourceSubscription_build(uType* type)
{
    ::TYPES[38] = ::g::Fuse::Reactive::IContext_typeof();
    ::TYPES[21] = ::g::Uno::String_typeof();
    ::TYPES[23] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator__Subscription_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator__Subscription_type, interface1));
    type->SetFields(5,
        ::TYPES[21/*string*/], offsetof(::g::Fuse::Reactive::DataToResource__DataToResourceSubscription, _key), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Reactive::DataToResource__DataToResourceSubscription, _node), 0);
}

::g::Fuse::Reactive::UnaryOperator__Subscription_type* DataToResource__DataToResourceSubscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryOperator__Subscription_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(DataToResource__DataToResourceSubscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator__Subscription_type);
    type = (::g::Fuse::Reactive::UnaryOperator__Subscription_type*)uClassType::New("Fuse.Reactive.DataToResource.DataToResourceSubscription", options);
    type->fp_build_ = DataToResource__DataToResourceSubscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))DataToResource__DataToResourceSubscription__Dispose_fn;
    type->fp_OnNewData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*, uObject*))DataToResource__DataToResourceSubscription__OnNewData_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))DataToResource__DataToResourceSubscription__Dispose_fn;
    return type;
}

// public DataToResourceSubscription(Fuse.Reactive.DataToResource dtr, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :170
void DataToResource__DataToResourceSubscription__ctor_2_fn(DataToResource__DataToResourceSubscription* __this, ::g::Fuse::Reactive::DataToResource* dtr, uObject* context, uObject* listener)
{
    __this->ctor_2(dtr, context, listener);
}

// public override sealed void Dispose() :177
void DataToResource__DataToResourceSubscription__Dispose_fn(DataToResource__DataToResourceSubscription* __this)
{
    uStackFrame __("Fuse.Reactive.DataToResource.DataToResourceSubscription", "Dispose()");
    ::g::Fuse::Reactive::UnaryOperator__Subscription__Dispose_fn(__this);
    __this->_node = NULL;
    __this->Unsubscribe();
}

// public DataToResourceSubscription New(Fuse.Reactive.DataToResource dtr, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :170
void DataToResource__DataToResourceSubscription__New2_fn(::g::Fuse::Reactive::DataToResource* dtr, uObject* context, uObject* listener, DataToResource__DataToResourceSubscription** __retval)
{
    *__retval = DataToResource__DataToResourceSubscription::New2(dtr, context, listener);
}

// private void OnChanged() :206
void DataToResource__DataToResourceSubscription__OnChanged_fn(DataToResource__DataToResourceSubscription* __this)
{
    __this->OnChanged();
}

// protected override sealed void OnNewData(Fuse.Reactive.IExpression source, object value) :186
void DataToResource__DataToResourceSubscription__OnNewData_fn(DataToResource__DataToResourceSubscription* __this, uObject* source, uObject* value)
{
    uStackFrame __("Fuse.Reactive.DataToResource.DataToResourceSubscription", "OnNewData(Fuse.Reactive.IExpression,object)");
    __this->Unsubscribe();
    __this->_key = uAs<uString*>(value, ::TYPES[21/*string*/]);
    __this->Subscribe();
    __this->OnChanged();
}

// private void Subscribe() :194
void DataToResource__DataToResourceSubscription__Subscribe_fn(DataToResource__DataToResourceSubscription* __this)
{
    __this->Subscribe();
}

// private void Unsubscribe() :200
void DataToResource__DataToResourceSubscription__Unsubscribe_fn(DataToResource__DataToResourceSubscription* __this)
{
    __this->Unsubscribe();
}

// public DataToResourceSubscription(Fuse.Reactive.DataToResource dtr, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [instance] :170
void DataToResource__DataToResourceSubscription::ctor_2(::g::Fuse::Reactive::DataToResource* dtr, uObject* context, uObject* listener)
{
    uStackFrame __("Fuse.Reactive.DataToResource.DataToResourceSubscription", ".ctor(Fuse.Reactive.DataToResource,Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    ctor_1(dtr, listener);
    _node = ::g::Fuse::Reactive::IContext::Node(uInterface(uPtr(context), ::TYPES[38/*Fuse.Reactive.IContext*/]));
    OnChanged();
    Init(context);
}

// private void OnChanged() [instance] :206
void DataToResource__DataToResourceSubscription::OnChanged()
{
    uStackFrame __("Fuse.Reactive.DataToResource.DataToResourceSubscription", "OnChanged()");

    if (::g::Uno::String::op_Equality(_key, NULL))
        return;

    if (_node == NULL)
        return;

    uObject* v;

    if (uPtr(_node)->TryGetResource(_key, NULL, &v))
        PushNewData(v);
}

// private void Subscribe() [instance] :194
void DataToResource__DataToResourceSubscription::Subscribe()
{
    uStackFrame __("Fuse.Reactive.DataToResource.DataToResourceSubscription", "Subscribe()");

    if (::g::Uno::String::op_Inequality(_key, NULL))
        ::g::Fuse::Resources::ResourceRegistry::AddResourceChangedHandler(_key, uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)DataToResource__DataToResourceSubscription__OnChanged_fn, this));
}

// private void Unsubscribe() [instance] :200
void DataToResource__DataToResourceSubscription::Unsubscribe()
{
    uStackFrame __("Fuse.Reactive.DataToResource.DataToResourceSubscription", "Unsubscribe()");

    if (::g::Uno::String::op_Inequality(_key, NULL))
        ::g::Fuse::Resources::ResourceRegistry::RemoveResourceChangedHandler(_key, uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)DataToResource__DataToResourceSubscription__OnChanged_fn, this));
}

// public DataToResourceSubscription New(Fuse.Reactive.DataToResource dtr, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :170
DataToResource__DataToResourceSubscription* DataToResource__DataToResourceSubscription::New2(::g::Fuse::Reactive::DataToResource* dtr, uObject* context, uObject* listener)
{
    DataToResource__DataToResourceSubscription* obj1 = (DataToResource__DataToResourceSubscription*)uNew(DataToResource__DataToResourceSubscription_typeof());
    obj1->ctor_2(dtr, context, listener);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.JavaScript\1.2.0\fusejs\$.uno
// -------------------------------------------------------------------------------------------

// internal static class DebugLog :88
// {
static void DebugLog_build(uType* type)
{
    ::STRINGS[49] = uString::Const("debug_log");
    ::STRINGS[22] = uString::Const("null");
    ::STRINGS[21] = uString::Const("C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Reactive.JavaScript/1.2.0/fusejs/$.uno");
    ::TYPES[37] = ::g::Fuse::Scripting::Callback_typeof();
}

uClassType* DebugLog_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.DebugLog", options);
    type->fp_build_ = DebugLog_build;
    return type;
}

// public static void Init(Fuse.Scripting.Context c) :90
void DebugLog__Init_fn(::g::Fuse::Scripting::Context* c)
{
    DebugLog::Init(c);
}

// private static object Log(object[] args) :95
void DebugLog__Log_fn(uArray* args, uObject** __retval)
{
    *__retval = DebugLog::Log(args);
}

// public static void Init(Fuse.Scripting.Context c) [static] :90
void DebugLog::Init(::g::Fuse::Scripting::Context* c)
{
    uStackFrame __("Fuse.Reactive.DebugLog", "Init(Fuse.Scripting.Context)");
    uPtr(uPtr(c)->GlobalObject())->Item(::STRINGS[49/*"debug_log"*/], uDelegate::New(::TYPES[37/*Fuse.Scripting.Callback*/], (void*)DebugLog__Log_fn));
}

// private static object Log(object[] args) [static] :95
uObject* DebugLog::Log(uArray* args)
{
    uStackFrame __("Fuse.Reactive.DebugLog", "Log(object[])");

    for (int i = 0; i < uPtr(args)->Length(); i++)
        ::g::Uno::Diagnostics::Debug::Log5((uPtr(args)->Strong<uObject*>(i) != NULL) ? (uString*)::g::Uno::Object::ToString(uPtr(uPtr(args)->Strong<uObject*>(i))) : ::STRINGS[22/*"null"*/], 0, ::STRINGS[21/*"C:/Users/Lo...*/], 99);

    return NULL;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class DegreesToRadians :857
// {
static void DegreesToRadians_build(uType* type)
{
    ::STRINGS[50] = uString::Const("degreesToRadians");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DegreesToRadians__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* DegreesToRadians_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DegreesToRadians);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.DegreesToRadians", options);
    type->fp_build_ = DegreesToRadians_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public DegreesToRadians(Fuse.Reactive.Expression operand) :860
void DegreesToRadians__ctor_3_fn(DegreesToRadians* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public DegreesToRadians New(Fuse.Reactive.Expression operand) :860
void DegreesToRadians__New1_fn(::g::Fuse::Reactive::Expression* operand, DegreesToRadians** __retval)
{
    *__retval = DegreesToRadians::New1(operand);
}

// public DegreesToRadians(Fuse.Reactive.Expression operand) [instance] :860
void DegreesToRadians::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[50/*"degreesToRa...*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__DegreesToRadians_fn));
}

// public DegreesToRadians New(Fuse.Reactive.Expression operand) [static] :860
DegreesToRadians* DegreesToRadians::New1(::g::Fuse::Reactive::Expression* operand)
{
    DegreesToRadians* obj1 = (DegreesToRadians*)uNew(DegreesToRadians_typeof());
    obj1->ctor_3(operand);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.JavaScript\1.2.0\$.uno
// ------------------------------------------------------------------------------------

// public sealed class JavaScript.Dependency :263
// {
static void JavaScript__Dependency_build(uType* type)
{
    ::TYPES[46] = ::g::Fuse::Reactive::IExpression_typeof();
    ::TYPES[5] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(JavaScript__Dependency_type, interface0));
    type->SetFields(0,
        ::TYPES[5/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::JavaScript__Dependency, _expSubscription), 0,
        ::g::Fuse::Reactive::JavaScript_typeof(), offsetof(::g::Fuse::Reactive::JavaScript__Dependency, _script), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::JavaScript__Dependency, HasValue), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::JavaScript__Dependency, Value), 0,
        ::TYPES[46/*Fuse.Reactive.IExpression*/], offsetof(::g::Fuse::Reactive::JavaScript__Dependency, _Expression), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::JavaScript__Dependency, _Name), 0);
}

JavaScript__Dependency_type* JavaScript__Dependency_typeof()
{
    static uSStrong<JavaScript__Dependency_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(JavaScript__Dependency);
    options.TypeSize = sizeof(JavaScript__Dependency_type);
    type = (JavaScript__Dependency_type*)uClassType::New("Fuse.Reactive.JavaScript.Dependency", options);
    type->fp_build_ = JavaScript__Dependency_build;
    type->interface0.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))JavaScript__Dependency__FuseReactiveIListenerOnNewData_fn;
    return type;
}

// internal generated Fuse.Reactive.IExpression get_Expression() :266
void JavaScript__Dependency__get_Expression_fn(JavaScript__Dependency* __this, uObject** __retval)
{
    *__retval = __this->Expression();
}

// private generated void set_Expression(Fuse.Reactive.IExpression value) :266
void JavaScript__Dependency__set_Expression_fn(JavaScript__Dependency* __this, uObject* value)
{
    __this->Expression(value);
}

// private void Fuse.Reactive.IListener.OnNewData(Fuse.Reactive.IExpression source, object data) :300
void JavaScript__Dependency__FuseReactiveIListenerOnNewData_fn(JavaScript__Dependency* __this, uObject* source, uObject* data)
{
    uStackFrame __("Fuse.Reactive.JavaScript.Dependency", "Fuse.Reactive.IListener.OnNewData(Fuse.Reactive.IExpression,object)");

    if (__this->_script == NULL)
        return;

    __this->Value = data;
    __this->HasValue = true;
    uPtr(__this->_script)->DispatchEvaluateIfDependenciesReady();
}

// internal generated string get_Name() :265
void JavaScript__Dependency__get_Name_fn(JavaScript__Dependency* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(string value) :265
void JavaScript__Dependency__set_Name_fn(JavaScript__Dependency* __this, uString* value)
{
    __this->Name(value);
}

// internal void Subscribe(Fuse.Reactive.JavaScript script) :278
void JavaScript__Dependency__Subscribe_fn(JavaScript__Dependency* __this, ::g::Fuse::Reactive::JavaScript* script)
{
    __this->Subscribe(script);
}

// internal void Unsubscribe() :285
void JavaScript__Dependency__Unsubscribe_fn(JavaScript__Dependency* __this)
{
    __this->Unsubscribe();
}

// internal generated Fuse.Reactive.IExpression get_Expression() [instance] :266
uObject* JavaScript__Dependency::Expression()
{
    return _Expression;
}

// private generated void set_Expression(Fuse.Reactive.IExpression value) [instance] :266
void JavaScript__Dependency::Expression(uObject* value)
{
    _Expression = value;
}

// internal generated string get_Name() [instance] :265
uString* JavaScript__Dependency::Name()
{
    return _Name;
}

// private generated void set_Name(string value) [instance] :265
void JavaScript__Dependency::Name(uString* value)
{
    _Name = value;
}

// internal void Subscribe(Fuse.Reactive.JavaScript script) [instance] :278
void JavaScript__Dependency::Subscribe(::g::Fuse::Reactive::JavaScript* script)
{
    uStackFrame __("Fuse.Reactive.JavaScript.Dependency", "Subscribe(Fuse.Reactive.JavaScript)");
    Unsubscribe();
    _script = script;
    _expSubscription = ::g::Fuse::Reactive::IExpression::Subscribe(uInterface(uPtr(Expression()), ::TYPES[46/*Fuse.Reactive.IExpression*/]), (uObject*)script, (uObject*)this);
}

// internal void Unsubscribe() [instance] :285
void JavaScript__Dependency::Unsubscribe()
{
    uStackFrame __("Fuse.Reactive.JavaScript.Dependency", "Unsubscribe()");

    if (_expSubscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_expSubscription), ::TYPES[5/*Uno.IDisposable*/]));
        _expSubscription = NULL;
    }

    Value = NULL;
    HasValue = false;
    _script = NULL;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.JavaScript\1.2.0\$.uno
// ------------------------------------------------------------------------------------

// internal class DiagnosticSubject :161
// {
static void DiagnosticSubject_build(uType* type)
{
    ::TYPES[5] = ::g::Uno::IDisposable_typeof();
    type->SetFields(0,
        ::TYPES[5/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::DiagnosticSubject, _diagnostic), 0);
}

uType* DiagnosticSubject_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(DiagnosticSubject);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.DiagnosticSubject", options);
    type->fp_build_ = DiagnosticSubject_build;
    type->fp_ctor_ = (void*)DiagnosticSubject__New1_fn;
    return type;
}

// public generated DiagnosticSubject() :161
void DiagnosticSubject__ctor__fn(DiagnosticSubject* __this)
{
    __this->ctor_();
}

// public void ClearDiagnostic() :164
void DiagnosticSubject__ClearDiagnostic_fn(DiagnosticSubject* __this)
{
    __this->ClearDiagnostic();
}

// public generated DiagnosticSubject New() :161
void DiagnosticSubject__New1_fn(DiagnosticSubject** __retval)
{
    *__retval = DiagnosticSubject::New1();
}

// public void SetDiagnostic(Fuse.Scripting.ScriptException se) :172
void DiagnosticSubject__SetDiagnostic_fn(DiagnosticSubject* __this, ::g::Fuse::Scripting::ScriptException* se)
{
    __this->SetDiagnostic(se);
}

// public generated DiagnosticSubject() [instance] :161
void DiagnosticSubject::ctor_()
{
}

// public void ClearDiagnostic() [instance] :164
void DiagnosticSubject::ClearDiagnostic()
{
    uStackFrame __("Fuse.Reactive.DiagnosticSubject", "ClearDiagnostic()");

    if (_diagnostic != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_diagnostic), ::TYPES[5/*Uno.IDisposable*/]));
        _diagnostic = NULL;
    }
}

// public void SetDiagnostic(Fuse.Scripting.ScriptException se) [instance] :172
void DiagnosticSubject::SetDiagnostic(::g::Fuse::Scripting::ScriptException* se)
{
    uStackFrame __("Fuse.Reactive.DiagnosticSubject", "SetDiagnostic(Fuse.Scripting.ScriptException)");
    ::g::Fuse::Diagnostic* d = ::g::Fuse::Diagnostic::New1(1, uPtr(se)->Name(), this, uPtr(se)->FileName(), uPtr(se)->LineNumber(), NULL, se);
    ClearDiagnostic();
    _diagnostic = ::g::Fuse::Diagnostics::ReportTemporal(d);
}

// public generated DiagnosticSubject New() [static] :161
DiagnosticSubject* DiagnosticSubject::New1()
{
    DiagnosticSubject* obj1 = (DiagnosticSubject*)uNew(DiagnosticSubject_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Divide :1184
// {
static void Divide_build(uType* type)
{
    ::STRINGS[51] = uString::Const("/");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Divide__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::InfixOperator_type* Divide_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Divide);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.Divide", options);
    type->fp_build_ = Divide_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))Divide__Compute_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))Divide__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public Divide(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :1187
void Divide__ctor_3_fn(Divide* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_3(left, right);
}

// protected override sealed object Compute(object left, object right) :1188
void Divide__Compute_fn(Divide* __this, uObject* left, uObject* right, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Divide", "Compute(object,object)");
    return *__retval = ::g::Fuse::Marshal::Divide(left, right), void();
}

// public Divide New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :1187
void Divide__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, Divide** __retval)
{
    *__retval = Divide::New1(left, right);
}

// public override sealed string get_Symbol() :1193
void Divide__get_Symbol_fn(Divide* __this, uString** __retval)
{
    return *__retval = ::STRINGS[51/*"/"*/], void();
}

// public Divide(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :1187
void Divide::ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_2(left, right);
}

// public Divide New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :1187
Divide* Divide::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    Divide* obj1 = (Divide*)uNew(Divide_typeof());
    obj1->ctor_3(left, right);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\$.uno
// ----------------------------------------------------------------------------------

// public sealed class Each :540
// {
// static Each() :540
static void Each__cctor_1_fn(uType* __type)
{
    Each::_eachHandle_ = ::g::Fuse::Properties::CreateHandle();
}

static void Each_build(uType* type)
{
    ::TYPES[47] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::Instantiator_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::Instantiator_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::Instantiator_type, interface5),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface6),
        ::g::Fuse::Node__ISubtreeDataProvider_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface7),
        ::g::Fuse::IDeferred_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface8));
    type->SetFields(41,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Reactive::Each::_eachHandle_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(13,
        new uFunction("get_Count", NULL, (void*)Each__get_Count1_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_Count", NULL, (void*)Each__set_Count1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("GetItems", NULL, (void*)Each__GetItems_fn, 0, true, uObject_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("GetMatchKey", NULL, (void*)Each__GetMatchKey_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("get_Items", NULL, (void*)Each__get_Items_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Items", NULL, (void*)Each__set_Items_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("get_Limit", NULL, (void*)Each__get_Limit1_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_Limit", NULL, (void*)Each__set_Limit1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)Each__New4_fn, 0, true, type, 0),
        new uFunction("get_Offset", NULL, (void*)Each__get_Offset1_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_Offset", NULL, (void*)Each__set_Offset1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("SetItems", NULL, (void*)Each__SetItems_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), uObject_typeof()),
        new uFunction("SetMatchKey", NULL, (void*)Each__SetMatchKey_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Uno::String_typeof()));
}

::g::Fuse::Reactive::Instantiator_type* Each_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Instantiator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Instantiator_typeof();
    options.FieldCount = 42;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(Each);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Instantiator_type);
    type = (::g::Fuse::Reactive::Instantiator_type*)uClassType::New("Fuse.Reactive.Each", options);
    type->fp_build_ = Each_build;
    type->fp_ctor_ = (void*)Each__New4_fn;
    type->fp_cctor_ = Each__cctor_1_fn;
    type->interface7.fp_GetData = (void(*)(uObject*, ::g::Fuse::Node*, uObject**))::g::Fuse::Reactive::Instantiator__FuseNodeISubtreeDataProviderGetData_fn;
    type->interface6.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnSet_fn;
    type->interface6.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnFailed_fn;
    type->interface6.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnAdd_fn;
    type->interface6.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface6.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnInsertAt_fn;
    type->interface6.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnNewAt_fn;
    type->interface6.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnNewAll_fn;
    type->interface6.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnClear_fn;
    type->interface8.fp_Perform = (void(*)(uObject*, bool*))::g::Fuse::Reactive::Instantiator__FuseIDeferredPerform_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Each() :591
void Each__ctor_5_fn(Each* __this)
{
    __this->ctor_5();
}

// private Each(Uno.Collections.IList<Uno.UX.Template> templates) :590
void Each__ctor_6_fn(Each* __this, uObject* templates)
{
    __this->ctor_6(templates);
}

// public new int get_Count() :615
void Each__get_Count1_fn(Each* __this, int* __retval)
{
    *__retval = __this->Count1();
}

// public new void set_Count(int value) :616
void Each__set_Count1_fn(Each* __this, int* value)
{
    __this->Count1(*value);
}

// private static Fuse.Reactive.Each GetEach(Fuse.Visual container) :544
void Each__GetEach_fn(::g::Fuse::Visual* container, Each** __retval)
{
    *__retval = Each::GetEach(container);
}

// public static object GetItems(Fuse.Visual container) :572
void Each__GetItems_fn(::g::Fuse::Visual* container, uObject** __retval)
{
    *__retval = Each::GetItems(container);
}

// public static string GetMatchKey(Fuse.Visual container) :585
void Each__GetMatchKey_fn(::g::Fuse::Visual* container, uString** __retval)
{
    *__retval = Each::GetMatchKey(container);
}

// public object get_Items() :601
void Each__get_Items_fn(Each* __this, uObject** __retval)
{
    *__retval = __this->Items();
}

// public void set_Items(object value) :602
void Each__set_Items_fn(Each* __this, uObject* value)
{
    __this->Items(value);
}

// public new int get_Limit() :641
void Each__get_Limit1_fn(Each* __this, int* __retval)
{
    *__retval = __this->Limit1();
}

// public new void set_Limit(int value) :642
void Each__set_Limit1_fn(Each* __this, int* value)
{
    __this->Limit1(*value);
}

// public Each New() :591
void Each__New4_fn(Each** __retval)
{
    *__retval = Each::New4();
}

// private Each New(Uno.Collections.IList<Uno.UX.Template> templates) :590
void Each__New5_fn(uObject* templates, Each** __retval)
{
    *__retval = Each::New5(templates);
}

// public new int get_Offset() :628
void Each__get_Offset1_fn(Each* __this, int* __retval)
{
    *__retval = __this->Offset1();
}

// public new void set_Offset(int value) :629
void Each__set_Offset1_fn(Each* __this, int* value)
{
    __this->Offset1(*value);
}

// public static void SetItems(Fuse.Visual container, object items) :566
void Each__SetItems_fn(::g::Fuse::Visual* container, uObject* items)
{
    Each::SetItems(container, items);
}

// public static void SetMatchKey(Fuse.Visual container, string key) :579
void Each__SetMatchKey_fn(::g::Fuse::Visual* container, uString* key)
{
    Each::SetMatchKey(container, key);
}

uSStrong< ::g::Fuse::PropertyHandle*> Each::_eachHandle_;

// public Each() [instance] :591
void Each::ctor_5()
{
    ctor_3();
}

// private Each(Uno.Collections.IList<Uno.UX.Template> templates) [instance] :590
void Each::ctor_6(uObject* templates)
{
    ctor_4(templates);
}

// public new int get_Count() [instance] :615
int Each::Count1()
{
    return Count();
}

// public new void set_Count(int value) [instance] :616
void Each::Count1(int value)
{
    uStackFrame __("Fuse.Reactive.Each", "set_Count(int)");
    Count(value);
}

// public object get_Items() [instance] :601
uObject* Each::Items()
{
    return _items;
}

// public void set_Items(object value) [instance] :602
void Each::Items(uObject* value)
{
    uStackFrame __("Fuse.Reactive.Each", "set_Items(object)");

    if (_items != value)
    {
        _items = value;
        OnItemsChanged();
    }
}

// public new int get_Limit() [instance] :641
int Each::Limit1()
{
    return Limit();
}

// public new void set_Limit(int value) [instance] :642
void Each::Limit1(int value)
{
    Limit(value);
}

// public new int get_Offset() [instance] :628
int Each::Offset1()
{
    return Offset();
}

// public new void set_Offset(int value) [instance] :629
void Each::Offset1(int value)
{
    Offset(value);
}

// private static Fuse.Reactive.Each GetEach(Fuse.Visual container) [static] :544
Each* Each::GetEach(::g::Fuse::Visual* container)
{
    uStackFrame __("Fuse.Reactive.Each", "GetEach(Fuse.Visual)");
    Each_typeof()->Init();
    Each* each = uAs<Each*>(uPtr(uPtr(container)->Properties())->Get(Each::_eachHandle()), Each_typeof());

    if (each == NULL)
    {
        each = Each::New5(uPtr(container)->Templates());
        uPtr(container->Properties())->Set(Each::_eachHandle(), each);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(container->Children()), ::TYPES[47/*Uno.Collections.ICollection<Fuse.Node>*/]), each);
    }

    return each;
}

// public static object GetItems(Fuse.Visual container) [static] :572
uObject* Each::GetItems(::g::Fuse::Visual* container)
{
    uStackFrame __("Fuse.Reactive.Each", "GetItems(Fuse.Visual)");
    Each_typeof()->Init();
    return uPtr(Each::GetEach(container))->Items();
}

// public static string GetMatchKey(Fuse.Visual container) [static] :585
uString* Each::GetMatchKey(::g::Fuse::Visual* container)
{
    uStackFrame __("Fuse.Reactive.Each", "GetMatchKey(Fuse.Visual)");
    Each_typeof()->Init();
    return uPtr(Each::GetEach(container))->MatchKey();
}

// public Each New() [static] :591
Each* Each::New4()
{
    Each* obj2 = (Each*)uNew(Each_typeof());
    obj2->ctor_5();
    return obj2;
}

// private Each New(Uno.Collections.IList<Uno.UX.Template> templates) [static] :590
Each* Each::New5(uObject* templates)
{
    Each* obj1 = (Each*)uNew(Each_typeof());
    obj1->ctor_6(templates);
    return obj1;
}

// public static void SetItems(Fuse.Visual container, object items) [static] :566
void Each::SetItems(::g::Fuse::Visual* container, uObject* items)
{
    uStackFrame __("Fuse.Reactive.Each", "SetItems(Fuse.Visual,object)");
    Each_typeof()->Init();
    uPtr(Each::GetEach(container))->Items(items);
}

// public static void SetMatchKey(Fuse.Visual container, string key) [static] :579
void Each::SetMatchKey(::g::Fuse::Visual* container, uString* key)
{
    uStackFrame __("Fuse.Reactive.Each", "SetMatchKey(Fuse.Visual,string)");
    Each_typeof()->Init();
    uPtr(Each::GetEach(container))->MatchKey(key);
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Equal :1283
// {
static void Equal_build(uType* type)
{
    ::STRINGS[52] = uString::Const("==");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Equal__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::InfixOperator_type* Equal_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Equal);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.Equal", options);
    type->fp_build_ = Equal_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))Equal__Compute_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))Equal__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public Equal(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :1286
void Equal__ctor_3_fn(Equal* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_3(left, right);
}

// protected override sealed object Compute(object left, object right) :1287
void Equal__Compute_fn(Equal* __this, uObject* left, uObject* right, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Equal", "Compute(object,object)");
    return *__retval = ::g::Fuse::Marshal::EqualTo(left, right), void();
}

// public Equal New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :1286
void Equal__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, Equal** __retval)
{
    *__retval = Equal::New1(left, right);
}

// public override sealed string get_Symbol() :1292
void Equal__get_Symbol_fn(Equal* __this, uString** __retval)
{
    return *__retval = ::STRINGS[52/*"=="*/], void();
}

// public Equal(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :1286
void Equal::ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_2(left, right);
}

// public Equal New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :1286
Equal* Equal::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    Equal* obj1 = (Equal*)uNew(Equal_typeof());
    obj1->ctor_3(left, right);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Even :602
// {
static void Even_build(uType* type)
{
    ::STRINGS[53] = uString::Const("even(");
    ::STRINGS[5] = uString::Const(")");
    ::TYPES[4] = ::g::Fuse::Marshal_typeof()->MakeMethod(1/*TryToType<float>*/, ::g::Uno::Float_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(1);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Even__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Even_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryOperator_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Even);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Even", options);
    type->fp_build_ = Even_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::UnaryOperator*, uObject*, uObject**))Even__Compute_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Even__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Even(Fuse.Reactive.Expression operand) :605
void Even__ctor_2_fn(Even* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_2(operand);
}

// protected override sealed object Compute(object operand) :606
void Even__Compute_fn(Even* __this, uObject* operand, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Even", "Compute(object)");
    bool ret2;
    float v = 0.0f;

    if (!(::g::Fuse::Marshal__TryToType_fn(::TYPES[4/*Fuse.Marshal.TryToType<float>*/], operand, &v, &ret2), ret2))
        return *__retval = NULL, void();

    int q = (int)::g::Uno::Math::Round2(v);
    return *__retval = uBox(::TYPES[18/*bool*/], (q % 2) == 0), void();
}

// public Even New(Fuse.Reactive.Expression operand) :605
void Even__New1_fn(::g::Fuse::Reactive::Expression* operand, Even** __retval)
{
    *__retval = Even::New1(operand);
}

// public override sealed string ToString() :616
void Even__ToString_fn(Even* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.Even", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[53/*"even("*/], __this->Operand()), ::STRINGS[5/*")"*/]), void();
}

// public Even(Fuse.Reactive.Expression operand) [instance] :605
void Even::ctor_2(::g::Fuse::Reactive::Expression* operand)
{
    ctor_1(operand);
}

// public Even New(Fuse.Reactive.Expression operand) [static] :605
Even* Even::New1(::g::Fuse::Reactive::Expression* operand)
{
    Even* obj1 = (Even*)uNew(Even_typeof());
    obj1->ctor_2(operand);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\$.uno
// ----------------------------------------------------------------------------------

// public sealed class EventBinding :675
// {
static void EventBinding_build(uType* type)
{
    ::TYPES[48] = ::g::Fuse::Reactive::IEventHandler_typeof();
    ::TYPES[49] = ::g::Fuse::Scripting::IScriptEvent_typeof();
    ::TYPES[50] = ::g::Fuse::Node_typeof();
    ::TYPES[51] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Reactive::EventRecord_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Reactive::IContext_typeof(), offsetof(::g::Fuse::Reactive::ExpressionBinding_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::ExpressionBinding_type, interface1));
    type->SetFields(4,
        ::TYPES[48/*Fuse.Reactive.IEventHandler*/], offsetof(::g::Fuse::Reactive::EventBinding, _eventHandler), 0,
        ::TYPES[51/*Uno.Collections.List<Fuse.Reactive.EventRecord>*/], offsetof(::g::Fuse::Reactive::EventBinding, _queuedEvents), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)EventBinding__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::IExpression_typeof(), ::g::Uno::UX::NameTable_typeof()),
        new uFunction("OnEvent", NULL, (void*)EventBinding__OnEvent_fn, 0, false, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::EventArgs_typeof()));
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

// public EventBinding(Fuse.Reactive.IExpression key, Uno.UX.NameTable nameTable) :678
void EventBinding__ctor_2_fn(EventBinding* __this, uObject* key, ::g::Uno::UX::NameTable* nameTable)
{
    __this->ctor_2(key, nameTable);
}

// public EventBinding New(Fuse.Reactive.IExpression key, Uno.UX.NameTable nameTable) :678
void EventBinding__New1_fn(uObject* key, ::g::Uno::UX::NameTable* nameTable, EventBinding** __retval)
{
    *__retval = EventBinding::New1(key, nameTable);
}

// internal override sealed void NewValue(object obj) :698
void EventBinding__NewValue_fn(EventBinding* __this, uObject* obj)
{
    uStackFrame __("Fuse.Reactive.EventBinding", "NewValue(object)");
    __this->_eventHandler = uAs<uObject*>(obj, ::TYPES[48/*Fuse.Reactive.IEventHandler*/]);
    __this->ProcessQueuedEvents();
}

// public void OnEvent(object sender, Uno.EventArgs args) :711
void EventBinding__OnEvent_fn(EventBinding* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnEvent(sender, args);
}

// protected override sealed void OnUnrooted() :704
void EventBinding__OnUnrooted_fn(EventBinding* __this)
{
    uStackFrame __("Fuse.Reactive.EventBinding", "OnUnrooted()");
    ::g::Fuse::Reactive::ExpressionBinding__OnUnrooted_fn(__this);
    __this->_eventHandler = NULL;
    __this->_queuedEvents = NULL;
}

// private void ProcessQueuedEvents() :686
void EventBinding__ProcessQueuedEvents_fn(EventBinding* __this)
{
    __this->ProcessQueuedEvents();
}

// public EventBinding(Fuse.Reactive.IExpression key, Uno.UX.NameTable nameTable) [instance] :678
void EventBinding::ctor_2(uObject* key, ::g::Uno::UX::NameTable* nameTable)
{
    ctor_1(key, nameTable);
}

// public void OnEvent(object sender, Uno.EventArgs args) [instance] :711
void EventBinding::OnEvent(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Reactive.EventBinding", "OnEvent(object,Uno.EventArgs)");

    if (Parent() == NULL)
        return;

    ::g::Fuse::Reactive::EventRecord* e = ::g::Fuse::Reactive::EventRecord::New1(uAs<uObject*>(args, ::TYPES[49/*Fuse.Scripting.IScriptEvent*/]), uAs< ::g::Fuse::Node*>(sender, ::TYPES[50/*Fuse.Node*/]));

    if (_eventHandler != NULL)
        ::g::Fuse::Reactive::IEventHandler::Dispatch(uInterface(uPtr(_eventHandler), ::TYPES[48/*Fuse.Reactive.IEventHandler*/]), (uObject*)e);
    else
    {
        if (_queuedEvents == NULL)
            _queuedEvents = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[51/*Uno.Collections.List<Fuse.Reactive.EventRecord>*/]));

        ::g::Uno::Collections::List__Add_fn(uPtr(_queuedEvents), e);
    }
}

// private void ProcessQueuedEvents() [instance] :686
void EventBinding::ProcessQueuedEvents()
{
    uStackFrame __("Fuse.Reactive.EventBinding", "ProcessQueuedEvents()");
    ::g::Fuse::Reactive::EventRecord* ret2;

    if ((_eventHandler != NULL) && (_queuedEvents != NULL))
    {
        ::g::Uno::Collections::List* events = _queuedEvents;
        _queuedEvents = NULL;

        for (int i = 0; i < uPtr(events)->Count(); i++)
            ::g::Fuse::Reactive::IEventHandler::Dispatch(uInterface(uPtr(_eventHandler), ::TYPES[48/*Fuse.Reactive.IEventHandler*/]), (uObject*)(::g::Uno::Collections::List__get_Item_fn(uPtr(events), uCRef<int>(i), &ret2), ret2));
    }
}

// public EventBinding New(Fuse.Reactive.IExpression key, Uno.UX.NameTable nameTable) [static] :678
EventBinding* EventBinding::New1(uObject* key, ::g::Uno::UX::NameTable* nameTable)
{
    EventBinding* obj1 = (EventBinding*)uNew(EventBinding_typeof());
    obj1->ctor_2(key, nameTable);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\$.uno
// ----------------------------------------------------------------------------------

// internal sealed class EventRecord :743
// {
static void EventRecord_build(uType* type)
{
    ::TYPES[50] = ::g::Fuse::Node_typeof();
    ::TYPES[49] = ::g::Fuse::Scripting::IScriptEvent_typeof();
    ::TYPES[52] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Reactive::IEventRecord_typeof(), offsetof(EventRecord_type, interface0),
        ::g::Fuse::Scripting::IEventSerializer_typeof(), offsetof(EventRecord_type, interface1));
    type->SetFields(0,
        ::TYPES[52/*Uno.Collections.Dictionary<string, object>*/], offsetof(::g::Fuse::Reactive::EventRecord, _args), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::EventRecord, _data), 0,
        ::TYPES[50/*Fuse.Node*/], offsetof(::g::Fuse::Reactive::EventRecord, _node), 0,
        ::g::Uno::UX::Selector_typeof(), offsetof(::g::Fuse::Reactive::EventRecord, _sender), 0);
}

EventRecord_type* EventRecord_typeof()
{
    static uSStrong<EventRecord_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(EventRecord);
    options.TypeSize = sizeof(EventRecord_type);
    type = (EventRecord_type*)uClassType::New("Fuse.Reactive.EventRecord", options);
    type->fp_build_ = EventRecord_build;
    type->interface1.fp_AddObject = (void(*)(uObject*, uString*, uObject*))EventRecord__FuseScriptingIEventSerializerAddObject_fn;
    type->interface1.fp_AddString = (void(*)(uObject*, uString*, uString*))EventRecord__FuseScriptingIEventSerializerAddString_fn;
    type->interface1.fp_AddInt = (void(*)(uObject*, uString*, int*))EventRecord__FuseScriptingIEventSerializerAddInt_fn;
    type->interface1.fp_AddDouble = (void(*)(uObject*, uString*, double*))EventRecord__FuseScriptingIEventSerializerAddDouble_fn;
    type->interface1.fp_AddBool = (void(*)(uObject*, uString*, bool*))EventRecord__FuseScriptingIEventSerializerAddBool_fn;
    type->interface0.fp_get_Node = (void(*)(uObject*, ::g::Fuse::Node**))EventRecord__get_Node_fn;
    type->interface0.fp_get_Data = (void(*)(uObject*, uObject**))EventRecord__get_Data_fn;
    type->interface0.fp_get_Sender = (void(*)(uObject*, ::g::Uno::UX::Selector*))EventRecord__get_Sender_fn;
    type->interface0.fp_get_Args = (void(*)(uObject*, uObject**))EventRecord__get_Args_fn;
    return type;
}

// internal EventRecord(Fuse.Scripting.IScriptEvent args, object sender) :750
void EventRecord__ctor__fn(EventRecord* __this, uObject* args, uObject* sender)
{
    __this->ctor_(args, sender);
}

// private void AddObject(string key, object value) :770
void EventRecord__AddObject_fn(EventRecord* __this, uString* key, uObject* value)
{
    __this->AddObject(key, value);
}

// public Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string, object>> get_Args() :768
void EventRecord__get_Args_fn(EventRecord* __this, uObject** __retval)
{
    *__retval = __this->Args();
}

// public object get_Data() :766
void EventRecord__get_Data_fn(EventRecord* __this, uObject** __retval)
{
    *__retval = __this->Data();
}

// private void Fuse.Scripting.IEventSerializer.AddBool(string key, bool value) :796
void EventRecord__FuseScriptingIEventSerializerAddBool_fn(EventRecord* __this, uString* key, bool* value)
{
    uStackFrame __("Fuse.Reactive.EventRecord", "Fuse.Scripting.IEventSerializer.AddBool(string,bool)");
    bool value_ = *value;
    __this->AddObject(key, uBox(::TYPES[18/*bool*/], value_));
}

// private void Fuse.Scripting.IEventSerializer.AddDouble(string key, double value) :791
void EventRecord__FuseScriptingIEventSerializerAddDouble_fn(EventRecord* __this, uString* key, double* value)
{
    uStackFrame __("Fuse.Reactive.EventRecord", "Fuse.Scripting.IEventSerializer.AddDouble(string,double)");
    double value_ = *value;
    __this->AddObject(key, uBox(::TYPES[20/*double*/], value_));
}

// private void Fuse.Scripting.IEventSerializer.AddInt(string key, int value) :786
void EventRecord__FuseScriptingIEventSerializerAddInt_fn(EventRecord* __this, uString* key, int* value)
{
    uStackFrame __("Fuse.Reactive.EventRecord", "Fuse.Scripting.IEventSerializer.AddInt(string,int)");
    int value_ = *value;
    __this->AddObject(key, uBox(::TYPES[20/*double*/], (double)value_));
}

// private void Fuse.Scripting.IEventSerializer.AddObject(string key, object value) :776
void EventRecord__FuseScriptingIEventSerializerAddObject_fn(EventRecord* __this, uString* key, uObject* value)
{
    uStackFrame __("Fuse.Reactive.EventRecord", "Fuse.Scripting.IEventSerializer.AddObject(string,object)");
    __this->AddObject(key, value);
}

// private void Fuse.Scripting.IEventSerializer.AddString(string key, string value) :781
void EventRecord__FuseScriptingIEventSerializerAddString_fn(EventRecord* __this, uString* key, uString* value)
{
    uStackFrame __("Fuse.Reactive.EventRecord", "Fuse.Scripting.IEventSerializer.AddString(string,string)");
    __this->AddObject(key, value);
}

// internal EventRecord New(Fuse.Scripting.IScriptEvent args, object sender) :750
void EventRecord__New1_fn(uObject* args, uObject* sender, EventRecord** __retval)
{
    *__retval = EventRecord::New1(args, sender);
}

// public Fuse.Node get_Node() :765
void EventRecord__get_Node_fn(EventRecord* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Node();
}

// public Uno.UX.Selector get_Sender() :767
void EventRecord__get_Sender_fn(EventRecord* __this, ::g::Uno::UX::Selector* __retval)
{
    *__retval = __this->Sender();
}

// internal EventRecord(Fuse.Scripting.IScriptEvent args, object sender) [instance] :750
void EventRecord::ctor_(uObject* args, uObject* sender)
{
    uStackFrame __("Fuse.Reactive.EventRecord", ".ctor(Fuse.Scripting.IScriptEvent,object)");
    _node = uAs< ::g::Fuse::Node*>(sender, ::TYPES[50/*Fuse.Node*/]);

    if (_node != NULL)
    {
        _data = uPtr(_node)->GetFirstData();

        if (::g::Uno::String::op_Inequality(::g::Uno::UX::Selector__op_Implicit1(uPtr(_node)->Name()), NULL))
            _sender = uPtr(_node)->Name();
    }

    if (args != NULL)
        ::g::Fuse::Scripting::IScriptEvent::Serialize(uInterface(uPtr(args), ::TYPES[49/*Fuse.Scripting.IScriptEvent*/]), (uObject*)this);
}

// private void AddObject(string key, object value) [instance] :770
void EventRecord::AddObject(uString* key, uObject* value)
{
    uStackFrame __("Fuse.Reactive.EventRecord", "AddObject(string,object)");

    if (_args == NULL)
        _args = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[52/*Uno.Collections.Dictionary<string, object>*/]));

    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_args), key, value);
}

// public Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string, object>> get_Args() [instance] :768
uObject* EventRecord::Args()
{
    uStackFrame __("Fuse.Reactive.EventRecord", "get_Args()");
    return (uObject*)_args;
}

// public object get_Data() [instance] :766
uObject* EventRecord::Data()
{
    return _data;
}

// public Fuse.Node get_Node() [instance] :765
::g::Fuse::Node* EventRecord::Node()
{
    return _node;
}

// public Uno.UX.Selector get_Sender() [instance] :767
::g::Uno::UX::Selector EventRecord::Sender()
{
    return _sender;
}

// internal EventRecord New(Fuse.Scripting.IScriptEvent args, object sender) [static] :750
EventRecord* EventRecord::New1(uObject* args, uObject* sender)
{
    EventRecord* obj1 = (EventRecord*)uNew(EventRecord_typeof());
    obj1->ctor_(args, sender);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Exp :873
// {
static void Exp_build(uType* type)
{
    ::STRINGS[54] = uString::Const("exp");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Exp__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Exp_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Exp);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Exp", options);
    type->fp_build_ = Exp_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Exp(Fuse.Reactive.Expression operand) :876
void Exp__ctor_3_fn(Exp* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public Exp New(Fuse.Reactive.Expression operand) :876
void Exp__New1_fn(::g::Fuse::Reactive::Expression* operand, Exp** __retval)
{
    *__retval = Exp::New1(operand);
}

// public Exp(Fuse.Reactive.Expression operand) [instance] :876
void Exp::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[54/*"exp"*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Exp_fn));
}

// public Exp New(Fuse.Reactive.Expression operand) [static] :876
Exp* Exp::New1(::g::Fuse::Reactive::Expression* operand)
{
    Exp* obj1 = (Exp*)uNew(Exp_typeof());
    obj1->ctor_3(operand);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Exp2 :881
// {
static void Exp2_build(uType* type)
{
    ::STRINGS[55] = uString::Const("exp2");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Exp2__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Exp2_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Exp2);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Exp2", options);
    type->fp_build_ = Exp2_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Exp2(Fuse.Reactive.Expression operand) :884
void Exp2__ctor_3_fn(Exp2* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public Exp2 New(Fuse.Reactive.Expression operand) :884
void Exp2__New1_fn(::g::Fuse::Reactive::Expression* operand, Exp2** __retval)
{
    *__retval = Exp2::New1(operand);
}

// public Exp2(Fuse.Reactive.Expression operand) [instance] :884
void Exp2::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[55/*"exp2"*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Exp21_fn));
}

// public Exp2 New(Fuse.Reactive.Expression operand) [static] :884
Exp2* Exp2::New1(::g::Fuse::Reactive::Expression* operand)
{
    Exp2* obj1 = (Exp2*)uNew(Exp2_typeof());
    obj1->ctor_3(operand);
    return obj1;
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
    type->Reflection.SetFunctions(1,
        new uFunction("Subscribe", NULL, NULL, offsetof(Expression_type, fp_Subscribe), false, ::g::Uno::IDisposable_typeof(), 2, ::g::Fuse::Reactive::IContext_typeof(), ::g::Fuse::Reactive::IListener_typeof()));
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
    ::STRINGS[56] = uString::Const("The binding type does not support resource subscriptions");
    ::TYPES[46] = ::g::Fuse::Reactive::IExpression_typeof();
    ::TYPES[5] = ::g::Uno::IDisposable_typeof();
    ::TYPES[53] = ::g::Fuse::Reactive::IWriteable_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IContext_typeof(), offsetof(ExpressionBinding_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(ExpressionBinding_type, interface1));
    type->SetFields(1,
        ::TYPES[5/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::ExpressionBinding, _expressionSub), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Fuse::Reactive::ExpressionBinding, _nameTable), uFieldFlagsWeak,
        ::TYPES[46/*Fuse.Reactive.IExpression*/], offsetof(::g::Fuse::Reactive::ExpressionBinding, _Key), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Key", NULL, (void*)ExpressionBinding__get_Key_fn, 0, false, ::TYPES[46/*Fuse.Reactive.IExpression*/], 0),
        new uFunction("get_NameTable", NULL, (void*)ExpressionBinding__get_NameTable_fn, 0, false, ::g::Uno::UX::NameTable_typeof(), 0),
        new uFunction("SubscribeResource", NULL, NULL, offsetof(ExpressionBinding_type, fp_SubscribeResource), false, ::TYPES[5/*Uno.IDisposable*/], 3, ::TYPES[46/*Fuse.Reactive.IExpression*/], ::g::Uno::String_typeof(), ::g::Fuse::Reactive::IListener_typeof()));
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
    uStackFrame __("Fuse.Reactive.ExpressionBinding", "Fuse.Reactive.IContext.Subscribe(Fuse.Reactive.IExpression,string,Fuse.Reactive.IListener)");
    return *__retval = (uObject*)::g::Fuse::Reactive::DataSubscription::New1(source, __this->Parent(), key, listener), void();
}

// private void Fuse.Reactive.IListener.OnNewData(Fuse.Reactive.IExpression source, object obj) :855
void ExpressionBinding__FuseReactiveIListenerOnNewData_fn(ExpressionBinding* __this, uObject* source, uObject* obj)
{
    uStackFrame __("Fuse.Reactive.ExpressionBinding", "Fuse.Reactive.IListener.OnNewData(Fuse.Reactive.IExpression,object)");
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
    uStackFrame __("Fuse.Reactive.ExpressionBinding", "OnRooted()");
    ::g::Fuse::Binding__OnRooted_fn(__this);
    __this->_expressionSub = ::g::Fuse::Reactive::IExpression::Subscribe(uInterface(uPtr(__this->Key()), ::TYPES[46/*Fuse.Reactive.IExpression*/]), (uObject*)__this, (uObject*)__this);
}

// protected override void OnUnrooted() :848
void ExpressionBinding__OnUnrooted_fn(ExpressionBinding* __this)
{
    uStackFrame __("Fuse.Reactive.ExpressionBinding", "OnUnrooted()");
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_expressionSub), ::TYPES[5/*Uno.IDisposable*/]));
    __this->_expressionSub = NULL;
    ::g::Fuse::Binding__OnUnrooted_fn(__this);
}

// public virtual Uno.IDisposable SubscribeResource(Fuse.Reactive.IExpression source, string key, Fuse.Reactive.IListener listener) :843
void ExpressionBinding__SubscribeResource_fn(ExpressionBinding* __this, uObject* source, uString* key, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.ExpressionBinding", "SubscribeResource(Fuse.Reactive.IExpression,string,Fuse.Reactive.IListener)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[56/*"The binding...*/]));
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
    return uIs((uObject*)_expressionSub, ::TYPES[53/*Fuse.Reactive.IWriteable*/]);
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
    uStackFrame __("Fuse.Reactive.ExpressionBinding", "WriteBack(object)");
    ::g::Fuse::Reactive::IWriteable::SetExclusive(uInterface(uPtr(_expressionSub), ::TYPES[53/*Fuse.Reactive.IWriteable*/]), value);
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.JavaScript\1.2.0\$.uno
// ------------------------------------------------------------------------------------

// private sealed class Observable.Failed :1102
// {
static void Observable__Failed_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::Observable__Failed, _message), 0);
}

::g::Fuse::Reactive::Observable__Operation_type* Observable__Failed_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Observable__Operation_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Observable__Failed);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Observable__Operation_type);
    type = (::g::Fuse::Reactive::Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.Failed", options);
    type->fp_build_ = Observable__Failed_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Reactive::Observable__Operation*, uObject*))Observable__Failed__OnPerform_fn;
    return type;
}

// public Failed(Fuse.Reactive.Observable obs, string message) :1106
void Observable__Failed__ctor_1_fn(Observable__Failed* __this, ::g::Fuse::Reactive::Observable* obs, uString* message)
{
    __this->ctor_1(obs, message);
}

// public Failed New(Fuse.Reactive.Observable obs, string message) :1106
void Observable__Failed__New1_fn(::g::Fuse::Reactive::Observable* obs, uString* message, Observable__Failed** __retval)
{
    *__retval = Observable__Failed::New1(obs, message);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription> sub) :1111
void Observable__Failed__OnPerform_fn(Observable__Failed* __this, uObject* sub)
{
    uStackFrame __("Fuse.Reactive.Observable.Failed", "OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>)");
    ::g::Fuse::Reactive::Observable__Subscription* ret2;
    ::g::Fuse::Reactive::Observable__Subscription* ret3;
    uPtr(__this->Observable())->UnsubscribeValues();
    uPtr(uPtr(__this->Observable())->_values)->Clear();

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Reactive.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(-1))
            ::g::Fuse::Reactive::IObserver::OnFailed(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[3/*Fuse.Reactive.IObserver*/]), __this->_message);
}

// public Failed(Fuse.Reactive.Observable obs, string message) [instance] :1106
void Observable__Failed::ctor_1(::g::Fuse::Reactive::Observable* obs, uString* message)
{
    ctor_(obs);
    _message = message;
}

// public Failed New(Fuse.Reactive.Observable obs, string message) [static] :1106
Observable__Failed* Observable__Failed::New1(::g::Fuse::Reactive::Observable* obs, uString* message)
{
    Observable__Failed* obj1 = (Observable__Failed*)uNew(Observable__Failed_typeof());
    obj1->ctor_1(obs, message);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.JavaScript\1.2.0\$.uno
// ------------------------------------------------------------------------------------

// public sealed class ThreadWorker.Fence :2067
// {
static void ThreadWorker__Fence_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Threading::ManualResetEvent_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker__Fence, _signaled), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_IsSignaled", NULL, (void*)ThreadWorker__Fence__get_IsSignaled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)ThreadWorker__Fence__New1_fn, 0, true, type, 0));
}

uType* ThreadWorker__Fence_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ThreadWorker__Fence);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.ThreadWorker.Fence", options);
    type->fp_build_ = ThreadWorker__Fence_build;
    type->fp_ctor_ = (void*)ThreadWorker__Fence__New1_fn;
    return type;
}

// public generated Fence() :2067
void ThreadWorker__Fence__ctor__fn(ThreadWorker__Fence* __this)
{
    __this->ctor_();
}

// public bool get_IsSignaled() :2071
void ThreadWorker__Fence__get_IsSignaled_fn(ThreadWorker__Fence* __this, bool* __retval)
{
    *__retval = __this->IsSignaled();
}

// public generated Fence New() :2067
void ThreadWorker__Fence__New1_fn(ThreadWorker__Fence** __retval)
{
    *__retval = ThreadWorker__Fence::New1();
}

// internal void Signal() :2074
void ThreadWorker__Fence__Signal_fn(ThreadWorker__Fence* __this)
{
    __this->Signal();
}

// public generated Fence() [instance] :2067
void ThreadWorker__Fence::ctor_()
{
    _signaled = ::g::Uno::Threading::ManualResetEvent::New2(false);
}

// public bool get_IsSignaled() [instance] :2071
bool ThreadWorker__Fence::IsSignaled()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker.Fence", "get_IsSignaled()");
    return uPtr(_signaled)->WaitOne1(0);
}

// internal void Signal() [instance] :2074
void ThreadWorker__Fence::Signal()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker.Fence", "Signal()");
    uPtr(_signaled)->Set();
}

// public generated Fence New() [static] :2067
ThreadWorker__Fence* ThreadWorker__Fence::New1()
{
    ThreadWorker__Fence* obj1 = (ThreadWorker__Fence*)uNew(ThreadWorker__Fence_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// internal delegate double BinaryFloatOperator.FloatOp(double a, double b) :733
uDelegateType* BinaryFloatOperator__FloatOp_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Reactive.BinaryFloatOperator.FloatOp", 2, 0);
    type->SetSignature(::g::Uno::Double_typeof(),
        ::g::Uno::Double_typeof(),
        ::g::Uno::Double_typeof());
    return type;
}

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// internal delegate double UnaryFloatOperator.FloatOp(double value) :692
uDelegateType* UnaryFloatOperator__FloatOp_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Reactive.UnaryFloatOperator.FloatOp", 1, 0);
    type->SetSignature(::g::Uno::Double_typeof(),
        ::g::Uno::Double_typeof());
    return type;
}

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Floor :849
// {
static void Floor_build(uType* type)
{
    ::STRINGS[57] = uString::Const("floor");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Floor__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Floor_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Floor);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Floor", options);
    type->fp_build_ = Floor_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Floor(Fuse.Reactive.Expression operand) :852
void Floor__ctor_3_fn(Floor* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public Floor New(Fuse.Reactive.Expression operand) :852
void Floor__New1_fn(::g::Fuse::Reactive::Expression* operand, Floor** __retval)
{
    *__retval = Floor::New1(operand);
}

// public Floor(Fuse.Reactive.Expression operand) [instance] :852
void Floor::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[57/*"floor"*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Floor_fn));
}

// public Floor New(Fuse.Reactive.Expression operand) [static] :852
Floor* Floor::New1(::g::Fuse::Reactive::Expression* operand)
{
    Floor* obj1 = (Floor*)uNew(Floor_typeof());
    obj1->ctor_3(operand);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Fract :889
// {
static void Fract_build(uType* type)
{
    ::STRINGS[58] = uString::Const("fract");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Fract__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Fract_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Fract);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Fract", options);
    type->fp_build_ = Fract_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Fract(Fuse.Reactive.Expression operand) :892
void Fract__ctor_3_fn(Fract* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public Fract New(Fuse.Reactive.Expression operand) :892
void Fract__New1_fn(::g::Fuse::Reactive::Expression* operand, Fract** __retval)
{
    *__retval = Fract::New1(operand);
}

// public Fract(Fuse.Reactive.Expression operand) [instance] :892
void Fract::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[58/*"fract"*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Fract_fn));
}

// public Fract New(Fuse.Reactive.Expression operand) [static] :892
Fract* Fract::New1(::g::Fuse::Reactive::Expression* operand)
{
    Fract* obj1 = (Fract*)uNew(Fract_typeof());
    obj1->ctor_3(operand);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.JavaScript\1.2.0\$.uno
// ------------------------------------------------------------------------------------

// internal sealed class FunctionMirror :191
// {
static void FunctionMirror_build(uType* type)
{
    ::TYPES[23] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IEventHandler_typeof(), offsetof(FunctionMirror_type, interface0),
        ::g::Fuse::IRaw_typeof(), offsetof(FunctionMirror_type, interface1));
    type->SetFields(1,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Reactive::FunctionMirror, _func), 0);
}

FunctionMirror_type* FunctionMirror_typeof()
{
    static uSStrong<FunctionMirror_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::DiagnosticSubject_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(FunctionMirror);
    options.TypeSize = sizeof(FunctionMirror_type);
    type = (FunctionMirror_type*)uClassType::New("Fuse.Reactive.FunctionMirror", options);
    type->fp_build_ = FunctionMirror_build;
    type->interface0.fp_Dispatch = (void(*)(uObject*, uObject*))FunctionMirror__Dispatch_fn;
    type->interface1.fp_get_Raw = (void(*)(uObject*, uObject**))FunctionMirror__get_Raw_fn;
    return type;
}

// public FunctionMirror(Fuse.Scripting.Function func) :197
void FunctionMirror__ctor_1_fn(FunctionMirror* __this, ::g::Fuse::Scripting::Function* func)
{
    __this->ctor_1(func);
}

// public void Dispatch(Fuse.Reactive.IEventRecord e) :239
void FunctionMirror__Dispatch_fn(FunctionMirror* __this, uObject* e)
{
    __this->Dispatch(e);
}

// public FunctionMirror New(Fuse.Scripting.Function func) :197
void FunctionMirror__New2_fn(::g::Fuse::Scripting::Function* func, FunctionMirror** __retval)
{
    *__retval = FunctionMirror::New2(func);
}

// public object get_Raw() :195
void FunctionMirror__get_Raw_fn(FunctionMirror* __this, uObject** __retval)
{
    *__retval = __this->Raw();
}

// public FunctionMirror(Fuse.Scripting.Function func) [instance] :197
void FunctionMirror::ctor_1(::g::Fuse::Scripting::Function* func)
{
    ctor_();
    _func = func;
}

// public void Dispatch(Fuse.Reactive.IEventRecord e) [instance] :239
void FunctionMirror::Dispatch(uObject* e)
{
    uStackFrame __("Fuse.Reactive.FunctionMirror", "Dispatch(Fuse.Reactive.IEventRecord)");
    uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Invoke(uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)FunctionMirror__CallClosure__Call_fn, FunctionMirror__CallClosure::New1(this, e)));
}

// public object get_Raw() [instance] :195
uObject* FunctionMirror::Raw()
{
    return _func;
}

// public FunctionMirror New(Fuse.Scripting.Function func) [static] :197
FunctionMirror* FunctionMirror::New2(::g::Fuse::Scripting::Function* func)
{
    FunctionMirror* obj1 = (FunctionMirror*)uNew(FunctionMirror_typeof());
    obj1->ctor_1(func);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class GreaterOrEqual :1257
// {
static void GreaterOrEqual_build(uType* type)
{
    ::STRINGS[59] = uString::Const(">=");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GreaterOrEqual__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::InfixOperator_type* GreaterOrEqual_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GreaterOrEqual);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.GreaterOrEqual", options);
    type->fp_build_ = GreaterOrEqual_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))GreaterOrEqual__Compute_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))GreaterOrEqual__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public GreaterOrEqual(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :1260
void GreaterOrEqual__ctor_3_fn(GreaterOrEqual* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_3(left, right);
}

// protected override sealed object Compute(object left, object right) :1261
void GreaterOrEqual__Compute_fn(GreaterOrEqual* __this, uObject* left, uObject* right, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.GreaterOrEqual", "Compute(object,object)");

    if ((left == NULL) || (right == NULL))
        return *__retval = NULL, void();

    return *__retval = uBox(::TYPES[18/*bool*/], uUnbox<bool>(::TYPES[18/*bool*/], ::g::Fuse::Marshal::GreaterThan(left, right)) || uUnbox<bool>(::TYPES[18/*bool*/], ::g::Fuse::Marshal::EqualTo(left, right))), void();
}

// public GreaterOrEqual New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :1260
void GreaterOrEqual__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, GreaterOrEqual** __retval)
{
    *__retval = GreaterOrEqual::New1(left, right);
}

// public override sealed string get_Symbol() :1267
void GreaterOrEqual__get_Symbol_fn(GreaterOrEqual* __this, uString** __retval)
{
    return *__retval = ::STRINGS[59/*">="*/], void();
}

// public GreaterOrEqual(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :1260
void GreaterOrEqual::ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_2(left, right);
}

// public GreaterOrEqual New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :1260
GreaterOrEqual* GreaterOrEqual::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    GreaterOrEqual* obj1 = (GreaterOrEqual*)uNew(GreaterOrEqual_typeof());
    obj1->ctor_3(left, right);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class GreaterThan :1245
// {
static void GreaterThan_build(uType* type)
{
    ::STRINGS[60] = uString::Const(">");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GreaterThan__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::InfixOperator_type* GreaterThan_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GreaterThan);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.GreaterThan", options);
    type->fp_build_ = GreaterThan_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))GreaterThan__Compute_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))GreaterThan__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public GreaterThan(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :1248
void GreaterThan__ctor_3_fn(GreaterThan* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_3(left, right);
}

// protected override sealed object Compute(object left, object right) :1249
void GreaterThan__Compute_fn(GreaterThan* __this, uObject* left, uObject* right, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.GreaterThan", "Compute(object,object)");
    return *__retval = ::g::Fuse::Marshal::GreaterThan(left, right), void();
}

// public GreaterThan New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :1248
void GreaterThan__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, GreaterThan** __retval)
{
    *__retval = GreaterThan::New1(left, right);
}

// public override sealed string get_Symbol() :1254
void GreaterThan__get_Symbol_fn(GreaterThan* __this, uString** __retval)
{
    return *__retval = ::STRINGS[60/*">"*/], void();
}

// public GreaterThan(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :1248
void GreaterThan::ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_2(left, right);
}

// public GreaterThan New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :1248
GreaterThan* GreaterThan::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    GreaterThan* obj1 = (GreaterThan*)uNew(GreaterThan_typeof());
    obj1->ctor_3(left, right);
    return obj1;
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
    type->Reflection.SetFunctions(4,
        new uFunction("get_NameTable", NULL, NULL, offsetof(IContext, fp_get_NameTable), false, ::g::Uno::UX::NameTable_typeof(), 0),
        new uFunction("get_Node", NULL, NULL, offsetof(IContext, fp_get_Node), false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("Subscribe", NULL, NULL, offsetof(IContext, fp_Subscribe), false, ::g::Uno::IDisposable_typeof(), 3, ::g::Fuse::Reactive::IExpression_typeof(), ::g::Uno::String_typeof(), ::g::Fuse::Reactive::IListener_typeof()),
        new uFunction("SubscribeResource", NULL, NULL, offsetof(IContext, fp_SubscribeResource), false, ::g::Uno::IDisposable_typeof(), 3, ::g::Fuse::Reactive::IExpression_typeof(), ::g::Uno::String_typeof(), ::g::Fuse::Reactive::IListener_typeof()));
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
    type->Reflection.SetFunctions(1,
        new uFunction("Dispatch", NULL, NULL, offsetof(IEventHandler, fp_Dispatch), false, uVoid_typeof(), 1, ::g::Fuse::Reactive::IEventRecord_typeof()));
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
    type->Reflection.SetFunctions(4,
        new uFunction("get_Args", NULL, NULL, offsetof(IEventRecord, fp_get_Args), false, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL), NULL), 0),
        new uFunction("get_Data", NULL, NULL, offsetof(IEventRecord, fp_get_Data), false, uObject_typeof(), 0),
        new uFunction("get_Node", NULL, NULL, offsetof(IEventRecord, fp_get_Node), false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("get_Sender", NULL, NULL, offsetof(IEventRecord, fp_get_Sender), false, ::g::Uno::UX::Selector_typeof(), 0));
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
    type->Reflection.SetFunctions(1,
        new uFunction("Subscribe", NULL, NULL, offsetof(IExpression, fp_Subscribe), false, ::g::Uno::IDisposable_typeof(), 2, ::g::Fuse::Reactive::IContext_typeof(), ::g::Fuse::Reactive::IListener_typeof()));
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
    type->Reflection.SetFunctions(1,
        new uFunction("OnNewData", NULL, NULL, offsetof(IListener, fp_OnNewData), false, uVoid_typeof(), 2, ::g::Fuse::Reactive::IExpression_typeof(), uObject_typeof()));
    return type;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\$.uno
// ----------------------------------------------------------------------------------

// public sealed class IndexFunction :2433
// {
static void IndexFunction_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)IndexFunction__New1_fn, 0, true, type, 0));
}

::g::Fuse::Reactive::Expression_type* IndexFunction_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InstantiatorFunction_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(IndexFunction);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.IndexFunction", options);
    type->fp_build_ = IndexFunction_build;
    type->fp_ctor_ = (void*)IndexFunction__New1_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::InstantiatorFunction__Subscribe_fn;
    return type;
}

// public IndexFunction() :2436
void IndexFunction__ctor_3_fn(IndexFunction* __this)
{
    __this->ctor_3();
}

// public IndexFunction New() :2436
void IndexFunction__New1_fn(IndexFunction** __retval)
{
    *__retval = IndexFunction::New1();
}

// public IndexFunction() [instance] :2436
void IndexFunction::ctor_3()
{
    ctor_2(::g::Fuse::Reactive::InstantiatorFunction::DataIndexName());
}

// public IndexFunction New() [static] :2436
IndexFunction* IndexFunction::New1()
{
    IndexFunction* obj1 = (IndexFunction*)uNew(IndexFunction_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public abstract class InfixOperator :1136
// {
static void InfixOperator_build(uType* type)
{
    ::STRINGS[6] = uString::Const("(");
    ::STRINGS[61] = uString::Const(" ");
    ::STRINGS[5] = uString::Const(")");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(InfixOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction("get_Symbol", NULL, NULL, offsetof(InfixOperator_type, fp_get_Symbol), false, ::g::Uno::String_typeof(), 0));
}

InfixOperator_type* InfixOperator_typeof()
{
    static uSStrong<InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::BinaryOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(InfixOperator);
    options.TypeSize = sizeof(InfixOperator_type);
    type = (InfixOperator_type*)uClassType::New("Fuse.Reactive.InfixOperator", options);
    type->fp_build_ = InfixOperator_build;
    type->fp_ToString = (void(*)(uObject*, uString**))InfixOperator__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// protected InfixOperator(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :1138
void InfixOperator__ctor_2_fn(InfixOperator* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_2(left, right);
}

// public override sealed string ToString() :1142
void InfixOperator__ToString_fn(InfixOperator* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.InfixOperator", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[6/*"("*/], __this->Left()), ::STRINGS[61/*" "*/]), __this->Symbol()), ::STRINGS[61/*" "*/]), __this->Right()), ::STRINGS[5/*")"*/]), void();
}

// protected InfixOperator(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :1138
void InfixOperator::ctor_2(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_1(left, right);
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public abstract class InnerListener :1777
// {
static void InnerListener_build(uType* type)
{
    ::TYPES[5] = ::g::Uno::IDisposable_typeof();
    ::TYPES[54] = ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator_typeof()->MakeType(::g::Fuse::Reactive::IExpression_typeof(), InnerListener__ObservableSubscription_typeof(), NULL);
    ::TYPES[41] = ::g::Fuse::Reactive::IObservable_typeof();
    ::TYPES[55] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Reactive::IExpression_typeof(), InnerListener__ObservableSubscription_typeof(), NULL);
    type->SetInterfaces(
        ::TYPES[5/*Uno.IDisposable*/], offsetof(InnerListener_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(InnerListener_type, interface1));
    type->SetFields(0,
        ::TYPES[5/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::InnerListener, _diag), 0,
        ::TYPES[55/*Uno.Collections.Dictionary<Fuse.Reactive.IExpression, Fuse.Reactive.InnerListener.ObservableSubscription>*/], offsetof(::g::Fuse::Reactive::InnerListener, _obsSubs), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("ClearDiagnostic", NULL, (void*)InnerListener__ClearDiagnostic_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Dispose", NULL, NULL, offsetof(InnerListener_type, fp_Dispose), false, uVoid_typeof(), 0),
        new uFunction("SetDiagnostic", NULL, (void*)InnerListener__SetDiagnostic_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Fuse::Reactive::IExpression_typeof()));
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
    uStackFrame __("Fuse.Reactive.InnerListener", "Dispose()");
    ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong<InnerListener__ObservableSubscription*> > ret2;
    __this->ClearDiagnostic();

    if (__this->_obsSubs != NULL)
    {
        for (::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong<InnerListener__ObservableSubscription*> > enum1 = (::g::Uno::Collections::Dictionary__ValueCollection__GetEnumerator_fn(uPtr((::g::Uno::Collections::Dictionary__ValueCollection*)uPtr(__this->_obsSubs)->Values()), &ret2), ret2); enum1.MoveNext(::TYPES[54/*Uno.Collections.Dictionary<Fuse.Reactive.IExpression, Fuse.Reactive.InnerListener.ObservableSubscription>.ValueCollection.Enumerator*/]); )
        {
            InnerListener__ObservableSubscription* k = enum1.Current(::TYPES[54/*Uno.Collections.Dictionary<Fuse.Reactive.IExpression, Fuse.Reactive.InnerListener.ObservableSubscription>.ValueCollection.Enumerator*/]);
            uPtr(k)->Dispose();
        }

        uPtr(__this->_obsSubs)->Clear();
        __this->_obsSubs = NULL;
    }
}

// private void Fuse.Reactive.IListener.OnNewData(Fuse.Reactive.IExpression source, object value) :1812
void InnerListener__FuseReactiveIListenerOnNewData_fn(InnerListener* __this, uObject* source, uObject* value)
{
    uStackFrame __("Fuse.Reactive.InnerListener", "Fuse.Reactive.IListener.OnNewData(Fuse.Reactive.IExpression,object)");
    bool ret3;
    bool ret4;
    InnerListener__ObservableSubscription* obsSub = NULL;

    if ((__this->_obsSubs != NULL) && (::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(__this->_obsSubs), source, (void**)(&obsSub), &ret3), ret3))
    {
        uPtr(obsSub)->Dispose();
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(__this->_obsSubs), source, &ret4);
    }

    uObject* obs = uAs<uObject*>(value, ::TYPES[41/*Fuse.Reactive.IObservable*/]);

    if (obs != NULL)
    {
        if (__this->_obsSubs == NULL)
            __this->_obsSubs = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[55/*Uno.Collections.Dictionary<Fuse.Reactive.IExpression, Fuse.Reactive.InnerListener.ObservableSubscription>*/]));

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
    uStackFrame __("Fuse.Reactive.InnerListener", "ClearDiagnostic()");

    if (_diag != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_diag), ::TYPES[5/*Uno.IDisposable*/]));
        _diag = NULL;
    }
}

// public void SetDiagnostic(string message, Fuse.Reactive.IExpression source) [instance] :1783
void InnerListener::SetDiagnostic(uString* message, uObject* source)
{
    uStackFrame __("Fuse.Reactive.InnerListener", "SetDiagnostic(string,Fuse.Reactive.IExpression)");
    ClearDiagnostic();
    _diag = ::g::Fuse::Diagnostics::ReportTemporalUserWarning(message, source);
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.JavaScript\1.2.0\$.uno
// ------------------------------------------------------------------------------------

// private sealed class Observable.InsertAll :1284
// {
static void Observable__InsertAll_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Observable__InsertAll, _index), 0,
        ::g::Fuse::Reactive::ArrayMirror_typeof(), offsetof(::g::Fuse::Reactive::Observable__InsertAll, _items), 0);
}

::g::Fuse::Reactive::Observable__Operation_type* Observable__InsertAll_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Observable__Operation_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__InsertAll);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Observable__Operation_type);
    type = (::g::Fuse::Reactive::Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.InsertAll", options);
    type->fp_build_ = Observable__InsertAll_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Reactive::Observable__Operation*, uObject*))Observable__InsertAll__OnPerform_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Reactive::Observable__Operation*))Observable__InsertAll__Unsubscribe_fn;
    return type;
}

// public InsertAll(Fuse.Reactive.Observable obs, int index, Fuse.Reactive.ArrayMirror items) :1289
void Observable__InsertAll__ctor_1_fn(Observable__InsertAll* __this, ::g::Fuse::Reactive::Observable* obs, int* index, ::g::Fuse::Reactive::ArrayMirror* items)
{
    __this->ctor_1(obs, *index, items);
}

// public InsertAll New(Fuse.Reactive.Observable obs, int index, Fuse.Reactive.ArrayMirror items) :1289
void Observable__InsertAll__New1_fn(::g::Fuse::Reactive::Observable* obs, int* index, ::g::Fuse::Reactive::ArrayMirror* items, Observable__InsertAll** __retval)
{
    *__retval = Observable__InsertAll::New1(obs, *index, items);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription> sub) :1300
void Observable__InsertAll__OnPerform_fn(Observable__InsertAll* __this, uObject* sub)
{
    uStackFrame __("Fuse.Reactive.Observable.InsertAll", "OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>)");
    ::g::Fuse::Reactive::Observable__Subscription* ret2;
    ::g::Fuse::Reactive::Observable__Subscription* ret3;

    for (int i = 0; i < uPtr(__this->_items)->Length(); i++)
    {
        ::g::Uno::Collections::List__Insert_fn(uPtr(uPtr(__this->Observable())->_values), uCRef<int>(__this->_index + i), uPtr(__this->_items)->Item(i));

        for (int j = 0; j < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Reactive.Observable.Subscription>*/])); ++j)
            if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(j), &ret2), ret2))->ShouldSend(-1))
                ::g::Fuse::Reactive::IObserver::OnInsertAt(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(j), &ret3), ret3))->Observer()), ::TYPES[3/*Fuse.Reactive.IObserver*/]), __this->_index + i, uPtr(__this->_items)->Item(i));
    }
}

// protected override sealed void Unsubscribe() :1295
void Observable__InsertAll__Unsubscribe_fn(Observable__InsertAll* __this)
{
    uStackFrame __("Fuse.Reactive.Observable.InsertAll", "Unsubscribe()");
    ::g::Fuse::Reactive::ValueMirror::Unsubscribe1(__this->_items);
}

// public InsertAll(Fuse.Reactive.Observable obs, int index, Fuse.Reactive.ArrayMirror items) [instance] :1289
void Observable__InsertAll::ctor_1(::g::Fuse::Reactive::Observable* obs, int index, ::g::Fuse::Reactive::ArrayMirror* items)
{
    ctor_(obs);
    _index = index;
    _items = items;
}

// public InsertAll New(Fuse.Reactive.Observable obs, int index, Fuse.Reactive.ArrayMirror items) [static] :1289
Observable__InsertAll* Observable__InsertAll::New1(::g::Fuse::Reactive::Observable* obs, int index, ::g::Fuse::Reactive::ArrayMirror* items)
{
    Observable__InsertAll* obj1 = (Observable__InsertAll*)uNew(Observable__InsertAll_typeof());
    obj1->ctor_1(obs, index, items);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.JavaScript\1.2.0\$.uno
// ------------------------------------------------------------------------------------

// private sealed class Observable.InsertAt :1256
// {
static void Observable__InsertAt_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Observable__InsertAt, _index), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Observable__InsertAt, _value), 0);
}

::g::Fuse::Reactive::Observable__Operation_type* Observable__InsertAt_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Observable__Operation_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__InsertAt);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Observable__Operation_type);
    type = (::g::Fuse::Reactive::Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.InsertAt", options);
    type->fp_build_ = Observable__InsertAt_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Reactive::Observable__Operation*, uObject*))Observable__InsertAt__OnPerform_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Reactive::Observable__Operation*))Observable__InsertAt__Unsubscribe_fn;
    return type;
}

// public InsertAt(Fuse.Reactive.Observable obs, int index, object value) :1261
void Observable__InsertAt__ctor_1_fn(Observable__InsertAt* __this, ::g::Fuse::Reactive::Observable* obs, int* index, uObject* value)
{
    __this->ctor_1(obs, *index, value);
}

// public InsertAt New(Fuse.Reactive.Observable obs, int index, object value) :1261
void Observable__InsertAt__New1_fn(::g::Fuse::Reactive::Observable* obs, int* index, uObject* value, Observable__InsertAt** __retval)
{
    *__retval = Observable__InsertAt::New1(obs, *index, value);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription> sub) :1272
void Observable__InsertAt__OnPerform_fn(Observable__InsertAt* __this, uObject* sub)
{
    uStackFrame __("Fuse.Reactive.Observable.InsertAt", "OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>)");
    ::g::Fuse::Reactive::Observable__Subscription* ret2;
    ::g::Fuse::Reactive::Observable__Subscription* ret3;
    ::g::Uno::Collections::List__Insert_fn(uPtr(uPtr(__this->Observable())->_values), uCRef<int>(__this->_index), __this->_value);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Reactive.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(-1))
            ::g::Fuse::Reactive::IObserver::OnInsertAt(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[3/*Fuse.Reactive.IObserver*/]), __this->_index, __this->_value);
}

// protected override sealed void Unsubscribe() :1267
void Observable__InsertAt__Unsubscribe_fn(Observable__InsertAt* __this)
{
    uStackFrame __("Fuse.Reactive.Observable.InsertAt", "Unsubscribe()");
    ::g::Fuse::Reactive::ValueMirror::Unsubscribe1(__this->_value);
}

// public InsertAt(Fuse.Reactive.Observable obs, int index, object value) [instance] :1261
void Observable__InsertAt::ctor_1(::g::Fuse::Reactive::Observable* obs, int index, uObject* value)
{
    ctor_(obs);
    _index = index;
    _value = value;
}

// public InsertAt New(Fuse.Reactive.Observable obs, int index, object value) [static] :1261
Observable__InsertAt* Observable__InsertAt::New1(::g::Fuse::Reactive::Observable* obs, int index, uObject* value)
{
    Observable__InsertAt* obj1 = (Observable__InsertAt*)uNew(Observable__InsertAt_typeof());
    obj1->ctor_1(obs, index, value);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\$.uno
// ----------------------------------------------------------------------------------

// public sealed class Instance :1710
// {
static void Instance_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::Instantiator_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::Instantiator_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::Instantiator_type, interface5),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface6),
        ::g::Fuse::Node__ISubtreeDataProvider_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface7),
        ::g::Fuse::IDeferred_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface8));
    type->SetFields(41);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Instance__New4_fn, 0, true, type, 0));
}

::g::Fuse::Reactive::Instantiator_type* Instance_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Instantiator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Instantiator_typeof();
    options.FieldCount = 41;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(Instance);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Instantiator_type);
    type = (::g::Fuse::Reactive::Instantiator_type*)uClassType::New("Fuse.Reactive.Instance", options);
    type->fp_build_ = Instance_build;
    type->fp_ctor_ = (void*)Instance__New4_fn;
    type->interface7.fp_GetData = (void(*)(uObject*, ::g::Fuse::Node*, uObject**))::g::Fuse::Reactive::Instantiator__FuseNodeISubtreeDataProviderGetData_fn;
    type->interface6.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnSet_fn;
    type->interface6.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnFailed_fn;
    type->interface6.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnAdd_fn;
    type->interface6.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface6.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnInsertAt_fn;
    type->interface6.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnNewAt_fn;
    type->interface6.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnNewAll_fn;
    type->interface6.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnClear_fn;
    type->interface8.fp_Perform = (void(*)(uObject*, bool*))::g::Fuse::Reactive::Instantiator__FuseIDeferredPerform_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Instance() :1712
void Instance__ctor_5_fn(Instance* __this)
{
    __this->ctor_5();
}

// public Instance New() :1712
void Instance__New4_fn(Instance** __retval)
{
    *__retval = Instance::New4();
}

// public Instance() [instance] :1712
void Instance::ctor_5()
{
    uStackFrame __("Fuse.Reactive.Instance", ".ctor()");
    ctor_3();
    Count(1);
}

// public Instance New() [static] :1712
Instance* Instance::New4()
{
    Instance* obj1 = (Instance*)uNew(Instance_typeof());
    obj1->ctor_5();
    return obj1;
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

// public partial class Instantiator :915
// {
static void Instantiator_build(uType* type)
{
    ::STRINGS[62] = uString::Const("Template contains a non-Node");
    ::STRINGS[42] = uString::Const("C:\\Users\\Lotus\\AppData\\Local\\Fusetools\\Packages\\Fuse.Reactive.Bindings\\1.2.0\\$.uno");
    ::STRINGS[63] = uString::Const("AddTemplate");
    ::STRINGS[64] = uString::Const("inconsistent instance state");
    ::STRINGS[65] = uString::Const("CompleteWindowItem");
    ::STRINGS[26] = uString::Const("");
    ::STRINGS[66] = uString::Const("Limit cannot be less than 0");
    ::STRINGS[67] = uString::Const("set_Limit");
    ::STRINGS[68] = uString::Const("Offset cannot be less than 0");
    ::STRINGS[69] = uString::Const("set_Offset");
    ::TYPES[56] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Node_typeof(), Instantiator__WindowItem_typeof(), NULL);
    ::TYPES[57] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), Instantiator__WindowItem_typeof(), NULL);
    ::TYPES[58] = ::g::Fuse::Internal::ObjectList_typeof()->MakeType(Instantiator__WindowItem_typeof(), NULL);
    ::TYPES[59] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[60] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[61] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[50] = ::g::Fuse::Node_typeof();
    ::TYPES[23] = ::g::Uno::Action_typeof();
    ::TYPES[62] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(5/*IndexOf<Fuse.Node>*/, ::TYPES[50/*Fuse.Node*/], NULL);
    ::TYPES[5] = ::g::Uno::IDisposable_typeof();
    ::TYPES[63] = Instantiator__CountItem_typeof();
    ::TYPES[6] = uObject_typeof()->Array();
    ::TYPES[39] = ::g::Fuse::IArray_typeof();
    ::TYPES[64] = ::g::Fuse::IObject_typeof();
    ::TYPES[65] = ::g::Fuse::ITemplateSource_typeof();
    ::TYPES[21] = ::g::Uno::String_typeof();
    ::TYPES[41] = ::g::Fuse::Reactive::IObservable_typeof();
    ::TYPES[17] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[66] = ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[67] = ::g::Fuse::Reactive::Internal::PatchList_typeof()->MakeMethod(0/*Patch<object>*/, uObject_typeof(), NULL);
    ::TYPES[68] = ::g::Uno::Action1_typeof()->MakeType(::TYPES[50/*Fuse.Node*/], NULL);
    ::TYPES[69] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(uObject_typeof(), Instantiator__WindowItem_typeof(), NULL);
    ::TYPES[70] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(uObject_typeof(), Instantiator__WindowItem_typeof(), NULL);
    ::TYPES[19] = ::g::Uno::Collections::RootableList_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Instantiator_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Instantiator_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(Instantiator_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(Instantiator_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Instantiator_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Instantiator_type, interface5),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(Instantiator_type, interface6),
        ::g::Fuse::Node__ISubtreeDataProvider_typeof(), offsetof(Instantiator_type, interface7),
        ::g::Fuse::IDeferred_typeof(), offsetof(Instantiator_type, interface8));
    type->SetFields(13,
        ::TYPES[58/*Fuse.Internal.ObjectList<Fuse.Reactive.Instantiator.WindowItem>*/], offsetof(::g::Fuse::Reactive::Instantiator, _availableItems), 0,
        ::TYPES[57/*Uno.Collections.Dictionary<object, Fuse.Reactive.Instantiator.WindowItem>*/], offsetof(::g::Fuse::Reactive::Instantiator, _availableItemsById), 0,
        ::g::Fuse::Triggers::BusyTask_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _busyTask), 0,
        ::TYPES[68/*Uno.Action<Fuse.Node>*/], offsetof(::g::Fuse::Reactive::Instantiator, _completedRemove), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _count), 0,
        ::TYPES[56/*Uno.Collections.Dictionary<Fuse.Node, Fuse.Reactive.Instantiator.WindowItem>*/], offsetof(::g::Fuse::Reactive::Instantiator, _dataMap), 0,
        ::g::Fuse::Reactive::InstanceDefer_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _defer), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _deferredPriority), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _hasLimit), 0,
        ::g::Fuse::Reactive::InstanceIdentity_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _identity), 0,
        ::TYPES[21/*string*/], offsetof(::g::Fuse::Reactive::Instantiator, _identityKey), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _isListeningItems), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _items), 0,
        ::TYPES[5/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::Instantiator, _itemsSubscription), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _limit), 0,
        ::TYPES[21/*string*/], offsetof(::g::Fuse::Reactive::Instantiator, _matchKey), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _offset), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _pendingAvailableItems), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _pendingNew), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _pendingUpdateWindowItems), 0,
        ::g::Fuse::Reactive::InstanceReuse_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _reuse), 0,
        ::TYPES[19/*Uno.Collections.RootableList<Uno.UX.Template>*/], offsetof(::g::Fuse::Reactive::Instantiator, _rootTemplates), 0,
        ::TYPES[61/*Uno.Collections.IList<Uno.UX.Template>*/], offsetof(::g::Fuse::Reactive::Instantiator, _templates), 0,
        ::TYPES[65/*Fuse.ITemplateSource*/], offsetof(::g::Fuse::Reactive::Instantiator, _templateSource), 0,
        ::TYPES[65/*Fuse.ITemplateSource*/], offsetof(::g::Fuse::Reactive::Instantiator, _weakTemplateSource), uFieldFlagsWeak,
        ::TYPES[58/*Fuse.Internal.ObjectList<Fuse.Reactive.Instantiator.WindowItem>*/], offsetof(::g::Fuse::Reactive::Instantiator, _windowItems), 0,
        ::TYPES[21/*string*/], offsetof(::g::Fuse::Reactive::Instantiator, _TemplateKey), 0,
        ::TYPES[23/*Uno.Action*/], offsetof(::g::Fuse::Reactive::Instantiator, UpdatedWindowItems1), 0);
    type->Reflection.SetFunctions(17,
        new uFunction("get_Defer", NULL, (void*)Instantiator__get_Defer_fn, 0, false, ::g::Fuse::Reactive::InstanceDefer_typeof(), 0),
        new uFunction("set_Defer", NULL, (void*)Instantiator__set_Defer_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Reactive::InstanceDefer_typeof()),
        new uFunction("get_DeferredPriority", NULL, (void*)Instantiator__get_DeferredPriority_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DeferredPriority", NULL, (void*)Instantiator__set_DeferredPriority_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Identity", NULL, (void*)Instantiator__get_Identity_fn, 0, false, ::g::Fuse::Reactive::InstanceIdentity_typeof(), 0),
        new uFunction("set_Identity", NULL, (void*)Instantiator__set_Identity_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Reactive::InstanceIdentity_typeof()),
        new uFunction("get_IdentityKey", NULL, (void*)Instantiator__get_IdentityKey_fn, 0, false, ::TYPES[21/*string*/], 0),
        new uFunction("set_IdentityKey", NULL, (void*)Instantiator__set_IdentityKey_fn, 0, false, uVoid_typeof(), 1, ::TYPES[21/*string*/]),
        new uFunction("get_MatchKey", NULL, (void*)Instantiator__get_MatchKey_fn, 0, false, ::TYPES[21/*string*/], 0),
        new uFunction("set_MatchKey", NULL, (void*)Instantiator__set_MatchKey_fn, 0, false, uVoid_typeof(), 1, ::TYPES[21/*string*/]),
        new uFunction("get_Reuse", NULL, (void*)Instantiator__get_Reuse_fn, 0, false, ::g::Fuse::Reactive::InstanceReuse_typeof(), 0),
        new uFunction("set_Reuse", NULL, (void*)Instantiator__set_Reuse_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Reactive::InstanceReuse_typeof()),
        new uFunction("get_TemplateKey", NULL, (void*)Instantiator__get_TemplateKey_fn, 0, false, ::TYPES[21/*string*/], 0),
        new uFunction("set_TemplateKey", NULL, (void*)Instantiator__set_TemplateKey_fn, 0, false, uVoid_typeof(), 1, ::TYPES[21/*string*/]),
        new uFunction("get_Templates", NULL, (void*)Instantiator__get_Templates_fn, 0, false, ::TYPES[61/*Uno.Collections.IList<Uno.UX.Template>*/], 0),
        new uFunction("get_TemplateSource", NULL, (void*)Instantiator__get_TemplateSource_fn, 0, false, ::TYPES[65/*Fuse.ITemplateSource*/], 0),
        new uFunction("set_TemplateSource", NULL, (void*)Instantiator__set_TemplateSource_fn, 0, false, uVoid_typeof(), 1, ::TYPES[65/*Fuse.ITemplateSource*/]));
}

Instantiator_type* Instantiator_typeof()
{
    static uSStrong<Instantiator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 41;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(Instantiator);
    options.TypeSize = sizeof(Instantiator_type);
    type = (Instantiator_type*)uClassType::New("Fuse.Reactive.Instantiator", options);
    type->fp_build_ = Instantiator_build;
    type->fp_ctor_ = (void*)Instantiator__New2_fn;
    type->fp_GetLastNodeInGroup = (void(*)(::g::Fuse::Node*, ::g::Fuse::Node**))Instantiator__GetLastNodeInGroup_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Instantiator__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Instantiator__OnUnrooted_fn;
    type->interface7.fp_GetData = (void(*)(uObject*, ::g::Fuse::Node*, uObject**))Instantiator__FuseNodeISubtreeDataProviderGetData_fn;
    type->interface6.fp_OnSet = (void(*)(uObject*, uObject*))Instantiator__FuseReactiveIObserverOnSet_fn;
    type->interface6.fp_OnFailed = (void(*)(uObject*, uString*))Instantiator__FuseReactiveIObserverOnFailed_fn;
    type->interface6.fp_OnAdd = (void(*)(uObject*, uObject*))Instantiator__FuseReactiveIObserverOnAdd_fn;
    type->interface6.fp_OnRemoveAt = (void(*)(uObject*, int*))Instantiator__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface6.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))Instantiator__FuseReactiveIObserverOnInsertAt_fn;
    type->interface6.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))Instantiator__FuseReactiveIObserverOnNewAt_fn;
    type->interface6.fp_OnNewAll = (void(*)(uObject*, uObject*))Instantiator__FuseReactiveIObserverOnNewAll_fn;
    type->interface6.fp_OnClear = (void(*)(uObject*))Instantiator__FuseReactiveIObserverOnClear_fn;
    type->interface8.fp_Perform = (void(*)(uObject*, bool*))Instantiator__FuseIDeferredPerform_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// protected internal Instantiator() :1616
void Instantiator__ctor_3_fn(Instantiator* __this)
{
    __this->ctor_3();
}

// protected internal Instantiator(Uno.Collections.IList<Uno.UX.Template> templates) :1611
void Instantiator__ctor_4_fn(Instantiator* __this, uObject* templates)
{
    __this->ctor_4(templates);
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

// private int CalcOffsetLimitCountOf(int length) :1668
void Instantiator__CalcOffsetLimitCountOf_fn(Instantiator* __this, int* length, int* __retval)
{
    *__retval = __this->CalcOffsetLimitCountOf(*length);
}

// private void CompleteActionGood() :1425
void Instantiator__CompleteActionGood_fn(Instantiator* __this)
{
    __this->CompleteActionGood();
}

// private void CompletedRemove(Fuse.Node n) :1696
void Instantiator__CompletedRemove_fn(Instantiator* __this, ::g::Fuse::Node* n)
{
    __this->CompletedRemove(n);
}

// private void CompleteNodeAction() :2036
void Instantiator__CompleteNodeAction_fn(Instantiator* __this)
{
    __this->CompleteNodeAction();
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

// protected internal int get_Count() :1168
void Instantiator__get_Count_fn(Instantiator* __this, int* __retval)
{
    *__retval = __this->Count();
}

// protected internal void set_Count(int value) :1169
void Instantiator__set_Count_fn(Instantiator* __this, int* value)
{
    __this->Count(*value);
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
    uStackFrame __("Fuse.Reactive.Instantiator", "Fuse.IDeferred.Perform()");
    __this->_pendingNew = __this->CompleteWindowItems(true);
    return *__retval = !__this->_pendingNew, void();
}

// private object Fuse.Node.ISubtreeDataProvider.GetData(Fuse.Node n) :1303
void Instantiator__FuseNodeISubtreeDataProviderGetData_fn(Instantiator* __this, ::g::Fuse::Node* n, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "Fuse.Node.ISubtreeDataProvider.GetData(Fuse.Node)");
    bool ret14;
    Instantiator__WindowItem* v;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(__this->_dataMap), n, (void**)(&v), &ret14), ret14))
    {
        if (uIs((uObject*)uPtr(v)->Data, ::TYPES[63/*Fuse.Reactive.Instantiator.CountItem*/]))
            return *__retval = NULL, void();

        return *__retval = uPtr(v)->CurrentData(), void();
    }

    return *__retval = NULL, void();
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :1450
void Instantiator__FuseReactiveIObserverOnAdd_fn(Instantiator* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "Fuse.Reactive.IObserver.OnAdd(object)");

    if (!__this->IsListeningItems())
        return;

    __this->CompleteActionGood();
}

// private void Fuse.Reactive.IObserver.OnClear() :1532
void Instantiator__FuseReactiveIObserverOnClear_fn(Instantiator* __this)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "Fuse.Reactive.IObserver.OnClear()");

    if (!__this->IsListeningItems())
        return;

    __this->RemoveAll();
    __this->CompleteActionGood();
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :1440
void Instantiator__FuseReactiveIObserverOnFailed_fn(Instantiator* __this, uString* message)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "Fuse.Reactive.IObserver.OnFailed(string)");

    if (!__this->IsListeningItems())
        return;

    __this->RemoveAll();
    __this->SetFailed(message);
    __this->CompleteNodeAction();
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :1465
void Instantiator__FuseReactiveIObserverOnInsertAt_fn(Instantiator* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "Fuse.Reactive.IObserver.OnInsertAt(int,object)");
    int index_ = *index;

    if (!__this->IsListeningItems())
        return;

    __this->InsertNew(index_);
    __this->CompleteActionGood();
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values) :1521
void Instantiator__FuseReactiveIObserverOnNewAll_fn(Instantiator* __this, uObject* values)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray)");

    if (!__this->IsListeningItems())
        return;

    if (__this->Identity() != 0)
        __this->PatchTo(values);
    else
        __this->RemoveAll();

    __this->CompleteActionGood();
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :1473
void Instantiator__FuseReactiveIObserverOnNewAt_fn(Instantiator* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "Fuse.Reactive.IObserver.OnNewAt(int,object)");
    int index_ = *index;

    if (!__this->IsListeningItems())
        return;

    if (!__this->TryUpdateAt(index_, value))
    {
        __this->RemoveAt(index_);
        __this->InsertNew(index_);
    }

    __this->CompleteActionGood();
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :1457
void Instantiator__FuseReactiveIObserverOnRemoveAt_fn(Instantiator* __this, int* index)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "Fuse.Reactive.IObserver.OnRemoveAt(int)");
    int index_ = *index;

    if (!__this->IsListeningItems())
        return;

    __this->RemoveAt(index_);
    __this->CompleteActionGood();
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :1432
void Instantiator__FuseReactiveIObserverOnSet_fn(Instantiator* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "Fuse.Reactive.IObserver.OnSet(object)");

    if (!__this->IsListeningItems())
        return;

    __this->RemoveAll();
    __this->CompleteActionGood();
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
    uStackFrame __("Fuse.Reactive.Instantiator", "GetLastNodeInGroup()");
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

// private bool get_IsListeningItems() :1647
void Instantiator__get_IsListeningItems_fn(Instantiator* __this, bool* __retval)
{
    *__retval = __this->IsListeningItems();
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

// protected internal Instantiator New() :1616
void Instantiator__New2_fn(Instantiator** __retval)
{
    *__retval = Instantiator::New2();
}

// protected internal Instantiator New(Uno.Collections.IList<Uno.UX.Template> templates) :1611
void Instantiator__New3_fn(uObject* templates, Instantiator** __retval)
{
    *__retval = Instantiator::New3(templates);
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
    uStackFrame __("Fuse.Reactive.Instantiator", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->OnItemsChanged();

    if (__this->_rootTemplates != NULL)
        uPtr(__this->_rootTemplates)->Subscribe(uDelegate::New(::TYPES[17/*Uno.Action<Uno.UX.Template>*/], (void*)Instantiator__OnTemplatesChanged_fn, __this), uDelegate::New(::TYPES[17/*Uno.Action<Uno.UX.Template>*/], (void*)Instantiator__OnTemplatesChanged_fn, __this));

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
    uStackFrame __("Fuse.Reactive.Instantiator", "OnUnrooted()");
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

// private void PatchTo(Fuse.IArray values) :1486
void Instantiator__PatchTo_fn(Instantiator* __this, uObject* values)
{
    __this->PatchTo(values);
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

// private void RemovePendingAvailableItemsAction() :2053
void Instantiator__RemovePendingAvailableItemsAction_fn(Instantiator* __this)
{
    __this->RemovePendingAvailableItemsAction();
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

// private void SetFailed(string message) :1681
void Instantiator__SetFailed_fn(Instantiator* __this, uString* message)
{
    __this->SetFailed(message);
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

// public Fuse.ITemplateSource get_TemplateSource() :1061
void Instantiator__get_TemplateSource_fn(Instantiator* __this, uObject** __retval)
{
    *__retval = __this->TemplateSource();
}

// public void set_TemplateSource(Fuse.ITemplateSource value) :1062
void Instantiator__set_TemplateSource_fn(Instantiator* __this, uObject* value)
{
    __this->TemplateSource(value);
}

// private void TrimAndPad() :2256
void Instantiator__TrimAndPad_fn(Instantiator* __this)
{
    __this->TrimAndPad();
}

// private bool TryUpdateAt(int dataIndex, object newData) :1910
void Instantiator__TryUpdateAt_fn(Instantiator* __this, int* dataIndex, uObject* newData, bool* __retval)
{
    *__retval = __this->TryUpdateAt(*dataIndex, newData);
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

// protected internal Instantiator() [instance] :1616
void Instantiator::ctor_3()
{
    uStackFrame __("Fuse.Reactive.Instantiator", ".ctor()");
    _defer = 1;
    _deferredPriority = 0.0f;
    _dataMap = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[56/*Uno.Collections.Dictionary<Fuse.Node, Fuse.Reactive.Instantiator.WindowItem>*/]));
    _availableItemsById = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[57/*Uno.Collections.Dictionary<object, Fuse.Reactive.Instantiator.WindowItem>*/]));
    _availableItems = ((::g::Fuse::Internal::ObjectList*)::g::Fuse::Internal::ObjectList::New1(::TYPES[58/*Fuse.Internal.ObjectList<Fuse.Reactive.Instantiator.WindowItem>*/], 0));
    _windowItems = ((::g::Fuse::Internal::ObjectList*)::g::Fuse::Internal::ObjectList::New1(::TYPES[58/*Fuse.Internal.ObjectList<Fuse.Reactive.Instantiator.WindowItem>*/], 0));
    ctor_2();
}

// protected internal Instantiator(Uno.Collections.IList<Uno.UX.Template> templates) [instance] :1611
void Instantiator::ctor_4(uObject* templates)
{
    uStackFrame __("Fuse.Reactive.Instantiator", ".ctor(Uno.Collections.IList<Uno.UX.Template>)");
    _defer = 1;
    _deferredPriority = 0.0f;
    _dataMap = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[56/*Uno.Collections.Dictionary<Fuse.Node, Fuse.Reactive.Instantiator.WindowItem>*/]));
    _availableItemsById = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[57/*Uno.Collections.Dictionary<object, Fuse.Reactive.Instantiator.WindowItem>*/]));
    _availableItems = ((::g::Fuse::Internal::ObjectList*)::g::Fuse::Internal::ObjectList::New1(::TYPES[58/*Fuse.Internal.ObjectList<Fuse.Reactive.Instantiator.WindowItem>*/], 0));
    _windowItems = ((::g::Fuse::Internal::ObjectList*)::g::Fuse::Internal::ObjectList::New1(::TYPES[58/*Fuse.Internal.ObjectList<Fuse.Reactive.Instantiator.WindowItem>*/], 0));
    ctor_2();
    _templates = templates;
}

// private bool AddMatchingTemplates(Fuse.Reactive.Instantiator.WindowItem item, Fuse.Reactive.Instantiator.TemplateMatch f) [instance] :1939
bool Instantiator::AddMatchingTemplates(Instantiator__WindowItem* item, Instantiator__TemplateMatch f)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "AddMatchingTemplates(Fuse.Reactive.Instantiator.WindowItem,Fuse.Reactive.Instantiator.TemplateMatch)");
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
        uPtr(item)->Nodes = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[59/*Uno.Collections.List<Fuse.Node>*/]));

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Templates()), ::TYPES[60/*Uno.Collections.ICollection<Uno.UX.Template>*/])); ++i)
            AddTemplate(item, (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Templates()), ::TYPES[61/*Uno.Collections.IList<Uno.UX.Template>*/]), uCRef<int>(i), &ret7), ret7));
    }
    else if (f.Template == NULL)
        uPtr(item)->Nodes = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[59/*Uno.Collections.List<Fuse.Node>*/]));
    else
    {
        uPtr(item)->Nodes = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[59/*Uno.Collections.List<Fuse.Node>*/]));
        AddTemplate(item, f.Template);
    }

    UpdateData(item, oldData);
    item->Template = f;
    return reuse;
}

// private void AddTemplate(Fuse.Reactive.Instantiator.WindowItem item, Uno.UX.Template f) [instance] :1973
void Instantiator::AddTemplate(Instantiator__WindowItem* item, ::g::Uno::UX::Template* f)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "AddTemplate(Fuse.Reactive.Instantiator.WindowItem,Uno.UX.Template)");
    ::g::Fuse::Node* elm = uAs< ::g::Fuse::Node*>(uPtr(f)->New1(), ::TYPES[50/*Fuse.Node*/]);

    if (elm == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[62/*"Template co...*/], this, ::STRINGS[42/*"C:\\Users\\...*/], 1978, ::STRINGS[63/*"AddTemplate"*/]);
        return;
    }

    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(item)->Nodes), elm);
}

// private void Append() [instance] :2141
void Instantiator::Append()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "Append()");
    InsertNew(Offset() + uPtr(_windowItems)->Count());
}

// private int CalcOffsetLimitCountOf(int length) [instance] :1668
int Instantiator::CalcOffsetLimitCountOf(int length)
{
    int q = ::g::Uno::Math::Max8(0, length - Offset());
    return HasLimit() ? ::g::Uno::Math::Min8(Limit(), q) : q;
}

// private void CompleteActionGood() [instance] :1425
void Instantiator::CompleteActionGood()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "CompleteActionGood()");
    TrimAndPad();
    SetValid();
    CompleteNodeAction();
}

// private void CompletedRemove(Fuse.Node n) [instance] :1696
void Instantiator::CompletedRemove(::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "CompletedRemove(Fuse.Node)");
    bool ret8;
    uPtr(n)->OverrideContextParent = NULL;
    ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(_dataMap), n, &ret8);
}

// private void CompleteNodeAction() [instance] :2036
void Instantiator::CompleteNodeAction()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "CompleteNodeAction()");

    if (Reuse() == 1)
    {
        if (!_pendingAvailableItems)
        {
            ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)Instantiator__RemovePendingAvailableItemsAction_fn, this), -1, 0);
            _pendingAvailableItems = true;
        }
    }
    else if (!_pendingNew)
        RemovePendingAvailableItems();
}

// private void CompleteWindowItem(Fuse.Reactive.Instantiator.WindowItem wi, int windowIndex) [instance] :1881
void Instantiator::CompleteWindowItem(Instantiator__WindowItem* wi, int windowIndex)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "CompleteWindowItem(Fuse.Reactive.Instantiator.WindowItem,int)");
    int ret9;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret10;
    int ret11;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret12;
    uPtr(wi)->Id = GetDataId(uPtr(wi)->Data);
    Instantiator__TemplateMatch match = GetDataTemplate(wi->Data);
    bool reuse = AddMatchingTemplates(wi, match);

    if ((wi->Template.All && (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Templates()), ::TYPES[60/*Uno.Collections.ICollection<Uno.UX.Template>*/])) != uPtr(wi->Nodes)->Count())) || ((wi->Template.Template != NULL) && (uPtr(wi->Nodes)->Count() != 1)))
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[64/*"inconsisten...*/], this, ::STRINGS[42/*"C:\\Users\\...*/], 1891, ::STRINGS[65/*"CompleteWin...*/]);

    ::g::Fuse::Node* lastNode = GetLastNodeFromIndex(windowIndex - 1);

    if (reuse)
        uPtr(Parent())->InsertOrMoveNodes((::g::Uno::Collections::EnumerableExtensions__IndexOf_fn(::TYPES[62/*Uno.Collections.EnumerableExtensions.IndexOf<Fuse.Node>*/], uPtr(Parent())->Children(), lastNode, &ret9), ret9) + 1, uBox(::TYPES[82/*Uno.Collections.List<Fuse.Node>.Enumerator*/], (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(uPtr(wi)->Nodes), &ret10), ret10)));
    else
        uPtr(Parent())->InsertNodes((::g::Uno::Collections::EnumerableExtensions__IndexOf_fn(::TYPES[62/*Uno.Collections.EnumerableExtensions.IndexOf<Fuse.Node>*/], uPtr(Parent())->Children(), lastNode, &ret11), ret11) + 1, uBox(::TYPES[82/*Uno.Collections.List<Fuse.Node>.Enumerator*/], (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(uPtr(wi)->Nodes), &ret12), ret12)));
}

// private bool CompleteWindowItems(bool one) [instance] :1802
bool Instantiator::CompleteWindowItems(bool one)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "CompleteWindowItems(bool)");

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
    uStackFrame __("Fuse.Reactive.Instantiator", "CompleteWindowItemsAction()");
    CompleteWindowItems(false);
    _pendingNew = false;
}

// protected internal int get_Count() [instance] :1168
int Instantiator::Count()
{
    return _count;
}

// protected internal void set_Count(int value) [instance] :1169
void Instantiator::Count(int value)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "set_Count(int)");

    if (_count == value)
        return;

    _count = value;
    uArray* items = uArray::New(::TYPES[6/*object[]*/], _count);

    for (int i = 0; i < _count; ++i)
        uPtr(items)->Strong<uObject*>(i) = Instantiator__CountItem::New1();

    _items = items;
    OnItemsChanged();
}

// internal int DataIndexOfChild(Fuse.Node child) [instance] :1261
int Instantiator::DataIndexOfChild(::g::Fuse::Node* child)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "DataIndexOfChild(Fuse.Node)");
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
    uStackFrame __("Fuse.Reactive.Instantiator", "DisposeItemsSubscription()");
    _isListeningItems = false;

    if (_itemsSubscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_itemsSubscription), ::TYPES[5/*Uno.IDisposable*/]));
        _itemsSubscription = NULL;
    }
}

// private Fuse.Reactive.Instantiator.WindowItem GetAvailableNodes(Fuse.Reactive.Instantiator.TemplateMatch f, object id) [instance] :1998
Instantiator__WindowItem* Instantiator::GetAvailableNodes(Instantiator__TemplateMatch f, uObject* id)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "GetAvailableNodes(Fuse.Reactive.Instantiator.TemplateMatch,object)");
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
    uStackFrame __("Fuse.Reactive.Instantiator", "GetData(int)");
    uArray* e = uAs<uArray*>(_items, ::TYPES[6/*object[]*/]);

    if (e != NULL)
        return uPtr(e)->Strong<uObject*>(dataIndex);

    uObject* a = uAs<uObject*>(_items, ::TYPES[39/*Fuse.IArray*/]);

    if (a != NULL)
        return ::g::Fuse::IArray::Item(uInterface(uPtr(a), ::TYPES[39/*Fuse.IArray*/]), dataIndex);

    return NULL;
}

// private int GetDataCount() [instance] :1290
int Instantiator::GetDataCount()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "GetDataCount()");
    uArray* e = uAs<uArray*>(_items, ::TYPES[6/*object[]*/]);

    if (e != NULL)
        return uPtr(e)->Length();

    uObject* a = uAs<uObject*>(_items, ::TYPES[39/*Fuse.IArray*/]);

    if (a != NULL)
        return ::g::Fuse::IArray::Length(uInterface(uPtr(a), ::TYPES[39/*Fuse.IArray*/]));

    return 0;
}

// private object GetDataId(object data) [instance] :1360
uObject* Instantiator::GetDataId(uObject* data)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "GetDataId(object)");

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
    uStackFrame __("Fuse.Reactive.Instantiator", "GetDataKey(object,string)");
    uObject* so = uAs<uObject*>(data, ::TYPES[64/*Fuse.IObject*/]);

    if ((so != NULL) && ::g::Uno::String::op_Inequality(key, NULL))
    {
        if (::g::Fuse::IObject::ContainsKey(uInterface(uPtr(so), ::TYPES[64/*Fuse.IObject*/]), key))
            return ::g::Fuse::IObject::Item(uInterface(uPtr(so), ::TYPES[64/*Fuse.IObject*/]), key);
    }

    return NULL;
}

// private Fuse.Reactive.Instantiator.TemplateMatch GetDataTemplate(object data) [instance] :1842
Instantiator__TemplateMatch Instantiator::GetDataTemplate(uObject* data)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "GetDataTemplate(object)");
    Instantiator__TemplateMatch collection2;
    Instantiator__TemplateMatch collection3;
    ::g::Uno::UX::Template* ret17;
    ::g::Uno::UX::Template* useTemplate = NULL;
    ::g::Uno::UX::Template* defaultTemplate = NULL;

    if ((_templateSource != NULL) && ::g::Uno::String::op_Inequality(TemplateKey(), NULL))
    {
        ::g::Uno::UX::Template* t = ::g::Fuse::ITemplateSource::FindTemplate(uInterface(uPtr(_templateSource), ::TYPES[65/*Fuse.ITemplateSource*/]), TemplateKey());

        if (t != NULL)
            useTemplate = t;
    }

    if (useTemplate == NULL)
    {
        uString* key = uAs<uString*>(GetDataKey(data, MatchKey()), ::TYPES[21/*string*/]);

        for (int i = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Templates()), ::TYPES[60/*Uno.Collections.ICollection<Uno.UX.Template>*/])) - 1; i >= 0; --i)
        {
            ::g::Uno::UX::Template* f = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Templates()), ::TYPES[61/*Uno.Collections.IList<Uno.UX.Template>*/]), uCRef<int>(i), &ret17), ret17);

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
    uStackFrame __("Fuse.Reactive.Instantiator", "GetLastNodeFromIndex(int)");
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
    uStackFrame __("Fuse.Reactive.Instantiator", "InsertNew(int)");

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
    uStackFrame __("Fuse.Reactive.Instantiator", "InsertNewWindowItem(int,object)");
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
            ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)Instantiator__CompleteWindowItemsAction_fn, this), -1, 0);

        _pendingNew = true;
    }

    OnUpdatedWindowItems();
}

// private bool get_IsListeningItems() [instance] :1647
bool Instantiator::IsListeningItems()
{
    return _isListeningItems;
}

// internal int get_Limit() [instance] :1140
int Instantiator::Limit()
{
    return _limit;
}

// internal void set_Limit(int value) [instance] :1141
void Instantiator::Limit(int value)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "set_Limit(int)");

    if (_hasLimit && (_limit == value))
        return;

    if (value < 0)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[66/*"Limit canno...*/], this, ::STRINGS[42/*"C:\\Users\\...*/], 1148, ::STRINGS[67/*"set_Limit"*/], NULL);
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
    uStackFrame __("Fuse.Reactive.Instantiator", "set_MatchKey(string)");

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
    uStackFrame __("Fuse.Reactive.Instantiator", "set_Offset(int)");

    if (_offset == value)
        return;

    if (value < 0)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[68/*"Offset cann...*/], this, ::STRINGS[42/*"C:\\Users\\...*/], 1100, ::STRINGS[69/*"set_Offset"*/], NULL);
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
    uStackFrame __("Fuse.Reactive.Instantiator", "OnItemsChanged()");

    if (!IsRootingStarted())
        return;

    DisposeItemsSubscription();
    RemoveAll();
    uObject* obs = uAs<uObject*>(_items, ::TYPES[41/*Fuse.Reactive.IObservable*/]);

    if (obs != NULL)
    {
        StartListeningItems();
        _itemsSubscription = ::g::Fuse::Reactive::IObservable::Subscribe(uInterface(uPtr(obs), ::TYPES[41/*Fuse.Reactive.IObservable*/]), (uObject*)this);
    }
    else
        Repopulate();
}

// private void OnTemplatesChanged(Uno.UX.Template factory) [instance] :1620
void Instantiator::OnTemplatesChanged(::g::Uno::UX::Template* factory)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "OnTemplatesChanged(Uno.UX.Template)");

    if (!IsRootingCompleted())
        return;

    Repopulate();
}

// private void OnUpdatedWindowItems() [instance] :2233
void Instantiator::OnUpdatedWindowItems()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "OnUpdatedWindowItems()");

    if (::g::Uno::Delegate::op_Equality(UpdatedWindowItems1, NULL) || _pendingUpdateWindowItems)
        return;

    _pendingUpdateWindowItems = true;
    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)Instantiator__PostUpdatedWindowItems_fn, this), -1, 0);
}

// private void PatchTo(Fuse.IArray values) [instance] :1486
void Instantiator::PatchTo(uObject* values)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "PatchTo(Fuse.IArray)");
    ::g::Uno::Collections::List* ret19;
    ::g::Fuse::Reactive::Internal::PatchItem ret20;
    ::g::Uno::Collections::List* newIds = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[66/*Uno.Collections.List<object>*/]);
    int limit = CalcOffsetLimitCountOf(::g::Fuse::IArray::Length(uInterface(uPtr(values), ::TYPES[39/*Fuse.IArray*/])));

    for (int i = 0; i < limit; ++i)
        ::g::Uno::Collections::List__Add_fn(uPtr(newIds), GetDataId(::g::Fuse::IArray::Item(uInterface(uPtr(values), ::TYPES[39/*Fuse.IArray*/]), i + Offset())));

    ::g::Uno::Collections::List* curIds = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[66/*Uno.Collections.List<object>*/]);

    for (int i1 = 0; i1 < uPtr(_windowItems)->Count(); ++i1)
        ::g::Uno::Collections::List__Add_fn(uPtr(curIds), uPtr((Instantiator__WindowItem*)uPtr(_windowItems)->Item(i1))->Id);

    ::g::Uno::Collections::List* ops = (::g::Fuse::Reactive::Internal::PatchList__Patch_fn(::TYPES[67/*Fuse.Reactive.Internal.PatchList.Patch<object>*/], (uObject*)curIds, (uObject*)newIds, uCRef<int>(1), NULL, &ret19), ret19);

    for (int i2 = 0; i2 < uPtr(ops)->Count(); ++i2)
    {
        ::g::Fuse::Reactive::Internal::PatchItem op = (::g::Uno::Collections::List__get_Item_fn(uPtr(ops), uCRef<int>(i2), &ret20), ret20);

        switch (op.Op)
        {
            case 0:
            {
                RemoveAt(op.A + Offset());
                break;
            }
            case 1:
            {
                InsertNewWindowItem(DataToWindowIndex(op.A + Offset()), ::g::Fuse::IArray::Item(uInterface(uPtr(values), ::TYPES[39/*Fuse.IArray*/]), op.Data));
                break;
            }
            case 2:
            {
                if (!TryUpdateAt(op.A + Offset(), ::g::Fuse::IArray::Item(uInterface(uPtr(values), ::TYPES[39/*Fuse.IArray*/]), op.Data)))
                {
                    RemoveAt(op.A + Offset());
                    InsertNewWindowItem(DataToWindowIndex(op.A + Offset()), ::g::Fuse::IArray::Item(uInterface(uPtr(values), ::TYPES[39/*Fuse.IArray*/]), op.Data));
                }

                break;
            }
        }
    }
}

// private void PostUpdatedWindowItems() [instance] :2243
void Instantiator::PostUpdatedWindowItems()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "PostUpdatedWindowItems()");

    if (::g::Uno::Delegate::op_Inequality(UpdatedWindowItems1, NULL))
        uPtr(UpdatedWindowItems1)->InvokeVoid();

    _pendingUpdateWindowItems = false;
}

// private void RemoveAll() [instance] :2154
void Instantiator::RemoveAll()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "RemoveAll()");

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
    uStackFrame __("Fuse.Reactive.Instantiator", "RemoveAt(int)");
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
    uStackFrame __("Fuse.Reactive.Instantiator", "RemoveFromParent(Fuse.Node)");

    if (::g::Uno::Delegate::op_Equality(_completedRemove, NULL))
        _completedRemove = uDelegate::New(::TYPES[68/*Uno.Action<Fuse.Node>*/], (void*)Instantiator__CompletedRemove_fn, this);

    uPtr(Parent())->BeginRemoveChild(n, _completedRemove);
}

// private void RemoveLastActive() [instance] :2136
void Instantiator::RemoveLastActive()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "RemoveLastActive()");
    RemoveAt((Offset() + uPtr(_windowItems)->Count()) - 1);
}

// private void RemovePendingAvailableItems() [instance] :2061
void Instantiator::RemovePendingAvailableItems()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "RemovePendingAvailableItems()");
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
        for (::g::Uno::Collections::Dictionary__Enumerator<uStrong<uObject*>, uStrong<Instantiator__WindowItem*> > enum4 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_availableItemsById), &ret22), ret22); enum4.MoveNext(::TYPES[69/*Uno.Collections.Dictionary<object, Fuse.Reactive.Instantiator.WindowItem>.Enumerator*/]); )
        {
            ::g::Uno::Collections::KeyValuePair<uStrong<uObject*>, uStrong<Instantiator__WindowItem*> > kvp = enum4.Current(::TYPES[69/*Uno.Collections.Dictionary<object, Fuse.Reactive.Instantiator.WindowItem>.Enumerator*/]);

            if (uPtr(kvp.Value(::TYPES[70/*Uno.Collections.KeyValuePair<object, Fuse.Reactive.Instantiator.WindowItem>*/]))->Nodes == NULL)
                continue;

            for (int n1 = 0; n1 < uPtr(uPtr(kvp.Value(::TYPES[70/*Uno.Collections.KeyValuePair<object, Fuse.Reactive.Instantiator.WindowItem>*/]))->Nodes)->Count(); ++n1)
                RemoveFromParent((::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(kvp.Value(::TYPES[70/*Uno.Collections.KeyValuePair<object, Fuse.Reactive.Instantiator.WindowItem>*/]))->Nodes), uCRef<int>(n1), &ret23), ret23));

            uPtr(kvp.Value(::TYPES[70/*Uno.Collections.KeyValuePair<object, Fuse.Reactive.Instantiator.WindowItem>*/]))->Unlink();
        }

        uPtr(_availableItemsById)->Clear();
    }

    _pendingNew = false;
}

// private void RemovePendingAvailableItemsAction() [instance] :2053
void Instantiator::RemovePendingAvailableItemsAction()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "RemovePendingAvailableItemsAction()");

    if (!_pendingNew)
        RemovePendingAvailableItems();

    _pendingAvailableItems = false;
}

// private void RemoveWindowItem(Fuse.Reactive.Instantiator.WindowItem wi) [instance] :2093
void Instantiator::RemoveWindowItem(Instantiator__WindowItem* wi)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "RemoveWindowItem(Fuse.Reactive.Instantiator.WindowItem)");
    bool ret24;

    if ((uPtr(wi)->Nodes == NULL) || (uPtr(uPtr(wi)->Nodes)->Count() == 0))
        return;

    if (uPtr(wi)->Id != NULL)
    {
        if (_availableItemsById == NULL)
            _availableItemsById = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[57/*Uno.Collections.Dictionary<object, Fuse.Reactive.Instantiator.WindowItem>*/]));

        if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(_availableItemsById), uPtr(wi)->Id, &ret24), ret24))
            uPtr(wi)->Id = NULL;
        else
            ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(_availableItemsById), uPtr(wi)->Id, wi);
    }

    if (uPtr(wi)->Id == NULL)
    {
        if (_availableItems == NULL)
            _availableItems = ((::g::Fuse::Internal::ObjectList*)::g::Fuse::Internal::ObjectList::New1(::TYPES[58/*Fuse.Internal.ObjectList<Fuse.Reactive.Instantiator.WindowItem>*/], 0));

        uPtr(_availableItems)->Add(wi);
    }
}

// private void ReplaceAll(object[] dcs) [instance] :2146
void Instantiator::ReplaceAll(uArray* dcs)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "ReplaceAll(object[])");
    RemoveAll();

    for (int i = 0; i < uPtr(dcs)->Length(); i++)
        InsertNew(i);
}

// private void Repopulate() [instance] :2167
void Instantiator::Repopulate()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "Repopulate()");
    uArray* e = uAs<uArray*>(_items, ::TYPES[6/*object[]*/]);
    uObject* a = uAs<uObject*>(_items, ::TYPES[39/*Fuse.IArray*/]);

    if (e != NULL)
    {
        ReplaceAll(e);
        return;
    }
    else if (a != NULL)
    {
        RemoveAll();

        for (int i = 0; i < ::g::Fuse::IArray::Length(uInterface(uPtr(a), ::TYPES[39/*Fuse.IArray*/])); i++)
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

// private void SetFailed(string message) [instance] :1681
void Instantiator::SetFailed(uString* message)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "SetFailed(string)");

    if (Parent() != NULL)
        ::g::Fuse::Triggers::BusyTask::SetBusy(Parent(), &_busyTask, 16, message);
}

// private void SetValid() [instance] :1675
void Instantiator::SetValid()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "SetValid()");

    if (Parent() != NULL)
        ::g::Fuse::Triggers::BusyTask::SetBusy(Parent(), &_busyTask, 0, ::STRINGS[26/*""*/]);
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
    uStackFrame __("Fuse.Reactive.Instantiator", "get_Templates()");

    if (_templates != NULL)
        return _templates;

    _rootTemplates = ((::g::Uno::Collections::RootableList*)::g::Uno::Collections::RootableList::New1(::TYPES[19/*Uno.Collections.RootableList<Uno.UX.Template>*/]));

    if (IsRootingCompleted())
        uPtr(_rootTemplates)->Subscribe(uDelegate::New(::TYPES[17/*Uno.Action<Uno.UX.Template>*/], (void*)Instantiator__OnTemplatesChanged_fn, this), uDelegate::New(::TYPES[17/*Uno.Action<Uno.UX.Template>*/], (void*)Instantiator__OnTemplatesChanged_fn, this));

    _templates = (uObject*)_rootTemplates;
    return _templates;
}

// public Fuse.ITemplateSource get_TemplateSource() [instance] :1061
uObject* Instantiator::TemplateSource()
{
    return _weakTemplateSource;
}

// public void set_TemplateSource(Fuse.ITemplateSource value) [instance] :1062
void Instantiator::TemplateSource(uObject* value)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "set_TemplateSource(Fuse.ITemplateSource)");
    _weakTemplateSource = value;

    if (IsRootingCompleted())
    {
        _templateSource = _weakTemplateSource;
        Repopulate();
    }
}

// private void TrimAndPad() [instance] :2256
void Instantiator::TrimAndPad()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "TrimAndPad()");

    if (HasLimit())

        for (int i = uPtr(_windowItems)->Count() - _limit; i > 0; --i)
            RemoveLastActive();

    int dataCount = GetDataCount();
    int add = HasLimit() ? ::g::Uno::Math::Min8(_limit - uPtr(_windowItems)->Count(), dataCount - (Offset() + uPtr(_windowItems)->Count())) : dataCount - (Offset() + uPtr(_windowItems)->Count());

    for (int i1 = 0; i1 < add; ++i1)
        Append();
}

// private bool TryUpdateAt(int dataIndex, object newData) [instance] :1910
bool Instantiator::TryUpdateAt(int dataIndex, uObject* newData)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "TryUpdateAt(int,object)");

    if (Identity() == 0)
        return false;

    int windowIndex = DataToWindowIndex(dataIndex);

    if ((windowIndex < 0) || (windowIndex >= uPtr(_windowItems)->Count()))
        return false;

    Instantiator__WindowItem* wi = (Instantiator__WindowItem*)uPtr(_windowItems)->Item(windowIndex);
    uObject* newId = GetDataId(newData);

    if ((uPtr(wi)->Id == NULL) || !::g::Uno::Object::Equals1(uPtr(wi)->Id, newId))
        return false;

    Instantiator__TemplateMatch tpl = GetDataTemplate(newData);

    if (!uPtr(wi)->Template.Matches(tpl))
        return false;

    uObject* oldData = uPtr(wi)->CurrentData();
    wi->Data = newData;
    UpdateData(wi, oldData);
    return true;
}

// private void UpdateData(Fuse.Reactive.Instantiator.WindowItem item, object oldData) [instance] :1319
void Instantiator::UpdateData(Instantiator__WindowItem* item, uObject* oldData)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "UpdateData(Fuse.Reactive.Instantiator.WindowItem,object)");
    ::g::Fuse::Node* ret25;

    if (uPtr(item)->DataLink != NULL)
    {
        uPtr(uPtr(item)->DataLink)->Dispose();
        item->DataLink = NULL;
    }

    uObject* obs = uAs<uObject*>(uPtr(item)->Data, ::TYPES[41/*Fuse.Reactive.IObservable*/]);

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
    uStackFrame __("Fuse.Reactive.Instantiator", "add_UpdatedWindowItems(Uno.Action)");
    UpdatedWindowItems1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(UpdatedWindowItems1, value), ::TYPES[23/*Uno.Action*/]);
}

// internal generated void remove_UpdatedWindowItems(Uno.Action value) [instance] :2231
void Instantiator::remove_UpdatedWindowItems(uDelegate* value)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "remove_UpdatedWindowItems(Uno.Action)");
    UpdatedWindowItems1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(UpdatedWindowItems1, value), ::TYPES[23/*Uno.Action*/]);
}

// protected internal Instantiator New() [static] :1616
Instantiator* Instantiator::New2()
{
    Instantiator* obj6 = (Instantiator*)uNew(Instantiator_typeof());
    obj6->ctor_3();
    return obj6;
}

// protected internal Instantiator New(Uno.Collections.IList<Uno.UX.Template> templates) [static] :1611
Instantiator* Instantiator::New3(uObject* templates)
{
    Instantiator* obj5 = (Instantiator*)uNew(Instantiator_typeof());
    obj5->ctor_4(templates);
    return obj5;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\$.uno
// ----------------------------------------------------------------------------------

// public abstract class InstantiatorFunction :2289
// {
// static InstantiatorFunction() :2289
static void InstantiatorFunction__cctor__fn(uType* __type)
{
    InstantiatorFunction::DataIndexName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[70/*"index"*/]);
    InstantiatorFunction::OffsetIndexName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[71/*"offsetIndex"*/]);
}

static void InstantiatorFunction_build(uType* type)
{
    ::STRINGS[70] = uString::Const("index");
    ::STRINGS[71] = uString::Const("offsetIndex");
    ::STRINGS[72] = uString::Const("too many parameters for ");
    ::STRINGS[42] = uString::Const("C:\\Users\\Lotus\\AppData\\Local\\Fusetools\\Packages\\Fuse.Reactive.Bindings\\1.2.0\\$.uno");
    ::STRINGS[73] = uString::Const("Subscribe");
    ::TYPES[71] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Expression_typeof(), NULL);
    ::TYPES[72] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Expression_typeof(), NULL);
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

// internal InstantiatorFunction(Uno.UX.Selector item) :2296
void InstantiatorFunction__ctor_2_fn(InstantiatorFunction* __this, ::g::Uno::UX::Selector* item)
{
    __this->ctor_2(*item);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :2307
void InstantiatorFunction__Subscribe_fn(InstantiatorFunction* __this, uObject* context, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.InstantiatorFunction", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    ::g::Fuse::Reactive::Expression* ret1;

    if (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Arguments()), ::TYPES[71/*Uno.Collections.ICollection<Fuse.Reactive.Expression>*/])) > 1)
    {
        ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::STRINGS[72/*"too many pa...*/], ::g::Uno::UX::Selector__op_Implicit1(__this->_item)), __this, ::STRINGS[42/*"C:\\Users\\...*/], 2311, ::STRINGS[73/*"Subscribe"*/], NULL);
        return *__retval = NULL, void();
    }

    ::g::Fuse::Reactive::Expression* node = (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Arguments()), ::TYPES[71/*Uno.Collections.ICollection<Fuse.Reactive.Expression>*/])) > 0) ? (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->Arguments()), ::TYPES[72/*Uno.Collections.IList<Fuse.Reactive.Expression>*/]), uCRef<int>(0), &ret1), ret1) : NULL;
    return *__retval = (uObject*)InstantiatorFunction__InstantiatorSubscription::New1(__this, __this->_item, listener, context, (uObject*)node), void();
}

// public override sealed string ToString() :2302
void InstantiatorFunction__ToString_fn(InstantiatorFunction* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.InstantiatorFunction", "ToString()");
    return *__retval = __this->FormatString(::g::Uno::UX::Selector__op_Implicit1(__this->_item)), void();
}

::g::Uno::UX::Selector InstantiatorFunction::DataIndexName_;
::g::Uno::UX::Selector InstantiatorFunction::OffsetIndexName_;

// internal InstantiatorFunction(Uno.UX.Selector item) [instance] :2296
void InstantiatorFunction::ctor_2(::g::Uno::UX::Selector item)
{
    ctor_1();
    _item = item;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\$.uno
// ----------------------------------------------------------------------------------

// private sealed class InstantiatorFunction.InstantiatorSubscription :2319
// {
static void InstantiatorFunction__InstantiatorSubscription_build(uType* type)
{
    ::STRINGS[74] = uString::Const("invalid search node for InstantiatorFunction");
    ::STRINGS[42] = uString::Const("C:\\Users\\Lotus\\AppData\\Local\\Fusetools\\Packages\\Fuse.Reactive.Bindings\\1.2.0\\$.uno");
    ::STRINGS[75] = uString::Const("OnNewNode");
    ::STRINGS[76] = uString::Const("Could not find an Instantiator");
    ::STRINGS[77] = uString::Const("Unable to resolve Instantiator node");
    ::TYPES[46] = ::g::Fuse::Reactive::IExpression_typeof();
    ::TYPES[23] = ::g::Uno::Action_typeof();
    ::TYPES[5] = ::g::Uno::IDisposable_typeof();
    ::TYPES[50] = ::g::Fuse::Node_typeof();
    ::TYPES[38] = ::g::Fuse::Reactive::IContext_typeof();
    ::TYPES[73] = ::TYPES[50/*Fuse.Node*/]->MakeMethod(0/*FindBehavior<Fuse.Reactive.Instantiator>*/, ::g::Fuse::Reactive::Instantiator_typeof(), NULL);
    ::TYPES[10] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::TYPES[5/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface0),
        ::TYPES[10/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface1));
    type->SetFields(2,
        ::TYPES[38/*Fuse.Reactive.IContext*/], offsetof(::g::Fuse::Reactive::InstantiatorFunction__InstantiatorSubscription, _context), 0,
        ::g::Fuse::Reactive::InstantiatorFunction_typeof(), offsetof(::g::Fuse::Reactive::InstantiatorFunction__InstantiatorSubscription, _expr), 0,
        ::TYPES[50/*Fuse.Node*/], offsetof(::g::Fuse::Reactive::InstantiatorFunction__InstantiatorSubscription, _instance), 0,
        ::g::Fuse::Reactive::Instantiator_typeof(), offsetof(::g::Fuse::Reactive::InstantiatorFunction__InstantiatorSubscription, _instantiator), 0,
        ::g::Uno::UX::Selector_typeof(), offsetof(::g::Fuse::Reactive::InstantiatorFunction__InstantiatorSubscription, _item), 0,
        ::TYPES[10/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::InstantiatorFunction__InstantiatorSubscription, _listener), 0,
        ::TYPES[46/*Fuse.Reactive.IExpression*/], offsetof(::g::Fuse::Reactive::InstantiatorFunction__InstantiatorSubscription, _node), 0,
        ::TYPES[5/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::InstantiatorFunction__InstantiatorSubscription, _nodeSub), 0);
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
    uStackFrame __("Fuse.Reactive.InstantiatorFunction.InstantiatorSubscription", "Dispose()");
    ::g::Fuse::Reactive::InnerListener__Dispose_fn(__this);
    __this->_expr = NULL;
    __this->_listener = NULL;

    if (__this->_instantiator != NULL)
        uPtr(__this->_instantiator)->remove_UpdatedWindowItems(uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)InstantiatorFunction__InstantiatorSubscription__OnUpdatedWindowItems_fn, __this));

    __this->_instantiator = NULL;

    if (__this->_nodeSub != NULL)
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_nodeSub), ::TYPES[5/*Uno.IDisposable*/]));

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
    uStackFrame __("Fuse.Reactive.InstantiatorFunction.InstantiatorSubscription", "OnNewData(Fuse.Reactive.IExpression,object)");

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
    uStackFrame __("Fuse.Reactive.InstantiatorFunction.InstantiatorSubscription", ".ctor(Fuse.Reactive.InstantiatorFunction,Uno.UX.Selector,Fuse.Reactive.IListener,Fuse.Reactive.IContext,Fuse.Reactive.IExpression)");
    ctor_();
    _node = node;
    _expr = expr;
    _item = item;
    _listener = listener;
    _context = context;

    if (_node == NULL)
        OnNewNode(NULL);
    else
        _nodeSub = ::g::Fuse::Reactive::IExpression::Subscribe(uInterface(uPtr(_node), ::TYPES[46/*Fuse.Reactive.IExpression*/]), context, (uObject*)this);
}

// private void OnNewNode(object obj) [instance] :2357
void InstantiatorFunction__InstantiatorSubscription::OnNewNode(uObject* obj)
{
    uStackFrame __("Fuse.Reactive.InstantiatorFunction.InstantiatorSubscription", "OnNewNode(object)");

    if (_instantiator != NULL)
    {
        uPtr(_instantiator)->remove_UpdatedWindowItems(uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)InstantiatorFunction__InstantiatorSubscription__OnUpdatedWindowItems_fn, this));
        _instantiator = NULL;
        _instance = NULL;
    }

    ::g::Fuse::Node* ind1 = uAs< ::g::Fuse::Node*>(obj, ::TYPES[50/*Fuse.Node*/]);
    ::g::Fuse::Node* searchNode = (ind1 != NULL) ? ind1 : (::g::Fuse::Node*)::g::Fuse::Reactive::IContext::Node(uInterface(uPtr(_context), ::TYPES[38/*Fuse.Reactive.IContext*/]));

    if (searchNode == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[74/*"invalid sea...*/], this, ::STRINGS[42/*"C:\\Users\\...*/], 2369, ::STRINGS[75/*"OnNewNode"*/], NULL);
        return;
    }

    _instantiator = ((::g::Fuse::Reactive::Instantiator*)uPtr(searchNode)->FindBehavior(::TYPES[73/*Fuse.Node.FindBehavior<Fuse.Reactive.Instantiator>*/]));

    if (_instantiator == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[76/*"Could not f...*/], this, ::STRINGS[42/*"C:\\Users\\...*/], 2376, ::STRINGS[75/*"OnNewNode"*/], NULL);
        return;
    }

    ::g::Fuse::Node* p = ::g::Fuse::Reactive::IContext::Node(uInterface(uPtr(_context), ::TYPES[38/*Fuse.Reactive.IContext*/]));

    while ((p != NULL) && (uPtr(p)->ContextParent() != _instantiator))
        p = uPtr(p)->ContextParent();

    if (p == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[77/*"Unable to r...*/], this, ::STRINGS[42/*"C:\\Users\\...*/], 2387, ::STRINGS[75/*"OnNewNode"*/]);
        return;
    }

    if (_instantiator != NULL)
    {
        _instance = p;
        uPtr(_instantiator)->add_UpdatedWindowItems(uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)InstantiatorFunction__InstantiatorSubscription__OnUpdatedWindowItems_fn, this));
        PushValue();
    }
}

// private void OnUpdatedWindowItems() [instance] :2425
void InstantiatorFunction__InstantiatorSubscription::OnUpdatedWindowItems()
{
    uStackFrame __("Fuse.Reactive.InstantiatorFunction.InstantiatorSubscription", "OnUpdatedWindowItems()");
    PushValue();
}

// private void PushValue() [instance] :2413
void InstantiatorFunction__InstantiatorSubscription::PushValue()
{
    uStackFrame __("Fuse.Reactive.InstantiatorFunction.InstantiatorSubscription", "PushValue()");
    int q = -1;

    if (::g::Uno::UX::Selector__op_Equality(_item, ::g::Fuse::Reactive::InstantiatorFunction::DataIndexName()))
        q = uPtr(_instantiator)->DataIndexOfChild(_instance);
    else if (::g::Uno::UX::Selector__op_Equality(_item, ::g::Fuse::Reactive::InstantiatorFunction::OffsetIndexName()))
        q = uPtr(_instantiator)->DataIndexOfChild(_instance) - uPtr(_instantiator)->Offset();

    if (q != -1)
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[10/*Fuse.Reactive.IListener*/]), (uObject*)_expr, uBox<int>(::TYPES[33/*int*/], q));
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
    type->Reflection.SetFunctions(1,
        new uFunction("NewValue", NULL, NULL, offsetof(ValueForwarder__IValueListener, fp_NewValue), false, uVoid_typeof(), 1, uObject_typeof()));
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
    type->Reflection.SetFunctions(1,
        new uFunction("SetExclusive", NULL, NULL, offsetof(IWriteable, fp_SetExclusive), false, uVoid_typeof(), 1, uObject_typeof()));
    return type;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.JavaScript\1.2.0\$.uno
// ------------------------------------------------------------------------------------

// public partial class JavaScript :261
// {
static void JavaScript_build(uType* type)
{
    ::STRINGS[78] = uString::Const("Cannot require() a rooted module");
    ::TYPES[5] = ::g::Uno::IDisposable_typeof();
    ::TYPES[40] = ::g::Uno::Type_typeof();
    ::TYPES[74] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Scripting::NativeModule_typeof(), NULL);
    ::TYPES[75] = ::g::Uno::UX::Resource_typeof()->MakeMethod(0/*GetGlobalsOfType<Fuse.Scripting.NativeModule>*/, ::g::Fuse::Scripting::NativeModule_typeof(), NULL);
    ::TYPES[13] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[76] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Scripting::NativeModule_typeof(), NULL);
    ::TYPES[41] = ::g::Fuse::Reactive::IObservable_typeof();
    ::TYPES[77] = ::g::Uno::Collections::List_typeof()->MakeType(JavaScript__Dependency_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(JavaScript_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(JavaScript_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(JavaScript_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(JavaScript_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(JavaScript_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(JavaScript_type, interface5),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(JavaScript_type, interface6),
        ::g::Fuse::Reactive::ValueForwarder__IValueListener_typeof(), offsetof(JavaScript_type, interface7),
        ::g::Fuse::Node__ISiblingDataProvider_typeof(), offsetof(JavaScript_type, interface8),
        ::g::Fuse::Reactive::IContext_typeof(), offsetof(JavaScript_type, interface9));
    type->SetFields(13,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _currentDc), 0,
        ::TYPES[77/*Uno.Collections.List<Fuse.Reactive.JavaScript.Dependency>*/], offsetof(::g::Fuse::Reactive::JavaScript, _dependencies), 0,
        ::g::Fuse::Reactive::ModuleInstance_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _moduleInstance), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _nameTable), 0,
        ::g::Fuse::Reactive::RootableScriptModule_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _scriptModule), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _siblingData), 0,
        ::TYPES[5/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::JavaScript, _sub), 0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Reactive::JavaScript::_javaScriptCounter_, uFieldFlagsStatic,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), (uintptr_t)&::g::Fuse::Reactive::JavaScript::_worker_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(10,
        new uFunction("get_Code", NULL, (void*)JavaScript__get_Code_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Code", NULL, (void*)JavaScript__set_Code_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Dependencies", NULL, (void*)JavaScript__get_Dependencies_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(JavaScript__Dependency_typeof(), NULL), 0),
        new uFunction("get_File", NULL, (void*)JavaScript__get_File_fn, 0, false, ::g::Uno::UX::FileSource_typeof(), 0),
        new uFunction("set_File", NULL, (void*)JavaScript__set_File_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::FileSource_typeof()),
        new uFunction("get_FileName", NULL, (void*)JavaScript__get_FileName_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_FileName", NULL, (void*)JavaScript__set_FileName_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_LineNumber", NULL, (void*)JavaScript__get_LineNumber_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_LineNumber", NULL, (void*)JavaScript__set_LineNumber_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)JavaScript__New2_fn, 0, true, type, 1, ::g::Uno::UX::NameTable_typeof()));
}

JavaScript_type* JavaScript_typeof()
{
    static uSStrong<JavaScript_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 22;
    options.InterfaceCount = 10;
    options.ObjectSize = sizeof(JavaScript);
    options.TypeSize = sizeof(JavaScript_type);
    type = (JavaScript_type*)uClassType::New("Fuse.Reactive.JavaScript", options);
    type->fp_build_ = JavaScript_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))JavaScript__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))JavaScript__OnUnrooted_fn;
    type->interface9.fp_Subscribe = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))JavaScript__FuseReactiveIContextSubscribe_fn;
    type->interface9.fp_SubscribeResource = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))JavaScript__FuseReactiveIContextSubscribeResource_fn;
    type->interface6.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))JavaScript__FuseScriptingIModuleProviderGetModule_fn;
    type->interface7.fp_NewValue = (void(*)(uObject*, uObject*))JavaScript__FuseReactiveValueForwarderIValueListenerNewValue_fn;
    type->interface9.fp_get_Node = (void(*)(uObject*, ::g::Fuse::Node**))JavaScript__FuseReactiveIContextget_Node_fn;
    type->interface9.fp_get_NameTable = (void(*)(uObject*, ::g::Uno::UX::NameTable**))JavaScript__FuseReactiveIContextget_NameTable_fn;
    type->interface8.fp_get_Data = (void(*)(uObject*, uObject**))JavaScript__FuseNodeISiblingDataProviderget_Data_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public JavaScript(Uno.UX.NameTable nameTable) :440
void JavaScript__ctor_3_fn(JavaScript* __this, ::g::Uno::UX::NameTable* nameTable)
{
    __this->ctor_3(nameTable);
}

// public string get_Code() :545
void JavaScript__get_Code_fn(JavaScript* __this, uString** __retval)
{
    *__retval = __this->Code();
}

// public void set_Code(string value) :546
void JavaScript__set_Code_fn(JavaScript* __this, uString* value)
{
    __this->Code(value);
}

// public Uno.Collections.IList<Fuse.Reactive.JavaScript.Dependency> get_Dependencies() :334
void JavaScript__get_Dependencies_fn(JavaScript* __this, uObject** __retval)
{
    *__retval = __this->Dependencies();
}

// internal void DispatchEvaluate() :375
void JavaScript__DispatchEvaluate_fn(JavaScript* __this)
{
    __this->DispatchEvaluate();
}

// private void DispatchEvaluateIfDependenciesReady() :359
void JavaScript__DispatchEvaluateIfDependenciesReady_fn(JavaScript* __this)
{
    __this->DispatchEvaluateIfDependenciesReady();
}

// private void DisposeDependencySubscriptions() :352
void JavaScript__DisposeDependencySubscriptions_fn(JavaScript* __this)
{
    __this->DisposeDependencySubscriptions();
}

// private void DisposeModuleInstance() :382
void JavaScript__DisposeModuleInstance_fn(JavaScript* __this)
{
    __this->DisposeModuleInstance();
}

// private void DisposeSubscription() :532
void JavaScript__DisposeSubscription_fn(JavaScript* __this)
{
    __this->DisposeSubscription();
}

// public Uno.UX.FileSource get_File() :566
void JavaScript__get_File_fn(JavaScript* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :567
void JavaScript__set_File_fn(JavaScript* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public string get_FileName() :574
void JavaScript__get_FileName_fn(JavaScript* __this, uString** __retval)
{
    *__retval = __this->FileName();
}

// public void set_FileName(string value) :575
void JavaScript__set_FileName_fn(JavaScript* __this, uString* value)
{
    __this->FileName(value);
}

// private object Fuse.Node.ISiblingDataProvider.get_Data() :529
void JavaScript__FuseNodeISiblingDataProviderget_Data_fn(JavaScript* __this, uObject** __retval)
{
    return *__retval = __this->_siblingData, void();
}

// private Uno.UX.NameTable Fuse.Reactive.IContext.get_NameTable() :403
void JavaScript__FuseReactiveIContextget_NameTable_fn(JavaScript* __this, ::g::Uno::UX::NameTable** __retval)
{
    return *__retval = __this->_nameTable, void();
}

// private Fuse.Node Fuse.Reactive.IContext.get_Node() :396
void JavaScript__FuseReactiveIContextget_Node_fn(JavaScript* __this, ::g::Fuse::Node** __retval)
{
    return *__retval = __this, void();
}

// private Uno.IDisposable Fuse.Reactive.IContext.Subscribe(Fuse.Reactive.IExpression source, string key, Fuse.Reactive.IListener listener) :391
void JavaScript__FuseReactiveIContextSubscribe_fn(JavaScript* __this, uObject* source, uString* key, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "Fuse.Reactive.IContext.Subscribe(Fuse.Reactive.IExpression,string,Fuse.Reactive.IListener)");
    return *__retval = (uObject*)::g::Fuse::Reactive::DataSubscription::New1(source, __this, key, listener), void();
}

// private Uno.IDisposable Fuse.Reactive.IContext.SubscribeResource(Fuse.Reactive.IExpression source, string key, Fuse.Reactive.IListener listener) :398
void JavaScript__FuseReactiveIContextSubscribeResource_fn(JavaScript* __this, uObject* source, uString* key, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "Fuse.Reactive.IContext.SubscribeResource(Fuse.Reactive.IExpression,string,Fuse.Reactive.IListener)");
    return *__retval = (uObject*)::g::Fuse::Reactive::ResourceSubscription::New1(source, __this, key, listener, uObject_typeof()), void();
}

// private void Fuse.Reactive.ValueForwarder.IValueListener.NewValue(object data) :514
void JavaScript__FuseReactiveValueForwarderIValueListenerNewValue_fn(JavaScript* __this, uObject* data)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "Fuse.Reactive.ValueForwarder.IValueListener.NewValue(object)");
    __this->SetSiblingData(data);
}

// private Fuse.Scripting.Module Fuse.Scripting.IModuleProvider.GetModule() :484
void JavaScript__FuseScriptingIModuleProviderGetModule_fn(JavaScript* __this, ::g::Fuse::Scripting::Module** __retval)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "Fuse.Scripting.IModuleProvider.GetModule()");

    if (__this->IsRootingCompleted())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[78/*"Cannot requ...*/]));

    return *__retval = __this->_scriptModule, void();
}

// public int get_LineNumber() :559
void JavaScript__get_LineNumber_fn(JavaScript* __this, int* __retval)
{
    *__retval = __this->LineNumber();
}

// public void set_LineNumber(int value) :560
void JavaScript__set_LineNumber_fn(JavaScript* __this, int* value)
{
    __this->LineNumber(*value);
}

// public JavaScript New(Uno.UX.NameTable nameTable) :440
void JavaScript__New2_fn(::g::Uno::UX::NameTable* nameTable, JavaScript** __retval)
{
    *__retval = JavaScript::New2(nameTable);
}

// protected override sealed void OnRooted() :449
void JavaScript__OnRooted_fn(JavaScript* __this)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    JavaScript::_javaScriptCounter_++;
    __this->SubscribeToDependenciesAndDispatchEvaluate();
}

// protected override sealed void OnUnrooted() :456
void JavaScript__OnUnrooted_fn(JavaScript* __this)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "OnUnrooted()");
    ::g::Fuse::Scripting::NativeModule* ret5;
    __this->DisposeDependencySubscriptions();
    __this->SetDataContext(NULL);
    __this->DisposeModuleInstance();

    if ((--JavaScript::_javaScriptCounter_) <= 0)
    {
        ::g::Fuse::Scripting::AppInitialized::Reset();

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr((uObject*)::g::Uno::UX::Resource::GetGlobalsOfType(::TYPES[75/*Uno.UX.Resource.GetGlobalsOfType<Fuse.Scripting.NativeModule>*/])), ::TYPES[74/*Uno.Collections.IEnumerable<Fuse.Scripting.NativeModule>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[13/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Fuse::Scripting::NativeModule* nm = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[76/*Uno.Collections.IEnumerator<Fuse.Scripting.NativeModule>*/]), &ret5), ret5);
            uPtr(nm)->InternalReset();
        }
    }

    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// internal Fuse.Reactive.RootableScriptModule get_ScriptModule() :437
void JavaScript__get_ScriptModule_fn(JavaScript* __this, ::g::Fuse::Reactive::RootableScriptModule** __retval)
{
    *__retval = __this->ScriptModule();
}

// internal void SetDataContext(object newDc) :493
void JavaScript__SetDataContext_fn(JavaScript* __this, uObject* newDc)
{
    __this->SetDataContext(newDc);
}

// private void SetSiblingData(object data) :520
void JavaScript__SetSiblingData_fn(JavaScript* __this, uObject* data)
{
    __this->SetSiblingData(data);
}

// private void SubscribeToDependenciesAndDispatchEvaluate() :343
void JavaScript__SubscribeToDependenciesAndDispatchEvaluate_fn(JavaScript* __this)
{
    __this->SubscribeToDependenciesAndDispatchEvaluate();
}

// internal static Fuse.Reactive.ThreadWorker get_Worker() :433
void JavaScript__get_Worker_fn(::g::Fuse::Reactive::ThreadWorker** __retval)
{
    *__retval = JavaScript::Worker();
}

int JavaScript::_javaScriptCounter_;
uSStrong< ::g::Fuse::Reactive::ThreadWorker*> JavaScript::_worker_;

// public JavaScript(Uno.UX.NameTable nameTable) [instance] :440
void JavaScript::ctor_3(::g::Uno::UX::NameTable* nameTable)
{
    ctor_2();

    if (JavaScript::_worker_ == NULL)
        JavaScript::_worker_ = ::g::Fuse::Reactive::ThreadWorker::New1();

    _nameTable = nameTable;
    _scriptModule = ::g::Fuse::Reactive::RootableScriptModule::New2(JavaScript::_worker_, nameTable);
}

// public string get_Code() [instance] :545
uString* JavaScript::Code()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_Code()");
    return uPtr(_scriptModule)->Code();
}

// public void set_Code(string value) [instance] :546
void JavaScript::Code(uString* value)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "set_Code(string)");

    if (::g::Uno::String::op_Inequality(uPtr(_scriptModule)->Code(), value))
        uPtr(_scriptModule)->Code(value);
}

// public Uno.Collections.IList<Fuse.Reactive.JavaScript.Dependency> get_Dependencies() [instance] :334
uObject* JavaScript::Dependencies()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_Dependencies()");

    if (_dependencies == NULL)
        _dependencies = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[77/*Uno.Collections.List<Fuse.Reactive.JavaScript.Dependency>*/]));

    return (uObject*)_dependencies;
}

// internal void DispatchEvaluate() [instance] :375
void JavaScript::DispatchEvaluate()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "DispatchEvaluate()");

    if (!IsRootingStarted())
        return;

    DisposeModuleInstance();
    _moduleInstance = ::g::Fuse::Reactive::ModuleInstance::New2(JavaScript::Worker(), this);
}

// private void DispatchEvaluateIfDependenciesReady() [instance] :359
void JavaScript::DispatchEvaluateIfDependenciesReady()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "DispatchEvaluateIfDependenciesReady()");
    JavaScript__Dependency* ret3;

    if (_dependencies != NULL)

        for (int i = 0; i < uPtr(_dependencies)->Count(); i++)
            if (!uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_dependencies), uCRef<int>(i), &ret3), ret3))->HasValue)
                return;

    DispatchEvaluate();
}

// private void DisposeDependencySubscriptions() [instance] :352
void JavaScript::DisposeDependencySubscriptions()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "DisposeDependencySubscriptions()");
    JavaScript__Dependency* ret4;

    if (_dependencies != NULL)

        for (int i = 0; i < uPtr(_dependencies)->Count(); i++)
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_dependencies), uCRef<int>(i), &ret4), ret4))->Unsubscribe();
}

// private void DisposeModuleInstance() [instance] :382
void JavaScript::DisposeModuleInstance()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "DisposeModuleInstance()");

    if (_moduleInstance != NULL)
    {
        uPtr(_moduleInstance)->Dispose();
        _moduleInstance = NULL;
    }
}

// private void DisposeSubscription() [instance] :532
void JavaScript::DisposeSubscription()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "DisposeSubscription()");

    if (_sub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_sub), ::TYPES[5/*Uno.IDisposable*/]));
        _sub = NULL;
    }
}

// public Uno.UX.FileSource get_File() [instance] :566
::g::Uno::UX::FileSource* JavaScript::File()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_File()");
    return uPtr(_scriptModule)->File();
}

// public void set_File(Uno.UX.FileSource value) [instance] :567
void JavaScript::File(::g::Uno::UX::FileSource* value)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "set_File(Uno.UX.FileSource)");
    uPtr(_scriptModule)->File(value);
}

// public string get_FileName() [instance] :574
uString* JavaScript::FileName()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_FileName()");
    return uPtr(_scriptModule)->FileName();
}

// public void set_FileName(string value) [instance] :575
void JavaScript::FileName(uString* value)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "set_FileName(string)");
    uPtr(_scriptModule)->FileName(value);
}

// public int get_LineNumber() [instance] :559
int JavaScript::LineNumber()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_LineNumber()");
    return uPtr(_scriptModule)->LineNumberOffset();
}

// public void set_LineNumber(int value) [instance] :560
void JavaScript::LineNumber(int value)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "set_LineNumber(int)");
    uPtr(_scriptModule)->LineNumberOffset(value);
}

// internal Fuse.Reactive.RootableScriptModule get_ScriptModule() [instance] :437
::g::Fuse::Reactive::RootableScriptModule* JavaScript::ScriptModule()
{
    return _scriptModule;
}

// internal void SetDataContext(object newDc) [instance] :493
void JavaScript::SetDataContext(uObject* newDc)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "SetDataContext(object)");
    DisposeSubscription();
    uObject* oldDc = _currentDc;
    _currentDc = newDc;
    uObject* obs = uAs<uObject*>(newDc, ::TYPES[41/*Fuse.Reactive.IObservable*/]);

    if (obs != NULL)
    {
        SetSiblingData(NULL);
        _sub = (uObject*)::g::Fuse::Reactive::ValueForwarder::New1(obs, (uObject*)this);
    }
    else
        SetSiblingData(newDc);

    if (oldDc != NULL)
        ::g::Fuse::Reactive::ValueMirror::Unsubscribe1(oldDc);
}

// private void SetSiblingData(object data) [instance] :520
void JavaScript::SetSiblingData(uObject* data)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "SetSiblingData(object)");
    uObject* oldSiblingData = _siblingData;
    _siblingData = data;

    if (Parent() != NULL)
        uPtr(Parent())->BroadcastDataChange(oldSiblingData, data);
}

// private void SubscribeToDependenciesAndDispatchEvaluate() [instance] :343
void JavaScript::SubscribeToDependenciesAndDispatchEvaluate()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "SubscribeToDependenciesAndDispatchEvaluate()");
    JavaScript__Dependency* ret6;

    if (_dependencies != NULL)

        for (int i = 0; i < uPtr(_dependencies)->Count(); i++)
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_dependencies), uCRef<int>(i), &ret6), ret6))->Subscribe(this);

    DispatchEvaluateIfDependenciesReady();
}

// public JavaScript New(Uno.UX.NameTable nameTable) [static] :440
JavaScript* JavaScript::New2(::g::Uno::UX::NameTable* nameTable)
{
    JavaScript* obj2 = (JavaScript*)uNew(JavaScript_typeof());
    obj2->ctor_3(nameTable);
    return obj2;
}

// internal static Fuse.Reactive.ThreadWorker get_Worker() [static] :433
::g::Fuse::Reactive::ThreadWorker* JavaScript::Worker()
{
    return JavaScript::_worker_;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.JavaScript\1.2.0\$.uno
// ------------------------------------------------------------------------------------

// internal sealed class LazyObservableProperty :1327
// {
static void LazyObservableProperty_build(uType* type)
{
    ::TYPES[42] = ::g::Uno::UX::Selector_typeof();
    ::TYPES[37] = ::g::Fuse::Scripting::Callback_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::ObservableProperty_type, interface0),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Reactive::ObservableProperty_type, interface1));
    type->SetFields(5);
}

::g::Fuse::Reactive::ObservableProperty_type* LazyObservableProperty_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ObservableProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ObservableProperty_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LazyObservableProperty);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ObservableProperty_type);
    type = (::g::Fuse::Reactive::ObservableProperty_type*)uClassType::New("Fuse.Reactive.LazyObservableProperty", options);
    type->fp_build_ = LazyObservableProperty_build;
    type->interface0.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::ObservableProperty__FuseReactiveIObserverOnClear_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ObservableProperty__FuseReactiveIObserverOnNewAll_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::ObservableProperty__FuseReactiveIObserverOnNewAt_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ObservableProperty__FuseReactiveIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ObservableProperty__FuseReactiveIObserverOnAdd_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::ObservableProperty__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::ObservableProperty__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::ObservableProperty__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::ObservableProperty__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public LazyObservableProperty(Fuse.Reactive.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) :1329
void LazyObservableProperty__ctor_1_fn(LazyObservableProperty* __this, ::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    __this->ctor_1(w, obj, p);
}

// private object Get(object[] args) :1334
void LazyObservableProperty__Get_fn(LazyObservableProperty* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Get(args);
}

// public LazyObservableProperty New(Fuse.Reactive.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) :1329
void LazyObservableProperty__New2_fn(::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p, LazyObservableProperty** __retval)
{
    *__retval = LazyObservableProperty::New2(w, obj, p);
}

// public LazyObservableProperty(Fuse.Reactive.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) [instance] :1329
void LazyObservableProperty::ctor_1(::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    uStackFrame __("Fuse.Reactive.LazyObservableProperty", ".ctor(Fuse.Reactive.ThreadWorker,Fuse.Scripting.Object,Uno.UX.Property)");
    ctor_(w, obj, p);
    uPtr(uPtr(w)->Context())->ObjectDefineProperty(obj, uPtr(p)->Name().ToString(::TYPES[42/*Uno.UX.Selector*/]), uDelegate::New(::TYPES[37/*Fuse.Scripting.Callback*/], (void*)LazyObservableProperty__Get_fn, this), NULL, false, false);
}

// private object Get(object[] args) [instance] :1334
uObject* LazyObservableProperty::Get(uArray* args)
{
    uStackFrame __("Fuse.Reactive.LazyObservableProperty", "Get(object[])");
    return uPtr(_worker)->Unwrap(GetObservable());
}

// public LazyObservableProperty New(Fuse.Reactive.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) [static] :1329
LazyObservableProperty* LazyObservableProperty::New2(::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    LazyObservableProperty* obj1 = (LazyObservableProperty*)uNew(LazyObservableProperty_typeof());
    obj1->ctor_1(w, obj, p);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Lerp :961
// {
static void Lerp_build(uType* type)
{
    ::STRINGS[79] = uString::Const("lerp(");
    ::STRINGS[10] = uString::Const(",");
    ::STRINGS[5] = uString::Const(")");
    ::TYPES[4] = ::g::Fuse::Marshal_typeof()->MakeMethod(1/*TryToType<float>*/, ::g::Uno::Float_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Lerp__New1_fn, 0, true, type, 3, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
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

// public Lerp(Fuse.Reactive.Expression first, Fuse.Reactive.Expression second, Fuse.Reactive.Expression third) :964
void Lerp__ctor_2_fn(Lerp* __this, ::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third)
{
    __this->ctor_2(first, second, third);
}

// protected override sealed object Compute(object a, object b, object t) :969
void Lerp__Compute_fn(Lerp* __this, uObject* a, uObject* b, uObject* t, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Lerp", "Compute(object,object,object)");
    bool ret2;
    ::g::Uno::Float4 av = ::g::Uno::Float4__New1(0.0f), bv = ::g::Uno::Float4__New1(0.0f);
    int asize = 0, bsize = 0;
    float tv = 0.0f;

    if ((!::g::Fuse::Marshal::TryToZeroFloat4(a, &av, &asize) || !::g::Fuse::Marshal::TryToZeroFloat4(b, &bv, &bsize)) || !(::g::Fuse::Marshal__TryToType_fn(::TYPES[4/*Fuse.Marshal.TryToType<float>*/], t, &tv, &ret2), ret2))
        return *__retval = NULL, void();

    int size = ::g::Uno::Math::Max8(asize, bsize);

    switch (size)
    {
        case 1:
            return *__retval = uBox(::TYPES[34/*float*/], ::g::Uno::Math::Lerp1(av.X, bv.X, tv)), void();
        case 2:
            return *__retval = uBox(::TYPES[112/*float2*/], ::g::Uno::Math::Lerp2(::g::Uno::Float2__New2(av.X, av.Y), ::g::Uno::Float2__New2(bv.X, bv.Y), tv)), void();
        case 3:
            return *__retval = uBox(::TYPES[113/*float3*/], ::g::Uno::Math::Lerp4(::g::Uno::Float3__New2(av.X, av.Y, av.Z), ::g::Uno::Float3__New2(bv.X, bv.Y, bv.Z), tv)), void();
        case 4:
            return *__retval = uBox(::TYPES[114/*float4*/], ::g::Uno::Math::Lerp6(av, bv, tv)), void();
    }

    return *__retval = NULL, void();
}

// public Lerp New(Fuse.Reactive.Expression first, Fuse.Reactive.Expression second, Fuse.Reactive.Expression third) :964
void Lerp__New1_fn(::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third, Lerp** __retval)
{
    *__retval = Lerp::New1(first, second, third);
}

// public override sealed string ToString() :994
void Lerp__ToString_fn(Lerp* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.Lerp", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[79/*"lerp("*/], __this->First()), ::STRINGS[10/*","*/]), __this->Second()), ::STRINGS[10/*","*/]), __this->Third()), ::STRINGS[5/*")"*/]), void();
}

// public Lerp(Fuse.Reactive.Expression first, Fuse.Reactive.Expression second, Fuse.Reactive.Expression third) [instance] :964
void Lerp::ctor_2(::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third)
{
    ctor_1(first, second, third);
}

// public Lerp New(Fuse.Reactive.Expression first, Fuse.Reactive.Expression second, Fuse.Reactive.Expression third) [static] :964
Lerp* Lerp::New1(::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third)
{
    Lerp* obj1 = (Lerp*)uNew(Lerp_typeof());
    obj1->ctor_2(first, second, third);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class LessOrEqual :1270
// {
static void LessOrEqual_build(uType* type)
{
    ::STRINGS[80] = uString::Const("<=");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)LessOrEqual__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::InfixOperator_type* LessOrEqual_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LessOrEqual);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.LessOrEqual", options);
    type->fp_build_ = LessOrEqual_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))LessOrEqual__Compute_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))LessOrEqual__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public LessOrEqual(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :1273
void LessOrEqual__ctor_3_fn(LessOrEqual* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_3(left, right);
}

// protected override sealed object Compute(object left, object right) :1274
void LessOrEqual__Compute_fn(LessOrEqual* __this, uObject* left, uObject* right, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.LessOrEqual", "Compute(object,object)");

    if ((left == NULL) || (right == NULL))
        return *__retval = NULL, void();

    return *__retval = uBox(::TYPES[18/*bool*/], uUnbox<bool>(::TYPES[18/*bool*/], ::g::Fuse::Marshal::LessThan(left, right)) || uUnbox<bool>(::TYPES[18/*bool*/], ::g::Fuse::Marshal::EqualTo(left, right))), void();
}

// public LessOrEqual New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :1273
void LessOrEqual__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, LessOrEqual** __retval)
{
    *__retval = LessOrEqual::New1(left, right);
}

// public override sealed string get_Symbol() :1280
void LessOrEqual__get_Symbol_fn(LessOrEqual* __this, uString** __retval)
{
    return *__retval = ::STRINGS[80/*"<="*/], void();
}

// public LessOrEqual(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :1273
void LessOrEqual::ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_2(left, right);
}

// public LessOrEqual New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :1273
LessOrEqual* LessOrEqual::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    LessOrEqual* obj1 = (LessOrEqual*)uNew(LessOrEqual_typeof());
    obj1->ctor_3(left, right);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class LessThan :1233
// {
static void LessThan_build(uType* type)
{
    ::STRINGS[81] = uString::Const("<");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)LessThan__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::InfixOperator_type* LessThan_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LessThan);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.LessThan", options);
    type->fp_build_ = LessThan_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))LessThan__Compute_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))LessThan__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public LessThan(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :1236
void LessThan__ctor_3_fn(LessThan* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_3(left, right);
}

// protected override sealed object Compute(object left, object right) :1237
void LessThan__Compute_fn(LessThan* __this, uObject* left, uObject* right, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.LessThan", "Compute(object,object)");
    return *__retval = ::g::Fuse::Marshal::LessThan(left, right), void();
}

// public LessThan New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :1236
void LessThan__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, LessThan** __retval)
{
    *__retval = LessThan::New1(left, right);
}

// public override sealed string get_Symbol() :1242
void LessThan__get_Symbol_fn(LessThan* __this, uString** __retval)
{
    return *__retval = ::STRINGS[81/*"<"*/], void();
}

// public LessThan(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :1236
void LessThan::ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_2(left, right);
}

// public LessThan New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :1236
LessThan* LessThan::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    LessThan* obj1 = (LessThan*)uNew(LessThan_typeof());
    obj1->ctor_3(left, right);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.JavaScript\1.2.0\$.uno
// ------------------------------------------------------------------------------------

// public abstract class ListMirror :2205
// {
static void ListMirror_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::IRaw_typeof(), offsetof(ListMirror_type, interface0),
        ::g::Fuse::IArray_typeof(), offsetof(ListMirror_type, interface1));
    type->SetFields(1);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Item", NULL, NULL, offsetof(ListMirror_type, fp_get_Item), false, uObject_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_Length", NULL, NULL, offsetof(ListMirror_type, fp_get_Length), false, ::g::Uno::Int_typeof(), 0));
}

ListMirror_type* ListMirror_typeof()
{
    static uSStrong<ListMirror_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ValueMirror_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ListMirror);
    options.TypeSize = sizeof(ListMirror_type);
    type = (ListMirror_type*)uClassType::New("Fuse.Reactive.ListMirror", options);
    type->fp_build_ = ListMirror_build;
    type->interface0.fp_get_Raw = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::ValueMirror__get_Raw_fn;
    return type;
}

// protected ListMirror(object raw) :2210
void ListMirror__ctor_1_fn(ListMirror* __this, uObject* raw)
{
    __this->ctor_1(raw);
}

// protected ListMirror(object raw) [instance] :2210
void ListMirror::ctor_1(uObject* raw)
{
    ctor_(raw);
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Log :897
// {
static void Log_build(uType* type)
{
    ::STRINGS[31] = uString::Const("log");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Log__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Log_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Log);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Log", options);
    type->fp_build_ = Log_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Log(Fuse.Reactive.Expression operand) :900
void Log__ctor_3_fn(Log* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public Log New(Fuse.Reactive.Expression operand) :900
void Log__New1_fn(::g::Fuse::Reactive::Expression* operand, Log** __retval)
{
    *__retval = Log::New1(operand);
}

// public Log(Fuse.Reactive.Expression operand) [instance] :900
void Log::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[31/*"log"*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Log_fn));
}

// public Log New(Fuse.Reactive.Expression operand) [static] :900
Log* Log::New1(::g::Fuse::Reactive::Expression* operand)
{
    Log* obj1 = (Log*)uNew(Log_typeof());
    obj1->ctor_3(operand);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Log2 :905
// {
static void Log2_build(uType* type)
{
    ::STRINGS[82] = uString::Const("log2");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Log2__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Log2_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Log2);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Log2", options);
    type->fp_build_ = Log2_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Log2(Fuse.Reactive.Expression operand) :908
void Log2__ctor_3_fn(Log2* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public Log2 New(Fuse.Reactive.Expression operand) :908
void Log2__New1_fn(::g::Fuse::Reactive::Expression* operand, Log2** __retval)
{
    *__retval = Log2::New1(operand);
}

// public Log2(Fuse.Reactive.Expression operand) [instance] :908
void Log2::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[82/*"log2"*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Log21_fn));
}

// public Log2 New(Fuse.Reactive.Expression operand) [static] :908
Log2* Log2::New1(::g::Fuse::Reactive::Expression* operand)
{
    Log2* obj1 = (Log2*)uNew(Log2_typeof());
    obj1->ctor_3(operand);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class LogicalAnd :1308
// {
static void LogicalAnd_build(uType* type)
{
    ::STRINGS[83] = uString::Const("&&");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)LogicalAnd__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::InfixOperator_type* LogicalAnd_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LogicalAnd);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.LogicalAnd", options);
    type->fp_build_ = LogicalAnd_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))LogicalAnd__Compute_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))LogicalAnd__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public LogicalAnd(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :1311
void LogicalAnd__ctor_3_fn(LogicalAnd* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_3(left, right);
}

// protected override sealed object Compute(object left, object right) :1312
void LogicalAnd__Compute_fn(LogicalAnd* __this, uObject* left, uObject* right, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.LogicalAnd", "Compute(object,object)");

    if ((left == NULL) || (right == NULL))
        return *__retval = NULL, void();

    return *__retval = uBox(::TYPES[18/*bool*/], ::g::Fuse::Marshal::ToBool(left) && ::g::Fuse::Marshal::ToBool(right)), void();
}

// public LogicalAnd New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :1311
void LogicalAnd__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, LogicalAnd** __retval)
{
    *__retval = LogicalAnd::New1(left, right);
}

// public override sealed string get_Symbol() :1318
void LogicalAnd__get_Symbol_fn(LogicalAnd* __this, uString** __retval)
{
    return *__retval = ::STRINGS[83/*"&&"*/], void();
}

// public LogicalAnd(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :1311
void LogicalAnd::ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_2(left, right);
}

// public LogicalAnd New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :1311
LogicalAnd* LogicalAnd::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    LogicalAnd* obj1 = (LogicalAnd*)uNew(LogicalAnd_typeof());
    obj1->ctor_3(left, right);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class LogicalOr :1321
// {
static void LogicalOr_build(uType* type)
{
    ::STRINGS[84] = uString::Const("||");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)LogicalOr__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::InfixOperator_type* LogicalOr_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LogicalOr);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.LogicalOr", options);
    type->fp_build_ = LogicalOr_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))LogicalOr__Compute_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))LogicalOr__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public LogicalOr(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :1324
void LogicalOr__ctor_3_fn(LogicalOr* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_3(left, right);
}

// protected override sealed object Compute(object left, object right) :1325
void LogicalOr__Compute_fn(LogicalOr* __this, uObject* left, uObject* right, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.LogicalOr", "Compute(object,object)");

    if ((left == NULL) || (right == NULL))
        return *__retval = NULL, void();

    return *__retval = uBox(::TYPES[18/*bool*/], ::g::Fuse::Marshal::ToBool(left) || ::g::Fuse::Marshal::ToBool(right)), void();
}

// public LogicalOr New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :1324
void LogicalOr__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, LogicalOr** __retval)
{
    *__retval = LogicalOr::New1(left, right);
}

// public override sealed string get_Symbol() :1331
void LogicalOr__get_Symbol_fn(LogicalOr* __this, uString** __retval)
{
    return *__retval = ::STRINGS[84/*"||"*/], void();
}

// public LogicalOr(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :1324
void LogicalOr::ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_2(left, right);
}

// public LogicalOr New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :1324
LogicalOr* LogicalOr::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    LogicalOr* obj1 = (LogicalOr*)uNew(LogicalOr_typeof());
    obj1->ctor_3(left, right);
    return obj1;
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
    type->Reflection.SetFunctions(3,
        new uFunction("get_Collection", NULL, (void*)LookUp__get_Collection_fn, 0, false, ::g::Fuse::Reactive::Expression_typeof(), 0),
        new uFunction("get_Index", NULL, (void*)LookUp__get_Index_fn, 0, false, ::g::Fuse::Reactive::Expression_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)LookUp__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
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

// public LookUp(Fuse.Reactive.Expression collection, Fuse.Reactive.Expression index) :341
void LookUp__ctor_1_fn(LookUp* __this, ::g::Fuse::Reactive::Expression* collection, ::g::Fuse::Reactive::Expression* index)
{
    __this->ctor_1(collection, index);
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

// public LookUp New(Fuse.Reactive.Expression collection, Fuse.Reactive.Expression index) :341
void LookUp__New1_fn(::g::Fuse::Reactive::Expression* collection, ::g::Fuse::Reactive::Expression* index, LookUp** __retval)
{
    *__retval = LookUp::New1(collection, index);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :347
void LookUp__Subscribe_fn(LookUp* __this, uObject* context, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.LookUp", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    return *__retval = (uObject*)LookUp__LookUpSubscription::New1(__this, context, listener), void();
}

// public LookUp(Fuse.Reactive.Expression collection, Fuse.Reactive.Expression index) [instance] :341
void LookUp::ctor_1(::g::Fuse::Reactive::Expression* collection, ::g::Fuse::Reactive::Expression* index)
{
    ctor_();
    Collection(collection);
    Index(index);
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

// public LookUp New(Fuse.Reactive.Expression collection, Fuse.Reactive.Expression index) [static] :341
LookUp* LookUp::New1(::g::Fuse::Reactive::Expression* collection, ::g::Fuse::Reactive::Expression* index)
{
    LookUp* obj1 = (LookUp*)uNew(LookUp_typeof());
    obj1->ctor_1(collection, index);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// private sealed class LookUp.LookUpSubscription :352
// {
static void LookUp__LookUpSubscription_build(uType* type)
{
    ::STRINGS[85] = uString::Const("Index must be a number: ");
    ::STRINGS[86] = uString::Const("Index was outside the bounds of the array");
    ::STRINGS[87] = uString::Const("Object does not contain the given key '");
    ::STRINGS[34] = uString::Const("'");
    ::STRINGS[88] = uString::Const("Look-up operator not supported on collection type: ");
    ::TYPES[5] = ::g::Uno::IDisposable_typeof();
    ::TYPES[41] = ::g::Fuse::Reactive::IObservable_typeof();
    ::TYPES[10] = ::g::Fuse::Reactive::IListener_typeof();
    ::TYPES[39] = ::g::Fuse::IArray_typeof();
    ::TYPES[78] = ::g::Fuse::MarshalException_typeof();
    ::TYPES[64] = ::g::Fuse::IObject_typeof();
    type->SetInterfaces(
        ::TYPES[5/*Uno.IDisposable*/], offsetof(LookUp__LookUpSubscription_type, interface0),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(LookUp__LookUpSubscription_type, interface1),
        ::TYPES[10/*Fuse.Reactive.IListener*/], offsetof(LookUp__LookUpSubscription_type, interface2),
        ::g::Fuse::Reactive::ValueForwarder__IValueListener_typeof(), offsetof(LookUp__LookUpSubscription_type, interface3));
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::LookUp__LookUpSubscription, _collection), 0,
        ::TYPES[5/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::LookUp__LookUpSubscription, _colObservableSub), 0,
        ::TYPES[5/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::LookUp__LookUpSubscription, _colSub), 0,
        ::TYPES[5/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::LookUp__LookUpSubscription, _diag), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::LookUp__LookUpSubscription, _hasCollection), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::LookUp__LookUpSubscription, _hasIndex), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::LookUp__LookUpSubscription, _index), 0,
        ::TYPES[5/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::LookUp__LookUpSubscription, _indexForwarder), 0,
        ::TYPES[5/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::LookUp__LookUpSubscription, _indexSub), 0,
        ::TYPES[10/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::LookUp__LookUpSubscription, _listener), 0,
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
    type->interface3.fp_NewValue = (void(*)(uObject*, uObject*))LookUp__LookUpSubscription__FuseReactiveValueForwarderIValueListenerNewValue_fn;
    type->interface1.fp_OnClear = (void(*)(uObject*))LookUp__LookUpSubscription__FuseReactiveIObserverOnClear_fn;
    type->interface1.fp_OnSet = (void(*)(uObject*, uObject*))LookUp__LookUpSubscription__FuseReactiveIObserverOnSet_fn;
    type->interface1.fp_OnAdd = (void(*)(uObject*, uObject*))LookUp__LookUpSubscription__FuseReactiveIObserverOnAdd_fn;
    type->interface1.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))LookUp__LookUpSubscription__FuseReactiveIObserverOnNewAt_fn;
    type->interface1.fp_OnFailed = (void(*)(uObject*, uString*))LookUp__LookUpSubscription__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnNewAll = (void(*)(uObject*, uObject*))LookUp__LookUpSubscription__FuseReactiveIObserverOnNewAll_fn;
    type->interface1.fp_OnRemoveAt = (void(*)(uObject*, int*))LookUp__LookUpSubscription__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface1.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))LookUp__LookUpSubscription__FuseReactiveIObserverOnInsertAt_fn;
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

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :534
void LookUp__LookUpSubscription__FuseReactiveIObserverOnAdd_fn(LookUp__LookUpSubscription* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "Fuse.Reactive.IObserver.OnAdd(object)");
    __this->ResultChanged();
}

// private void Fuse.Reactive.IObserver.OnClear() :532
void LookUp__LookUpSubscription__FuseReactiveIObserverOnClear_fn(LookUp__LookUpSubscription* __this)
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "Fuse.Reactive.IObserver.OnClear()");
    __this->ResultChanged();
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :536
void LookUp__LookUpSubscription__FuseReactiveIObserverOnFailed_fn(LookUp__LookUpSubscription* __this, uString* message)
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "Fuse.Reactive.IObserver.OnFailed(string)");
    __this->ResultChanged();
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :539
void LookUp__LookUpSubscription__FuseReactiveIObserverOnInsertAt_fn(LookUp__LookUpSubscription* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "Fuse.Reactive.IObserver.OnInsertAt(int,object)");
    __this->ResultChanged();
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values) :537
void LookUp__LookUpSubscription__FuseReactiveIObserverOnNewAll_fn(LookUp__LookUpSubscription* __this, uObject* values)
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray)");
    __this->ResultChanged();
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :535
void LookUp__LookUpSubscription__FuseReactiveIObserverOnNewAt_fn(LookUp__LookUpSubscription* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "Fuse.Reactive.IObserver.OnNewAt(int,object)");
    __this->ResultChanged();
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :538
void LookUp__LookUpSubscription__FuseReactiveIObserverOnRemoveAt_fn(LookUp__LookUpSubscription* __this, int* index)
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "Fuse.Reactive.IObserver.OnRemoveAt(int)");
    __this->ResultChanged();
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :533
void LookUp__LookUpSubscription__FuseReactiveIObserverOnSet_fn(LookUp__LookUpSubscription* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "Fuse.Reactive.IObserver.OnSet(object)");
    __this->ResultChanged();
}

// private void Fuse.Reactive.ValueForwarder.IValueListener.NewValue(object value) :415
void LookUp__LookUpSubscription__FuseReactiveValueForwarderIValueListenerNewValue_fn(LookUp__LookUpSubscription* __this, uObject* value)
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "Fuse.Reactive.ValueForwarder.IValueListener.NewValue(object)");
    __this->_index = value;
    __this->_hasIndex = true;
    __this->ResultChanged();
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
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", ".ctor(Fuse.Reactive.LookUp,Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    _listener = listener;
    _lu = lu;
    _colSub = uPtr(uPtr(_lu)->Index())->Subscribe(context, (uObject*)this);
    _indexSub = uPtr(uPtr(_lu)->Collection())->Subscribe(context, (uObject*)this);
}

// public void ClearDiagnostic() [instance] :406
void LookUp__LookUpSubscription::ClearDiagnostic()
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "ClearDiagnostic()");

    if (_diag != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_diag), ::TYPES[5/*Uno.IDisposable*/]));
        _diag = NULL;
    }
}

// public void Dispose() [instance] :512
void LookUp__LookUpSubscription::Dispose()
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "Dispose()");
    ClearDiagnostic();
    DisposeCollectionObservableSub();
    DisposeIndexSub();

    if (_colSub != NULL)
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_colSub), ::TYPES[5/*Uno.IDisposable*/]));

    if (_indexSub != NULL)
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_indexSub), ::TYPES[5/*Uno.IDisposable*/]));

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
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "DisposeCollectionObservableSub()");

    if (_colObservableSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_colObservableSub), ::TYPES[5/*Uno.IDisposable*/]));
        _colObservableSub = NULL;
    }
}

// private void DisposeIndexSub() [instance] :422
void LookUp__LookUpSubscription::DisposeIndexSub()
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "DisposeIndexSub()");

    if (_indexForwarder != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_indexForwarder), ::TYPES[5/*Uno.IDisposable*/]));
        _indexForwarder = NULL;
    }
}

// private void NewCollection(object col) [instance] :432
void LookUp__LookUpSubscription::NewCollection(uObject* col)
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "NewCollection(object)");
    _collection = col;
    _hasCollection = true;
    DisposeCollectionObservableSub();
    uObject* obs = uAs<uObject*>(col, ::TYPES[41/*Fuse.Reactive.IObservable*/]);

    if (obs != NULL)
        _colObservableSub = ::g::Fuse::Reactive::IObservable::Subscribe(uInterface(uPtr(obs), ::TYPES[41/*Fuse.Reactive.IObservable*/]), (uObject*)this);

    ResultChanged();
}

// private void NewIndex(object ind) [instance] :381
void LookUp__LookUpSubscription::NewIndex(uObject* ind)
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "NewIndex(object)");
    DisposeIndexSub();
    uObject* obs = uAs<uObject*>(ind, ::TYPES[41/*Fuse.Reactive.IObservable*/]);

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
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "OnNewData(Fuse.Reactive.IExpression,object)");

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
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "PushNewData(object)");
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[10/*Fuse.Reactive.IListener*/]), (uObject*)_lu, value);
}

// private void ResultChanged() [instance] :455
void LookUp__LookUpSubscription::ResultChanged()
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "ResultChanged()");

    if (_listener == NULL)
        return;

    ClearDiagnostic();

    if (!_hasIndex)
        return;

    if (!_hasCollection)
        return;

    if ((_index == NULL) || (_collection == NULL))
        PushNewData(NULL);

    uObject* arr = uAs<uObject*>(_collection, ::TYPES[39/*Fuse.IArray*/]);

    if (arr != NULL)
    {
        int index = 0;

        try
        {
            index = ::g::Fuse::Marshal::ToInt(_index);
        }
        catch (const uThrowable& __t)
        {
            if (uIs(__t.Exception, ::TYPES[78/*Fuse.MarshalException*/]))
            {
                ::g::Fuse::MarshalException* me = (::g::Fuse::MarshalException*)__t.Exception;
                SetDiagnostic(::g::Uno::String::op_Addition2(::STRINGS[85/*"Index must ...*/], uPtr(me)->Message()), (uObject*)uPtr(_lu)->Index());
                return;
            }
            else throw __t;
        }

        if ((index >= 0) && (index < ::g::Fuse::IArray::Length(uInterface(uPtr(arr), ::TYPES[39/*Fuse.IArray*/]))))
            PushNewData(::g::Fuse::IArray::Item(uInterface(uPtr(arr), ::TYPES[39/*Fuse.IArray*/]), index));
        else
            SetDiagnostic(::STRINGS[86/*"Index was o...*/], (uObject*)uPtr(_lu)->Index());

        return;
    }

    uObject* obj = uAs<uObject*>(_collection, ::TYPES[64/*Fuse.IObject*/]);

    if (obj != NULL)
    {
        uString* key = ::g::Uno::Object::ToString(uPtr(_index));

        if (::g::Fuse::IObject::ContainsKey(uInterface(uPtr(obj), ::TYPES[64/*Fuse.IObject*/]), key))
            PushNewData(::g::Fuse::IObject::Item(uInterface(uPtr(obj), ::TYPES[64/*Fuse.IObject*/]), key));
        else
            SetDiagnostic(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[87/*"Object does...*/], key), ::STRINGS[34/*"'"*/]), (uObject*)uPtr(_lu)->Index());

        return;
    }

    SetDiagnostic(::g::Uno::String::op_Addition1(::STRINGS[88/*"Look-up ope...*/], _collection), (uObject*)uPtr(_lu)->Collection());
}

// public void SetDiagnostic(string message, Fuse.Reactive.IExpression source) [instance] :400
void LookUp__LookUpSubscription::SetDiagnostic(uString* message, uObject* source)
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "SetDiagnostic(string,Fuse.Reactive.IExpression)");
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

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\$.uno
// ----------------------------------------------------------------------------------

// public sealed class Match :2483
// {
static void Match_build(uType* type)
{
    ::STRINGS[89] = uString::Const("Not handled: OnAdd");
    ::STRINGS[90] = uString::Const("Not handled: InsertAt");
    ::STRINGS[91] = uString::Const("<Match> can not be used on lists (received OnNewAll)");
    ::STRINGS[92] = uString::Const("Not handled: OnNewAt");
    ::STRINGS[93] = uString::Const("<Match> can not be used on lists (received OnRemoveAt)");
    ::TYPES[59] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[62] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(5/*IndexOf<Fuse.Node>*/, ::g::Fuse::Node_typeof(), NULL);
    ::TYPES[79] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[13] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[80] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[50] = ::g::Fuse::Node_typeof();
    ::TYPES[3] = ::g::Fuse::Reactive::IObserver_typeof();
    ::TYPES[39] = ::g::Fuse::IArray_typeof();
    ::TYPES[81] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof(), NULL);
    ::TYPES[82] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::TYPES[50/*Fuse.Node*/], NULL);
    ::TYPES[83] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof(), NULL);
    ::TYPES[18] = ::g::Uno::Bool_typeof();
    ::TYPES[84] = ::g::Uno::Collections::RootableList_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof(), NULL);
    ::TYPES[33] = ::g::Uno::Int_typeof();
    ::TYPES[20] = ::g::Uno::Double_typeof();
    ::TYPES[21] = ::g::Uno::String_typeof();
    ::TYPES[5] = ::g::Uno::IDisposable_typeof();
    ::TYPES[41] = ::g::Fuse::Reactive::IObservable_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Match_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Match_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(Match_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(Match_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Match_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Match_type, interface5),
        ::TYPES[3/*Fuse.Reactive.IObserver*/], offsetof(Match_type, interface6));
    type->SetFields(13,
        ::TYPES[84/*Uno.Collections.RootableList<Fuse.Reactive.Case>*/], offsetof(::g::Fuse::Reactive::Match, _cases), 0,
        ::TYPES[59/*Uno.Collections.List<Fuse.Node>*/], offsetof(::g::Fuse::Reactive::Match, _elements), 0,
        ::g::Fuse::Reactive::Case_typeof(), offsetof(::g::Fuse::Reactive::Match, _oldCase), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Match, _realValue), 0,
        ::g::Fuse::Reactive::ISubscription_typeof(), offsetof(::g::Fuse::Reactive::Match, _subscription), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Match, _value), 0);
    type->Reflection.SetFunctions(12,
        new uFunction("get_Bool", NULL, (void*)Match__get_Bool_fn, 0, false, ::TYPES[18/*bool*/], 0),
        new uFunction("set_Bool", NULL, (void*)Match__set_Bool_fn, 0, false, uVoid_typeof(), 1, ::TYPES[18/*bool*/]),
        new uFunction("get_Cases", NULL, (void*)Match__get_Cases_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof(), NULL), 0),
        new uFunction("get_Integer", NULL, (void*)Match__get_Integer_fn, 0, false, ::TYPES[33/*int*/], 0),
        new uFunction("set_Integer", NULL, (void*)Match__set_Integer_fn, 0, false, uVoid_typeof(), 1, ::TYPES[33/*int*/]),
        new uFunction(".ctor", NULL, (void*)Match__New2_fn, 0, true, type, 0),
        new uFunction("get_Number", NULL, (void*)Match__get_Number_fn, 0, false, ::TYPES[20/*double*/], 0),
        new uFunction("set_Number", NULL, (void*)Match__set_Number_fn, 0, false, uVoid_typeof(), 1, ::TYPES[20/*double*/]),
        new uFunction("get_String", NULL, (void*)Match__get_String_fn, 0, false, ::TYPES[21/*string*/], 0),
        new uFunction("set_String", NULL, (void*)Match__set_String_fn, 0, false, uVoid_typeof(), 1, ::TYPES[21/*string*/]),
        new uFunction("get_Value", NULL, (void*)Match__get_Value_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)Match__set_Value_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()));
}

Match_type* Match_typeof()
{
    static uSStrong<Match_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 19;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(Match);
    options.TypeSize = sizeof(Match_type);
    type = (Match_type*)uClassType::New("Fuse.Reactive.Match", options);
    type->fp_build_ = Match_build;
    type->fp_ctor_ = (void*)Match__New2_fn;
    type->fp_GetLastNodeInGroup = (void(*)(::g::Fuse::Node*, ::g::Fuse::Node**))Match__GetLastNodeInGroup_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Match__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Match__OnUnrooted_fn;
    type->interface6.fp_OnSet = (void(*)(uObject*, uObject*))Match__FuseReactiveIObserverOnSet_fn;
    type->interface6.fp_OnClear = (void(*)(uObject*))Match__FuseReactiveIObserverOnClear_fn;
    type->interface6.fp_OnAdd = (void(*)(uObject*, uObject*))Match__FuseReactiveIObserverOnAdd_fn;
    type->interface6.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))Match__FuseReactiveIObserverOnNewAt_fn;
    type->interface6.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))Match__FuseReactiveIObserverOnInsertAt_fn;
    type->interface6.fp_OnFailed = (void(*)(uObject*, uString*))Match__FuseReactiveIObserverOnFailed_fn;
    type->interface6.fp_OnNewAll = (void(*)(uObject*, uObject*))Match__FuseReactiveIObserverOnNewAll_fn;
    type->interface6.fp_OnRemoveAt = (void(*)(uObject*, int*))Match__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated Match() :2483
void Match__ctor_3_fn(Match* __this)
{
    __this->ctor_3();
}

// private void AddElements(Fuse.Reactive.Case c) :2693
void Match__AddElements_fn(Match* __this, ::g::Fuse::Reactive::Case* c)
{
    __this->AddElements(c);
}

// public bool get_Bool() :2630
void Match__get_Bool_fn(Match* __this, bool* __retval)
{
    *__retval = __this->Bool();
}

// public void set_Bool(bool value) :2631
void Match__set_Bool_fn(Match* __this, bool* value)
{
    __this->Bool(*value);
}

// public Uno.Collections.IList<Fuse.Reactive.Case> get_Cases() :2492
void Match__get_Cases_fn(Match* __this, uObject** __retval)
{
    *__retval = __this->Cases();
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :2527
void Match__FuseReactiveIObserverOnAdd_fn(Match* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnAdd(object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[89/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnClear() :2522
void Match__FuseReactiveIObserverOnClear_fn(Match* __this)
{
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :2542
void Match__FuseReactiveIObserverOnFailed_fn(Match* __this, uString* message)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnFailed(string)");
    ::g::Fuse::Reactive::IObserver::OnClear(uInterface(uPtr(uAs<uObject*>(__this, ::TYPES[3/*Fuse.Reactive.IObserver*/])), ::TYPES[3/*Fuse.Reactive.IObserver*/]));
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :2537
void Match__FuseReactiveIObserverOnInsertAt_fn(Match* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnInsertAt(int,object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[90/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values) :2548
void Match__FuseReactiveIObserverOnNewAll_fn(Match* __this, uObject* values)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray)");

    if (::g::Fuse::IArray::Length(uInterface(uPtr(values), ::TYPES[39/*Fuse.IArray*/])) == 0)
    {
        __this->_realValue = NULL;
        __this->Invalidate();
        return;
    }

    U_THROW(::g::Uno::Exception::New2(::STRINGS[91/*"<Match> can...*/]));
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :2532
void Match__FuseReactiveIObserverOnNewAt_fn(Match* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnNewAt(int,object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[92/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :2560
void Match__FuseReactiveIObserverOnRemoveAt_fn(Match* __this, int* index)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnRemoveAt(int)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[93/*"<Match> can...*/]));
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :2516
void Match__FuseReactiveIObserverOnSet_fn(Match* __this, uObject* newValue)
{
    __this->_realValue = newValue;
    __this->Invalidate();
}

// internal override sealed Fuse.Node GetLastNodeInGroup() :2716
void Match__GetLastNodeInGroup_fn(Match* __this, ::g::Fuse::Node** __retval)
{
    uStackFrame __("Fuse.Reactive.Match", "GetLastNodeInGroup()");
    ::g::Fuse::Node* ret9;

    if (uPtr(__this->_elements)->Count() == 0)
        return *__retval = __this, void();

    return *__retval = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_elements), uCRef<int>(uPtr(__this->_elements)->Count() - 1), &ret9), ret9), void();
}

// public int get_Integer() :2622
void Match__get_Integer_fn(Match* __this, int* __retval)
{
    *__retval = __this->Integer();
}

// public void set_Integer(int value) :2623
void Match__set_Integer_fn(Match* __this, int* value)
{
    __this->Integer(*value);
}

// internal void Invalidate() :2652
void Match__Invalidate_fn(Match* __this)
{
    __this->Invalidate();
}

// public generated Match New() :2483
void Match__New2_fn(Match** __retval)
{
    *__retval = Match::New2();
}

// public double get_Number() :2614
void Match__get_Number_fn(Match* __this, double* __retval)
{
    *__retval = __this->Number();
}

// public void set_Number(double value) :2615
void Match__set_Number_fn(Match* __this, double* value)
{
    __this->Number(*value);
}

// private void OnCaseAdded(Fuse.Reactive.Case c) :2504
void Match__OnCaseAdded_fn(Match* __this, ::g::Fuse::Reactive::Case* c)
{
    __this->OnCaseAdded(c);
}

// private void OnCaseRemoved(Fuse.Reactive.Case c) :2510
void Match__OnCaseRemoved_fn(Match* __this, ::g::Fuse::Reactive::Case* c)
{
    __this->OnCaseRemoved(c);
}

// protected override sealed void OnRooted() :2634
void Match__OnRooted_fn(Match* __this)
{
    uStackFrame __("Fuse.Reactive.Match", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    uPtr(__this->_cases)->RootSubscribe(uDelegate::New(::TYPES[81/*Uno.Action<Fuse.Reactive.Case>*/], (void*)Match__OnCaseAdded_fn, __this), uDelegate::New(::TYPES[81/*Uno.Action<Fuse.Reactive.Case>*/], (void*)Match__OnCaseRemoved_fn, __this));
    __this->Update();
}

// protected override sealed void OnUnrooted() :2641
void Match__OnUnrooted_fn(Match* __this)
{
    uStackFrame __("Fuse.Reactive.Match", "OnUnrooted()");
    __this->RemoveElements();
    uPtr(__this->_cases)->RootUnsubscribe();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void RemoveElements() :2681
void Match__RemoveElements_fn(Match* __this)
{
    __this->RemoveElements();
}

// private Fuse.Reactive.Case SelectCase() :2670
void Match__SelectCase_fn(Match* __this, ::g::Fuse::Reactive::Case** __retval)
{
    *__retval = __this->SelectCase();
}

// public string get_String() :2606
void Match__get_String_fn(Match* __this, uString** __retval)
{
    *__retval = __this->String();
}

// public void set_String(string value) :2607
void Match__set_String_fn(Match* __this, uString* value)
{
    __this->String(value);
}

// private void Update() :2659
void Match__Update_fn(Match* __this)
{
    __this->Update();
}

// public object get_Value() :2573
void Match__get_Value_fn(Match* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(object value) :2574
void Match__set_Value_fn(Match* __this, uObject* value)
{
    __this->Value(value);
}

// public generated Match() [instance] :2483
void Match::ctor_3()
{
    _elements = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[59/*Uno.Collections.List<Fuse.Node>*/]));
    ctor_2();
}

// private void AddElements(Fuse.Reactive.Case c) [instance] :2693
void Match::AddElements(::g::Fuse::Reactive::Case* c)
{
    uStackFrame __("Fuse.Reactive.Match", "AddElements(Fuse.Reactive.Case)");
    ::g::Fuse::Node* ind4;
    int ret6;
    ::g::Uno::UX::Template* ret7;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret8;

    if (c != NULL)
    {
        int childIndex = (::g::Uno::Collections::EnumerableExtensions__IndexOf_fn(::TYPES[62/*Uno.Collections.EnumerableExtensions.IndexOf<Fuse.Node>*/], uPtr(Parent())->Children(), this, &ret6), ret6) + 1;

        for (uObject* enum3 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(c)->Factories()), ::TYPES[79/*Uno.Collections.IEnumerable<Uno.UX.Template>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum3), ::TYPES[13/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Uno::UX::Template* f = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum3), ::TYPES[80/*Uno.Collections.IEnumerator<Uno.UX.Template>*/]), &ret7), ret7);
            ::g::Fuse::Node* elm = uAs< ::g::Fuse::Node*>(uPtr(f)->New1(), ::TYPES[50/*Fuse.Node*/]);

            if (elm != NULL)
            {
                uPtr(elm)->OverrideContextParent = (ind4 = uPtr(elm)->OverrideContextParent, ((ind4 != NULL) ? ind4 : this));
                ::g::Uno::Collections::List__Add_fn(uPtr(_elements), elm);
            }
        }

        uPtr(Parent())->InsertNodes(childIndex, uBox(::TYPES[82/*Uno.Collections.List<Fuse.Node>.Enumerator*/], (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret8), ret8)));
    }

    _oldCase = c;
}

// public bool get_Bool() [instance] :2630
bool Match::Bool()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Bool()");
    return uIs((uObject*)Value(), ::TYPES[18/*bool*/]) ? uUnbox<bool>(::TYPES[18/*bool*/], Value()) : false;
}

// public void set_Bool(bool value) [instance] :2631
void Match::Bool(bool value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_Bool(bool)");
    Value(uBox(::TYPES[18/*bool*/], value));
}

// public Uno.Collections.IList<Fuse.Reactive.Case> get_Cases() [instance] :2492
uObject* Match::Cases()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Cases()");

    if (_cases == NULL)
    {
        _cases = ((::g::Uno::Collections::RootableList*)::g::Uno::Collections::RootableList::New1(::TYPES[84/*Uno.Collections.RootableList<Fuse.Reactive.Case>*/]));

        if (IsRootingCompleted())
            uPtr(_cases)->Subscribe(uDelegate::New(::TYPES[81/*Uno.Action<Fuse.Reactive.Case>*/], (void*)Match__OnCaseAdded_fn, this), uDelegate::New(::TYPES[81/*Uno.Action<Fuse.Reactive.Case>*/], (void*)Match__OnCaseRemoved_fn, this));
    }

    return (uObject*)_cases;
}

// public int get_Integer() [instance] :2622
int Match::Integer()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Integer()");
    return uIs((uObject*)Value(), ::TYPES[33/*int*/]) ? uUnbox<int>(::TYPES[33/*int*/], Value()) : 0;
}

// public void set_Integer(int value) [instance] :2623
void Match::Integer(int value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_Integer(int)");
    Value(uBox<int>(::TYPES[33/*int*/], value));
}

// internal void Invalidate() [instance] :2652
void Match::Invalidate()
{
    if (!IsRootingCompleted())
        return;

    Update();
}

// public double get_Number() [instance] :2614
double Match::Number()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Number()");
    return uIs((uObject*)Value(), ::TYPES[20/*double*/]) ? uUnbox<double>(::TYPES[20/*double*/], Value()) : 0.0;
}

// public void set_Number(double value) [instance] :2615
void Match::Number(double value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_Number(double)");
    Value(uBox(::TYPES[20/*double*/], value));
}

// private void OnCaseAdded(Fuse.Reactive.Case c) [instance] :2504
void Match::OnCaseAdded(::g::Fuse::Reactive::Case* c)
{
    uStackFrame __("Fuse.Reactive.Match", "OnCaseAdded(Fuse.Reactive.Case)");
    uPtr(c)->Root(this);
    Invalidate();
}

// private void OnCaseRemoved(Fuse.Reactive.Case c) [instance] :2510
void Match::OnCaseRemoved(::g::Fuse::Reactive::Case* c)
{
    uStackFrame __("Fuse.Reactive.Match", "OnCaseRemoved(Fuse.Reactive.Case)");
    uPtr(c)->Unroot();
    Invalidate();
}

// private void RemoveElements() [instance] :2681
void Match::RemoveElements()
{
    uStackFrame __("Fuse.Reactive.Match", "RemoveElements()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret10;
    _oldCase = NULL;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret10), ret10); enum2.MoveNext(::TYPES[82/*Uno.Collections.List<Fuse.Node>.Enumerator*/]); )
    {
        ::g::Fuse::Node* e = enum2.Current(::TYPES[82/*Uno.Collections.List<Fuse.Node>.Enumerator*/]);

        if (uPtr(e)->OverrideContextParent == this)
            uPtr(e)->OverrideContextParent = NULL;

        uPtr(Parent())->BeginRemoveChild(e, NULL);
    }

    uPtr(_elements)->Clear();
}

// private Fuse.Reactive.Case SelectCase() [instance] :2670
::g::Fuse::Reactive::Case* Match::SelectCase()
{
    uStackFrame __("Fuse.Reactive.Match", "SelectCase()");
    ::g::Fuse::Reactive::Case* ret11;
    ::g::Fuse::Reactive::Case* def = NULL;

    for (uObject* enum1 = (uObject*)uPtr(_cases)->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[13/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Reactive::Case* c = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[83/*Uno.Collections.IEnumerator<Fuse.Reactive.Case>*/]), &ret11), ret11);

        if ((uPtr(c)->Value() != NULL) && ::g::Uno::Object::Equals(uPtr(uPtr(c)->Value()), _realValue))
            return c;

        if (uPtr(c)->IsDefault())
            def = c;
    }

    return def;
}

// public string get_String() [instance] :2606
uString* Match::String()
{
    return uAs<uString*>(Value(), ::TYPES[21/*string*/]);
}

// public void set_String(string value) [instance] :2607
void Match::String(uString* value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_String(string)");
    Value(value);
}

// private void Update() [instance] :2659
void Match::Update()
{
    uStackFrame __("Fuse.Reactive.Match", "Update()");
    ::g::Fuse::Reactive::Case* newCase = SelectCase();

    if (newCase != _oldCase)
    {
        RemoveElements();

        if (newCase != NULL)
            AddElements(newCase);
    }
}

// public object get_Value() [instance] :2573
uObject* Match::Value()
{
    return _value;
}

// public void set_Value(object value) [instance] :2574
void Match::Value(uObject* value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_Value(object)");

    if (_value != value)
    {
        _value = value;

        if (_subscription != NULL)
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[5/*Uno.IDisposable*/]));
            _subscription = NULL;
        }

        if (uIs((uObject*)_value, ::TYPES[41/*Fuse.Reactive.IObservable*/]))
        {
            uObject* obs = (uObject*)_value;
            _subscription = ::g::Fuse::Reactive::IObservable::Subscribe(uInterface(uPtr(obs), ::TYPES[41/*Fuse.Reactive.IObservable*/]), (uObject*)this);
        }
        else
            _realValue = _value;

        Invalidate();
    }
}

// public generated Match New() [static] :2483
Match* Match::New2()
{
    Match* obj5 = (Match*)uNew(Match_typeof());
    obj5->ctor_3();
    return obj5;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Max :569
// {
static void Max_build(uType* type)
{
    ::STRINGS[94] = uString::Const("max(");
    ::STRINGS[4] = uString::Const(", ");
    ::STRINGS[5] = uString::Const(")");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Max__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::BinaryOperator_type* Max_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::BinaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::BinaryOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Max);
    options.TypeSize = sizeof(::g::Fuse::Reactive::BinaryOperator_type);
    type = (::g::Fuse::Reactive::BinaryOperator_type*)uClassType::New("Fuse.Reactive.Max", options);
    type->fp_build_ = Max_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))Max__Compute_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Max__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public Max(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :572
void Max__ctor_2_fn(Max* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_2(left, right);
}

// protected override sealed object Compute(object left, object right) :573
void Max__Compute_fn(Max* __this, uObject* left, uObject* right, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Max", "Compute(object,object)");
    return *__retval = ::g::Fuse::Marshal::Max(left, right), void();
}

// public Max New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :572
void Max__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, Max** __retval)
{
    *__retval = Max::New1(left, right);
}

// public override sealed string ToString() :578
void Max__ToString_fn(Max* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.Max", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[94/*"max("*/], __this->Left()), ::STRINGS[4/*", "*/]), __this->Right()), ::STRINGS[5/*")"*/]), void();
}

// public Max(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :572
void Max::ctor_2(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_1(left, right);
}

// public Max New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :572
Max* Max::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    Max* obj1 = (Max*)uNew(Max_typeof());
    obj1->ctor_2(left, right);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Member :1058
// {
static void Member_build(uType* type)
{
    ::STRINGS[41] = uString::Const(".");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(1,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::Member, _Name), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Name", NULL, (void*)Member__get_Name_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Member__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Uno::String_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Member_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Member);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Member", options);
    type->fp_build_ = Member_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))Member__Subscribe_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Member__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))Member__Subscribe_fn;
    return type;
}

// public Member(Fuse.Reactive.Expression obj, string name) :1062
void Member__ctor_2_fn(Member* __this, ::g::Fuse::Reactive::Expression* obj, uString* name)
{
    __this->ctor_2(obj, name);
}

// public generated string get_Name() :1060
void Member__get_Name_fn(Member* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(string value) :1060
void Member__set_Name_fn(Member* __this, uString* value)
{
    __this->Name(value);
}

// public Member New(Fuse.Reactive.Expression obj, string name) :1062
void Member__New1_fn(::g::Fuse::Reactive::Expression* obj, uString* name, Member** __retval)
{
    *__retval = Member::New1(obj, name);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :1072
void Member__Subscribe_fn(Member* __this, uObject* context, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Member", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    return *__retval = (uObject*)Member__MemberSubscription::New2(__this, context, listener), void();
}

// public override sealed string ToString() :1067
void Member__ToString_fn(Member* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.Member", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Object::ToString(uPtr(__this->Operand())), ::STRINGS[41/*"."*/]), __this->Name()), void();
}

// public Member(Fuse.Reactive.Expression obj, string name) [instance] :1062
void Member::ctor_2(::g::Fuse::Reactive::Expression* obj, uString* name)
{
    ctor_1(obj);
    Name(name);
}

// public generated string get_Name() [instance] :1060
uString* Member::Name()
{
    return _Name;
}

// private generated void set_Name(string value) [instance] :1060
void Member::Name(uString* value)
{
    _Name = value;
}

// public Member New(Fuse.Reactive.Expression obj, string name) [static] :1062
Member* Member::New1(::g::Fuse::Reactive::Expression* obj, uString* name)
{
    Member* obj1 = (Member*)uNew(Member_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// private sealed class Member.MemberSubscription :1077
// {
static void Member__MemberSubscription_build(uType* type)
{
    ::STRINGS[34] = uString::Const("'");
    ::STRINGS[95] = uString::Const("' does not contain property '");
    ::TYPES[64] = ::g::Fuse::IObject_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator__Subscription_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator__Subscription_type, interface1));
    type->SetFields(5,
        ::g::Fuse::Reactive::Member_typeof(), offsetof(::g::Fuse::Reactive::Member__MemberSubscription, _member), 0);
}

::g::Fuse::Reactive::UnaryOperator__Subscription_type* Member__MemberSubscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryOperator__Subscription_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Member__MemberSubscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator__Subscription_type);
    type = (::g::Fuse::Reactive::UnaryOperator__Subscription_type*)uClassType::New("Fuse.Reactive.Member.MemberSubscription", options);
    type->fp_build_ = Member__MemberSubscription_build;
    type->fp_OnNewOperand = (void(*)(::g::Fuse::Reactive::UnaryOperator__Subscription*, uObject*))Member__MemberSubscription__OnNewOperand_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Reactive::UnaryOperator__Subscription__Dispose_fn;
    return type;
}

// public MemberSubscription(Fuse.Reactive.Member member, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :1080
void Member__MemberSubscription__ctor_2_fn(Member__MemberSubscription* __this, ::g::Fuse::Reactive::Member* member, uObject* context, uObject* listener)
{
    __this->ctor_2(member, context, listener);
}

// public MemberSubscription New(Fuse.Reactive.Member member, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :1080
void Member__MemberSubscription__New2_fn(::g::Fuse::Reactive::Member* member, uObject* context, uObject* listener, Member__MemberSubscription** __retval)
{
    *__retval = Member__MemberSubscription::New2(member, context, listener);
}

// protected override sealed void OnNewOperand(object obj) :1086
void Member__MemberSubscription__OnNewOperand_fn(Member__MemberSubscription* __this, uObject* obj)
{
    uStackFrame __("Fuse.Reactive.Member.MemberSubscription", "OnNewOperand(object)");
    __this->ClearDiagnostic();
    uObject* io = uAs<uObject*>(obj, ::TYPES[64/*Fuse.IObject*/]);

    if ((io != NULL) && ::g::Fuse::IObject::ContainsKey(uInterface(uPtr(io), ::TYPES[64/*Fuse.IObject*/]), uPtr(__this->_member)->Name()))
        __this->PushNewData(::g::Fuse::IObject::Item(uInterface(uPtr(io), ::TYPES[64/*Fuse.IObject*/]), uPtr(__this->_member)->Name()));
    else
        __this->SetDiagnostic(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[34/*"'"*/], ::g::Uno::Object::ToString(uPtr(uPtr(__this->_member)->Operand()))), ::STRINGS[95/*"' does not ...*/]), uPtr(__this->_member)->Name()), ::STRINGS[34/*"'"*/]), (uObject*)__this->_member);
}

// public MemberSubscription(Fuse.Reactive.Member member, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [instance] :1080
void Member__MemberSubscription::ctor_2(::g::Fuse::Reactive::Member* member, uObject* context, uObject* listener)
{
    uStackFrame __("Fuse.Reactive.Member.MemberSubscription", ".ctor(Fuse.Reactive.Member,Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    ctor_1(member, listener);
    _member = member;
    Init(context);
}

// public MemberSubscription New(Fuse.Reactive.Member member, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :1080
Member__MemberSubscription* Member__MemberSubscription::New2(::g::Fuse::Reactive::Member* member, uObject* context, uObject* listener)
{
    Member__MemberSubscription* obj1 = (Member__MemberSubscription*)uNew(Member__MemberSubscription_typeof());
    obj1->ctor_2(member, context, listener);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.JavaScript\1.2.0\$.uno
// ------------------------------------------------------------------------------------

// private sealed class ThreadWorker.MethodClosure :1790
// {
// static MethodClosure() :1790
static void ThreadWorker__MethodClosure__cctor__fn(uType* __type)
{
    ThreadWorker__MethodClosure::_emptyArgs_ = uArray::New(::TYPES[6/*object[]*/], 0);
}

static void ThreadWorker__MethodClosure_build(uType* type)
{
    ::STRINGS[96] = uString::Const(" (ScriptMethod)");
    ::STRINGS[97] = uString::Const("(function (cl, callback) { cl.prototype.");
    ::STRINGS[98] = uString::Const(" = function() { callback(this.external_object, Array.prototype.slice.call(arguments)); }})");
    ::TYPES[6] = uObject_typeof()->Array();
    ::TYPES[35] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[37] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[85] = ::g::Fuse::Scripting::External_typeof();
    ::TYPES[36] = ::g::Fuse::Scripting::Array_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::ScriptMethod_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker__MethodClosure, _m), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker__MethodClosure, _worker), 0,
        ::TYPES[6/*object[]*/], (uintptr_t)&::g::Fuse::Reactive::ThreadWorker__MethodClosure::_emptyArgs_, uFieldFlagsStatic);
}

uType* ThreadWorker__MethodClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ThreadWorker__MethodClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.ThreadWorker.MethodClosure", options);
    type->fp_build_ = ThreadWorker__MethodClosure_build;
    type->fp_cctor_ = ThreadWorker__MethodClosure__cctor__fn;
    return type;
}

// public MethodClosure(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptMethod m, Fuse.Reactive.ThreadWorker worker) :1794
void ThreadWorker__MethodClosure__ctor__fn(ThreadWorker__MethodClosure* __this, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Reactive::ThreadWorker* worker)
{
    __this->ctor_(cl, m, worker);
}

// private object Callback(object[] args) :1807
void ThreadWorker__MethodClosure__Callback_fn(ThreadWorker__MethodClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Callback(args);
}

// private static object[] CopyArgs(Fuse.Scripting.Array args) :1815
void ThreadWorker__MethodClosure__CopyArgs_fn(::g::Fuse::Scripting::Array* args, uArray** __retval)
{
    *__retval = ThreadWorker__MethodClosure::CopyArgs(args);
}

// public MethodClosure New(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptMethod m, Fuse.Reactive.ThreadWorker worker) :1794
void ThreadWorker__MethodClosure__New1_fn(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Reactive::ThreadWorker* worker, ThreadWorker__MethodClosure** __retval)
{
    *__retval = ThreadWorker__MethodClosure::New1(cl, m, worker);
}

uSStrong<uArray*> ThreadWorker__MethodClosure::_emptyArgs_;

// public MethodClosure(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptMethod m, Fuse.Reactive.ThreadWorker worker) [instance] :1794
void ThreadWorker__MethodClosure::ctor_(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Reactive::ThreadWorker* worker)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker.MethodClosure", ".ctor(Fuse.Scripting.Function,Fuse.Scripting.ScriptMethod,Fuse.Reactive.ThreadWorker)");
    _m = m;
    _worker = worker;
    ::g::Fuse::Scripting::Function* factory = uCast< ::g::Fuse::Scripting::Function*>(uPtr(uPtr(_worker)->Context())->Evaluate(::g::Uno::String::op_Addition2(uPtr(m)->Name, ::STRINGS[96/*" (ScriptMet...*/]), ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[97/*"(function (...*/], uPtr(m)->Name), ::STRINGS[98/*" = function...*/])), ::TYPES[35/*Fuse.Scripting.Function*/]);
    uPtr(factory)->Call(uArray::Init<uObject*>(::TYPES[6/*object[]*/], 2, cl, uDelegate::New(::TYPES[37/*Fuse.Scripting.Callback*/], (void*)ThreadWorker__MethodClosure__Callback_fn, this)));
}

// private object Callback(object[] args) [instance] :1807
uObject* ThreadWorker__MethodClosure::Callback(uArray* args)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker.MethodClosure", "Callback(object[])");
    uObject* self = uPtr(uCast< ::g::Fuse::Scripting::External*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[85/*Fuse.Scripting.External*/]))->Object;
    uArray* realArgs = ThreadWorker__MethodClosure::CopyArgs(uCast< ::g::Fuse::Scripting::Array*>(args->Strong<uObject*>(1), ::TYPES[36/*Fuse.Scripting.Array*/]));
    uObject* res = uPtr(_worker)->Unwrap(uPtr(_m)->Call(uPtr(_worker)->Context(), self, realArgs));
    return res;
}

// private static object[] CopyArgs(Fuse.Scripting.Array args) [static] :1815
uArray* ThreadWorker__MethodClosure::CopyArgs(::g::Fuse::Scripting::Array* args)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker.MethodClosure", "CopyArgs(Fuse.Scripting.Array)");
    ThreadWorker__MethodClosure_typeof()->Init();
    uArray* res = uArray::New(::TYPES[6/*object[]*/], uPtr(args)->Length());

    for (int i = 0; i < res->Length(); i++)
        uPtr(res)->Strong<uObject*>(i) = ::g::Fuse::Reactive::ThreadWorker::Wrap(uPtr(args)->Item(i));

    return res;
}

// public MethodClosure New(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptMethod m, Fuse.Reactive.ThreadWorker worker) [static] :1794
ThreadWorker__MethodClosure* ThreadWorker__MethodClosure::New1(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Reactive::ThreadWorker* worker)
{
    ThreadWorker__MethodClosure* obj1 = (ThreadWorker__MethodClosure*)uNew(ThreadWorker__MethodClosure_typeof());
    obj1->ctor_(cl, m, worker);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Min :553
// {
static void Min_build(uType* type)
{
    ::STRINGS[99] = uString::Const("min(");
    ::STRINGS[4] = uString::Const(", ");
    ::STRINGS[5] = uString::Const(")");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Min__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::BinaryOperator_type* Min_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::BinaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::BinaryOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Min);
    options.TypeSize = sizeof(::g::Fuse::Reactive::BinaryOperator_type);
    type = (::g::Fuse::Reactive::BinaryOperator_type*)uClassType::New("Fuse.Reactive.Min", options);
    type->fp_build_ = Min_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))Min__Compute_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Min__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public Min(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :556
void Min__ctor_2_fn(Min* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_2(left, right);
}

// protected override sealed object Compute(object left, object right) :557
void Min__Compute_fn(Min* __this, uObject* left, uObject* right, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Min", "Compute(object,object)");
    return *__retval = ::g::Fuse::Marshal::Min(left, right), void();
}

// public Min New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :556
void Min__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, Min** __retval)
{
    *__retval = Min::New1(left, right);
}

// public override sealed string ToString() :562
void Min__ToString_fn(Min* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.Min", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[99/*"min("*/], __this->Left()), ::STRINGS[4/*", "*/]), __this->Right()), ::STRINGS[5/*")"*/]), void();
}

// public Min(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :556
void Min::ctor_2(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_1(left, right);
}

// public Min New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :556
Min* Min::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    Min* obj1 = (Min*)uNew(Min_typeof());
    obj1->ctor_2(left, right);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Mod :585
// {
static void Mod_build(uType* type)
{
    ::STRINGS[100] = uString::Const("mod(");
    ::STRINGS[4] = uString::Const(", ");
    ::STRINGS[5] = uString::Const(")");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Mod__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::BinaryOperator_type* Mod_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::BinaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::BinaryOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Mod);
    options.TypeSize = sizeof(::g::Fuse::Reactive::BinaryOperator_type);
    type = (::g::Fuse::Reactive::BinaryOperator_type*)uClassType::New("Fuse.Reactive.Mod", options);
    type->fp_build_ = Mod_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))Mod__Compute_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Mod__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public Mod(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :588
void Mod__ctor_2_fn(Mod* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_2(left, right);
}

// protected override sealed object Compute(object left, object right) :589
void Mod__Compute_fn(Mod* __this, uObject* left, uObject* right, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Mod", "Compute(object,object)");
    return *__retval = uBox(::TYPES[34/*float*/], ::g::Uno::Math::Mod1(::g::Fuse::Marshal::ToFloat(left), ::g::Fuse::Marshal::ToFloat(right))), void();
}

// public Mod New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :588
void Mod__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, Mod** __retval)
{
    *__retval = Mod::New1(left, right);
}

// public override sealed string ToString() :594
void Mod__ToString_fn(Mod* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.Mod", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[100/*"mod("*/], __this->Left()), ::STRINGS[4/*", "*/]), __this->Right()), ::STRINGS[5/*")"*/]), void();
}

// public Mod(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :588
void Mod::ctor_2(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_1(left, right);
}

// public Mod New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :588
Mod* Mod::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    Mod* obj1 = (Mod*)uNew(Mod_typeof());
    obj1->ctor_2(left, right);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.JavaScript\1.2.0\$.uno
// ------------------------------------------------------------------------------------

// internal sealed class ModuleInstance :589
// {
// static ModuleInstance() :589
static void ModuleInstance__cctor__fn(uType* __type)
{
    ModuleInstance::_resetHookMutex_ = ::g::Uno::Object::New();
}

static void ModuleInstance_build(uType* type)
{
    ::STRINGS[101] = uString::Const("exports");
    ::TYPES[52] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[86] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::JavaScript__Dependency_typeof(), NULL);
    ::TYPES[87] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::JavaScript__Dependency_typeof(), NULL);
    ::TYPES[23] = ::g::Uno::Action_typeof();
    type->SetFields(1,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::ModuleInstance, _dc), 0,
        ::TYPES[52/*Uno.Collections.Dictionary<string, object>*/], offsetof(::g::Fuse::Reactive::ModuleInstance, _deps), 0,
        ::g::Fuse::Reactive::DiagnosticSubject_typeof(), offsetof(::g::Fuse::Reactive::ModuleInstance, _diagnostic1), 0,
        ::g::Fuse::Reactive::JavaScript_typeof(), offsetof(::g::Fuse::Reactive::ModuleInstance, _js), 0,
        ::g::Fuse::Scripting::ModuleResult_typeof(), offsetof(::g::Fuse::Reactive::ModuleInstance, _moduleResult), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::ModuleInstance, _worker), 0,
        uObject_typeof(), (uintptr_t)&::g::Fuse::Reactive::ModuleInstance::_resetHookMutex_, uFieldFlagsStatic);
}

uType* ModuleInstance_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::DiagnosticSubject_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(ModuleInstance);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.ModuleInstance", options);
    type->fp_build_ = ModuleInstance_build;
    type->fp_cctor_ = ModuleInstance__cctor__fn;
    return type;
}

// public ModuleInstance(Fuse.Reactive.ThreadWorker worker, Fuse.Reactive.JavaScript js) :596
void ModuleInstance__ctor_1_fn(ModuleInstance* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js)
{
    __this->ctor_1(worker, js);
}

// public void Dispose() :625
void ModuleInstance__Dispose_fn(ModuleInstance* __this)
{
    __this->Dispose();
}

// private void Evaluate() :607
void ModuleInstance__Evaluate_fn(ModuleInstance* __this)
{
    __this->Evaluate();
}

// private object EvaluateExports() :636
void ModuleInstance__EvaluateExports_fn(ModuleInstance* __this, uObject** __retval)
{
    *__retval = __this->EvaluateExports();
}

// private void EvaluateModule() :651
void ModuleInstance__EvaluateModule_fn(ModuleInstance* __this)
{
    __this->EvaluateModule();
}

// public ModuleInstance New(Fuse.Reactive.ThreadWorker worker, Fuse.Reactive.JavaScript js) :596
void ModuleInstance__New2_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js, ModuleInstance** __retval)
{
    *__retval = ModuleInstance::New2(worker, js);
}

// private void SetDataContext() :617
void ModuleInstance__SetDataContext_fn(ModuleInstance* __this)
{
    __this->SetDataContext();
}

uSStrong<uObject*> ModuleInstance::_resetHookMutex_;

// public ModuleInstance(Fuse.Reactive.ThreadWorker worker, Fuse.Reactive.JavaScript js) [instance] :596
void ModuleInstance::ctor_1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js)
{
    uStackFrame __("Fuse.Reactive.ModuleInstance", ".ctor(Fuse.Reactive.ThreadWorker,Fuse.Reactive.JavaScript)");
    ::g::Fuse::Reactive::JavaScript__Dependency* ret2;
    ::g::Fuse::Reactive::JavaScript__Dependency* ret3;
    _deps = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[52/*Uno.Collections.Dictionary<string, object>*/]));
    _diagnostic1 = ::g::Fuse::Reactive::DiagnosticSubject::New1();
    ctor_();

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(js)->Dependencies()), ::TYPES[86/*Uno.Collections.ICollection<Fuse.Reactive.JavaScript.Dependency>*/])); i++)
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_deps), uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(js)->Dependencies()), ::TYPES[87/*Uno.Collections.IList<Fuse.Reactive.JavaScript.Dependency>*/]), uCRef<int>(i), &ret2), ret2))->Name(), uPtr(worker)->Unwrap(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(js)->Dependencies()), ::TYPES[87/*Uno.Collections.IList<Fuse.Reactive.JavaScript.Dependency>*/]), uCRef<int>(i), &ret3), ret3))->Value));

    _js = js;
    _worker = worker;
    uPtr(_worker)->Invoke(uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)ModuleInstance__Evaluate_fn, this));
}

// public void Dispose() [instance] :625
void ModuleInstance::Dispose()
{
    uStackFrame __("Fuse.Reactive.ModuleInstance", "Dispose()");
    ClearDiagnostic();

    if (_moduleResult != NULL)
    {
        uPtr(_moduleResult)->Dispose();
        _moduleResult = NULL;
    }
}

// private void Evaluate() [instance] :607
void ModuleInstance::Evaluate()
{
    uStackFrame __("Fuse.Reactive.ModuleInstance", "Evaluate()");
    uPtr(uPtr(_js)->ScriptModule())->Dependencies = _deps;
    _dc = uPtr(_worker)->Reflect(EvaluateExports());
    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)ModuleInstance__SetDataContext_fn, this));
}

// private object EvaluateExports() [instance] :636
uObject* ModuleInstance::EvaluateExports()
{
    uStackFrame __("Fuse.Reactive.ModuleInstance", "EvaluateExports()");
    EvaluateModule();

    if (_moduleResult != NULL)
        return uPtr(uPtr(_moduleResult)->Object)->Item(::STRINGS[101/*"exports"*/]);

    return NULL;
}

// private void EvaluateModule() [instance] :651
void ModuleInstance::EvaluateModule()
{
    uStackFrame __("Fuse.Reactive.ModuleInstance", "EvaluateModule()");
    uPtr(_diagnostic1)->ClearDiagnostic();
    uString* globalId = ::g::Uno::UX::Resource::GetGlobalKey(this);
    ::g::Uno::Threading::Monitor::Enter(ModuleInstance::_resetHookMutex());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(ModuleInstance::_resetHookMutex());
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Fuse::Scripting::ModuleResult* newModuleResult = uPtr(uPtr(_js)->ScriptModule())->Evaluate1(uPtr(_worker)->Context(), globalId);
        uPtr(newModuleResult)->AddDependency(uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)::g::Fuse::Reactive::JavaScript__DispatchEvaluate_fn, uPtr(_js)));

        if (newModuleResult->Error() == NULL)
            _moduleResult = newModuleResult;
        else
        {
            ::g::Fuse::Scripting::ScriptException* se = uPtr(newModuleResult)->Error();

            if (!::g::Uno::String::Contains(uPtr(uPtr(se)->Message()), ::g::Fuse::Scripting::ScriptModule::ModuleContainsAnErrorMessage()))
                uPtr(_diagnostic1)->SetDiagnostic(se);
        }
    }
}

// private void SetDataContext() [instance] :617
void ModuleInstance::SetDataContext()
{
    uStackFrame __("Fuse.Reactive.ModuleInstance", "SetDataContext()");

    if (_moduleResult != NULL)
        uPtr(_js)->SetDataContext(_dc);
}

// public ModuleInstance New(Fuse.Reactive.ThreadWorker worker, Fuse.Reactive.JavaScript js) [static] :596
ModuleInstance* ModuleInstance::New2(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js)
{
    ModuleInstance* obj1 = (ModuleInstance*)uNew(ModuleInstance_typeof());
    obj1->ctor_1(worker, js);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Multiply :1172
// {
static void Multiply_build(uType* type)
{
    ::STRINGS[102] = uString::Const("*");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Multiply__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::InfixOperator_type* Multiply_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Multiply);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.Multiply", options);
    type->fp_build_ = Multiply_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))Multiply__Compute_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))Multiply__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public Multiply(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :1175
void Multiply__ctor_3_fn(Multiply* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_3(left, right);
}

// protected override sealed object Compute(object left, object right) :1176
void Multiply__Compute_fn(Multiply* __this, uObject* left, uObject* right, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Multiply", "Compute(object,object)");
    return *__retval = ::g::Fuse::Marshal::Multiply(left, right), void();
}

// public Multiply New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :1175
void Multiply__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, Multiply** __retval)
{
    *__retval = Multiply::New1(left, right);
}

// public override sealed string get_Symbol() :1181
void Multiply__get_Symbol_fn(Multiply* __this, uString** __retval)
{
    return *__retval = ::STRINGS[102/*"*"*/], void();
}

// public Multiply(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :1175
void Multiply::ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_2(left, right);
}

// public Multiply New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :1175
Multiply* Multiply::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    Multiply* obj1 = (Multiply*)uNew(Multiply_typeof());
    obj1->ctor_3(left, right);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Name :257
// {
static void Name_build(uType* type)
{
    ::STRINGS[103] = uString::Const("Named object not found: ");
    ::TYPES[38] = ::g::Fuse::Reactive::IContext_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::ConstantExpression_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::Name, _Identifier), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Identifier", NULL, (void*)Name__get_Identifier_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Name__New1_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
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

// public Name(string identifier) :261
void Name__ctor_2_fn(Name* __this, uString* identifier)
{
    __this->ctor_2(identifier);
}

// public override sealed object GetValue(Fuse.Reactive.IContext context) :263
void Name__GetValue_fn(Name* __this, uObject* context, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Name", "GetValue(Fuse.Reactive.IContext)");

    if (::g::Fuse::Reactive::IContext::NameTable(uInterface(uPtr(context), ::TYPES[38/*Fuse.Reactive.IContext*/])) != NULL)
    {
        uObject* obj = uPtr(::g::Fuse::Reactive::IContext::NameTable(uInterface(uPtr(context), ::TYPES[38/*Fuse.Reactive.IContext*/])))->Item(__this->Identifier());

        if (obj != NULL)
            return *__retval = obj, void();
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::STRINGS[103/*"Named objec...*/], __this->Identifier())));
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

// public Name New(string identifier) :261
void Name__New1_fn(uString* identifier, Name** __retval)
{
    *__retval = Name::New1(identifier);
}

// public override sealed string ToString() :273
void Name__ToString_fn(Name* __this, uString** __retval)
{
    return *__retval = __this->Identifier(), void();
}

// public Name(string identifier) [instance] :261
void Name::ctor_2(uString* identifier)
{
    ctor_1();
    Identifier(identifier);
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

// public Name New(string identifier) [static] :261
Name* Name::New1(uString* identifier)
{
    Name* obj1 = (Name*)uNew(Name_typeof());
    obj1->ctor_2(identifier);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class NameValuePair :1111
// {
static void NameValuePair_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(1,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::NameValuePair, _Name), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Name", NULL, (void*)NameValuePair__get_Name_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)NameValuePair__New1_fn, 0, true, type, 2, ::g::Uno::String_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* NameValuePair_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NameValuePair);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.NameValuePair", options);
    type->fp_build_ = NameValuePair_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::UnaryOperator*, uObject*, uObject**))NameValuePair__Compute_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public NameValuePair(string name, Fuse.Reactive.Expression value) :1116
void NameValuePair__ctor_2_fn(NameValuePair* __this, uString* name, ::g::Fuse::Reactive::Expression* value)
{
    __this->ctor_2(name, value);
}

// protected override sealed object Compute(object value) :1121
void NameValuePair__Compute_fn(NameValuePair* __this, uObject* value, uObject** __retval)
{
    return *__retval = ::g::Fuse::NameValuePair::New1(__this->Name(), value), void();
}

// public generated string get_Name() :1113
void NameValuePair__get_Name_fn(NameValuePair* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(string value) :1113
void NameValuePair__set_Name_fn(NameValuePair* __this, uString* value)
{
    __this->Name(value);
}

// public NameValuePair New(string name, Fuse.Reactive.Expression value) :1116
void NameValuePair__New1_fn(uString* name, ::g::Fuse::Reactive::Expression* value, NameValuePair** __retval)
{
    *__retval = NameValuePair::New1(name, value);
}

// public NameValuePair(string name, Fuse.Reactive.Expression value) [instance] :1116
void NameValuePair::ctor_2(uString* name, ::g::Fuse::Reactive::Expression* value)
{
    ctor_1(value);
    Name(name);
}

// public generated string get_Name() [instance] :1113
uString* NameValuePair::Name()
{
    return _Name;
}

// private generated void set_Name(string value) [instance] :1113
void NameValuePair::Name(uString* value)
{
    _Name = value;
}

// public NameValuePair New(string name, Fuse.Reactive.Expression value) [static] :1116
NameValuePair* NameValuePair::New1(uString* name, ::g::Fuse::Reactive::Expression* value)
{
    NameValuePair* obj1 = (NameValuePair*)uNew(NameValuePair_typeof());
    obj1->ctor_2(name, value);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Negate :2069
// {
static void Negate_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(1);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Negate__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Negate_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryOperator_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Negate);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Negate", options);
    type->fp_build_ = Negate_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::UnaryOperator*, uObject*, uObject**))Negate__Compute_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Negate(Fuse.Reactive.Expression operand) :2071
void Negate__ctor_2_fn(Negate* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_2(operand);
}

// protected override sealed object Compute(object operand) :2072
void Negate__Compute_fn(Negate* __this, uObject* operand, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Negate", "Compute(object)");
    return *__retval = ::g::Fuse::Marshal::Multiply(operand, uBox<int>(::TYPES[33/*int*/], -1)), void();
}

// public Negate New(Fuse.Reactive.Expression operand) :2071
void Negate__New1_fn(::g::Fuse::Reactive::Expression* operand, Negate** __retval)
{
    *__retval = Negate::New1(operand);
}

// public Negate(Fuse.Reactive.Expression operand) [instance] :2071
void Negate::ctor_2(::g::Fuse::Reactive::Expression* operand)
{
    ctor_1(operand);
}

// public Negate New(Fuse.Reactive.Expression operand) [static] :2071
Negate* Negate::New1(::g::Fuse::Reactive::Expression* operand)
{
    Negate* obj1 = (Negate*)uNew(Negate_typeof());
    obj1->ctor_2(operand);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.JavaScript\1.2.0\$.uno
// ------------------------------------------------------------------------------------

// private sealed class Observable.NewAll :1154
// {
static void Observable__NewAll_build(uType* type)
{
    ::TYPES[88] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Fuse::Reactive::ArrayMirror_typeof(), offsetof(::g::Fuse::Reactive::Observable__NewAll, _newValues), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Observable__NewAll, _origin), 0);
}

::g::Fuse::Reactive::Observable__Operation_type* Observable__NewAll_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Observable__Operation_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__NewAll);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Observable__Operation_type);
    type = (::g::Fuse::Reactive::Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.NewAll", options);
    type->fp_build_ = Observable__NewAll_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Reactive::Observable__Operation*, uObject*))Observable__NewAll__OnPerform_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Reactive::Observable__Operation*))Observable__NewAll__Unsubscribe_fn;
    return type;
}

// public NewAll(Fuse.Reactive.Observable obs, Fuse.Reactive.ArrayMirror newValues, int origin) :1159
void Observable__NewAll__ctor_1_fn(Observable__NewAll* __this, ::g::Fuse::Reactive::Observable* obs, ::g::Fuse::Reactive::ArrayMirror* newValues, int* origin)
{
    __this->ctor_1(obs, newValues, *origin);
}

// public NewAll New(Fuse.Reactive.Observable obs, Fuse.Reactive.ArrayMirror newValues, int origin) :1159
void Observable__NewAll__New1_fn(::g::Fuse::Reactive::Observable* obs, ::g::Fuse::Reactive::ArrayMirror* newValues, int* origin, Observable__NewAll** __retval)
{
    *__retval = Observable__NewAll::New1(obs, newValues, *origin);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription> sub) :1170
void Observable__NewAll__OnPerform_fn(Observable__NewAll* __this, uObject* sub)
{
    uStackFrame __("Fuse.Reactive.Observable.NewAll", "OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>)");
    ::g::Fuse::Reactive::Observable__Subscription* ret2;
    ::g::Fuse::Reactive::Observable__Subscription* ret3;
    uPtr(__this->Observable())->UnsubscribeValues();
    uPtr(uPtr(__this->Observable())->_values)->Clear();
    uPtr(uPtr(__this->Observable())->_values)->AddRange((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[88/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<object>*/], uPtr(__this->_newValues)->ItemsReadonly())));

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Reactive.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(__this->_origin))
            ::g::Fuse::Reactive::IObserver::OnNewAll(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[3/*Fuse.Reactive.IObserver*/]), (uObject*)__this->_newValues);
}

// protected override sealed void Unsubscribe() :1165
void Observable__NewAll__Unsubscribe_fn(Observable__NewAll* __this)
{
    uStackFrame __("Fuse.Reactive.Observable.NewAll", "Unsubscribe()");
    ::g::Fuse::Reactive::ValueMirror::Unsubscribe1(__this->_newValues);
}

// public NewAll(Fuse.Reactive.Observable obs, Fuse.Reactive.ArrayMirror newValues, int origin) [instance] :1159
void Observable__NewAll::ctor_1(::g::Fuse::Reactive::Observable* obs, ::g::Fuse::Reactive::ArrayMirror* newValues, int origin)
{
    ctor_(obs);
    _newValues = newValues;
    _origin = origin;
}

// public NewAll New(Fuse.Reactive.Observable obs, Fuse.Reactive.ArrayMirror newValues, int origin) [static] :1159
Observable__NewAll* Observable__NewAll::New1(::g::Fuse::Reactive::Observable* obs, ::g::Fuse::Reactive::ArrayMirror* newValues, int origin)
{
    Observable__NewAll* obj1 = (Observable__NewAll*)uNew(Observable__NewAll_typeof());
    obj1->ctor_1(obs, newValues, origin);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.JavaScript\1.2.0\$.uno
// ------------------------------------------------------------------------------------

// private sealed class Observable.NewAt :1124
// {
static void Observable__NewAt_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Observable__NewAt, _index), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Observable__NewAt, _value), 0);
}

::g::Fuse::Reactive::Observable__Operation_type* Observable__NewAt_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Observable__Operation_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__NewAt);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Observable__Operation_type);
    type = (::g::Fuse::Reactive::Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.NewAt", options);
    type->fp_build_ = Observable__NewAt_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Reactive::Observable__Operation*, uObject*))Observable__NewAt__OnPerform_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Reactive::Observable__Operation*))Observable__NewAt__Unsubscribe_fn;
    return type;
}

// public NewAt(Fuse.Reactive.Observable obs, int index, object newValue) :1129
void Observable__NewAt__ctor_1_fn(Observable__NewAt* __this, ::g::Fuse::Reactive::Observable* obs, int* index, uObject* newValue)
{
    __this->ctor_1(obs, *index, newValue);
}

// public NewAt New(Fuse.Reactive.Observable obs, int index, object newValue) :1129
void Observable__NewAt__New1_fn(::g::Fuse::Reactive::Observable* obs, int* index, uObject* newValue, Observable__NewAt** __retval)
{
    *__retval = Observable__NewAt::New1(obs, *index, newValue);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription> sub) :1141
void Observable__NewAt__OnPerform_fn(Observable__NewAt* __this, uObject* sub)
{
    uStackFrame __("Fuse.Reactive.Observable.NewAt", "OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>)");
    ::g::Fuse::Reactive::Observable__Subscription* ret2;
    ::g::Fuse::Reactive::Observable__Subscription* ret3;
    ::g::Fuse::Reactive::ValueMirror::Unsubscribe1(uPtr(__this->Observable())->Item(__this->_index));
    uPtr(__this->Observable())->SetValue(__this->_index, __this->_value);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Reactive.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(-1))
            ::g::Fuse::Reactive::IObserver::OnNewAt(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[3/*Fuse.Reactive.IObserver*/]), __this->_index, __this->_value);
}

// protected override sealed void Unsubscribe() :1135
void Observable__NewAt__Unsubscribe_fn(Observable__NewAt* __this)
{
    uStackFrame __("Fuse.Reactive.Observable.NewAt", "Unsubscribe()");
    ::g::Fuse::Reactive::ValueMirror::Unsubscribe1(__this->_value);
}

// public NewAt(Fuse.Reactive.Observable obs, int index, object newValue) [instance] :1129
void Observable__NewAt::ctor_1(::g::Fuse::Reactive::Observable* obs, int index, uObject* newValue)
{
    ctor_(obs);
    _index = index;
    _value = newValue;
}

// public NewAt New(Fuse.Reactive.Observable obs, int index, object newValue) [static] :1129
Observable__NewAt* Observable__NewAt::New1(::g::Fuse::Reactive::Observable* obs, int index, uObject* newValue)
{
    Observable__NewAt* obj1 = (Observable__NewAt*)uNew(Observable__NewAt_typeof());
    obj1->ctor_1(obs, index, newValue);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class NotEqual :1295
// {
static void NotEqual_build(uType* type)
{
    ::STRINGS[104] = uString::Const("!=");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NotEqual__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::InfixOperator_type* NotEqual_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NotEqual);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.NotEqual", options);
    type->fp_build_ = NotEqual_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))NotEqual__Compute_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))NotEqual__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public NotEqual(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :1298
void NotEqual__ctor_3_fn(NotEqual* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_3(left, right);
}

// protected override sealed object Compute(object left, object right) :1299
void NotEqual__Compute_fn(NotEqual* __this, uObject* left, uObject* right, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.NotEqual", "Compute(object,object)");

    if ((left == NULL) || (right == NULL))
        return *__retval = NULL, void();

    return *__retval = uBox(::TYPES[18/*bool*/], !uUnbox<bool>(::TYPES[18/*bool*/], ::g::Fuse::Marshal::EqualTo(left, right))), void();
}

// public NotEqual New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :1298
void NotEqual__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, NotEqual** __retval)
{
    *__retval = NotEqual::New1(left, right);
}

// public override sealed string get_Symbol() :1305
void NotEqual__get_Symbol_fn(NotEqual* __this, uString** __retval)
{
    return *__retval = ::STRINGS[104/*"!="*/], void();
}

// public NotEqual(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :1298
void NotEqual::ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_2(left, right);
}

// public NotEqual New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :1298
NotEqual* NotEqual::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    NotEqual* obj1 = (NotEqual*)uNew(NotEqual_typeof());
    obj1->ctor_3(left, right);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class NullCoalesce :1196
// {
static void NullCoalesce_build(uType* type)
{
    ::STRINGS[105] = uString::Const("??");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NullCoalesce__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::InfixOperator_type* NullCoalesce_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NullCoalesce);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.NullCoalesce", options);
    type->fp_build_ = NullCoalesce_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))NullCoalesce__Compute_fn;
    type->fp_get_IsLeftOptional = (void(*)(::g::Fuse::Reactive::BinaryOperator*, bool*))NullCoalesce__get_IsLeftOptional_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))NullCoalesce__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public NullCoalesce(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :1199
void NullCoalesce__ctor_3_fn(NullCoalesce* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_3(left, right);
}

// protected override sealed object Compute(object left, object right) :1203
void NullCoalesce__Compute_fn(NullCoalesce* __this, uObject* left, uObject* right, uObject** __retval)
{
    if (left != NULL)
        return *__retval = left, void();
    else
        return *__retval = right, void();
}

// protected override sealed bool get_IsLeftOptional() :1201
void NullCoalesce__get_IsLeftOptional_fn(NullCoalesce* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public NullCoalesce New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :1199
void NullCoalesce__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, NullCoalesce** __retval)
{
    *__retval = NullCoalesce::New1(left, right);
}

// public override sealed string get_Symbol() :1209
void NullCoalesce__get_Symbol_fn(NullCoalesce* __this, uString** __retval)
{
    return *__retval = ::STRINGS[105/*"??"*/], void();
}

// public NullCoalesce(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :1199
void NullCoalesce::ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_2(left, right);
}

// public NullCoalesce New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :1199
NullCoalesce* NullCoalesce::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    NullCoalesce* obj1 = (NullCoalesce*)uNew(NullCoalesce_typeof());
    obj1->ctor_3(left, right);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.JavaScript\1.2.0\$.uno
// ------------------------------------------------------------------------------------

// internal sealed class ObjectMirror :702
// {
static void ObjectMirror_build(uType* type)
{
    ::TYPES[52] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[89] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::Reactive::ValueMirror_typeof();
    ::TYPES[15] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[90] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(10/*ToArray<string>*/, ::g::Uno::String_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::IRaw_typeof(), offsetof(ObjectMirror_type, interface0),
        ::g::Fuse::IObject_typeof(), offsetof(ObjectMirror_type, interface1));
    type->SetFields(1,
        ::TYPES[52/*Uno.Collections.Dictionary<string, object>*/], offsetof(::g::Fuse::Reactive::ObjectMirror, _props), 0);
}

ObjectMirror_type* ObjectMirror_typeof()
{
    static uSStrong<ObjectMirror_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ValueMirror_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ObjectMirror);
    options.TypeSize = sizeof(ObjectMirror_type);
    type = (ObjectMirror_type*)uClassType::New("Fuse.Reactive.ObjectMirror", options);
    type->fp_build_ = ObjectMirror_build;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Reactive::ValueMirror*))ObjectMirror__Unsubscribe_fn;
    type->interface1.fp_ContainsKey = (void(*)(uObject*, uString*, bool*))ObjectMirror__ContainsKey_fn;
    type->interface1.fp_get_Item = (void(*)(uObject*, uString*, uObject**))ObjectMirror__get_Item_fn;
    type->interface1.fp_get_Keys = (void(*)(uObject*, uArray**))ObjectMirror__get_Keys_fn;
    type->interface0.fp_get_Raw = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::ValueMirror__get_Raw_fn;
    return type;
}

// internal ObjectMirror(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj) :706
void ObjectMirror__ctor_1_fn(ObjectMirror* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj)
{
    __this->ctor_1(worker, obj);
}

// public bool ContainsKey(string key) :725
void ObjectMirror__ContainsKey_fn(ObjectMirror* __this, uString* key, bool* __retval)
{
    *__retval = __this->ContainsKey(key);
}

// public object get_Item(string key) :732
void ObjectMirror__get_Item_fn(ObjectMirror* __this, uString* key, uObject** __retval)
{
    *__retval = __this->Item(key);
}

// public string[] get_Keys() :737
void ObjectMirror__get_Keys_fn(ObjectMirror* __this, uArray** __retval)
{
    *__retval = __this->Keys();
}

// internal ObjectMirror New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj) :706
void ObjectMirror__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, ObjectMirror** __retval)
{
    *__retval = ObjectMirror::New1(worker, obj);
}

// public override sealed void Unsubscribe() :716
void ObjectMirror__Unsubscribe_fn(ObjectMirror* __this)
{
    uStackFrame __("Fuse.Reactive.ObjectMirror", "Unsubscribe()");
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > ret4;

    for (::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(__this->_props), &ret4), ret4); enum1.MoveNext(::TYPES[89/*Uno.Collections.Dictionary<string, object>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong<uObject*> > p = enum1.Current(::TYPES[89/*Uno.Collections.Dictionary<string, object>.Enumerator*/]);
        ::g::Fuse::Reactive::ValueMirror* d = uAs< ::g::Fuse::Reactive::ValueMirror*>(p.Value(::TYPES[15/*Uno.Collections.KeyValuePair<string, object>*/]), ::TYPES[7/*Fuse.Reactive.ValueMirror*/]);

        if (d != NULL)
            uPtr(d)->Unsubscribe();
    }
}

// internal ObjectMirror(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj) [instance] :706
void ObjectMirror::ctor_1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj)
{
    uStackFrame __("Fuse.Reactive.ObjectMirror", ".ctor(Fuse.Reactive.ThreadWorker,Fuse.Scripting.Object)");
    _props = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[52/*Uno.Collections.Dictionary<string, object>*/]));
    ctor_(obj);
    uArray* k = uPtr(obj)->Keys();

    for (int i = 0; i < uPtr(k)->Length(); i++)
    {
        uString* s = uPtr(k)->Strong<uString*>(i);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_props), s, uPtr(worker)->Reflect(uPtr(obj)->Item(s)));
    }
}

// public bool ContainsKey(string key) [instance] :725
bool ObjectMirror::ContainsKey(uString* key)
{
    uStackFrame __("Fuse.Reactive.ObjectMirror", "ContainsKey(string)");
    bool ret3;
    return (::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(_props), key, &ret3), ret3);
}

// public object get_Item(string key) [instance] :732
uObject* ObjectMirror::Item(uString* key)
{
    uStackFrame __("Fuse.Reactive.ObjectMirror", "get_Item(string)");
    uObject* ret5;
    return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(_props), key, &ret5), ret5);
}

// public string[] get_Keys() [instance] :737
uArray* ObjectMirror::Keys()
{
    uStackFrame __("Fuse.Reactive.ObjectMirror", "get_Keys()");
    return (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[90/*Uno.Collections.EnumerableExtensions.ToArray<string>*/], (uObject*)((::g::Uno::Collections::Dictionary__KeyCollection*)uPtr(_props)->Keys()));
}

// internal ObjectMirror New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj) [static] :706
ObjectMirror* ObjectMirror::New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj)
{
    ObjectMirror* obj2 = (ObjectMirror*)uNew(ObjectMirror_typeof());
    obj2->ctor_1(worker, obj);
    return obj2;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.JavaScript\1.2.0\$.uno
// ------------------------------------------------------------------------------------

// internal sealed class Observable :749
// {
static void Observable_build(uType* type)
{
    ::STRINGS[106] = uString::Const("addSubscriber");
    ::STRINGS[107] = uString::Const("set");
    ::STRINGS[108] = uString::Const("clear");
    ::STRINGS[109] = uString::Const("newAt");
    ::STRINGS[110] = uString::Const("newAll");
    ::STRINGS[111] = uString::Const("add");
    ::STRINGS[112] = uString::Const("removeAt");
    ::STRINGS[113] = uString::Const("insertAt");
    ::STRINGS[114] = uString::Const("removeRange");
    ::STRINGS[115] = uString::Const("insertAll");
    ::STRINGS[116] = uString::Const("failed");
    ::STRINGS[117] = uString::Const("Unhandled observable operation: ");
    ::STRINGS[118] = uString::Const("removeSubscriber");
    ::TYPES[66] = ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[91] = ::g::Uno::Collections::List_typeof()->MakeType(Observable__Subscription_typeof(), NULL);
    ::TYPES[37] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[6] = uObject_typeof()->Array();
    ::TYPES[25] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[21] = ::g::Uno::String_typeof();
    ::TYPES[92] = ::g::Fuse::Reactive::ArrayMirror_typeof();
    ::TYPES[33] = ::g::Uno::Int_typeof();
    ::TYPES[20] = ::g::Uno::Double_typeof();
    ::TYPES[23] = ::g::Uno::Action_typeof();
    ::TYPES[7] = ::g::Fuse::Reactive::ValueMirror_typeof();
    type->SetInterfaces(
        ::g::Fuse::IRaw_typeof(), offsetof(Observable_type, interface0),
        ::g::Fuse::IArray_typeof(), offsetof(Observable_type, interface1),
        ::g::Fuse::Reactive::IObservable_typeof(), offsetof(Observable_type, interface2));
    type->SetFields(1,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::Observable, _isUnsubscribed), 0,
        ::TYPES[25/*Fuse.Scripting.Object*/], offsetof(::g::Fuse::Reactive::Observable, _observable), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Reactive::Observable, _observeChange), 0,
        ::TYPES[91/*Uno.Collections.List<Fuse.Reactive.Observable.Subscription>*/], offsetof(::g::Fuse::Reactive::Observable, _observers), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::Observable, _usingObservers), 0,
        ::TYPES[66/*Uno.Collections.List<object>*/], offsetof(::g::Fuse::Reactive::Observable, _values), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::Observable, _worker), 0);
}

Observable_type* Observable_typeof()
{
    static uSStrong<Observable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ListMirror_typeof();
    options.FieldCount = 8;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Observable);
    options.TypeSize = sizeof(Observable_type);
    type = (Observable_type*)uClassType::New("Fuse.Reactive.Observable", options);
    type->fp_build_ = Observable_build;
    type->fp_get_Item = (void(*)(::g::Fuse::Reactive::ListMirror*, int*, uObject**))Observable__get_Item_fn;
    type->fp_get_Length = (void(*)(::g::Fuse::Reactive::ListMirror*, int*))Observable__get_Length_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Reactive::ValueMirror*))Observable__Unsubscribe_fn;
    type->interface2.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))Observable__Subscribe_fn;
    type->interface1.fp_get_Length = (void(*)(uObject*, int*))Observable__get_Length_fn;
    type->interface1.fp_get_Item = (void(*)(uObject*, int*, uObject**))Observable__get_Item_fn;
    type->interface0.fp_get_Raw = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::ValueMirror__get_Raw_fn;
    return type;
}

// internal Observable(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, bool supressCallback) :896
void Observable__ctor_2_fn(Observable* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, bool* supressCallback)
{
    __this->ctor_2(worker, obj, *supressCallback);
}

// internal static Fuse.Reactive.Observable Create(Fuse.Reactive.ThreadWorker worker) :904
void Observable__Create_fn(::g::Fuse::Reactive::ThreadWorker* worker, Observable** __retval)
{
    *__retval = Observable::Create(worker);
}

// public bool get_IsUnsubscribed() :972
void Observable__get_IsUnsubscribed_fn(Observable* __this, bool* __retval)
{
    *__retval = __this->IsUnsubscribed();
}

// public override sealed object get_Item(int index) :756
void Observable__get_Item_fn(Observable* __this, int* index, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Observable", "get_Item(int)");
    uObject* ret4;
    int index_ = *index;
    return *__retval = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_values), uCRef<int>(index_), &ret4), ret4), void();
}

// public override sealed int get_Length() :752
void Observable__get_Length_fn(Observable* __this, int* __retval)
{
    uStackFrame __("Fuse.Reactive.Observable", "get_Length()");
    return *__retval = uPtr(__this->_values)->Count(), void();
}

// internal Observable New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, bool supressCallback) :896
void Observable__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, bool* supressCallback, Observable** __retval)
{
    *__retval = Observable::New1(worker, obj, *supressCallback);
}

// internal Fuse.Scripting.Object get_Object() :892
void Observable__get_Object_fn(Observable* __this, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->Object();
}

// private object ObserveChange(object[] args) :918
void Observable__ObserveChange_fn(Observable* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->ObserveChange(args);
}

// private void ObserversCleanup() :768
void Observable__ObserversCleanup_fn(Observable* __this)
{
    __this->ObserversCleanup();
}

// private void RemoveSubscriber() :995
void Observable__RemoveSubscriber_fn(Observable* __this)
{
    __this->RemoveSubscriber();
}

// public void SetValue(int index, object value) :760
void Observable__SetValue_fn(Observable* __this, int* index, uObject* value)
{
    __this->SetValue(*index, value);
}

// public Fuse.Reactive.ISubscription Subscribe(Fuse.Reactive.IObserver observer) :884
void Observable__Subscribe_fn(Observable* __this, uObject* observer, uObject** __retval)
{
    *__retval = __this->Subscribe(observer);
}

// private int ToInt(object obj) :909
void Observable__ToInt_fn(Observable* __this, uObject* obj, int* __retval)
{
    *__retval = __this->ToInt(obj);
}

// public override sealed void Unsubscribe() :975
void Observable__Unsubscribe_fn(Observable* __this)
{
    uStackFrame __("Fuse.Reactive.Observable", "Unsubscribe()");
    __this->UnsubscribeValues();

    if (!__this->_isUnsubscribed)
    {
        __this->_isUnsubscribed = true;
        uPtr(__this->_worker)->Invoke(uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)Observable__RemoveSubscriber_fn, __this));
    }
}

// private void UnsubscribeValues() :986
void Observable__UnsubscribeValues_fn(Observable* __this)
{
    __this->UnsubscribeValues();
}

// internal Observable(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, bool supressCallback) [instance] :896
void Observable::ctor_2(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, bool supressCallback)
{
    uStackFrame __("Fuse.Reactive.Observable", ".ctor(Fuse.Reactive.ThreadWorker,Fuse.Scripting.Object,bool)");
    _values = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[66/*Uno.Collections.List<object>*/]));
    _observers = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[91/*Uno.Collections.List<Fuse.Reactive.Observable.Subscription>*/]));
    ctor_1(obj);
    _worker = worker;
    _observable = obj;
    _observeChange = uPtr(uPtr(worker)->Context())->CallbackToFunction(uDelegate::New(::TYPES[37/*Fuse.Scripting.Callback*/], (void*)Observable__ObserveChange_fn, this));
    uPtr(obj)->CallMethod(::STRINGS[106/*"addSubscriber"*/], uArray::Init<uObject*>(::TYPES[6/*object[]*/], 2, (::g::Fuse::Scripting::Function*)_observeChange, uBox(::TYPES[18/*bool*/], supressCallback)));
}

// public bool get_IsUnsubscribed() [instance] :972
bool Observable::IsUnsubscribed()
{
    return _isUnsubscribed;
}

// internal Fuse.Scripting.Object get_Object() [instance] :892
::g::Fuse::Scripting::Object* Observable::Object()
{
    return _observable;
}

// private object ObserveChange(object[] args) [instance] :918
uObject* Observable::ObserveChange(uArray* args)
{
    uStackFrame __("Fuse.Reactive.Observable", "ObserveChange(object[])");
    uString* op = uAs<uString*>(uPtr(args)->Strong<uObject*>(1), ::TYPES[21/*string*/]);
    int origin = ToInt(args->Strong<uObject*>(2));

    if (::g::Uno::String::op_Equality(op, ::STRINGS[107/*"set"*/]))
        uPtr(_worker)->Enqueue(Observable__Set::New1(this, uPtr(_worker)->Reflect(uPtr(args)->Strong<uObject*>(3)), origin));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[108/*"clear"*/]))
        uPtr(_worker)->Enqueue(Observable__Clear::New1(this, origin));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[109/*"newAt"*/]))
        uPtr(_worker)->Enqueue(Observable__NewAt::New1(this, ToInt(uPtr(args)->Strong<uObject*>(3)), uPtr(_worker)->Reflect(uPtr(args)->Strong<uObject*>(4))));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[110/*"newAll"*/]))
        uPtr(_worker)->Enqueue(Observable__NewAll::New1(this, uCast< ::g::Fuse::Reactive::ArrayMirror*>(uPtr(_worker)->Reflect(uPtr(args)->Strong<uObject*>(3)), ::TYPES[92/*Fuse.Reactive.ArrayMirror*/]), origin));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[111/*"add"*/]))
        uPtr(_worker)->Enqueue(Observable__Add::New1(this, uPtr(_worker)->Reflect(uPtr(args)->Strong<uObject*>(3))));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[112/*"removeAt"*/]))
        uPtr(_worker)->Enqueue(Observable__RemoveAt::New1(this, ToInt(uPtr(args)->Strong<uObject*>(3))));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[113/*"insertAt"*/]))
        uPtr(_worker)->Enqueue(Observable__InsertAt::New1(this, ToInt(uPtr(args)->Strong<uObject*>(3)), uPtr(_worker)->Reflect(uPtr(args)->Strong<uObject*>(4))));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[114/*"removeRange"*/]))
        uPtr(_worker)->Enqueue(Observable__RemoveRange::New1(this, ToInt(uPtr(args)->Strong<uObject*>(3)), ToInt(uPtr(args)->Strong<uObject*>(4))));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[115/*"insertAll"*/]))
        uPtr(_worker)->Enqueue(Observable__InsertAll::New1(this, ToInt(uPtr(args)->Strong<uObject*>(3)), uCast< ::g::Fuse::Reactive::ArrayMirror*>(uPtr(_worker)->Reflect(uPtr(args)->Strong<uObject*>(4)), ::TYPES[92/*Fuse.Reactive.ArrayMirror*/])));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[116/*"failed"*/]))
        uPtr(_worker)->Enqueue(Observable__Failed::New1(this, uAs<uString*>(uPtr(args)->Strong<uObject*>(3), ::TYPES[21/*string*/])));
    else
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::STRINGS[117/*"Unhandled o...*/], op)));

    return NULL;
}

// private void ObserversCleanup() [instance] :768
void Observable::ObserversCleanup()
{
    uStackFrame __("Fuse.Reactive.Observable", "ObserversCleanup()");
    Observable__Subscription* ret2;

    if (_usingObservers)
        return;

    for (int i = uPtr(_observers)->Count() - 1; i >= 0; --i)
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_observers), uCRef<int>(i), &ret2), ret2))->Removed())
            uPtr(_observers)->RemoveAt(i);
}

// private void RemoveSubscriber() [instance] :995
void Observable::RemoveSubscriber()
{
    uStackFrame __("Fuse.Reactive.Observable", "RemoveSubscriber()");
    uPtr(_observable)->CallMethod(::STRINGS[118/*"removeSubsc...*/], uArray::Init<uObject*>(::TYPES[6/*object[]*/], 1, (::g::Fuse::Scripting::Function*)_observeChange));
    _observeChange = NULL;
    _observable = NULL;
}

// public void SetValue(int index, object value) [instance] :760
void Observable::SetValue(int index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.Observable", "SetValue(int,object)");
    ::g::Uno::Collections::List__set_Item_fn(uPtr(_values), uCRef<int>(index), value);
}

// public Fuse.Reactive.ISubscription Subscribe(Fuse.Reactive.IObserver observer) [instance] :884
uObject* Observable::Subscribe(uObject* observer)
{
    uStackFrame __("Fuse.Reactive.Observable", "Subscribe(Fuse.Reactive.IObserver)");
    return (uObject*)Observable__Subscription::New2(this, observer);
}

// private int ToInt(object obj) [instance] :909
int Observable::ToInt(uObject* obj)
{
    uStackFrame __("Fuse.Reactive.Observable", "ToInt(object)");

    if (uIs(obj, ::TYPES[33/*int*/]))
        return uUnbox<int>(::TYPES[33/*int*/], obj);

    if (uIs(obj, ::TYPES[20/*double*/]))
        return (int)uUnbox<double>(::TYPES[20/*double*/], obj);

    return -1;
}

// private void UnsubscribeValues() [instance] :986
void Observable::UnsubscribeValues()
{
    uStackFrame __("Fuse.Reactive.Observable", "UnsubscribeValues()");
    uObject* ret3;

    for (int i = 0; i < uPtr(_values)->Count(); i++)
    {
        ::g::Fuse::Reactive::ValueMirror* vm = uAs< ::g::Fuse::Reactive::ValueMirror*>((::g::Uno::Collections::List__get_Item_fn(uPtr(_values), uCRef<int>(i), &ret3), ret3), ::TYPES[7/*Fuse.Reactive.ValueMirror*/]);

        if (vm != NULL)
            uPtr(vm)->Unsubscribe();
    }
}

// internal static Fuse.Reactive.Observable Create(Fuse.Reactive.ThreadWorker worker) [static] :904
Observable* Observable::Create(::g::Fuse::Reactive::ThreadWorker* worker)
{
    uStackFrame __("Fuse.Reactive.Observable", "Create(Fuse.Reactive.ThreadWorker)");
    return Observable::New1(worker, uCast< ::g::Fuse::Scripting::Object*>(uPtr(uPtr(uPtr(worker)->Context())->Observable())->Call(uArray::New(::TYPES[6/*object[]*/], 0)), ::TYPES[25/*Fuse.Scripting.Object*/]), true);
}

// internal Observable New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, bool supressCallback) [static] :896
Observable* Observable::New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, bool supressCallback)
{
    Observable* obj1 = (Observable*)uNew(Observable_typeof());
    obj1->ctor_2(worker, obj, supressCallback);
    return obj1;
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
    type->fp_PushData = (void(*)(::g::Fuse::Reactive::ValueObserver*, uObject*))Instantiator__ObservableLink__PushData_fn;
    type->interface1.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnClear_fn;
    type->interface1.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnSet_fn;
    type->interface1.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnAdd_fn;
    type->interface1.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnNewAt_fn;
    type->interface1.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnNewAll_fn;
    type->interface1.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface1.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnInsertAt_fn;
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

// protected override sealed void PushData(object newData) :1401
void Instantiator__ObservableLink__PushData_fn(Instantiator__ObservableLink* __this, uObject* newData)
{
    uStackFrame __("Fuse.Reactive.Instantiator.ObservableLink", "PushData(object)");
    ::g::Fuse::Node* ret2;

    if (__this->_target == NULL)
        return;

    uObject* oldData = __this->_currentData;
    __this->_currentData = newData;

    for (int i = 0; i < uPtr(uPtr(__this->_target)->Nodes)->Count(); ++i)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(__this->_target)->Nodes), uCRef<int>(i), &ret2), ret2))->BroadcastDataChange(oldData, newData);
}

// public ObservableLink(Fuse.Reactive.IObservable obs, Fuse.Reactive.Instantiator.WindowItem target) [instance] :1385
void Instantiator__ObservableLink::ctor_1(uObject* obs, ::g::Fuse::Reactive::Instantiator__WindowItem* target)
{
    uStackFrame __("Fuse.Reactive.Instantiator.ObservableLink", ".ctor(Fuse.Reactive.IObservable,Fuse.Reactive.Instantiator.WindowItem)");
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

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.JavaScript\1.2.0\$.uno
// ------------------------------------------------------------------------------------

// internal class ObservableProperty :1346
// {
static void ObservableProperty_build(uType* type)
{
    ::TYPES[39] = ::g::Fuse::IArray_typeof();
    ::TYPES[45] = ::g::Fuse::Reactive::ISubscription_typeof();
    ::TYPES[5] = ::g::Uno::IDisposable_typeof();
    ::TYPES[23] = ::g::Uno::Action_typeof();
    ::TYPES[93] = ::g::Uno::Action1_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(ObservableProperty_type, interface0),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(ObservableProperty_type, interface1));
    type->SetFields(0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::ObservableProperty, _obj), 0,
        ::g::Fuse::Reactive::Observable_typeof(), offsetof(::g::Fuse::Reactive::ObservableProperty, _observable), 0,
        ::g::Uno::UX::Property_typeof(), offsetof(::g::Fuse::Reactive::ObservableProperty, _property), 0,
        ::TYPES[45/*Fuse.Reactive.ISubscription*/], offsetof(::g::Fuse::Reactive::ObservableProperty, _subscription), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::ObservableProperty, _worker), 0);
}

ObservableProperty_type* ObservableProperty_typeof()
{
    static uSStrong<ObservableProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ObservableProperty);
    options.TypeSize = sizeof(ObservableProperty_type);
    type = (ObservableProperty_type*)uClassType::New("Fuse.Reactive.ObservableProperty", options);
    type->fp_build_ = ObservableProperty_build;
    type->interface0.fp_OnClear = (void(*)(uObject*))ObservableProperty__FuseReactiveIObserverOnClear_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, uObject*))ObservableProperty__FuseReactiveIObserverOnNewAll_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))ObservableProperty__FuseReactiveIObserverOnNewAt_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))ObservableProperty__FuseReactiveIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))ObservableProperty__FuseReactiveIObserverOnAdd_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int*))ObservableProperty__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))ObservableProperty__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))ObservableProperty__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))ObservableProperty__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public ObservableProperty(Fuse.Reactive.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) :1352
void ObservableProperty__ctor__fn(ObservableProperty* __this, ::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    __this->ctor_(w, obj, p);
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :1415
void ObservableProperty__FuseReactiveIObserverOnAdd_fn(ObservableProperty* __this, uObject* addedValue)
{
}

// private void Fuse.Reactive.IObserver.OnClear() :1397
void ObservableProperty__FuseReactiveIObserverOnClear_fn(ObservableProperty* __this)
{
    uStackFrame __("Fuse.Reactive.ObservableProperty", "Fuse.Reactive.IObserver.OnClear()");

    if (::g::Uno::Type::IsClass(uPtr(uPtr(__this->_property)->PropertyType())))
        uPtr(__this->_property)->SetAsObject1(NULL, (uObject*)__this);
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :1427
void ObservableProperty__FuseReactiveIObserverOnFailed_fn(ObservableProperty* __this, uString* message)
{
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :1423
void ObservableProperty__FuseReactiveIObserverOnInsertAt_fn(ObservableProperty* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.ObservableProperty", "Fuse.Reactive.IObserver.OnInsertAt(int,object)");
    int index_ = *index;

    if (index_ == 0)
        __this->Set(value);
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values) :1403
void ObservableProperty__FuseReactiveIObserverOnNewAll_fn(ObservableProperty* __this, uObject* values)
{
    uStackFrame __("Fuse.Reactive.ObservableProperty", "Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray)");

    if (::g::Fuse::IArray::Length(uInterface(uPtr(values), ::TYPES[39/*Fuse.IArray*/])) == 1)
        __this->Set(::g::Fuse::IArray::Item(uInterface(uPtr(values), ::TYPES[39/*Fuse.IArray*/]), 0));
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object newValue) :1407
void ObservableProperty__FuseReactiveIObserverOnNewAt_fn(ObservableProperty* __this, int* index, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.ObservableProperty", "Fuse.Reactive.IObserver.OnNewAt(int,object)");
    int index_ = *index;

    if (index_ == 0)
        __this->Set(newValue);
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :1419
void ObservableProperty__FuseReactiveIObserverOnRemoveAt_fn(ObservableProperty* __this, int* index)
{
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :1411
void ObservableProperty__FuseReactiveIObserverOnSet_fn(ObservableProperty* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.ObservableProperty", "Fuse.Reactive.IObserver.OnSet(object)");
    __this->Set(newValue);
}

// internal Fuse.Reactive.Observable GetObservable() :1363
void ObservableProperty__GetObservable_fn(ObservableProperty* __this, ::g::Fuse::Reactive::Observable** __retval)
{
    *__retval = __this->GetObservable();
}

// public string get_Name() :1359
void ObservableProperty__get_Name_fn(ObservableProperty* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// public ObservableProperty New(Fuse.Reactive.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) :1352
void ObservableProperty__New1_fn(::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p, ObservableProperty** __retval)
{
    *__retval = ObservableProperty::New1(w, obj, p);
}

// private void PushValue(object val) :1465
void ObservableProperty__PushValue_fn(ObservableProperty* __this, uObject* val)
{
    __this->PushValue(val);
}

// public void Reset() :1381
void ObservableProperty__Reset_fn(ObservableProperty* __this)
{
    __this->Reset();
}

// private void Set(object value) :1432
void ObservableProperty__Set_fn(ObservableProperty* __this, uObject* value)
{
    __this->Set(value);
}

// private void Subscribe() :1374
void ObservableProperty__Subscribe_fn(ObservableProperty* __this)
{
    __this->Subscribe();
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :1439
void ObservableProperty__UnoUXIPropertyListenerOnPropertyChanged_fn(ObservableProperty* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    uStackFrame __("Fuse.Reactive.ObservableProperty", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");
    ::g::Uno::UX::Selector prop_ = *prop;

    if (::g::Uno::UX::Selector__op_Inequality(prop_, uPtr(__this->_property)->Name()))
        return;

    if (obj != uPtr(__this->_property)->Object())
        return;

    if (__this->_subscription == NULL)
        return;

    uPtr(__this->_worker)->Invoke(uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)ObservableProperty__PushCapture__Run_fn, ObservableProperty__PushCapture::New1(uDelegate::New(::TYPES[93/*Uno.Action<object>*/], (void*)ObservableProperty__PushValue_fn, __this), uPtr(__this->_property)->GetAsObject1())));
}

// public ObservableProperty(Fuse.Reactive.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) [instance] :1352
void ObservableProperty::ctor_(::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    _obj = obj;
    _worker = w;
    _property = p;
}

// internal Fuse.Reactive.Observable GetObservable() [instance] :1363
::g::Fuse::Reactive::Observable* ObservableProperty::GetObservable()
{
    uStackFrame __("Fuse.Reactive.ObservableProperty", "GetObservable()");

    if (_observable == NULL)
    {
        _observable = ::g::Fuse::Reactive::Observable::Create(_worker);
        Subscribe();
    }

    return _observable;
}

// public string get_Name() [instance] :1359
uString* ObservableProperty::Name()
{
    uStackFrame __("Fuse.Reactive.ObservableProperty", "get_Name()");
    return ::g::Uno::UX::Selector__op_Implicit1(uPtr(_property)->Name());
}

// private void PushValue(object val) [instance] :1465
void ObservableProperty::PushValue(uObject* val)
{
    uStackFrame __("Fuse.Reactive.ObservableProperty", "PushValue(object)");

    if (val != NULL)
        ::g::Fuse::Reactive::ISubscription::SetExclusive(uInterface(uPtr(_subscription), ::TYPES[45/*Fuse.Reactive.ISubscription*/]), val);
    else
        ::g::Fuse::Reactive::ISubscription::ClearExclusive(uInterface(uPtr(_subscription), ::TYPES[45/*Fuse.Reactive.ISubscription*/]));
}

// public void Reset() [instance] :1381
void ObservableProperty::Reset()
{
    uStackFrame __("Fuse.Reactive.ObservableProperty", "Reset()");

    if (_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[5/*Uno.IDisposable*/]));
        _subscription = NULL;
        uPtr(_property)->RemoveListener((uObject*)this);
    }

    if (_observable != NULL)
    {
        uPtr(_observable)->Unsubscribe();
        _observable = NULL;
    }
}

// private void Set(object value) [instance] :1432
void ObservableProperty::Set(uObject* value)
{
    uStackFrame __("Fuse.Reactive.ObservableProperty", "Set(object)");
    uObject* res;

    if (::g::Fuse::Marshal::TryConvertTo(uPtr(_property)->PropertyType(), value, &res, this))
        uPtr(_property)->SetAsObject1(res, (uObject*)this);
}

// private void Subscribe() [instance] :1374
void ObservableProperty::Subscribe()
{
    uStackFrame __("Fuse.Reactive.ObservableProperty", "Subscribe()");
    _subscription = uPtr(_observable)->Subscribe((uObject*)this);
    PushValue(uPtr(_property)->GetAsObject1());
    uPtr(_property)->AddListener((uObject*)this);
}

// public ObservableProperty New(Fuse.Reactive.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) [static] :1352
ObservableProperty* ObservableProperty::New1(::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    ObservableProperty* obj1 = (ObservableProperty*)uNew(ObservableProperty_typeof());
    obj1->ctor_(w, obj, p);
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
    type->fp_PushData = (void(*)(::g::Fuse::Reactive::ValueObserver*, uObject*))InnerListener__ObservableSubscription__PushData_fn;
    type->interface1.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnClear_fn;
    type->interface1.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnSet_fn;
    type->interface1.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnAdd_fn;
    type->interface1.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnNewAt_fn;
    type->interface1.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnNewAll_fn;
    type->interface1.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface1.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnInsertAt_fn;
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

// protected override sealed void PushData(object newValue) :1852
void InnerListener__ObservableSubscription__PushData_fn(InnerListener__ObservableSubscription* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.InnerListener.ObservableSubscription", "PushData(object)");
    uPtr(__this->_listener)->OnNewData(__this->_source, newValue);
}

// public ObservableSubscription(Fuse.Reactive.IExpression source, Fuse.Reactive.IObservable obs, Fuse.Reactive.InnerListener listener) [instance] :1838
void InnerListener__ObservableSubscription::ctor_1(uObject* source, uObject* obs, ::g::Fuse::Reactive::InnerListener* listener)
{
    uStackFrame __("Fuse.Reactive.InnerListener.ObservableSubscription", ".ctor(Fuse.Reactive.IExpression,Fuse.Reactive.IObservable,Fuse.Reactive.InnerListener)");
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

// public sealed class Odd :624
// {
static void Odd_build(uType* type)
{
    ::STRINGS[119] = uString::Const("odd(");
    ::STRINGS[5] = uString::Const(")");
    ::TYPES[4] = ::g::Fuse::Marshal_typeof()->MakeMethod(1/*TryToType<float>*/, ::g::Uno::Float_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(1);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Odd__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Odd_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryOperator_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Odd);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Odd", options);
    type->fp_build_ = Odd_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::UnaryOperator*, uObject*, uObject**))Odd__Compute_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Odd__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Odd(Fuse.Reactive.Expression operand) :627
void Odd__ctor_2_fn(Odd* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_2(operand);
}

// protected override sealed object Compute(object operand) :628
void Odd__Compute_fn(Odd* __this, uObject* operand, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Odd", "Compute(object)");
    bool ret2;
    float v = 0.0f;

    if (!(::g::Fuse::Marshal__TryToType_fn(::TYPES[4/*Fuse.Marshal.TryToType<float>*/], operand, &v, &ret2), ret2))
        return *__retval = NULL, void();

    int q = (int)::g::Uno::Math::Round2(v);
    return *__retval = uBox(::TYPES[18/*bool*/], (q % 2) != 0), void();
}

// public Odd New(Fuse.Reactive.Expression operand) :627
void Odd__New1_fn(::g::Fuse::Reactive::Expression* operand, Odd** __retval)
{
    *__retval = Odd::New1(operand);
}

// public override sealed string ToString() :638
void Odd__ToString_fn(Odd* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.Odd", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[119/*"odd("*/], __this->Operand()), ::STRINGS[5/*")"*/]), void();
}

// public Odd(Fuse.Reactive.Expression operand) [instance] :627
void Odd::ctor_2(::g::Fuse::Reactive::Expression* operand)
{
    ctor_1(operand);
}

// public Odd New(Fuse.Reactive.Expression operand) [static] :627
Odd* Odd::New1(::g::Fuse::Reactive::Expression* operand)
{
    Odd* obj1 = (Odd*)uNew(Odd_typeof());
    obj1->ctor_2(operand);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\$.uno
// ----------------------------------------------------------------------------------

// public sealed class OffsetIndexFunction :2443
// {
static void OffsetIndexFunction_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)OffsetIndexFunction__New1_fn, 0, true, type, 0));
}

::g::Fuse::Reactive::Expression_type* OffsetIndexFunction_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InstantiatorFunction_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(OffsetIndexFunction);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.OffsetIndexFunction", options);
    type->fp_build_ = OffsetIndexFunction_build;
    type->fp_ctor_ = (void*)OffsetIndexFunction__New1_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::InstantiatorFunction__Subscribe_fn;
    return type;
}

// public OffsetIndexFunction() :2446
void OffsetIndexFunction__ctor_3_fn(OffsetIndexFunction* __this)
{
    __this->ctor_3();
}

// public OffsetIndexFunction New() :2446
void OffsetIndexFunction__New1_fn(OffsetIndexFunction** __retval)
{
    *__retval = OffsetIndexFunction::New1();
}

// public OffsetIndexFunction() [instance] :2446
void OffsetIndexFunction::ctor_3()
{
    ctor_2(::g::Fuse::Reactive::InstantiatorFunction::OffsetIndexName());
}

// public OffsetIndexFunction New() [static] :2446
OffsetIndexFunction* OffsetIndexFunction::New1()
{
    OffsetIndexFunction* obj1 = (OffsetIndexFunction*)uNew(OffsetIndexFunction_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.JavaScript\1.2.0\$.uno
// ------------------------------------------------------------------------------------

// public abstract class Observable.Operation :1002
// {
static void Observable__Operation_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::Observable__Operation, _isPerformed), 0,
        ::g::Fuse::Reactive::Observable_typeof(), offsetof(::g::Fuse::Reactive::Observable__Operation, _observable), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Perform", NULL, (void*)Observable__Operation__Perform_fn, 0, false, uVoid_typeof(), 0));
}

Observable__Operation_type* Observable__Operation_typeof()
{
    static uSStrong<Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Observable__Operation);
    options.TypeSize = sizeof(Observable__Operation_type);
    type = (Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.Operation", options);
    type->fp_build_ = Observable__Operation_build;
    type->fp_Unsubscribe = Observable__Operation__Unsubscribe_fn;
    return type;
}

// protected Operation(Fuse.Reactive.Observable observable) :1008
void Observable__Operation__ctor__fn(Observable__Operation* __this, ::g::Fuse::Reactive::Observable* observable)
{
    __this->ctor_(observable);
}

// protected Fuse.Reactive.Observable get_Observable() :1013
void Observable__Operation__get_Observable_fn(Observable__Operation* __this, ::g::Fuse::Reactive::Observable** __retval)
{
    *__retval = __this->Observable();
}

// public void Perform() :1015
void Observable__Operation__Perform_fn(Observable__Operation* __this)
{
    __this->Perform();
}

// protected virtual void Unsubscribe() :1037
void Observable__Operation__Unsubscribe_fn(Observable__Operation* __this)
{
}

// protected Operation(Fuse.Reactive.Observable observable) [instance] :1008
void Observable__Operation::ctor_(::g::Fuse::Reactive::Observable* observable)
{
    _observable = observable;
}

// protected Fuse.Reactive.Observable get_Observable() [instance] :1013
::g::Fuse::Reactive::Observable* Observable__Operation::Observable()
{
    return _observable;
}

// public void Perform() [instance] :1015
void Observable__Operation::Perform()
{
    uStackFrame __("Fuse.Reactive.Observable.Operation", "Perform()");

    if (uPtr(_observable)->IsUnsubscribed())
    {
        Unsubscribe();
        return;
    }

    {
        const auto __finally_fun = [&]()
        {
            uPtr(_observable)->_usingObservers = false;
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        uPtr(_observable)->_usingObservers = true;
        OnPerform((uObject*)uPtr(Observable())->_observers);
        uPtr(_observable)->ObserversCleanup();
    }

    _isPerformed = true;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Parameter :1353
// {
static void Parameter_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(1);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Parameter__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Parameter_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryOperator_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Parameter);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Parameter", options);
    type->fp_build_ = Parameter_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))Parameter__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))Parameter__Subscribe_fn;
    return type;
}

// public Parameter(Fuse.Reactive.Expression visual) :1356
void Parameter__ctor_2_fn(Parameter* __this, ::g::Fuse::Reactive::Expression* visual)
{
    __this->ctor_2(visual);
}

// public Parameter New(Fuse.Reactive.Expression visual) :1356
void Parameter__New1_fn(::g::Fuse::Reactive::Expression* visual, Parameter** __retval)
{
    *__retval = Parameter::New1(visual);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :1358
void Parameter__Subscribe_fn(Parameter* __this, uObject* context, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Parameter", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    return *__retval = (uObject*)Parameter__ParameterSubscription::New2(__this, context, listener), void();
}

// public Parameter(Fuse.Reactive.Expression visual) [instance] :1356
void Parameter::ctor_2(::g::Fuse::Reactive::Expression* visual)
{
    ctor_1(visual);
}

// public Parameter New(Fuse.Reactive.Expression visual) [static] :1356
Parameter* Parameter::New1(::g::Fuse::Reactive::Expression* visual)
{
    Parameter* obj1 = (Parameter*)uNew(Parameter_typeof());
    obj1->ctor_2(visual);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// private sealed class Parameter.ParameterSubscription :1363
// {
static void Parameter__ParameterSubscription_build(uType* type)
{
    ::STRINGS[120] = uString::Const("Failed to fetch parameter: ");
    ::STRINGS[121] = uString::Const("Failed to parse parameter: ");
    ::TYPES[43] = ::g::Uno::Exception_typeof();
    ::TYPES[94] = ::g::Fuse::Visual_typeof();
    ::TYPES[95] = ::g::Uno::EventHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator__Subscription_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator__Subscription_type, interface1));
    type->SetFields(5,
        ::g::Fuse::Reactive::Parameter_typeof(), offsetof(::g::Fuse::Reactive::Parameter__ParameterSubscription, _parameter), 0,
        ::TYPES[94/*Fuse.Visual*/], offsetof(::g::Fuse::Reactive::Parameter__ParameterSubscription, _visual), 0);
}

::g::Fuse::Reactive::UnaryOperator__Subscription_type* Parameter__ParameterSubscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryOperator__Subscription_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Parameter__ParameterSubscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator__Subscription_type);
    type = (::g::Fuse::Reactive::UnaryOperator__Subscription_type*)uClassType::New("Fuse.Reactive.Parameter.ParameterSubscription", options);
    type->fp_build_ = Parameter__ParameterSubscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))Parameter__ParameterSubscription__Dispose_fn;
    type->fp_OnNewOperand = (void(*)(::g::Fuse::Reactive::UnaryOperator__Subscription*, uObject*))Parameter__ParameterSubscription__OnNewOperand_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Parameter__ParameterSubscription__Dispose_fn;
    return type;
}

// public ParameterSubscription(Fuse.Reactive.Parameter parameter, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :1366
void Parameter__ParameterSubscription__ctor_2_fn(Parameter__ParameterSubscription* __this, ::g::Fuse::Reactive::Parameter* parameter, uObject* context, uObject* listener)
{
    __this->ctor_2(parameter, context, listener);
}

// public override sealed void Dispose() :1372
void Parameter__ParameterSubscription__Dispose_fn(Parameter__ParameterSubscription* __this)
{
    uStackFrame __("Fuse.Reactive.Parameter.ParameterSubscription", "Dispose()");
    __this->UnsubscribeVisual();
    ::g::Fuse::Reactive::UnaryOperator__Subscription__Dispose_fn(__this);
}

// public ParameterSubscription New(Fuse.Reactive.Parameter parameter, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :1366
void Parameter__ParameterSubscription__New2_fn(::g::Fuse::Reactive::Parameter* parameter, uObject* context, uObject* listener, Parameter__ParameterSubscription** __retval)
{
    *__retval = Parameter__ParameterSubscription::New2(parameter, context, listener);
}

// protected override sealed void OnNewOperand(object obj) :1389
void Parameter__ParameterSubscription__OnNewOperand_fn(Parameter__ParameterSubscription* __this, uObject* obj)
{
    uStackFrame __("Fuse.Reactive.Parameter.ParameterSubscription", "OnNewOperand(object)");
    __this->ClearDiagnostic();
    __this->UnsubscribeVisual();

    try
    {
        __this->_visual = uCast< ::g::Fuse::Visual*>(obj, ::TYPES[94/*Fuse.Visual*/]);
        uPtr(__this->_visual)->add_ParameterChanged(uDelegate::New(::TYPES[95/*Uno.EventHandler*/], (void*)Parameter__ParameterSubscription__OnParameterChanged_fn, __this));
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        __this->SetDiagnostic(::g::Uno::String::op_Addition2(::STRINGS[120/*"Failed to f...*/], uPtr(e)->Message()), (uObject*)__this->_parameter);
        return;
    }

    __this->OnParameterChanged(NULL, NULL);
}

// private void OnParameterChanged(object sender, Uno.EventArgs args) :1409
void Parameter__ParameterSubscription__OnParameterChanged_fn(Parameter__ParameterSubscription* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnParameterChanged(sender, args);
}

// private void UnsubscribeVisual() :1378
void Parameter__ParameterSubscription__UnsubscribeVisual_fn(Parameter__ParameterSubscription* __this)
{
    __this->UnsubscribeVisual();
}

// public ParameterSubscription(Fuse.Reactive.Parameter parameter, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [instance] :1366
void Parameter__ParameterSubscription::ctor_2(::g::Fuse::Reactive::Parameter* parameter, uObject* context, uObject* listener)
{
    uStackFrame __("Fuse.Reactive.Parameter.ParameterSubscription", ".ctor(Fuse.Reactive.Parameter,Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    ctor_1(parameter, listener);
    _parameter = parameter;
    Init(context);
}

// private void OnParameterChanged(object sender, Uno.EventArgs args) [instance] :1409
void Parameter__ParameterSubscription::OnParameterChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Reactive.Parameter.ParameterSubscription", "OnParameterChanged(object,Uno.EventArgs)");

    if (_visual == NULL)
        return;

    if (::g::Uno::String::op_Equality(uPtr(_visual)->Parameter(), NULL))
        return;

    ClearDiagnostic();
    uObject* data = NULL;

    try
    {
        data = ::g::Fuse::Json::Parse(uPtr(_visual)->Parameter());
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        SetDiagnostic(::g::Uno::String::op_Addition2(::STRINGS[121/*"Failed to p...*/], uPtr(e)->Message()), (uObject*)_parameter);
        return;
    }

    PushNewData(data);
}

// private void UnsubscribeVisual() [instance] :1378
void Parameter__ParameterSubscription::UnsubscribeVisual()
{
    uStackFrame __("Fuse.Reactive.Parameter.ParameterSubscription", "UnsubscribeVisual()");

    if (_visual != NULL)
    {
        uPtr(_visual)->remove_ParameterChanged(uDelegate::New(::TYPES[95/*Uno.EventHandler*/], (void*)Parameter__ParameterSubscription__OnParameterChanged_fn, this));
        _visual = NULL;
    }
}

// public ParameterSubscription New(Fuse.Reactive.Parameter parameter, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :1366
Parameter__ParameterSubscription* Parameter__ParameterSubscription::New2(::g::Fuse::Reactive::Parameter* parameter, uObject* context, uObject* listener)
{
    Parameter__ParameterSubscription* obj1 = (Parameter__ParameterSubscription*)uNew(Parameter__ParameterSubscription_typeof());
    obj1->ctor_2(parameter, context, listener);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Pow :921
// {
static void Pow_build(uType* type)
{
    ::STRINGS[122] = uString::Const("pow");
    ::TYPES[8] = ::g::Fuse::Reactive::BinaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator_type, interface0));
    type->SetFields(4);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Pow__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::BinaryOperator_type* Pow_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::BinaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::BinaryFloatOperator_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Pow);
    options.TypeSize = sizeof(::g::Fuse::Reactive::BinaryOperator_type);
    type = (::g::Fuse::Reactive::BinaryOperator_type*)uClassType::New("Fuse.Reactive.Pow", options);
    type->fp_build_ = Pow_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public Pow(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :924
void Pow__ctor_3_fn(Pow* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_3(left, right);
}

// public Pow New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :924
void Pow__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, Pow** __retval)
{
    *__retval = Pow::New1(left, right);
}

// public Pow(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :924
void Pow::ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_2(left, right, ::STRINGS[122/*"pow"*/], uDelegate::New(::TYPES[8/*Fuse.Reactive.BinaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Pow_fn));
}

// public Pow New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :924
Pow* Pow::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    Pow* obj1 = (Pow*)uNew(Pow_typeof());
    obj1->ctor_3(left, right);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Property :1442
// {
static void Property_build(uType* type)
{
    ::TYPES[96] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), offsetof(::g::Fuse::Reactive::Property, _Accessor), 0,
        ::g::Fuse::Reactive::ConstantExpression_typeof(), offsetof(::g::Fuse::Reactive::Property, _Object), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Accessor", NULL, (void*)Property__get_Accessor_fn, 0, false, ::g::Uno::UX::PropertyAccessor_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Property__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::ConstantExpression_typeof(), ::g::Uno::UX::PropertyAccessor_typeof()),
        new uFunction("get_Object", NULL, (void*)Property__get_Object_fn, 0, false, ::g::Fuse::Reactive::ConstantExpression_typeof(), 0));
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
    uStackFrame __("Fuse.Reactive.Property", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    ::g::Uno::UX::PropertyObject* obj = uCast< ::g::Uno::UX::PropertyObject*>(uPtr(__this->Object())->GetValue(context), ::TYPES[96/*Uno.UX.PropertyObject*/]);
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

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\$.uno
// ----------------------------------------------------------------------------------

// public sealed class PropertyBinding :427
// {
static void PropertyBinding_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IContext_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface1),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface2),
        ::g::Fuse::INameListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface3),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface4));
    type->SetFields(10);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PropertyBinding__New2_fn, 0, true, type, 2, ::g::Uno::UX::Property_typeof(), ::g::Uno::UX::Property_typeof()));
}

::g::Fuse::Reactive::DataBinding_type* PropertyBinding_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::DataBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::DataBinding_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(PropertyBinding);
    options.TypeSize = sizeof(::g::Fuse::Reactive::DataBinding_type);
    type = (::g::Fuse::Reactive::DataBinding_type*)uClassType::New("Fuse.Reactive.PropertyBinding", options);
    type->fp_build_ = PropertyBinding_build;
    type->interface2.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnClear_fn;
    type->interface2.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnSet_fn;
    type->interface2.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnAdd_fn;
    type->interface2.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnNewAt_fn;
    type->interface2.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnFailed_fn;
    type->interface2.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnNewAll_fn;
    type->interface2.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface2.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnInsertAt_fn;
    type->interface3.fp_OnNameChanged = (void(*)(uObject*, ::g::Fuse::Node*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::DataBinding__FuseINameListenerOnNameChanged_fn;
    type->interface4.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIContextSubscribe_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_get_Node = (void(*)(uObject*, ::g::Fuse::Node**))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIContextget_Node_fn;
    type->interface0.fp_SubscribeResource = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))::g::Fuse::Reactive::DataBinding__SubscribeResource_fn;
    type->interface0.fp_get_NameTable = (void(*)(uObject*, ::g::Uno::UX::NameTable**))::g::Fuse::Reactive::ExpressionBinding__get_NameTable_fn;
    return type;
}

// public PropertyBinding(Uno.UX.Property target, Uno.UX.Property source) :430
void PropertyBinding__ctor_3_fn(PropertyBinding* __this, ::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source)
{
    __this->ctor_3(target, source);
}

// public PropertyBinding New(Uno.UX.Property target, Uno.UX.Property source) :430
void PropertyBinding__New2_fn(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source, PropertyBinding** __retval)
{
    *__retval = PropertyBinding::New2(target, source);
}

// public PropertyBinding(Uno.UX.Property target, Uno.UX.Property source) [instance] :430
void PropertyBinding::ctor_3(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source)
{
    uStackFrame __("Fuse.Reactive.PropertyBinding", ".ctor(Uno.UX.Property,Uno.UX.Property)");
    ctor_2(target, (uObject*)::g::Fuse::Reactive::Property::New1(::g::Fuse::Reactive::Constant::New1(uPtr(source)->Object()), source), NULL, 3);
}

// public PropertyBinding New(Uno.UX.Property target, Uno.UX.Property source) [static] :430
PropertyBinding* PropertyBinding::New2(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source)
{
    PropertyBinding* obj1 = (PropertyBinding*)uNew(PropertyBinding_typeof());
    obj1->ctor_3(target, source);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.JavaScript\1.2.0\$.uno
// ------------------------------------------------------------------------------------

// private sealed class ThreadWorker.PropertyClosure :1749
// {
static void ThreadWorker__PropertyClosure_build(uType* type)
{
    ::STRINGS[123] = uString::Const("this._raw_");
    ::STRINGS[124] = uString::Const("this._");
    ::STRINGS[125] = uString::Const(" (ScriptProperty)");
    ::STRINGS[126] = uString::Const("(function(cl, getObservable) { Object.defineProperty(cl.prototype, '");
    ::STRINGS[127] = uString::Const("', ");
    ::STRINGS[36] = uString::Const("{");
    ::STRINGS[128] = uString::Const("get: function() { ");
    ::STRINGS[129] = uString::Const("var obs = getObservable(this); ");
    ::STRINGS[130] = uString::Const("if (");
    ::STRINGS[131] = uString::Const(" != obs) {");
    ::STRINGS[132] = uString::Const(" = obs;");
    ::STRINGS[133] = uString::Const(" = obs");
    ::STRINGS[134] = uString::Const(";");
    ::STRINGS[37] = uString::Const("}");
    ::STRINGS[135] = uString::Const("return ");
    ::STRINGS[136] = uString::Const("})");
    ::TYPES[35] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[6] = uObject_typeof()->Array();
    ::TYPES[37] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[96] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::ScriptProperty_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker__PropertyClosure, _p), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker__PropertyClosure, _worker), 0);
}

uType* ThreadWorker__PropertyClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ThreadWorker__PropertyClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.ThreadWorker.PropertyClosure", options);
    type->fp_build_ = ThreadWorker__PropertyClosure_build;
    return type;
}

// public PropertyClosure(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptProperty p, Fuse.Reactive.ThreadWorker worker) :1754
void ThreadWorker__PropertyClosure__ctor__fn(ThreadWorker__PropertyClosure* __this, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p, ::g::Fuse::Reactive::ThreadWorker* worker)
{
    __this->ctor_(cl, p, worker);
}

// private object GetObservable(object[] args) :1782
void ThreadWorker__PropertyClosure__GetObservable_fn(ThreadWorker__PropertyClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->GetObservable(args);
}

// public PropertyClosure New(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptProperty p, Fuse.Reactive.ThreadWorker worker) :1754
void ThreadWorker__PropertyClosure__New1_fn(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p, ::g::Fuse::Reactive::ThreadWorker* worker, ThreadWorker__PropertyClosure** __retval)
{
    *__retval = ThreadWorker__PropertyClosure::New1(cl, p, worker);
}

// public PropertyClosure(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptProperty p, Fuse.Reactive.ThreadWorker worker) [instance] :1754
void ThreadWorker__PropertyClosure::ctor_(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p, ::g::Fuse::Reactive::ThreadWorker* worker)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker.PropertyClosure", ".ctor(Fuse.Scripting.Function,Fuse.Scripting.ScriptProperty,Fuse.Reactive.ThreadWorker)");
    _worker = worker;
    _p = p;
    uString* rawField = ::g::Uno::String::op_Addition2(::STRINGS[123/*"this._raw_"*/], uPtr(p)->Name);
    uString* propField = ::g::Uno::String::op_Addition2(::STRINGS[124/*"this._"*/], p->Name);
    ::g::Fuse::Scripting::Function* definer = uCast< ::g::Fuse::Scripting::Function*>(uPtr(uPtr(worker)->Context())->Evaluate(::g::Uno::String::op_Addition2(p->Name, ::STRINGS[125/*" (ScriptPro...*/]), ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[126/*"(function(c...*/], p->Name), ::STRINGS[127/*"', "*/]), ::STRINGS[36/*"{"*/]), ::STRINGS[128/*"get: functi...*/]), ::STRINGS[129/*"var obs = g...*/]), ::STRINGS[130/*"if ("*/]), rawField), ::STRINGS[131/*" != obs) {"*/]), rawField), ::STRINGS[132/*" = obs;"*/]), propField), ::STRINGS[133/*" = obs"*/]), p->Modifier), ::STRINGS[134/*";"*/]), ::STRINGS[37/*"}"*/]), ::STRINGS[135/*"return "*/]), propField), ::STRINGS[37/*"}"*/]), ::STRINGS[136/*"})"*/]), ::STRINGS[136/*"})"*/])), ::TYPES[35/*Fuse.Scripting.Function*/]);
    uPtr(definer)->Call(uArray::Init<uObject*>(::TYPES[6/*object[]*/], 2, cl, uDelegate::New(::TYPES[37/*Fuse.Scripting.Callback*/], (void*)ThreadWorker__PropertyClosure__GetObservable_fn, this)));
}

// private object GetObservable(object[] args) [instance] :1782
uObject* ThreadWorker__PropertyClosure::GetObservable(uArray* args)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker.PropertyClosure", "GetObservable(object[])");
    ::g::Uno::UX::PropertyObject* obj = uAs< ::g::Uno::UX::PropertyObject*>(::g::Fuse::Reactive::ThreadWorker::Wrap(uPtr(args)->Strong<uObject*>(0)), ::TYPES[96/*Uno.UX.PropertyObject*/]);
    ::g::Fuse::Reactive::ClassInstance* ci = uPtr(_worker)->GetClassInstance(obj, NULL);
    return uPtr(ci)->GetPropertyObservable(uPtr(_p)->GetProperty(obj));
}

// public PropertyClosure New(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptProperty p, Fuse.Reactive.ThreadWorker worker) [static] :1754
ThreadWorker__PropertyClosure* ThreadWorker__PropertyClosure::New1(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p, ::g::Fuse::Reactive::ThreadWorker* worker)
{
    ThreadWorker__PropertyClosure* obj1 = (ThreadWorker__PropertyClosure*)uNew(ThreadWorker__PropertyClosure_typeof());
    obj1->ctor_(cl, p, worker);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.JavaScript\1.2.0\$.uno
// ------------------------------------------------------------------------------------

// private sealed class ObservableProperty.PushCapture :1448
// {
static void ObservableProperty__PushCapture_build(uType* type)
{
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::ObservableProperty__PushCapture, _arg), 0,
        ::g::Uno::Action1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::Fuse::Reactive::ObservableProperty__PushCapture, _push), 0);
}

uType* ObservableProperty__PushCapture_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ObservableProperty__PushCapture);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.ObservableProperty.PushCapture", options);
    type->fp_build_ = ObservableProperty__PushCapture_build;
    return type;
}

// public PushCapture(Uno.Action<object> push, object arg) :1453
void ObservableProperty__PushCapture__ctor__fn(ObservableProperty__PushCapture* __this, uDelegate* push, uObject* arg)
{
    __this->ctor_(push, arg);
}

// public PushCapture New(Uno.Action<object> push, object arg) :1453
void ObservableProperty__PushCapture__New1_fn(uDelegate* push, uObject* arg, ObservableProperty__PushCapture** __retval)
{
    *__retval = ObservableProperty__PushCapture::New1(push, arg);
}

// public void Run() :1459
void ObservableProperty__PushCapture__Run_fn(ObservableProperty__PushCapture* __this)
{
    __this->Run();
}

// public PushCapture(Uno.Action<object> push, object arg) [instance] :1453
void ObservableProperty__PushCapture::ctor_(uDelegate* push, uObject* arg)
{
    _push = push;
    _arg = arg;
}

// public void Run() [instance] :1459
void ObservableProperty__PushCapture::Run()
{
    uStackFrame __("Fuse.Reactive.ObservableProperty.PushCapture", "Run()");
    uPtr(_push)->InvokeVoid(_arg);
}

// public PushCapture New(Uno.Action<object> push, object arg) [static] :1453
ObservableProperty__PushCapture* ObservableProperty__PushCapture::New1(uDelegate* push, uObject* arg)
{
    ObservableProperty__PushCapture* obj1 = (ObservableProperty__PushCapture*)uNew(ObservableProperty__PushCapture_typeof());
    obj1->ctor_(push, arg);
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
    type->Reflection.SetFunctions(4,
        new uFunction("get_First", NULL, (void*)QuaternaryOperator__get_First_fn, 0, false, ::g::Fuse::Reactive::Expression_typeof(), 0),
        new uFunction("get_Fourth", NULL, (void*)QuaternaryOperator__get_Fourth_fn, 0, false, ::g::Fuse::Reactive::Expression_typeof(), 0),
        new uFunction("get_Second", NULL, (void*)QuaternaryOperator__get_Second_fn, 0, false, ::g::Fuse::Reactive::Expression_typeof(), 0),
        new uFunction("get_Third", NULL, (void*)QuaternaryOperator__get_Third_fn, 0, false, ::g::Fuse::Reactive::Expression_typeof(), 0));
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

// protected QuaternaryOperator(Fuse.Reactive.Expression first, Fuse.Reactive.Expression second, Fuse.Reactive.Expression third, Fuse.Reactive.Expression fourth) :1525
void QuaternaryOperator__ctor_1_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third, ::g::Fuse::Reactive::Expression* fourth)
{
    __this->ctor_1(first, second, third, fourth);
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
    uStackFrame __("Fuse.Reactive.QuaternaryOperator", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
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

// protected QuaternaryOperator(Fuse.Reactive.Expression first, Fuse.Reactive.Expression second, Fuse.Reactive.Expression third, Fuse.Reactive.Expression fourth) [instance] :1525
void QuaternaryOperator::ctor_1(::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third, ::g::Fuse::Reactive::Expression* fourth)
{
    ctor_();
    First(first);
    Second(second);
    Third(third);
    Fourth(fourth);
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

// public sealed class RadiansToDegrees :865
// {
static void RadiansToDegrees_build(uType* type)
{
    ::STRINGS[137] = uString::Const("radiansToDegrees");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)RadiansToDegrees__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* RadiansToDegrees_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(RadiansToDegrees);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.RadiansToDegrees", options);
    type->fp_build_ = RadiansToDegrees_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public RadiansToDegrees(Fuse.Reactive.Expression operand) :868
void RadiansToDegrees__ctor_3_fn(RadiansToDegrees* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public RadiansToDegrees New(Fuse.Reactive.Expression operand) :868
void RadiansToDegrees__New1_fn(::g::Fuse::Reactive::Expression* operand, RadiansToDegrees** __retval)
{
    *__retval = RadiansToDegrees::New1(operand);
}

// public RadiansToDegrees(Fuse.Reactive.Expression operand) [instance] :868
void RadiansToDegrees::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[137/*"radiansToDe...*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__RadiansToDegrees_fn));
}

// public RadiansToDegrees New(Fuse.Reactive.Expression operand) [static] :868
RadiansToDegrees* RadiansToDegrees::New1(::g::Fuse::Reactive::Expression* operand)
{
    RadiansToDegrees* obj1 = (RadiansToDegrees*)uNew(RadiansToDegrees_typeof());
    obj1->ctor_3(operand);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\$.uno
// ----------------------------------------------------------------------------------

// private enum WhileCount.Range :2979
uEnumType* WhileCount__Range_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Reactive.WhileCount.Range", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Open", 0LL,
        "Exclusive", 1LL,
        "Inclusive", 2LL);
    return type;
}

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.JavaScript\1.2.0\$.uno
// ------------------------------------------------------------------------------------

// private sealed class Observable.RemoveAt :1206
// {
static void Observable__RemoveAt_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Observable__RemoveAt, _index), 0);
}

::g::Fuse::Reactive::Observable__Operation_type* Observable__RemoveAt_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Observable__Operation_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Observable__RemoveAt);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Observable__Operation_type);
    type = (::g::Fuse::Reactive::Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.RemoveAt", options);
    type->fp_build_ = Observable__RemoveAt_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Reactive::Observable__Operation*, uObject*))Observable__RemoveAt__OnPerform_fn;
    return type;
}

// public RemoveAt(Fuse.Reactive.Observable obs, int index) :1210
void Observable__RemoveAt__ctor_1_fn(Observable__RemoveAt* __this, ::g::Fuse::Reactive::Observable* obs, int* index)
{
    __this->ctor_1(obs, *index);
}

// public RemoveAt New(Fuse.Reactive.Observable obs, int index) :1210
void Observable__RemoveAt__New1_fn(::g::Fuse::Reactive::Observable* obs, int* index, Observable__RemoveAt** __retval)
{
    *__retval = Observable__RemoveAt::New1(obs, *index);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription> sub) :1215
void Observable__RemoveAt__OnPerform_fn(Observable__RemoveAt* __this, uObject* sub)
{
    uStackFrame __("Fuse.Reactive.Observable.RemoveAt", "OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>)");
    ::g::Fuse::Reactive::Observable__Subscription* ret2;
    ::g::Fuse::Reactive::Observable__Subscription* ret3;
    ::g::Fuse::Reactive::ValueMirror::Unsubscribe1(uPtr(__this->Observable())->Item(__this->_index));
    uPtr(uPtr(__this->Observable())->_values)->RemoveAt(__this->_index);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Reactive.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(-1))
            ::g::Fuse::Reactive::IObserver::OnRemoveAt(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[3/*Fuse.Reactive.IObserver*/]), __this->_index);
}

// public RemoveAt(Fuse.Reactive.Observable obs, int index) [instance] :1210
void Observable__RemoveAt::ctor_1(::g::Fuse::Reactive::Observable* obs, int index)
{
    ctor_(obs);
    _index = index;
}

// public RemoveAt New(Fuse.Reactive.Observable obs, int index) [static] :1210
Observable__RemoveAt* Observable__RemoveAt::New1(::g::Fuse::Reactive::Observable* obs, int index)
{
    Observable__RemoveAt* obj1 = (Observable__RemoveAt*)uNew(Observable__RemoveAt_typeof());
    obj1->ctor_1(obs, index);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.JavaScript\1.2.0\$.uno
// ------------------------------------------------------------------------------------

// private sealed class Observable.RemoveRange :1228
// {
static void Observable__RemoveRange_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Observable__RemoveRange, _count), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Observable__RemoveRange, _index), 0);
}

::g::Fuse::Reactive::Observable__Operation_type* Observable__RemoveRange_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Observable__Operation_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__RemoveRange);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Observable__Operation_type);
    type = (::g::Fuse::Reactive::Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.RemoveRange", options);
    type->fp_build_ = Observable__RemoveRange_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Reactive::Observable__Operation*, uObject*))Observable__RemoveRange__OnPerform_fn;
    return type;
}

// public RemoveRange(Fuse.Reactive.Observable obs, int index, int count) :1233
void Observable__RemoveRange__ctor_1_fn(Observable__RemoveRange* __this, ::g::Fuse::Reactive::Observable* obs, int* index, int* count)
{
    __this->ctor_1(obs, *index, *count);
}

// public RemoveRange New(Fuse.Reactive.Observable obs, int index, int count) :1233
void Observable__RemoveRange__New1_fn(::g::Fuse::Reactive::Observable* obs, int* index, int* count, Observable__RemoveRange** __retval)
{
    *__retval = Observable__RemoveRange::New1(obs, *index, *count);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription> sub) :1239
void Observable__RemoveRange__OnPerform_fn(Observable__RemoveRange* __this, uObject* sub)
{
    uStackFrame __("Fuse.Reactive.Observable.RemoveRange", "OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>)");
    ::g::Fuse::Reactive::Observable__Subscription* ret2;
    ::g::Fuse::Reactive::Observable__Subscription* ret3;

    for (int i = 0; i < __this->_count; i++)
    {
        ::g::Fuse::Reactive::ValueMirror::Unsubscribe1(uPtr(__this->Observable())->Item(__this->_index));
        uPtr(uPtr(__this->Observable())->_values)->RemoveAt(__this->_index);

        for (int j = 0; j < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Reactive.Observable.Subscription>*/])); ++j)
            if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(j), &ret2), ret2))->ShouldSend(-1))
                ::g::Fuse::Reactive::IObserver::OnRemoveAt(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(j), &ret3), ret3))->Observer()), ::TYPES[3/*Fuse.Reactive.IObserver*/]), __this->_index);
    }
}

// public RemoveRange(Fuse.Reactive.Observable obs, int index, int count) [instance] :1233
void Observable__RemoveRange::ctor_1(::g::Fuse::Reactive::Observable* obs, int index, int count)
{
    ctor_(obs);
    _index = index;
    _count = count;
}

// public RemoveRange New(Fuse.Reactive.Observable obs, int index, int count) [static] :1233
Observable__RemoveRange* Observable__RemoveRange::New1(::g::Fuse::Reactive::Observable* obs, int index, int count)
{
    Observable__RemoveRange* obj1 = (Observable__RemoveRange*)uNew(Observable__RemoveRange_typeof());
    obj1->ctor_1(obs, index, count);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Resource :1647
// {
static void Resource_build(uType* type)
{
    ::TYPES[38] = ::g::Fuse::Reactive::IContext_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::Resource, _Key), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Key", NULL, (void*)Resource__get_Key_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Resource__New1_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
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

// public Resource(string key) :1651
void Resource__ctor_1_fn(Resource* __this, uString* key)
{
    __this->ctor_1(key);
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

// public Resource New(string key) :1651
void Resource__New1_fn(uString* key, Resource** __retval)
{
    *__retval = Resource::New1(key);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :1655
void Resource__Subscribe_fn(Resource* __this, uObject* context, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Resource", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    return *__retval = ::g::Fuse::Reactive::IContext::SubscribeResource(uInterface(uPtr(context), ::TYPES[38/*Fuse.Reactive.IContext*/]), (uObject*)__this, __this->Key(), listener), void();
}

// public Resource(string key) [instance] :1651
void Resource::ctor_1(uString* key)
{
    ctor_();
    Key(key);
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

// public Resource New(string key) [static] :1651
Resource* Resource::New1(uString* key)
{
    Resource* obj1 = (Resource*)uNew(Resource_typeof());
    obj1->ctor_1(key);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\$.uno
// ----------------------------------------------------------------------------------

// public sealed class ResourceBinding :434
// {
static void ResourceBinding_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IContext_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface1),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface2),
        ::g::Fuse::INameListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface3),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface4));
    type->SetFields(10);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ResourceBinding__New2_fn, 0, true, type, 2, ::g::Uno::UX::Property_typeof(), ::g::Uno::String_typeof()));
}

::g::Fuse::Reactive::DataBinding_type* ResourceBinding_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::DataBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::DataBinding_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(ResourceBinding);
    options.TypeSize = sizeof(::g::Fuse::Reactive::DataBinding_type);
    type = (::g::Fuse::Reactive::DataBinding_type*)uClassType::New("Fuse.Reactive.ResourceBinding", options);
    type->fp_build_ = ResourceBinding_build;
    type->interface2.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnClear_fn;
    type->interface2.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnSet_fn;
    type->interface2.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnAdd_fn;
    type->interface2.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnNewAt_fn;
    type->interface2.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnFailed_fn;
    type->interface2.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnNewAll_fn;
    type->interface2.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface2.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnInsertAt_fn;
    type->interface3.fp_OnNameChanged = (void(*)(uObject*, ::g::Fuse::Node*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::DataBinding__FuseINameListenerOnNameChanged_fn;
    type->interface4.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIContextSubscribe_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_get_Node = (void(*)(uObject*, ::g::Fuse::Node**))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIContextget_Node_fn;
    type->interface0.fp_SubscribeResource = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))::g::Fuse::Reactive::DataBinding__SubscribeResource_fn;
    type->interface0.fp_get_NameTable = (void(*)(uObject*, ::g::Uno::UX::NameTable**))::g::Fuse::Reactive::ExpressionBinding__get_NameTable_fn;
    return type;
}

// public ResourceBinding(Uno.UX.Property target, string key) :437
void ResourceBinding__ctor_3_fn(ResourceBinding* __this, ::g::Uno::UX::Property* target, uString* key)
{
    __this->ctor_3(target, key);
}

// public ResourceBinding New(Uno.UX.Property target, string key) :437
void ResourceBinding__New2_fn(::g::Uno::UX::Property* target, uString* key, ResourceBinding** __retval)
{
    *__retval = ResourceBinding::New2(target, key);
}

// public ResourceBinding(Uno.UX.Property target, string key) [instance] :437
void ResourceBinding::ctor_3(::g::Uno::UX::Property* target, uString* key)
{
    uStackFrame __("Fuse.Reactive.ResourceBinding", ".ctor(Uno.UX.Property,string)");
    ctor_2(target, (uObject*)::g::Fuse::Reactive::Resource::New1(key), NULL, 3);
}

// public ResourceBinding New(Uno.UX.Property target, string key) [static] :437
ResourceBinding* ResourceBinding::New2(::g::Uno::UX::Property* target, uString* key)
{
    ResourceBinding* obj1 = (ResourceBinding*)uNew(ResourceBinding_typeof());
    obj1->ctor_3(target, key);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\subscription\$.uno
// -----------------------------------------------------------------------------------------------

// internal sealed class ResourceSubscription :86
// {
static void ResourceSubscription_build(uType* type)
{
    ::STRINGS[138] = uString::Const("{Resource ");
    ::STRINGS[48] = uString::Const("} not found in data context");
    ::TYPES[23] = ::g::Uno::Action_typeof();
    ::TYPES[5] = ::g::Uno::IDisposable_typeof();
    ::TYPES[97] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[10] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::TYPES[5/*Uno.IDisposable*/], offsetof(ResourceSubscription_type, interface0));
    type->SetFields(0,
        ::TYPES[5/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::ResourceSubscription, _diag), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::ResourceSubscription, _key), 0,
        ::TYPES[10/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::ResourceSubscription, _listener), 0,
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
    uStackFrame __("Fuse.Reactive.ResourceSubscription", ".ctor(Fuse.Reactive.IExpression,Fuse.Node,string,Fuse.Reactive.IListener,Uno.Type)");
    _source = source;
    _origin = origin;
    _key = key;
    _type = type;
    _listener = listener;
    ::g::Fuse::Resources::ResourceRegistry::AddResourceChangedHandler(_key, uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)ResourceSubscription__OnChanged_fn, this));
    OnChanged();
}

// private bool Accept(object o) [instance] :139
bool ResourceSubscription::Accept(uObject* o)
{
    uStackFrame __("Fuse.Reactive.ResourceSubscription", "Accept(object)");
    return ::g::Fuse::Marshal::Is(o, _type);
}

// private void ClearDiagnostic() [instance] :115
void ResourceSubscription::ClearDiagnostic()
{
    uStackFrame __("Fuse.Reactive.ResourceSubscription", "ClearDiagnostic()");

    if (_diag != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_diag), ::TYPES[5/*Uno.IDisposable*/]));
        _diag = NULL;
    }
}

// public void Dispose() [instance] :107
void ResourceSubscription::Dispose()
{
    uStackFrame __("Fuse.Reactive.ResourceSubscription", "Dispose()");
    ClearDiagnostic();
    ::g::Fuse::Resources::ResourceRegistry::RemoveResourceChangedHandler(_key, uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)ResourceSubscription__OnChanged_fn, this));
    _listener = NULL;
    _origin = NULL;
}

// private void OnChanged() [instance] :124
void ResourceSubscription::OnChanged()
{
    uStackFrame __("Fuse.Reactive.ResourceSubscription", "OnChanged()");
    ClearDiagnostic();
    uObject* resource;

    if (uPtr(_origin)->TryGetResource(_key, uDelegate::New(::TYPES[97/*Uno.Predicate<object>*/], (void*)ResourceSubscription__Accept_fn, this), &resource))
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[10/*Fuse.Reactive.IListener*/]), _source, resource);
    else
        _diag = ::g::Fuse::Diagnostics::ReportTemporalUserWarning(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[138/*"{Resource "*/], _key), ::STRINGS[48/*"} not found...*/]), _origin);
}

// public ResourceSubscription New(Fuse.Reactive.IExpression source, Fuse.Node origin, string key, Fuse.Reactive.IListener listener, Uno.Type type) [static] :95
ResourceSubscription* ResourceSubscription::New1(uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener, uType* type)
{
    ResourceSubscription* obj1 = (ResourceSubscription*)uNew(ResourceSubscription_typeof());
    obj1->ctor_(source, origin, key, listener, type);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.JavaScript\1.2.0\$.uno
// ------------------------------------------------------------------------------------

// internal sealed class RootableScriptModule :1491
// {
static void RootableScriptModule_build(uType* type)
{
    ::STRINGS[4] = uString::Const(", ");
    ::TYPES[89] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[15] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[31] = ::g::Uno::Collections::IList_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::ScriptModule_type, interface0));
    type->SetFields(9,
        ::g::Fuse::Reactive::ClassInstance_typeof(), offsetof(::g::Fuse::Reactive::RootableScriptModule, _classInstance), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Fuse::Reactive::RootableScriptModule, _names), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::RootableScriptModule, _worker), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL), offsetof(::g::Fuse::Reactive::RootableScriptModule, Dependencies), 0);
}

::g::Fuse::Scripting::ScriptModule_type* RootableScriptModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::ScriptModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ScriptModule_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(RootableScriptModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::ScriptModule_type);
    type = (::g::Fuse::Scripting::ScriptModule_type*)uClassType::New("Fuse.Reactive.RootableScriptModule", options);
    type->fp_build_ = RootableScriptModule_build;
    type->fp_CallModuleFunc = (void(*)(::g::Fuse::Scripting::ScriptModule*, ::g::Fuse::Scripting::Function*, uArray*))RootableScriptModule__CallModuleFunc_fn;
    type->fp_Evaluate = (void(*)(::g::Fuse::Scripting::Module*, ::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::ModuleResult*))RootableScriptModule__Evaluate_fn;
    type->fp_GenerateArgs = (void(*)(::g::Fuse::Scripting::ScriptModule*, ::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::ModuleResult*, ::g::Uno::Collections::List*, uString**))RootableScriptModule__GenerateArgs_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public RootableScriptModule(Fuse.Reactive.ThreadWorker worker, Uno.UX.NameTable names) :1497
void RootableScriptModule__ctor_2_fn(RootableScriptModule* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Uno::UX::NameTable* names)
{
    __this->ctor_2(worker, names);
}

// protected override sealed void CallModuleFunc(Fuse.Scripting.Function moduleFunc, object[] args) :1541
void RootableScriptModule__CallModuleFunc_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Function* moduleFunc, uArray* args)
{
    uStackFrame __("Fuse.Reactive.RootableScriptModule", "CallModuleFunc(Fuse.Scripting.Function,object[])");
    uPtr(__this->_classInstance)->CallMethod(moduleFunc, args);
}

// private void EnsureClassInstanceRooted() :1509
void RootableScriptModule__EnsureClassInstanceRooted_fn(RootableScriptModule* __this)
{
    __this->EnsureClassInstanceRooted();
}

// public override sealed void Evaluate(Fuse.Scripting.Context c, Fuse.Scripting.ModuleResult result) :1503
void RootableScriptModule__Evaluate_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result)
{
    uStackFrame __("Fuse.Reactive.RootableScriptModule", "Evaluate(Fuse.Scripting.Context,Fuse.Scripting.ModuleResult)");
    __this->EnsureClassInstanceRooted();
    ::g::Fuse::Scripting::ScriptModule__Evaluate_fn(__this, c, result);
}

// protected override sealed string GenerateArgs(Fuse.Scripting.Context c, Fuse.Scripting.ModuleResult result, Uno.Collections.List<object> args) :1517
void RootableScriptModule__GenerateArgs_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result, ::g::Uno::Collections::List* args, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.RootableScriptModule", "GenerateArgs(Fuse.Scripting.Context,Fuse.Scripting.ModuleResult,Uno.Collections.List<object>)");
    uString* ret3;
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > ret4;
    uObject* ret5;
    uString* argsString = (::g::Fuse::Scripting::ScriptModule__GenerateArgs_fn(__this, c, result, args, &ret3), ret3);

    for (::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(__this->Dependencies), &ret4), ret4); enum1.MoveNext(::TYPES[89/*Uno.Collections.Dictionary<string, object>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong<uObject*> > dep = enum1.Current(::TYPES[89/*Uno.Collections.Dictionary<string, object>.Enumerator*/]);
        argsString = ::g::Uno::String::op_Addition2(argsString, ::g::Uno::String::op_Addition2(::STRINGS[4/*", "*/], dep.Key(::TYPES[15/*Uno.Collections.KeyValuePair<string, object>*/])));
        ::g::Uno::Collections::List__Add_fn(uPtr(args), dep.Value(::TYPES[15/*Uno.Collections.KeyValuePair<string, object>*/]));
    }

    ::g::Uno::UX::NameTable* nt = __this->_names;

    while (nt != NULL)
    {
        for (int i = 0; i < uPtr(uPtr(nt)->Entries)->Length(); ++i)
        {
            argsString = ::g::Uno::String::op_Addition2(argsString, ::g::Uno::String::op_Addition2(::STRINGS[4/*", "*/], uPtr(uPtr(nt)->Entries)->Strong<uString*>(i)));
            ::g::Uno::Collections::List__Add_fn(uPtr(args), uPtr(__this->_worker)->Unwrap((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(nt->Objects()), ::TYPES[31/*Uno.Collections.IList<object>*/]), uCRef<int>(i), &ret5), ret5)));
        }

        nt = uPtr(nt)->ParentTable;
    }

    return *__retval = argsString, void();
}

// public RootableScriptModule New(Fuse.Reactive.ThreadWorker worker, Uno.UX.NameTable names) :1497
void RootableScriptModule__New2_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Uno::UX::NameTable* names, RootableScriptModule** __retval)
{
    *__retval = RootableScriptModule::New2(worker, names);
}

// public RootableScriptModule(Fuse.Reactive.ThreadWorker worker, Uno.UX.NameTable names) [instance] :1497
void RootableScriptModule::ctor_2(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Uno::UX::NameTable* names)
{
    ctor_1();
    _worker = worker;
    _names = names;
}

// private void EnsureClassInstanceRooted() [instance] :1509
void RootableScriptModule::EnsureClassInstanceRooted()
{
    uStackFrame __("Fuse.Reactive.RootableScriptModule", "EnsureClassInstanceRooted()");

    if (_classInstance == NULL)
        _classInstance = uPtr(_worker)->GetClassInstance1(_names);

    uPtr(_classInstance)->EnsureRooted();
}

// public RootableScriptModule New(Fuse.Reactive.ThreadWorker worker, Uno.UX.NameTable names) [static] :1497
RootableScriptModule* RootableScriptModule::New2(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Uno::UX::NameTable* names)
{
    RootableScriptModule* obj2 = (RootableScriptModule*)uNew(RootableScriptModule_typeof());
    obj2->ctor_2(worker, names);
    return obj2;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Round :929
// {
static void Round_build(uType* type)
{
    ::STRINGS[139] = uString::Const("operand");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Round__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Round_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Round);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Round", options);
    type->fp_build_ = Round_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Round(Fuse.Reactive.Expression operand) :932
void Round__ctor_3_fn(Round* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public Round New(Fuse.Reactive.Expression operand) :932
void Round__New1_fn(::g::Fuse::Reactive::Expression* operand, Round** __retval)
{
    *__retval = Round::New1(operand);
}

// public Round(Fuse.Reactive.Expression operand) [instance] :932
void Round::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[139/*"operand"*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Round_fn));
}

// public Round New(Fuse.Reactive.Expression operand) [static] :932
Round* Round::New1(::g::Fuse::Reactive::Expression* operand)
{
    Round* obj1 = (Round*)uNew(Round_typeof());
    obj1->ctor_3(operand);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\$.uno
// ----------------------------------------------------------------------------------

// public sealed class Select :3256
// {
static void Select_build(uType* type)
{
    ::STRINGS[140] = uString::Const("'Select' is deprecated, use 'With' instead (works the same way). ");
    ::STRINGS[42] = uString::Const("C:\\Users\\Lotus\\AppData\\Local\\Fusetools\\Packages\\Fuse.Reactive.Bindings\\1.2.0\\$.uno");
    ::STRINGS[141] = uString::Const(".ctor");
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::With_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Reactive::With_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Reactive::With_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Reactive::With_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::With_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::With_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Reactive::With_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Reactive::With_type, interface7),
        ::g::Fuse::Node__ISubtreeDataProvider_typeof(), offsetof(::g::Fuse::Reactive::With_type, interface8),
        ::g::Fuse::Reactive::ValueForwarder__IValueListener_typeof(), offsetof(::g::Fuse::Reactive::With_type, interface9));
    type->SetFields(36);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Select__New3_fn, 0, true, type, 0));
}

::g::Fuse::Reactive::With_type* Select_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::With_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::With_typeof();
    options.FieldCount = 36;
    options.InterfaceCount = 10;
    options.ObjectSize = sizeof(Select);
    options.TypeSize = sizeof(::g::Fuse::Reactive::With_type);
    type = (::g::Fuse::Reactive::With_type*)uClassType::New("Fuse.Reactive.Select", options);
    type->fp_build_ = Select_build;
    type->fp_ctor_ = (void*)Select__New3_fn;
    type->interface8.fp_GetData = (void(*)(uObject*, ::g::Fuse::Node*, uObject**))::g::Fuse::Reactive::With__FuseNodeISubtreeDataProviderGetData_fn;
    type->interface9.fp_NewValue = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::With__FuseReactiveValueForwarderIValueListenerNewValue_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Select() :3258
void Select__ctor_6_fn(Select* __this)
{
    __this->ctor_6();
}

// public Select New() :3258
void Select__New3_fn(Select** __retval)
{
    *__retval = Select::New3();
}

// public Select() [instance] :3258
void Select::ctor_6()
{
    ctor_5();
    ::g::Fuse::Diagnostics::Deprecated(::STRINGS[140/*"'Select' is...*/], this, ::STRINGS[42/*"C:\\Users\\...*/], 3260, ::STRINGS[141/*".ctor"*/]);
}

// public Select New() [static] :3258
Select* Select::New3()
{
    Select* obj1 = (Select*)uNew(Select_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.JavaScript\1.2.0\$.uno
// ------------------------------------------------------------------------------------

// private sealed class Observable.Set :1049
// {
static void Observable__Set_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Observable__Set, _origin), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Observable__Set, _value), 0);
}

::g::Fuse::Reactive::Observable__Operation_type* Observable__Set_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Observable__Operation_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__Set);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Observable__Operation_type);
    type = (::g::Fuse::Reactive::Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.Set", options);
    type->fp_build_ = Observable__Set_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Reactive::Observable__Operation*, uObject*))Observable__Set__OnPerform_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Reactive::Observable__Operation*))Observable__Set__Unsubscribe_fn;
    return type;
}

// public Set(Fuse.Reactive.Observable obs, object value, int origin) :1054
void Observable__Set__ctor_1_fn(Observable__Set* __this, ::g::Fuse::Reactive::Observable* obs, uObject* value, int* origin)
{
    __this->ctor_1(obs, value, *origin);
}

// public Set New(Fuse.Reactive.Observable obs, object value, int origin) :1054
void Observable__Set__New1_fn(::g::Fuse::Reactive::Observable* obs, uObject* value, int* origin, Observable__Set** __retval)
{
    *__retval = Observable__Set::New1(obs, value, *origin);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription> sub) :1065
void Observable__Set__OnPerform_fn(Observable__Set* __this, uObject* sub)
{
    uStackFrame __("Fuse.Reactive.Observable.Set", "OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>)");
    ::g::Fuse::Reactive::Observable__Subscription* ret2;
    ::g::Fuse::Reactive::Observable__Subscription* ret3;
    uPtr(__this->Observable())->UnsubscribeValues();
    uPtr(uPtr(__this->Observable())->_values)->Clear();
    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(__this->Observable())->_values), __this->_value);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Reactive.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(__this->_origin))
            ::g::Fuse::Reactive::IObserver::OnSet(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[3/*Fuse.Reactive.IObserver*/]), __this->_value);
}

// protected override sealed void Unsubscribe() :1060
void Observable__Set__Unsubscribe_fn(Observable__Set* __this)
{
    uStackFrame __("Fuse.Reactive.Observable.Set", "Unsubscribe()");
    ::g::Fuse::Reactive::ValueMirror::Unsubscribe1(__this->_value);
}

// public Set(Fuse.Reactive.Observable obs, object value, int origin) [instance] :1054
void Observable__Set::ctor_1(::g::Fuse::Reactive::Observable* obs, uObject* value, int origin)
{
    ctor_(obs);
    _value = value;
    _origin = origin;
}

// public Set New(Fuse.Reactive.Observable obs, object value, int origin) [static] :1054
Observable__Set* Observable__Set::New1(::g::Fuse::Reactive::Observable* obs, uObject* value, int origin)
{
    Observable__Set* obj1 = (Observable__Set*)uNew(Observable__Set_typeof());
    obj1->ctor_1(obs, value, origin);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Sign :913
// {
static void Sign_build(uType* type)
{
    ::STRINGS[142] = uString::Const("sign");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Sign__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Sign_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Sign);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Sign", options);
    type->fp_build_ = Sign_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Sign(Fuse.Reactive.Expression operand) :916
void Sign__ctor_3_fn(Sign* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public Sign New(Fuse.Reactive.Expression operand) :916
void Sign__New1_fn(::g::Fuse::Reactive::Expression* operand, Sign** __retval)
{
    *__retval = Sign::New1(operand);
}

// public Sign(Fuse.Reactive.Expression operand) [instance] :916
void Sign::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[142/*"sign"*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Sign_fn));
}

// public Sign New(Fuse.Reactive.Expression operand) [static] :916
Sign* Sign::New1(::g::Fuse::Reactive::Expression* operand)
{
    Sign* obj1 = (Sign*)uNew(Sign_typeof());
    obj1->ctor_3(operand);
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
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(SimpleVarArgFunction_type, interface0));
    type->SetFields(1);
}

SimpleVarArgFunction_type* SimpleVarArgFunction_typeof()
{
    static uSStrong<SimpleVarArgFunction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::VarArgFunction_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SimpleVarArgFunction);
    options.TypeSize = sizeof(SimpleVarArgFunction_type);
    type = (SimpleVarArgFunction_type*)uClassType::New("Fuse.Reactive.SimpleVarArgFunction", options);
    type->fp_build_ = SimpleVarArgFunction_build;
    type->fp_OnNewArguments = SimpleVarArgFunction__OnNewArguments_fn;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))SimpleVarArgFunction__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))SimpleVarArgFunction__Subscribe_fn;
    return type;
}

// protected generated SimpleVarArgFunction() :2141
void SimpleVarArgFunction__ctor_2_fn(SimpleVarArgFunction* __this)
{
    __this->ctor_2();
}

// protected virtual void OnNewArguments(Fuse.Reactive.VarArgFunction.Argument[] args, Fuse.Reactive.IListener listener) :2176
void SimpleVarArgFunction__OnNewArguments_fn(SimpleVarArgFunction* __this, uArray* args, uObject* listener)
{
}

// protected void OnNewPartialArguments(Fuse.Reactive.VarArgFunction.Argument[] args, Fuse.Reactive.IListener listener) :2158
void SimpleVarArgFunction__OnNewPartialArguments_fn(SimpleVarArgFunction* __this, uArray* args, uObject* listener)
{
    __this->OnNewPartialArguments(args, listener);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :2143
void SimpleVarArgFunction__Subscribe_fn(SimpleVarArgFunction* __this, uObject* context, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.SimpleVarArgFunction", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    return *__retval = (uObject*)SimpleVarArgFunction__Subscription::New1(__this, context, listener), void();
}

// protected generated SimpleVarArgFunction() [instance] :2141
void SimpleVarArgFunction::ctor_2()
{
    ctor_1();
}

// protected void OnNewPartialArguments(Fuse.Reactive.VarArgFunction.Argument[] args, Fuse.Reactive.IListener listener) [instance] :2158
void SimpleVarArgFunction::OnNewPartialArguments(uArray* args, uObject* listener)
{
    uStackFrame __("Fuse.Reactive.SimpleVarArgFunction", "OnNewPartialArguments(Fuse.Reactive.VarArgFunction.Argument[],Fuse.Reactive.IListener)");

    for (int i = 0; i < uPtr(args)->Length(); i++)
        if (!uPtr(uPtr(args)->Strong< ::g::Fuse::Reactive::VarArgFunction__Argument*>(i))->HasValue())
            return;

    OnNewArguments(args, listener);
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Sin :759
// {
static void Sin_build(uType* type)
{
    ::STRINGS[143] = uString::Const("sin");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Sin__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Sin_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Sin);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Sin", options);
    type->fp_build_ = Sin_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Sin(Fuse.Reactive.Expression operand) :762
void Sin__ctor_3_fn(Sin* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public Sin New(Fuse.Reactive.Expression operand) :762
void Sin__New1_fn(::g::Fuse::Reactive::Expression* operand, Sin** __retval)
{
    *__retval = Sin::New1(operand);
}

// public Sin(Fuse.Reactive.Expression operand) [instance] :762
void Sin::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[143/*"sin"*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Sin_fn));
}

// public Sin New(Fuse.Reactive.Expression operand) [static] :762
Sin* Sin::New1(::g::Fuse::Reactive::Expression* operand)
{
    Sin* obj1 = (Sin*)uNew(Sin_typeof());
    obj1->ctor_3(operand);
    return obj1;
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
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)Snapshot__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()),
        new uFunction("get_Source", NULL, (void*)Snapshot__get_Source_fn, 0, false, ::g::Fuse::Reactive::Expression_typeof(), 0));
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

// public Snapshot(Fuse.Reactive.Expression source) :1679
void Snapshot__ctor_1_fn(Snapshot* __this, ::g::Fuse::Reactive::Expression* source)
{
    __this->ctor_1(source);
}

// public Snapshot New(Fuse.Reactive.Expression source) :1679
void Snapshot__New1_fn(::g::Fuse::Reactive::Expression* source, Snapshot** __retval)
{
    *__retval = Snapshot::New1(source);
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
    uStackFrame __("Fuse.Reactive.Snapshot", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    return *__retval = (uObject*)Snapshot__Subscription::New1(__this, context, listener), void();
}

// public Snapshot(Fuse.Reactive.Expression source) [instance] :1679
void Snapshot::ctor_1(::g::Fuse::Reactive::Expression* source)
{
    ctor_();
    Source(source);
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

// public Snapshot New(Fuse.Reactive.Expression source) [static] :1679
Snapshot* Snapshot::New1(::g::Fuse::Reactive::Expression* source)
{
    Snapshot* obj1 = (Snapshot*)uNew(Snapshot_typeof());
    obj1->ctor_1(source);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Sqrt :833
// {
static void Sqrt_build(uType* type)
{
    ::STRINGS[144] = uString::Const("sqrt");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Sqrt__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Sqrt_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Sqrt);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Sqrt", options);
    type->fp_build_ = Sqrt_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Sqrt(Fuse.Reactive.Expression operand) :836
void Sqrt__ctor_3_fn(Sqrt* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public Sqrt New(Fuse.Reactive.Expression operand) :836
void Sqrt__New1_fn(::g::Fuse::Reactive::Expression* operand, Sqrt** __retval)
{
    *__retval = Sqrt::New1(operand);
}

// public Sqrt(Fuse.Reactive.Expression operand) [instance] :836
void Sqrt::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[144/*"sqrt"*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Sqrt_fn));
}

// public Sqrt New(Fuse.Reactive.Expression operand) [static] :836
Sqrt* Sqrt::New1(::g::Fuse::Reactive::Expression* operand)
{
    Sqrt* obj1 = (Sqrt*)uNew(Sqrt_typeof());
    obj1->ctor_3(operand);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// private sealed class BinaryOperator.Subscription :42
// {
static void BinaryOperator__Subscription_build(uType* type)
{
    ::TYPES[5] = ::g::Uno::IDisposable_typeof();
    ::TYPES[78] = ::g::Fuse::MarshalException_typeof();
    type->SetInterfaces(
        ::TYPES[5/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::InnerListener_type, interface1));
    type->SetFields(2,
        ::g::Fuse::Reactive::BinaryOperator_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator__Subscription, _bo), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator__Subscription, _hasLeft), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator__Subscription, _hasRight), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator__Subscription, _left), 0,
        ::TYPES[5/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::BinaryOperator__Subscription, _leftSub), 0,
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator__Subscription, _listener), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator__Subscription, _right), 0,
        ::TYPES[5/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::BinaryOperator__Subscription, _rightSub), 0);
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
    uStackFrame __("Fuse.Reactive.BinaryOperator.Subscription", "Dispose()");
    ::g::Fuse::Reactive::InnerListener__Dispose_fn(__this);

    if (__this->_leftSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_leftSub), ::TYPES[5/*Uno.IDisposable*/]));
        __this->_leftSub = NULL;
    }

    if (__this->_rightSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_rightSub), ::TYPES[5/*Uno.IDisposable*/]));
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
    uStackFrame __("Fuse.Reactive.BinaryOperator.Subscription", "OnNewData(Fuse.Reactive.IExpression,object)");

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
    uStackFrame __("Fuse.Reactive.BinaryOperator.Subscription", "Init(Fuse.Reactive.IContext)");
    _leftSub = uPtr(uPtr(_bo)->Left())->Subscribe(context, (uObject*)this);
    _rightSub = uPtr(uPtr(_bo)->Right())->Subscribe(context, (uObject*)this);
}

// protected void OnNewOperands(object left, object right) [instance] :84
void BinaryOperator__Subscription::OnNewOperands(uObject* left, uObject* right)
{
    uStackFrame __("Fuse.Reactive.BinaryOperator.Subscription", "OnNewOperands(object,object)");
    ClearDiagnostic();

    try
    {
        uPtr(_bo)->OnNewOperands(_listener, left, right);
    }
    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[78/*Fuse.MarshalException*/]))
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
    uStackFrame __("Fuse.Reactive.BinaryOperator.Subscription", "Create(Fuse.Reactive.BinaryOperator,Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
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

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.JavaScript\1.2.0\$.uno
// ------------------------------------------------------------------------------------

// public sealed class Observable.Subscription :794
// {
// static Subscription() :794
static void Observable__Subscription__cctor__fn(uType* __type)
{
    Observable__Subscription::_counter_ = 1;
}

static void Observable__Subscription_build(uType* type)
{
    ::STRINGS[108] = uString::Const("clear");
    ::STRINGS[145] = uString::Const("replaceAllWithOrigin");
    ::STRINGS[146] = uString::Const("Unexpected null object");
    ::STRINGS[147] = uString::Const("C:\\Users\\Lotus\\AppData\\Local\\Fusetools\\Packages\\Fuse.Reactive.JavaScript\\1.2.0\\$.uno");
    ::STRINGS[148] = uString::Const("SetExclusive");
    ::STRINGS[149] = uString::Const("setValueWithOrigin");
    ::TYPES[3] = ::g::Fuse::Reactive::IObserver_typeof();
    ::TYPES[6] = uObject_typeof()->Array();
    ::TYPES[39] = ::g::Fuse::IArray_typeof();
    ::TYPES[16] = ::g::Fuse::Scripting::ScriptException_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::ISubscription_typeof(), offsetof(Observable__Subscription_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Observable__Subscription_type, interface1));
    type->SetFields(1,
        ::TYPES[3/*Fuse.Reactive.IObserver*/], offsetof(::g::Fuse::Reactive::Observable__Subscription, _obs), 0,
        ::g::Fuse::Reactive::Observable_typeof(), offsetof(::g::Fuse::Reactive::Observable__Subscription, _om), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Observable__Subscription, _origin), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::Observable__Subscription, _Removed), 0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Reactive::Observable__Subscription::_counter_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(8,
        new uFunction("ClearExclusive", NULL, (void*)Observable__Subscription__ClearExclusive_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Dispose", NULL, (void*)Observable__Subscription__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Observable__Subscription__New2_fn, 0, true, type, 2, ::g::Fuse::Reactive::Observable_typeof(), ::TYPES[3/*Fuse.Reactive.IObserver*/]),
        new uFunction("get_Observer", NULL, (void*)Observable__Subscription__get_Observer_fn, 0, false, ::TYPES[3/*Fuse.Reactive.IObserver*/], 0),
        new uFunction("get_Removed", NULL, (void*)Observable__Subscription__get_Removed_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("ReplaceAllExclusive", NULL, (void*)Observable__Subscription__ReplaceAllExclusive_fn, 0, false, uVoid_typeof(), 1, ::TYPES[39/*Fuse.IArray*/]),
        new uFunction("SetExclusive", NULL, (void*)Observable__Subscription__SetExclusive_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("ShouldSend", NULL, (void*)Observable__Subscription__ShouldSend_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Int_typeof()));
}

Observable__Subscription_type* Observable__Subscription_typeof()
{
    static uSStrong<Observable__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::DiagnosticSubject_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Observable__Subscription);
    options.TypeSize = sizeof(Observable__Subscription_type);
    type = (Observable__Subscription_type*)uClassType::New("Fuse.Reactive.Observable.Subscription", options);
    type->fp_build_ = Observable__Subscription_build;
    type->fp_cctor_ = Observable__Subscription__cctor__fn;
    type->interface0.fp_ClearExclusive = (void(*)(uObject*))Observable__Subscription__ClearExclusive_fn;
    type->interface0.fp_SetExclusive = (void(*)(uObject*, uObject*))Observable__Subscription__SetExclusive_fn;
    type->interface0.fp_ReplaceAllExclusive = (void(*)(uObject*, uObject*))Observable__Subscription__ReplaceAllExclusive_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))Observable__Subscription__Dispose_fn;
    return type;
}

// public Subscription(Fuse.Reactive.Observable om, Fuse.Reactive.IObserver obs) :811
void Observable__Subscription__ctor_1_fn(Observable__Subscription* __this, ::g::Fuse::Reactive::Observable* om, uObject* obs)
{
    __this->ctor_1(om, obs);
}

// public void ClearExclusive() :861
void Observable__Subscription__ClearExclusive_fn(Observable__Subscription* __this)
{
    __this->ClearExclusive();
}

// public void Dispose() :869
void Observable__Subscription__Dispose_fn(Observable__Subscription* __this)
{
    __this->Dispose();
}

// public Subscription New(Fuse.Reactive.Observable om, Fuse.Reactive.IObserver obs) :811
void Observable__Subscription__New2_fn(::g::Fuse::Reactive::Observable* om, uObject* obs, Observable__Subscription** __retval)
{
    *__retval = Observable__Subscription::New2(om, obs);
}

// public Fuse.Reactive.IObserver get_Observer() :809
void Observable__Subscription__get_Observer_fn(Observable__Subscription* __this, uObject** __retval)
{
    *__retval = __this->Observer();
}

// public generated bool get_Removed() :800
void Observable__Subscription__get_Removed_fn(Observable__Subscription* __this, bool* __retval)
{
    *__retval = __this->Removed();
}

// private generated void set_Removed(bool value) :800
void Observable__Subscription__set_Removed_fn(Observable__Subscription* __this, bool* value)
{
    __this->Removed(*value);
}

// public void ReplaceAllExclusive(Fuse.IArray newValues) :849
void Observable__Subscription__ReplaceAllExclusive_fn(Observable__Subscription* __this, uObject* newValues)
{
    __this->ReplaceAllExclusive(newValues);
}

// public void SetExclusive(object newValue) :824
void Observable__Subscription__SetExclusive_fn(Observable__Subscription* __this, uObject* newValue)
{
    __this->SetExclusive(newValue);
}

// public bool ShouldSend([int origin]) :802
void Observable__Subscription__ShouldSend_fn(Observable__Subscription* __this, int* origin, bool* __retval)
{
    *__retval = __this->ShouldSend(*origin);
}

int Observable__Subscription::_counter_;

// public Subscription(Fuse.Reactive.Observable om, Fuse.Reactive.IObserver obs) [instance] :811
void Observable__Subscription::ctor_1(::g::Fuse::Reactive::Observable* om, uObject* obs)
{
    uStackFrame __("Fuse.Reactive.Observable.Subscription", ".ctor(Fuse.Reactive.Observable,Fuse.Reactive.IObserver)");
    ctor_();
    Removed(false);
    _origin = (Observable__Subscription::_counter()++);
    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(om)->_observers), this);
    _om = om;
    _obs = obs;

    if (uPtr(_om)->Length() == 1)
        ::g::Fuse::Reactive::IObserver::OnSet(uInterface(uPtr(obs), ::TYPES[3/*Fuse.Reactive.IObserver*/]), uPtr(_om)->Item(0));
    else
        ::g::Fuse::Reactive::IObserver::OnNewAll(uInterface(uPtr(obs), ::TYPES[3/*Fuse.Reactive.IObserver*/]), (uObject*)_om);
}

// public void ClearExclusive() [instance] :861
void Observable__Subscription::ClearExclusive()
{
    uStackFrame __("Fuse.Reactive.Observable.Subscription", "ClearExclusive()");
    uPtr(uPtr(_om)->Object())->CallMethod(::STRINGS[108/*"clear"*/], uArray::Init<uObject*>(::TYPES[6/*object[]*/], 1, uBox<int>(::TYPES[33/*int*/], _origin)));
}

// public void Dispose() [instance] :869
void Observable__Subscription::Dispose()
{
    uStackFrame __("Fuse.Reactive.Observable.Subscription", "Dispose()");
    Removed(true);
    uPtr(_om)->ObserversCleanup();
}

// public Fuse.Reactive.IObserver get_Observer() [instance] :809
uObject* Observable__Subscription::Observer()
{
    return _obs;
}

// public generated bool get_Removed() [instance] :800
bool Observable__Subscription::Removed()
{
    return _Removed;
}

// private generated void set_Removed(bool value) [instance] :800
void Observable__Subscription::Removed(bool value)
{
    _Removed = value;
}

// public void ReplaceAllExclusive(Fuse.IArray newValues) [instance] :849
void Observable__Subscription::ReplaceAllExclusive(uObject* newValues)
{
    uStackFrame __("Fuse.Reactive.Observable.Subscription", "ReplaceAllExclusive(Fuse.IArray)");
    uArray* arr = uArray::New(::TYPES[6/*object[]*/], ::g::Fuse::IArray::Length(uInterface(uPtr(newValues), ::TYPES[39/*Fuse.IArray*/])));

    for (int i = 0; i < arr->Length(); i++)
        uPtr(arr)->Strong<uObject*>(i) = uPtr(uPtr(_om)->_worker)->Unwrap(::g::Fuse::IArray::Item(uInterface(uPtr(newValues), ::TYPES[39/*Fuse.IArray*/]), i));

    ::g::Fuse::Scripting::Array* sa = uPtr(uPtr(uPtr(_om)->_worker)->Context())->NewArray(arr);
    uPtr(uPtr(_om)->Object())->CallMethod(::STRINGS[145/*"replaceAllW...*/], uArray::Init<uObject*>(::TYPES[6/*object[]*/], 2, sa, uBox<int>(::TYPES[33/*int*/], _origin)));
}

// public void SetExclusive(object newValue) [instance] :824
void Observable__Subscription::SetExclusive(uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.Observable.Subscription", "SetExclusive(object)");
    ClearDiagnostic();

    if (uPtr(_om)->Object() == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[146/*"Unexpected ...*/], this, ::STRINGS[147/*"C:\\Users\\...*/], 830, ::STRINGS[148/*"SetExclusive"*/]);
        return;
    }

    try
    {
        uPtr(uPtr(_om)->Object())->CallMethod(::STRINGS[149/*"setValueWit...*/], uArray::Init<uObject*>(::TYPES[6/*object[]*/], 2, (uObject*)uPtr(uPtr(_om)->_worker)->Unwrap(newValue), uBox<int>(::TYPES[33/*int*/], _origin)));
    }
    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[16/*Fuse.Scripting.ScriptException*/]))
        {
            ::g::Fuse::Scripting::ScriptException* ex = (::g::Fuse::Scripting::ScriptException*)__t.Exception;
            SetDiagnostic(ex);
        }
        else throw __t;
    }
}

// public bool ShouldSend([int origin]) [instance] :802
bool Observable__Subscription::ShouldSend(int origin)
{
    return !Removed() && (origin != _origin);
}

// public Subscription New(Fuse.Reactive.Observable om, Fuse.Reactive.IObserver obs) [static] :811
Observable__Subscription* Observable__Subscription::New2(::g::Fuse::Reactive::Observable* om, uObject* obs)
{
    Observable__Subscription* obj1 = (Observable__Subscription*)uNew(Observable__Subscription_typeof());
    obj1->ctor_1(om, obs);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// private sealed class Property.Subscription :1459
// {
static void Property__Subscription_build(uType* type)
{
    ::TYPES[10] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(Property__Subscription_type, interface0),
        ::g::Fuse::Reactive::IWriteable_typeof(), offsetof(Property__Subscription_type, interface1),
        ::g::Uno::IDisposable_typeof(), offsetof(Property__Subscription_type, interface2));
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), offsetof(::g::Fuse::Reactive::Property__Subscription, _accessor), 0,
        ::TYPES[10/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::Property__Subscription, _listener), 0,
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
    uStackFrame __("Fuse.Reactive.Property.Subscription", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");
    ::g::Uno::UX::Selector prop_ = *prop;

    if (::g::Uno::UX::Selector__op_Equality(prop_, uPtr(__this->_accessor)->Name()))
        __this->PushValue();
}

// public Subscription(Fuse.Reactive.Property prop, Uno.UX.PropertyObject obj, Uno.UX.PropertyAccessor accessor, Fuse.Reactive.IListener listener) [instance] :1466
void Property__Subscription::ctor_(::g::Fuse::Reactive::Property* prop, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::PropertyAccessor* accessor, uObject* listener)
{
    uStackFrame __("Fuse.Reactive.Property.Subscription", ".ctor(Fuse.Reactive.Property,Uno.UX.PropertyObject,Uno.UX.PropertyAccessor,Fuse.Reactive.IListener)");
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
    uStackFrame __("Fuse.Reactive.Property.Subscription", "Dispose()");
    uPtr(_object)->RemovePropertyListener((uObject*)this);
    _accessor = NULL;
    _object = NULL;
    _listener = NULL;
}

// private void PushValue() [instance] :1498
void Property__Subscription::PushValue()
{
    uStackFrame __("Fuse.Reactive.Property.Subscription", "PushValue()");
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[10/*Fuse.Reactive.IListener*/]), (uObject*)_prop, uPtr(_accessor)->GetAsObject(_object));
}

// public void SetExclusive(object value) [instance] :1478
void Property__Subscription::SetExclusive(uObject* value)
{
    uStackFrame __("Fuse.Reactive.Property.Subscription", "SetExclusive(object)");
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

// private sealed class QuaternaryOperator.Subscription :1545
// {
static void QuaternaryOperator__Subscription_build(uType* type)
{
    ::TYPES[5] = ::g::Uno::IDisposable_typeof();
    ::TYPES[78] = ::g::Fuse::MarshalException_typeof();
    ::TYPES[10] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::TYPES[5/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface0),
        ::TYPES[10/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface1));
    type->SetFields(2,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _first), 0,
        ::TYPES[5/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _firstSub), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _fourth), 0,
        ::TYPES[5/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _fourthSub), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _hasFirst), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _hasFourth), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _hasSecond), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _hasThird), 0,
        ::TYPES[10/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _listener), 0,
        ::g::Fuse::Reactive::QuaternaryOperator_typeof(), offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _qo), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _second), 0,
        ::TYPES[5/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _secondSub), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _third), 0,
        ::TYPES[5/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::QuaternaryOperator__Subscription, _thirdSub), 0);
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
    uStackFrame __("Fuse.Reactive.QuaternaryOperator.Subscription", "Dispose()");
    ::g::Fuse::Reactive::InnerListener__Dispose_fn(__this);

    if (__this->_firstSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_firstSub), ::TYPES[5/*Uno.IDisposable*/]));
        __this->_firstSub = NULL;
    }

    if (__this->_secondSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_secondSub), ::TYPES[5/*Uno.IDisposable*/]));
        __this->_secondSub = NULL;
    }

    if (__this->_thirdSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_thirdSub), ::TYPES[5/*Uno.IDisposable*/]));
        __this->_thirdSub = NULL;
    }

    if (__this->_fourthSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_fourthSub), ::TYPES[5/*Uno.IDisposable*/]));
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
    uStackFrame __("Fuse.Reactive.QuaternaryOperator.Subscription", "OnNewData(Fuse.Reactive.IExpression,object)");

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
    uStackFrame __("Fuse.Reactive.QuaternaryOperator.Subscription", "Init(Fuse.Reactive.IContext)");
    _firstSub = uPtr(uPtr(_qo)->First())->Subscribe(context, (uObject*)this);
    _secondSub = uPtr(uPtr(_qo)->Second())->Subscribe(context, (uObject*)this);
    _thirdSub = uPtr(uPtr(_qo)->Third())->Subscribe(context, (uObject*)this);
    _fourthSub = uPtr(uPtr(_qo)->Fourth())->Subscribe(context, (uObject*)this);
}

// protected void OnNewOperands(object first, object second, object third, object fourth) [instance] :1592
void QuaternaryOperator__Subscription::OnNewOperands(uObject* first, uObject* second, uObject* third, uObject* fourth)
{
    uStackFrame __("Fuse.Reactive.QuaternaryOperator.Subscription", "OnNewOperands(object,object,object,object)");
    ClearDiagnostic();

    try
    {
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[10/*Fuse.Reactive.IListener*/]), (uObject*)_qo, uPtr(_qo)->Compute(first, second, third, fourth));
    }
    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[78/*Fuse.MarshalException*/]))
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
    uStackFrame __("Fuse.Reactive.QuaternaryOperator.Subscription", "Create(Fuse.Reactive.QuaternaryOperator,Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
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

// private sealed class TernaryOperator.Subscription :1893
// {
static void TernaryOperator__Subscription_build(uType* type)
{
    ::TYPES[5] = ::g::Uno::IDisposable_typeof();
    ::TYPES[78] = ::g::Fuse::MarshalException_typeof();
    ::TYPES[10] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::TYPES[5/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface0),
        ::TYPES[10/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface1));
    type->SetFields(2,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator__Subscription, _first), 0,
        ::TYPES[5/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::TernaryOperator__Subscription, _firstSub), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator__Subscription, _hasFirst), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator__Subscription, _hasSecond), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator__Subscription, _hasThird), 0,
        ::TYPES[10/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::TernaryOperator__Subscription, _listener), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator__Subscription, _second), 0,
        ::TYPES[5/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::TernaryOperator__Subscription, _secondSub), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator__Subscription, _third), 0,
        ::TYPES[5/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::TernaryOperator__Subscription, _thirdSub), 0,
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
    uStackFrame __("Fuse.Reactive.TernaryOperator.Subscription", "Dispose()");
    ::g::Fuse::Reactive::InnerListener__Dispose_fn(__this);

    if (__this->_firstSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_firstSub), ::TYPES[5/*Uno.IDisposable*/]));
        __this->_firstSub = NULL;
    }

    if (__this->_secondSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_secondSub), ::TYPES[5/*Uno.IDisposable*/]));
        __this->_secondSub = NULL;
    }

    if (__this->_thirdSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_thirdSub), ::TYPES[5/*Uno.IDisposable*/]));
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
    uStackFrame __("Fuse.Reactive.TernaryOperator.Subscription", "OnNewData(Fuse.Reactive.IExpression,object)");

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
    uStackFrame __("Fuse.Reactive.TernaryOperator.Subscription", "Init(Fuse.Reactive.IContext)");
    _firstSub = uPtr(uPtr(_to)->First())->Subscribe(context, (uObject*)this);
    _secondSub = uPtr(uPtr(_to)->Second())->Subscribe(context, (uObject*)this);
    _thirdSub = uPtr(uPtr(_to)->Third())->Subscribe(context, (uObject*)this);
}

// protected void OnNewOperands(object first, object second, object third) [instance] :1937
void TernaryOperator__Subscription::OnNewOperands(uObject* first, uObject* second, uObject* third)
{
    uStackFrame __("Fuse.Reactive.TernaryOperator.Subscription", "OnNewOperands(object,object,object)");
    ClearDiagnostic();

    try
    {
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[10/*Fuse.Reactive.IListener*/]), (uObject*)_to, uPtr(_to)->Compute(first, second, third));
    }
    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[78/*Fuse.MarshalException*/]))
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
    uStackFrame __("Fuse.Reactive.TernaryOperator.Subscription", "Create(Fuse.Reactive.TernaryOperator,Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
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
    ::TYPES[5] = ::g::Uno::IDisposable_typeof();
    ::TYPES[10] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::TYPES[5/*Uno.IDisposable*/], offsetof(Snapshot__Subscription_type, interface0),
        ::TYPES[10/*Fuse.Reactive.IListener*/], offsetof(Snapshot__Subscription_type, interface1));
    type->SetFields(0,
        ::TYPES[10/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::Snapshot__Subscription, _listener), 0,
        ::g::Fuse::Reactive::Snapshot_typeof(), offsetof(::g::Fuse::Reactive::Snapshot__Subscription, _snap), 0,
        ::TYPES[5/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::Snapshot__Subscription, _sub), 0);
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
    uStackFrame __("Fuse.Reactive.Snapshot.Subscription", "Fuse.Reactive.IListener.OnNewData(Fuse.Reactive.IExpression,object)");

    if (__this->_listener != NULL)
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(__this->_listener), ::TYPES[10/*Fuse.Reactive.IListener*/]), (uObject*)__this->_snap, value);

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
    uStackFrame __("Fuse.Reactive.Snapshot.Subscription", ".ctor(Fuse.Reactive.Snapshot,Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    _snap = snap;
    _listener = listener;
    _sub = uPtr(uPtr(_snap)->Source())->Subscribe(context, (uObject*)this);
}

// public void Dispose() [instance] :1702
void Snapshot__Subscription::Dispose()
{
    uStackFrame __("Fuse.Reactive.Snapshot.Subscription", "Dispose()");
    _listener = NULL;

    if (_sub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_sub), ::TYPES[5/*Uno.IDisposable*/]));
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

// public sealed class SimpleVarArgFunction.Subscription :2181
// {
static void SimpleVarArgFunction__Subscription_build(uType* type)
{
    ::TYPES[98] = ::g::Fuse::Reactive::VarArgFunction__Argument_typeof()->Array();
    ::TYPES[71] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Expression_typeof(), NULL);
    ::TYPES[72] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Expression_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::InnerListener_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::InnerListener_type, interface1));
    type->SetFields(2,
        ::TYPES[98/*Fuse.Reactive.VarArgFunction.Argument[]*/], offsetof(::g::Fuse::Reactive::SimpleVarArgFunction__Subscription, _arguments), 0,
        ::g::Fuse::Reactive::SimpleVarArgFunction_typeof(), offsetof(::g::Fuse::Reactive::SimpleVarArgFunction__Subscription, _func), 0,
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::SimpleVarArgFunction__Subscription, _listener), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SimpleVarArgFunction__Subscription__New1_fn, 0, true, type, 3, ::g::Fuse::Reactive::SimpleVarArgFunction_typeof(), ::g::Fuse::Reactive::IContext_typeof(), ::g::Fuse::Reactive::IListener_typeof()));
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
    uStackFrame __("Fuse.Reactive.SimpleVarArgFunction.Subscription", "Dispose()");
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
    uStackFrame __("Fuse.Reactive.SimpleVarArgFunction.Subscription", "OnNewData(Fuse.Reactive.IExpression,object)");
    ::g::Fuse::Reactive::Expression* ret3;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(__this->_func)->Arguments()), ::TYPES[71/*Uno.Collections.ICollection<Fuse.Reactive.Expression>*/])); i++)
        if ((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(__this->_func)->Arguments()), ::TYPES[72/*Uno.Collections.IList<Fuse.Reactive.Expression>*/]), uCRef<int>(i), &ret3), ret3) == source)
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
    uStackFrame __("Fuse.Reactive.SimpleVarArgFunction.Subscription", ".ctor(Fuse.Reactive.SimpleVarArgFunction,Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    ::g::Fuse::Reactive::Expression* ret2;
    ctor_();
    _func = func;
    _listener = listener;
    _arguments = uArray::New(::TYPES[98/*Fuse.Reactive.VarArgFunction.Argument[]*/], ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(func)->Arguments()), ::TYPES[71/*Uno.Collections.ICollection<Fuse.Reactive.Expression>*/])));

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(func->Arguments()), ::TYPES[71/*Uno.Collections.ICollection<Fuse.Reactive.Expression>*/])); i++)
        uPtr(_arguments)->Strong< ::g::Fuse::Reactive::VarArgFunction__Argument*>(i) = ::g::Fuse::Reactive::VarArgFunction__Argument::New1();

    for (int i1 = 0; i1 < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(func->Arguments()), ::TYPES[71/*Uno.Collections.ICollection<Fuse.Reactive.Expression>*/])); i1++)
        uPtr(uPtr(_arguments)->Strong< ::g::Fuse::Reactive::VarArgFunction__Argument*>(i1))->Subscription = uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(func)->Arguments()), ::TYPES[72/*Uno.Collections.IList<Fuse.Reactive.Expression>*/]), uCRef<int>(i1), &ret2), ret2))->Subscribe(context, (uObject*)this);

    PushData();
}

// internal void PushData() [instance] :2219
void SimpleVarArgFunction__Subscription::PushData()
{
    uStackFrame __("Fuse.Reactive.SimpleVarArgFunction.Subscription", "PushData()");
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

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// protected class UnaryOperator.Subscription :2010
// {
static void UnaryOperator__Subscription_build(uType* type)
{
    ::TYPES[5] = ::g::Uno::IDisposable_typeof();
    ::TYPES[78] = ::g::Fuse::MarshalException_typeof();
    ::TYPES[10] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::TYPES[5/*Uno.IDisposable*/], offsetof(UnaryOperator__Subscription_type, interface0),
        ::TYPES[10/*Fuse.Reactive.IListener*/], offsetof(UnaryOperator__Subscription_type, interface1));
    type->SetFields(2,
        ::TYPES[10/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::UnaryOperator__Subscription, _listener), 0,
        ::TYPES[5/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::UnaryOperator__Subscription, _operandSub), 0,
        ::g::Fuse::Reactive::UnaryOperator_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator__Subscription, _uo), 0);
}

UnaryOperator__Subscription_type* UnaryOperator__Subscription_typeof()
{
    static uSStrong<UnaryOperator__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InnerListener_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(UnaryOperator__Subscription);
    options.TypeSize = sizeof(UnaryOperator__Subscription_type);
    type = (UnaryOperator__Subscription_type*)uClassType::New("Fuse.Reactive.UnaryOperator.Subscription", options);
    type->fp_build_ = UnaryOperator__Subscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))UnaryOperator__Subscription__Dispose_fn;
    type->fp_OnNewData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*, uObject*))UnaryOperator__Subscription__OnNewData_fn;
    type->fp_OnNewOperand = UnaryOperator__Subscription__OnNewOperand_fn;
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

// public override void Dispose() :2036
void UnaryOperator__Subscription__Dispose_fn(UnaryOperator__Subscription* __this)
{
    uStackFrame __("Fuse.Reactive.UnaryOperator.Subscription", "Dispose()");
    ::g::Fuse::Reactive::InnerListener__Dispose_fn(__this);

    if (__this->_operandSub != NULL)
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_operandSub), ::TYPES[5/*Uno.IDisposable*/]));

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

// protected override void OnNewData(Fuse.Reactive.IExpression source, object value) :2043
void UnaryOperator__Subscription__OnNewData_fn(UnaryOperator__Subscription* __this, uObject* source, uObject* value)
{
    uStackFrame __("Fuse.Reactive.UnaryOperator.Subscription", "OnNewData(Fuse.Reactive.IExpression,object)");
    __this->OnNewOperand(value);
}

// protected virtual void OnNewOperand(object value) :2048
void UnaryOperator__Subscription__OnNewOperand_fn(UnaryOperator__Subscription* __this, uObject* value)
{
    uStackFrame __("Fuse.Reactive.UnaryOperator.Subscription", "OnNewOperand(object)");
    __this->ClearDiagnostic();

    try
    {
        uPtr(__this->_uo)->OnNewOperand(__this->_listener, value);
    }
    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[78/*Fuse.MarshalException*/]))
        {
            ::g::Fuse::MarshalException* me = (::g::Fuse::MarshalException*)__t.Exception;
            __this->SetDiagnostic(uPtr(me)->Message(), (uObject*)__this->_uo);
        }
        else throw __t;
    }
}

// protected void PushNewData(object value) :2062
void UnaryOperator__Subscription__PushNewData_fn(UnaryOperator__Subscription* __this, uObject* value)
{
    __this->PushNewData(value);
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
    uStackFrame __("Fuse.Reactive.UnaryOperator.Subscription", "Init(Fuse.Reactive.IContext)");
    _operandSub = uPtr(uPtr(_uo)->Operand())->Subscribe(context, (uObject*)this);
}

// protected void PushNewData(object value) [instance] :2062
void UnaryOperator__Subscription::PushNewData(uObject* value)
{
    uStackFrame __("Fuse.Reactive.UnaryOperator.Subscription", "PushNewData(object)");
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[10/*Fuse.Reactive.IListener*/]), (uObject*)_uo, value);
}

// public static Fuse.Reactive.UnaryOperator.Subscription Create(Fuse.Reactive.UnaryOperator uo, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :2022
UnaryOperator__Subscription* UnaryOperator__Subscription::Create(::g::Fuse::Reactive::UnaryOperator* uo, uObject* context, uObject* listener)
{
    uStackFrame __("Fuse.Reactive.UnaryOperator.Subscription", "Create(Fuse.Reactive.UnaryOperator,Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
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

// public sealed class Subtract :1160
// {
static void Subtract_build(uType* type)
{
    ::STRINGS[150] = uString::Const("-");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Subtract__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::InfixOperator_type* Subtract_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Subtract);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.Subtract", options);
    type->fp_build_ = Subtract_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))Subtract__Compute_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))Subtract__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public Subtract(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :1163
void Subtract__ctor_3_fn(Subtract* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_3(left, right);
}

// protected override sealed object Compute(object left, object right) :1164
void Subtract__Compute_fn(Subtract* __this, uObject* left, uObject* right, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Subtract", "Compute(object,object)");
    return *__retval = ::g::Fuse::Marshal::Subtract(left, right), void();
}

// public Subtract New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :1163
void Subtract__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, Subtract** __retval)
{
    *__retval = Subtract::New1(left, right);
}

// public override sealed string get_Symbol() :1169
void Subtract__get_Symbol_fn(Subtract* __this, uString** __retval)
{
    return *__retval = ::STRINGS[150/*"-"*/], void();
}

// public Subtract(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :1163
void Subtract::ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_2(left, right);
}

// public Subtract New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :1163
Subtract* Subtract::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    Subtract* obj1 = (Subtract*)uNew(Subtract_typeof());
    obj1->ctor_3(left, right);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Tan :777
// {
static void Tan_build(uType* type)
{
    ::STRINGS[151] = uString::Const("tan");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Tan__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Tan_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Tan);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Tan", options);
    type->fp_build_ = Tan_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Tan(Fuse.Reactive.Expression operand) :780
void Tan__ctor_3_fn(Tan* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public Tan New(Fuse.Reactive.Expression operand) :780
void Tan__New1_fn(::g::Fuse::Reactive::Expression* operand, Tan** __retval)
{
    *__retval = Tan::New1(operand);
}

// public Tan(Fuse.Reactive.Expression operand) [instance] :780
void Tan::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[151/*"tan"*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Tan_fn));
}

// public Tan New(Fuse.Reactive.Expression operand) [static] :780
Tan* Tan::New1(::g::Fuse::Reactive::Expression* operand)
{
    Tan* obj1 = (Tan*)uNew(Tan_typeof());
    obj1->ctor_3(operand);
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
    type->Reflection.SetFunctions(3,
        new uFunction("get_First", NULL, (void*)TernaryOperator__get_First_fn, 0, false, ::g::Fuse::Reactive::Expression_typeof(), 0),
        new uFunction("get_Second", NULL, (void*)TernaryOperator__get_Second_fn, 0, false, ::g::Fuse::Reactive::Expression_typeof(), 0),
        new uFunction("get_Third", NULL, (void*)TernaryOperator__get_Third_fn, 0, false, ::g::Fuse::Reactive::Expression_typeof(), 0));
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

// protected TernaryOperator(Fuse.Reactive.Expression first, Fuse.Reactive.Expression second, Fuse.Reactive.Expression third) :1875
void TernaryOperator__ctor_1_fn(TernaryOperator* __this, ::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third)
{
    __this->ctor_1(first, second, third);
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
    uStackFrame __("Fuse.Reactive.TernaryOperator", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
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

// protected TernaryOperator(Fuse.Reactive.Expression first, Fuse.Reactive.Expression second, Fuse.Reactive.Expression third) [instance] :1875
void TernaryOperator::ctor_1(::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third)
{
    ctor_();
    First(first);
    Second(second);
    Third(third);
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
    ::STRINGS[152] = uString::Const("Name table missing 'this' pointer");
    ::STRINGS[153] = uString::Const("this");
    ::TYPES[38] = ::g::Fuse::Reactive::IContext_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::ConstantExpression_type, interface0));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)This__New1_fn, 0, true, type, 0));
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
    type->fp_ctor_ = (void*)This__New1_fn;
    type->fp_GetValue = (void(*)(::g::Fuse::Reactive::ConstantExpression*, uObject*, uObject**))This__GetValue_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))This__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::ConstantExpression__Subscribe_fn;
    return type;
}

// public generated This() :279
void This__ctor_2_fn(This* __this)
{
    __this->ctor_2();
}

// public override sealed object GetValue(Fuse.Reactive.IContext context) :281
void This__GetValue_fn(This* __this, uObject* context, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.This", "GetValue(Fuse.Reactive.IContext)");

    if (::g::Fuse::Reactive::IContext::NameTable(uInterface(uPtr(context), ::TYPES[38/*Fuse.Reactive.IContext*/])) != NULL)
    {
        uObject* obj = uPtr(::g::Fuse::Reactive::IContext::NameTable(uInterface(uPtr(context), ::TYPES[38/*Fuse.Reactive.IContext*/])))->This();

        if (obj != NULL)
            return *__retval = obj, void();
    }

    U_THROW(::g::Uno::Exception::New2(::STRINGS[152/*"Name table ...*/]));
}

// public generated This New() :279
void This__New1_fn(This** __retval)
{
    *__retval = This::New1();
}

// public override sealed string ToString() :291
void This__ToString_fn(This* __this, uString** __retval)
{
    return *__retval = ::STRINGS[153/*"this"*/], void();
}

// public generated This() [instance] :279
void This::ctor_2()
{
    ctor_1();
}

// public generated This New() [static] :279
This* This::New1()
{
    This* obj1 = (This*)uNew(This_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.JavaScript\1.2.0\$.uno
// ------------------------------------------------------------------------------------

// internal partial sealed class ThreadWorker :1557
// {
// static ThreadWorker() :1669
static void ThreadWorker__cctor__fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass::Register(uObject_typeof(), uArray::New(::TYPES[99/*Fuse.Scripting.ScriptMember[]*/], 0));
}

static void ThreadWorker_build(uType* type)
{
    ::STRINGS[154] = uString::Const("Skipped Exception");
    ::STRINGS[147] = uString::Const("C:\\Users\\Lotus\\AppData\\Local\\Fusetools\\Packages\\Fuse.Reactive.JavaScript\\1.2.0\\$.uno");
    ::STRINGS[155] = uString::Const("CheckAndThrow");
    ::STRINGS[156] = uString::Const("JavaScript data model contains circular references or is too deep. Some data may not display correctly.");
    ::STRINGS[157] = uString::Const("CreateMirror");
    ::STRINGS[158] = uString::Const("Cannot use object of type '");
    ::STRINGS[159] = uString::Const("' as 'this' in JavaScript module; must be 'IProperties' or 'App'");
    ::STRINGS[160] = uString::Const("external_object");
    ::STRINGS[161] = uString::Const(" (ScriptClass)");
    ::STRINGS[162] = uString::Const("(function(external_object) { this.external_object = external_object; })");
    ::STRINGS[163] = uString::Const("(set-superclass)");
    ::STRINGS[164] = uString::Const("(function(cl, superclass) { cl.prototype = new superclass(); cl.prototype.constructor = cl; })");
    ::STRINGS[41] = uString::Const(".");
    ::STRINGS[96] = uString::Const(" (ScriptMethod)");
    ::STRINGS[165] = uString::Const("(function(cl, Observable) { cl.prototype.");
    ::STRINGS[166] = uString::Const(" = ");
    ::STRINGS[167] = uString::Const("; })");
    ::STRINGS[168] = uString::Const("ThreadWorked failed");
    ::STRINGS[169] = uString::Const("Run");
    ::STRINGS[170] = uString::Const("Could not create script context");
    ::TYPES[40] = ::g::Uno::Type_typeof();
    ::TYPES[99] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[100] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Reactive::Observable__Operation_typeof(), NULL);
    ::TYPES[101] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Scripting::ScriptClass_typeof(), ::g::Fuse::Scripting::Function_typeof(), NULL);
    ::TYPES[102] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Action_typeof(), NULL);
    ::TYPES[103] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    ::TYPES[104] = ::g::Uno::Threading::ThreadStart_typeof();
    ::TYPES[36] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[35] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[25] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[105] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof(), NULL);
    ::TYPES[106] = ::g::Fuse::IProperties_typeof();
    ::TYPES[107] = ::g::Fuse::Reactive::ClassInstance_typeof();
    ::TYPES[23] = ::g::Uno::Action_typeof();
    ::TYPES[85] = ::g::Fuse::Scripting::External_typeof();
    ::TYPES[6] = uObject_typeof()->Array();
    ::TYPES[108] = ::g::Fuse::Scripting::ScriptMethodInline_typeof();
    ::TYPES[109] = ::g::Fuse::Scripting::ScriptMethod_typeof();
    ::TYPES[110] = ::g::Fuse::Scripting::ScriptProperty_typeof();
    ::TYPES[43] = ::g::Uno::Exception_typeof();
    ::TYPES[21] = ::g::Uno::String_typeof();
    ::TYPES[111] = ::g::Fuse::IRaw_typeof();
    ::TYPES[112] = ::g::Uno::Float2_typeof();
    ::TYPES[113] = ::g::Uno::Float3_typeof();
    ::TYPES[114] = ::g::Uno::Float4_typeof();
    ::TYPES[115] = ::g::Uno::Int2_typeof();
    ::TYPES[116] = ::g::Uno::Int3_typeof();
    ::TYPES[117] = ::g::Uno::Int4_typeof();
    ::TYPES[34] = ::g::Uno::Float_typeof();
    ::TYPES[33] = ::g::Uno::Int_typeof();
    ::TYPES[118] = ::g::Uno::UInt_typeof();
    ::TYPES[119] = ::g::Fuse::Scripting::IScriptObject_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ThreadWorker_type, interface0),
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(ThreadWorker_type, interface1),
        ::g::Fuse::Scripting::IThreadWorker_typeof(), offsetof(ThreadWorker_type, interface2));
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _classInstanceProperty), 0,
        ::TYPES[103/*Uno.Threading.ConcurrentQueue<Uno.Exception>*/], offsetof(::g::Fuse::Reactive::ThreadWorker, _exceptionQueue), 0,
        ::g::Uno::Threading::ManualResetEvent_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _idle), 0,
        ::TYPES[100/*Uno.Collections.List<Fuse.Reactive.Observable.Operation>*/], offsetof(::g::Fuse::Reactive::ThreadWorker, _messages), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _messagesMutex), 0,
        ::TYPES[102/*Uno.Threading.ConcurrentQueue<Uno.Action>*/], offsetof(::g::Fuse::Reactive::ThreadWorker, _queue), 0,
        ::g::Uno::Threading::ManualResetEvent_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _ready), 0,
        ::TYPES[33/*int*/], offsetof(::g::Fuse::Reactive::ThreadWorker, _reflectionDepth), 0,
        ::TYPES[101/*Uno.Collections.Dictionary<Fuse.Scripting.ScriptClass, Fuse.Scripting.Function>*/], offsetof(::g::Fuse::Reactive::ThreadWorker, _registeredClasses), 0,
        ::TYPES[35/*Fuse.Scripting.Function*/], offsetof(::g::Fuse::Reactive::ThreadWorker, _setSuperclass), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _subscribedForClosing), 0,
        ::g::Uno::Threading::ManualResetEvent_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _terminate), 0,
        ::g::Uno::Threading::Thread_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _thread), 0,
        ::g::Fuse::Scripting::Context_typeof(), (uintptr_t)&::g::Fuse::Reactive::ThreadWorker::_context_, uFieldFlagsStatic,
        ::g::Fuse::Reactive::FuseJS::Builtins_typeof(), (uintptr_t)&::g::Fuse::Reactive::ThreadWorker::_fuseJS_, uFieldFlagsStatic);
}

ThreadWorker_type* ThreadWorker_typeof()
{
    static uSStrong<ThreadWorker_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ThreadWorker);
    options.TypeSize = sizeof(ThreadWorker_type);
    type = (ThreadWorker_type*)uClassType::New("Fuse.Reactive.ThreadWorker", options);
    type->fp_build_ = ThreadWorker_build;
    type->fp_ctor_ = (void*)ThreadWorker__New1_fn;
    type->fp_cctor_ = ThreadWorker__cctor__fn;
    type->interface2.fp_Wrap = (void(*)(uObject*, uObject*, uObject**))ThreadWorker__FuseScriptingIThreadWorkerWrap_fn;
    type->interface2.fp_get_Dispatcher = (void(*)(uObject*, uObject**))ThreadWorker__FuseScriptingIThreadWorkerget_Dispatcher_fn;
    type->interface2.fp_get_Observable = (void(*)(uObject*, ::g::Fuse::Scripting::Function**))ThreadWorker__FuseScriptingIThreadWorkerget_Observable_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ThreadWorker__Dispose_fn;
    type->interface1.fp_Invoke = (void(*)(uObject*, uDelegate*))ThreadWorker__Invoke_fn;
    type->interface2.fp_Unwrap = (void(*)(uObject*, uObject*, uObject**))ThreadWorker__Unwrap_fn;
    return type;
}

// public ThreadWorker() :1908
void ThreadWorker__ctor__fn(ThreadWorker* __this)
{
    __this->ctor_();
}

// public void CheckAndThrow() :2047
void ThreadWorker__CheckAndThrow_fn(ThreadWorker* __this)
{
    __this->CheckAndThrow();
}

// public Fuse.Scripting.Context get_Context() :1895
void ThreadWorker__get_Context_fn(ThreadWorker* __this, ::g::Fuse::Scripting::Context** __retval)
{
    *__retval = __this->Context();
}

// internal static Fuse.Scripting.Context CreateContext(Fuse.Scripting.IThreadWorker worker) :1886
void ThreadWorker__CreateContext_fn(uObject* worker, ::g::Fuse::Scripting::Context** __retval)
{
    *__retval = ThreadWorker::CreateContext(worker);
}

// private object CreateMirror(object obj) :1619
void ThreadWorker__CreateMirror_fn(ThreadWorker* __this, uObject* obj, uObject** __retval)
{
    *__retval = __this->CreateMirror(obj);
}

// public void Dispose() :1930
void ThreadWorker__Dispose_fn(ThreadWorker* __this)
{
    __this->Dispose();
}

// internal void Enqueue(Fuse.Reactive.Observable.Operation op) :1574
void ThreadWorker__Enqueue_fn(ThreadWorker* __this, ::g::Fuse::Reactive::Observable__Operation* op)
{
    __this->Enqueue(op);
}

// private static Uno.UX.NameTable FindRootTable(Uno.UX.NameTable names) :1856
void ThreadWorker__FindRootTable_fn(::g::Uno::UX::NameTable* names, ::g::Uno::UX::NameTable** __retval)
{
    *__retval = ThreadWorker::FindRootTable(names);
}

// private Uno.Threading.IDispatcher Fuse.Scripting.IThreadWorker.get_Dispatcher() :1883
void ThreadWorker__FuseScriptingIThreadWorkerget_Dispatcher_fn(ThreadWorker* __this, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Fuse.Scripting.IThreadWorker.get_Dispatcher()");
    return *__retval = (uObject*)__this, void();
}

// private Fuse.Scripting.Function Fuse.Scripting.IThreadWorker.get_Observable() :1884
void ThreadWorker__FuseScriptingIThreadWorkerget_Observable_fn(ThreadWorker* __this, ::g::Fuse::Scripting::Function** __retval)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Fuse.Scripting.IThreadWorker.get_Observable()");
    return *__retval = uPtr(__this->FuseJS())->Observable, void();
}

// private object Fuse.Scripting.IThreadWorker.Wrap(object obj) :2121
void ThreadWorker__FuseScriptingIThreadWorkerWrap_fn(ThreadWorker* __this, uObject* obj, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Fuse.Scripting.IThreadWorker.Wrap(object)");
    return *__retval = ThreadWorker::Wrap(obj), void();
}

// public Fuse.Reactive.FuseJS.Builtins get_FuseJS() :1898
void ThreadWorker__get_FuseJS_fn(ThreadWorker* __this, ::g::Fuse::Reactive::FuseJS::Builtins** __retval)
{
    *__retval = __this->FuseJS();
}

// private Fuse.Scripting.Function GetClass(Fuse.Scripting.ScriptClass sc) :1696
void ThreadWorker__GetClass_fn(ThreadWorker* __this, ::g::Fuse::Scripting::ScriptClass* sc, ::g::Fuse::Scripting::Function** __retval)
{
    *__retval = __this->GetClass(sc);
}

// internal Fuse.Reactive.ClassInstance GetClassInstance(object obj, Uno.UX.NameTable rootTable) :1834
void ThreadWorker__GetClassInstance_fn(ThreadWorker* __this, uObject* obj, ::g::Uno::UX::NameTable* rootTable, ::g::Fuse::Reactive::ClassInstance** __retval)
{
    *__retval = __this->GetClassInstance(obj, rootTable);
}

// internal Fuse.Reactive.ClassInstance GetClassInstance(Uno.UX.NameTable scope) :1826
void ThreadWorker__GetClassInstance1_fn(ThreadWorker* __this, ::g::Uno::UX::NameTable* scope, ::g::Fuse::Reactive::ClassInstance** __retval)
{
    *__retval = __this->GetClassInstance1(scope);
}

// public void Invoke(Uno.Action action) :2061
void ThreadWorker__Invoke_fn(ThreadWorker* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// public ThreadWorker New() :1908
void ThreadWorker__New1_fn(ThreadWorker** __retval)
{
    *__retval = ThreadWorker::New1();
}

// private void OnTerminating(Fuse.Platform.ApplicationState newState) :1925
void ThreadWorker__OnTerminating_fn(ThreadWorker* __this, int* newState)
{
    __this->OnTerminating(*newState);
}

// public Fuse.Reactive.ThreadWorker.Fence PostFence() :2077
void ThreadWorker__PostFence_fn(ThreadWorker* __this, ThreadWorker__Fence** __retval)
{
    *__retval = __this->PostFence();
}

// public void ProcessUIMessages() :1581
void ThreadWorker__ProcessUIMessages_fn(ThreadWorker* __this)
{
    __this->ProcessUIMessages();
}

// public object Reflect(object obj) :1595
void ThreadWorker__Reflect_fn(ThreadWorker* __this, uObject* obj, uObject** __retval)
{
    *__retval = __this->Reflect(obj);
}

// private Fuse.Scripting.Function RegisterClass(Fuse.Scripting.ScriptClass sc) :1707
void ThreadWorker__RegisterClass_fn(ThreadWorker* __this, ::g::Fuse::Scripting::ScriptClass* sc, ::g::Fuse::Scripting::Function** __retval)
{
    *__retval = __this->RegisterClass(sc);
}

// private void Run() :1941
void ThreadWorker__Run_fn(ThreadWorker* __this)
{
    __this->Run();
}

// private void RunInner() :1957
void ThreadWorker__RunInner_fn(ThreadWorker* __this)
{
    __this->RunInner();
}

// private Uno.Collections.List<Fuse.Reactive.Observable.Operation> TakeMessages() :1562
void ThreadWorker__TakeMessages_fn(ThreadWorker* __this, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->TakeMessages();
}

// private Fuse.Scripting.Array ToArray(float2 v) :2145
void ThreadWorker__ToArray_fn(ThreadWorker* __this, ::g::Uno::Float2* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->ToArray(*v);
}

// private Fuse.Scripting.Array ToArray(float3 v) :2150
void ThreadWorker__ToArray1_fn(ThreadWorker* __this, ::g::Uno::Float3* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->ToArray1(*v);
}

// private Fuse.Scripting.Array ToArray(float4 v) :2155
void ThreadWorker__ToArray2_fn(ThreadWorker* __this, ::g::Uno::Float4* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->ToArray2(*v);
}

// private Fuse.Scripting.Array ToArray(int2 v) :2160
void ThreadWorker__ToArray3_fn(ThreadWorker* __this, ::g::Uno::Int2* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->ToArray3(*v);
}

// private Fuse.Scripting.Array ToArray(int3 v) :2165
void ThreadWorker__ToArray4_fn(ThreadWorker* __this, ::g::Uno::Int3* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->ToArray4(*v);
}

// private Fuse.Scripting.Array ToArray(int4 v) :2170
void ThreadWorker__ToArray5_fn(ThreadWorker* __this, ::g::Uno::Int4* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->ToArray5(*v);
}

// public object Unwrap(object dc) :2128
void ThreadWorker__Unwrap_fn(ThreadWorker* __this, uObject* dc, uObject** __retval)
{
    *__retval = __this->Unwrap(dc);
}

// public void WaitIdle() :2038
void ThreadWorker__WaitIdle_fn(ThreadWorker* __this)
{
    __this->WaitIdle();
}

// public static object Wrap(object obj) :2102
void ThreadWorker__Wrap_fn(uObject* obj, uObject** __retval)
{
    *__retval = ThreadWorker::Wrap(obj);
}

// private object WrapScriptClass(object obj) :1675
void ThreadWorker__WrapScriptClass_fn(ThreadWorker* __this, uObject* obj, uObject** __retval)
{
    *__retval = __this->WrapScriptClass(obj);
}

uSStrong< ::g::Fuse::Scripting::Context*> ThreadWorker::_context_;
uSStrong< ::g::Fuse::Reactive::FuseJS::Builtins*> ThreadWorker::_fuseJS_;

// public ThreadWorker() [instance] :1908
void ThreadWorker::ctor_()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", ".ctor()");
    _messages = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[100/*Uno.Collections.List<Fuse.Reactive.Observable.Operation>*/]));
    _messagesMutex = ::g::Uno::Object::New();
    _registeredClasses = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[101/*Uno.Collections.Dictionary<Fuse.Scripting.ScriptClass, Fuse.Scripting.Function>*/]));
    _classInstanceProperty = ::g::Fuse::Properties::CreateHandle();
    _ready = ::g::Uno::Threading::ManualResetEvent::New2(false);
    _idle = ::g::Uno::Threading::ManualResetEvent::New2(true);
    _terminate = ::g::Uno::Threading::ManualResetEvent::New2(false);
    _queue = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::TYPES[102/*Uno.Threading.ConcurrentQueue<Uno.Action>*/]));
    _exceptionQueue = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::TYPES[103/*Uno.Threading.ConcurrentQueue<Uno.Exception>*/]));
    _thread = ::g::Uno::Threading::Thread::New2(uDelegate::New(::TYPES[104/*Uno.Threading.ThreadStart*/], (void*)ThreadWorker__Run_fn, this));
    uPtr(_thread)->Start();
    uPtr(_ready)->WaitOne();
    uPtr(_ready)->Dispose();
}

// public void CheckAndThrow() [instance] :2047
void ThreadWorker::CheckAndThrow()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "CheckAndThrow()");
    bool ret2;
    ::g::Uno::Exception* next = NULL, *prev = NULL;

    while ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(_exceptionQueue), (void**)(&next), &ret2), ret2))
    {
        if (prev != NULL)
            ::g::Fuse::Diagnostics::UnknownException(::STRINGS[154/*"Skipped Exc...*/], next, this, ::STRINGS[147/*"C:\\Users\\...*/], 2053, ::STRINGS[155/*"CheckAndThrow"*/]);

        prev = next;
    }

    if (prev != NULL)
        U_THROW(::g::Fuse::WrapException::New4(prev));
}

// public Fuse.Scripting.Context get_Context() [instance] :1895
::g::Fuse::Scripting::Context* ThreadWorker::Context()
{
    return ThreadWorker::_context();
}

// private object CreateMirror(object obj) [instance] :1619
uObject* ThreadWorker::CreateMirror(uObject* obj)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "CreateMirror(object)");

    if (_reflectionDepth > 50)
    {
        ::g::Fuse::Diagnostics::UserWarning(::STRINGS[156/*"JavaScript ...*/], this, ::STRINGS[147/*"C:\\Users\\...*/], 1623, ::STRINGS[157/*"CreateMirror"*/]);
        return NULL;
    }

    ::g::Fuse::Scripting::Array* a = uAs< ::g::Fuse::Scripting::Array*>(obj, ::TYPES[36/*Fuse.Scripting.Array*/]);

    if (a != NULL)
        return ::g::Fuse::Reactive::ArrayMirror::New1(this, a);

    ::g::Fuse::Scripting::Function* f = uAs< ::g::Fuse::Scripting::Function*>(obj, ::TYPES[35/*Fuse.Scripting.Function*/]);

    if (f != NULL)
        return ::g::Fuse::Reactive::FunctionMirror::New2(f);

    ::g::Fuse::Scripting::Object* o = uAs< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[25/*Fuse.Scripting.Object*/]);

    if (o != NULL)
    {
        if (uPtr(o)->InstanceOf(uPtr(Context())->Observable()))
            return ::g::Fuse::Reactive::Observable::New1(this, o, false);
        else
            return ::g::Fuse::Reactive::ObjectMirror::New1(this, o);
    }

    return NULL;
}

// public void Dispose() [instance] :1930
void ThreadWorker::Dispose()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Dispose()");
    ::g::Fuse::Platform::Lifecycle::remove_Terminating(uDelegate::New(::TYPES[105/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)ThreadWorker__OnTerminating_fn, this));
    uPtr(_terminate)->Set();
    uPtr(_thread)->Join();
    uPtr(_terminate)->Dispose();
}

// internal void Enqueue(Fuse.Reactive.Observable.Operation op) [instance] :1574
void ThreadWorker::Enqueue(::g::Fuse::Reactive::Observable__Operation* op)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Enqueue(Fuse.Reactive.Observable.Operation)");
    ::g::Uno::Threading::Monitor::Enter(_messagesMutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(_messagesMutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::List__Add_fn(uPtr(_messages), op);
    }
}

// public Fuse.Reactive.FuseJS.Builtins get_FuseJS() [instance] :1898
::g::Fuse::Reactive::FuseJS::Builtins* ThreadWorker::FuseJS()
{
    return ThreadWorker::_fuseJS();
}

// private Fuse.Scripting.Function GetClass(Fuse.Scripting.ScriptClass sc) [instance] :1696
::g::Fuse::Scripting::Function* ThreadWorker::GetClass(::g::Fuse::Scripting::ScriptClass* sc)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "GetClass(Fuse.Scripting.ScriptClass)");
    bool ret3;
    ::g::Fuse::Scripting::Function* cl;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_registeredClasses), sc, (void**)(&cl), &ret3), ret3))
    {
        cl = RegisterClass(sc);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_registeredClasses), sc, cl);
    }

    return cl;
}

// internal Fuse.Reactive.ClassInstance GetClassInstance(object obj, Uno.UX.NameTable rootTable) [instance] :1834
::g::Fuse::Reactive::ClassInstance* ThreadWorker::GetClassInstance(uObject* obj, ::g::Uno::UX::NameTable* rootTable)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "GetClassInstance(object,Uno.UX.NameTable)");
    uObject* n = uAs<uObject*>(obj, ::TYPES[106/*Fuse.IProperties*/]);

    if (n != NULL)
    {
        ::g::Fuse::Reactive::ClassInstance* ni = uAs< ::g::Fuse::Reactive::ClassInstance*>(uPtr(::g::Fuse::IProperties::Properties(uInterface(uPtr(n), ::TYPES[106/*Fuse.IProperties*/])))->Get(_classInstanceProperty), ::TYPES[107/*Fuse.Reactive.ClassInstance*/]);

        if (ni == NULL)
        {
            ni = ::g::Fuse::Reactive::ClassInstance::New1(this, obj, rootTable);
            uPtr(::g::Fuse::IProperties::Properties(uInterface(uPtr(n), ::TYPES[106/*Fuse.IProperties*/])))->Set(_classInstanceProperty, ni);
        }

        return ni;
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[158/*"Cannot use ...*/], ::g::Uno::Type::FullName(uPtr(::g::Uno::Object::GetType(uPtr(uPtr(rootTable)->This()))))), ::STRINGS[159/*"' as 'this'...*/])));
}

// internal Fuse.Reactive.ClassInstance GetClassInstance(Uno.UX.NameTable scope) [instance] :1826
::g::Fuse::Reactive::ClassInstance* ThreadWorker::GetClassInstance1(::g::Uno::UX::NameTable* scope)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "GetClassInstance(Uno.UX.NameTable)");
    ::g::Uno::UX::NameTable* rootTable = ThreadWorker::FindRootTable(scope);
    return GetClassInstance(uPtr(rootTable)->This(), rootTable);
}

// public void Invoke(Uno.Action action) [instance] :2061
void ThreadWorker::Invoke(uDelegate* action)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Invoke(Uno.Action)");
    uPtr(_idle)->Reset();
    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_queue), action);
}

// private void OnTerminating(Fuse.Platform.ApplicationState newState) [instance] :1925
void ThreadWorker::OnTerminating(int newState)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "OnTerminating(Fuse.Platform.ApplicationState)");
    Dispose();
}

// public Fuse.Reactive.ThreadWorker.Fence PostFence() [instance] :2077
ThreadWorker__Fence* ThreadWorker::PostFence()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "PostFence()");
    ThreadWorker__Fence* f = ThreadWorker__Fence::New1();
    Invoke(uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)ThreadWorker__Fence__Signal_fn, f));
    return f;
}

// public void ProcessUIMessages() [instance] :1581
void ThreadWorker::ProcessUIMessages()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "ProcessUIMessages()");
    ::g::Fuse::Reactive::Observable__Operation* ret4;
    ::g::Uno::Collections::List* msgs = TakeMessages();

    if (msgs == NULL)
        return;

    for (int i = 0; i < uPtr(msgs)->Count(); i++)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(msgs), uCRef<int>(i), &ret4), ret4))->Perform();
}

// public object Reflect(object obj) [instance] :1595
uObject* ThreadWorker::Reflect(uObject* obj)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Reflect(object)");
    ::g::Fuse::Scripting::External* e = uAs< ::g::Fuse::Scripting::External*>(obj, ::TYPES[85/*Fuse.Scripting.External*/]);

    if (e != NULL)
        return uPtr(e)->Object;

    ::g::Fuse::Scripting::Object* sobj = uAs< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[25/*Fuse.Scripting.Object*/]);

    if (sobj != NULL)
    {
        if (uPtr(sobj)->ContainsKey(::STRINGS[160/*"external_ob...*/]))
        {
            ::g::Fuse::Scripting::External* ext = uAs< ::g::Fuse::Scripting::External*>(uPtr(sobj)->Item(::STRINGS[160/*"external_ob...*/]), ::TYPES[85/*Fuse.Scripting.External*/]);

            if (ext != NULL)
                return uPtr(ext)->Object;
        }
    }

    _reflectionDepth++;
    uObject* res = CreateMirror(obj);
    _reflectionDepth--;

    if (res != NULL)
        return res;

    return obj;
}

// private Fuse.Scripting.Function RegisterClass(Fuse.Scripting.ScriptClass sc) [instance] :1707
::g::Fuse::Scripting::Function* ThreadWorker::RegisterClass(::g::Fuse::Scripting::ScriptClass* sc)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "RegisterClass(Fuse.Scripting.ScriptClass)");
    ::g::Fuse::Scripting::Function* cl = uCast< ::g::Fuse::Scripting::Function*>(uPtr(Context())->Evaluate(::g::Uno::String::op_Addition2(::g::Uno::Type::FullName(uPtr(uPtr(sc)->Type())), ::STRINGS[161/*" (ScriptCla...*/]), ::STRINGS[162/*"(function(e...*/]), ::TYPES[35/*Fuse.Scripting.Function*/]);

    if (sc->SuperType() != NULL)
    {
        ::g::Fuse::Scripting::Function* super = GetClass(uPtr(sc)->SuperType());

        if (_setSuperclass == NULL)
            _setSuperclass = uCast< ::g::Fuse::Scripting::Function*>(uPtr(Context())->Evaluate(::STRINGS[163/*"(set-superc...*/], ::STRINGS[164/*"(function(c...*/]), ::TYPES[35/*Fuse.Scripting.Function*/]);

        uPtr(_setSuperclass)->Call(uArray::Init<uObject*>(::TYPES[6/*object[]*/], 2, cl, super));
    }

    for (int i = 0; i < uPtr(sc->Members())->Length(); i++)
    {
        ::g::Fuse::Scripting::ScriptMethodInline* inlineMethod = uAs< ::g::Fuse::Scripting::ScriptMethodInline*>(uPtr(uPtr(sc)->Members())->Strong< ::g::Fuse::Scripting::ScriptMember*>(i), ::TYPES[108/*Fuse.Scripting.ScriptMethodInline*/]);

        if (inlineMethod != NULL)
        {
            ::g::Fuse::Scripting::Function* m = uCast< ::g::Fuse::Scripting::Function*>(uPtr(Context())->Evaluate(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Type::FullName(uPtr(uPtr(sc)->Type())), ::STRINGS[41/*"."*/]), uPtr(inlineMethod)->Name), ::STRINGS[96/*" (ScriptMet...*/]), ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[165/*"(function(c...*/], uPtr(inlineMethod)->Name), ::STRINGS[166/*" = "*/]), uPtr(inlineMethod)->Code), ::STRINGS[167/*"; })"*/])), ::TYPES[35/*Fuse.Scripting.Function*/]);
            uPtr(m)->Call(uArray::Init<uObject*>(::TYPES[6/*object[]*/], 2, cl, (::g::Fuse::Scripting::Function*)uPtr(Context())->Observable()));
            continue;
        }

        ::g::Fuse::Scripting::ScriptMethod* method = uAs< ::g::Fuse::Scripting::ScriptMethod*>(uPtr(sc->Members())->Strong< ::g::Fuse::Scripting::ScriptMember*>(i), ::TYPES[109/*Fuse.Scripting.ScriptMethod*/]);

        if (method != NULL)
        {
            ThreadWorker__MethodClosure::New1(cl, method, this);
            continue;
        }

        ::g::Fuse::Scripting::ScriptProperty* property = uAs< ::g::Fuse::Scripting::ScriptProperty*>(uPtr(sc->Members())->Strong< ::g::Fuse::Scripting::ScriptMember*>(i), ::TYPES[110/*Fuse.Scripting.ScriptProperty*/]);

        if (property != NULL)
        {
            ThreadWorker__PropertyClosure::New1(cl, property, this);
            continue;
        }
    }

    return cl;
}

// private void Run() [instance] :1941
void ThreadWorker::Run()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Run()");

    try
    {
        RunInner();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::Diagnostics::UnknownException(::STRINGS[168/*"ThreadWorke...*/], e, this, ::STRINGS[147/*"C:\\Users\\...*/], 1949, ::STRINGS[169/*"Run"*/]);
        ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_exceptionQueue), e);
    }

    if (ThreadWorker::_context() != NULL)
        uPtr(ThreadWorker::_context())->Dispose();
}

// private void RunInner() [instance] :1957
void ThreadWorker::RunInner()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "RunInner()");
    bool ret5;

    {
        const auto __finally_fun = [&]()
        {
            uPtr(_ready)->Set();
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        if (ThreadWorker::_context() == NULL)
        {
            ThreadWorker::_context() = ThreadWorker::CreateContext((uObject*)this);

            if (ThreadWorker::_context() == NULL)
                U_THROW(::g::Uno::Exception::New2(::STRINGS[170/*"Could not c...*/]));

            ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)ThreadWorker__CheckAndThrow_fn, this), 0);
            ThreadWorker::_fuseJS() = ::g::Fuse::Reactive::FuseJS::Builtins::New1(ThreadWorker::_context());
        }
    }

    ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)ThreadWorker__ProcessUIMessages_fn, this), 0);
    double t = ::g::Uno::Diagnostics::Clock::GetSeconds();

    while (true)
    {
        if (uPtr(_terminate)->WaitOne1(0))
            break;

        uAutoReleasePool ____pool;

        if (!_subscribedForClosing)
        {
            if (::g::Uno::Application::Current1() != NULL)
            {
                ::g::Fuse::Platform::Lifecycle::add_Terminating(uDelegate::New(::TYPES[105/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)ThreadWorker__OnTerminating_fn, this));
                _subscribedForClosing = true;
            }
        }

        bool didAnything = false;
        uDelegate* action;

        if ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(_queue), (void**)(&action), &ret5), ret5))
        {
            try
            {
                didAnything = true;
                uPtr(action)->InvokeVoid();
            }
            catch (const uThrowable& __t)
            {
                ::g::Uno::Exception* e = __t.Exception;
                ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_exceptionQueue), e);
            }
        }
        else
            uPtr(_idle)->Set();

        try
        {
            uPtr(ThreadWorker::_fuseJS())->UpdateModules(ThreadWorker::_context());
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e1 = __t.Exception;
            ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_exceptionQueue), e1);
        }

        double t2 = ::g::Uno::Diagnostics::Clock::GetSeconds();

        if (!didAnything || ((t2 - t) > 5.0))
        {
            ::g::Uno::Threading::Thread::Sleep(1);
            t = t2;
        }
    }
}

// private Uno.Collections.List<Fuse.Reactive.Observable.Operation> TakeMessages() [instance] :1562
::g::Uno::Collections::List* ThreadWorker::TakeMessages()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "TakeMessages()");
    ::g::Uno::Threading::Monitor::Enter(_messagesMutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(_messagesMutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        if (uPtr(_messages)->Count() == 0)
            return NULL;

        ::g::Uno::Collections::List* msgs = _messages;
        _messages = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[100/*Uno.Collections.List<Fuse.Reactive.Observable.Operation>*/]));
        return msgs;
    }
}

// private Fuse.Scripting.Array ToArray(float2 v) [instance] :2145
::g::Fuse::Scripting::Array* ThreadWorker::ToArray(::g::Uno::Float2 v)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "ToArray(float2)");
    return uPtr(Context())->NewArray(uArray::Init<uObject*>(::TYPES[6/*object[]*/], 2, uBox(::TYPES[20/*double*/], (double)v.X), uBox(::TYPES[20/*double*/], (double)v.Y)));
}

// private Fuse.Scripting.Array ToArray(float3 v) [instance] :2150
::g::Fuse::Scripting::Array* ThreadWorker::ToArray1(::g::Uno::Float3 v)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "ToArray(float3)");
    return uPtr(Context())->NewArray(uArray::Init<uObject*>(::TYPES[6/*object[]*/], 3, uBox(::TYPES[20/*double*/], (double)v.X), uBox(::TYPES[20/*double*/], (double)v.Y), uBox(::TYPES[20/*double*/], (double)v.Z)));
}

// private Fuse.Scripting.Array ToArray(float4 v) [instance] :2155
::g::Fuse::Scripting::Array* ThreadWorker::ToArray2(::g::Uno::Float4 v)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "ToArray(float4)");
    return uPtr(Context())->NewArray(uArray::Init<uObject*>(::TYPES[6/*object[]*/], 4, uBox(::TYPES[20/*double*/], (double)v.X), uBox(::TYPES[20/*double*/], (double)v.Y), uBox(::TYPES[20/*double*/], (double)v.Z), uBox(::TYPES[20/*double*/], (double)v.W)));
}

// private Fuse.Scripting.Array ToArray(int2 v) [instance] :2160
::g::Fuse::Scripting::Array* ThreadWorker::ToArray3(::g::Uno::Int2 v)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "ToArray(int2)");
    return uPtr(Context())->NewArray(uArray::Init<uObject*>(::TYPES[6/*object[]*/], 2, uBox(::TYPES[20/*double*/], (double)v.X), uBox(::TYPES[20/*double*/], (double)v.Y)));
}

// private Fuse.Scripting.Array ToArray(int3 v) [instance] :2165
::g::Fuse::Scripting::Array* ThreadWorker::ToArray4(::g::Uno::Int3 v)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "ToArray(int3)");
    return uPtr(Context())->NewArray(uArray::Init<uObject*>(::TYPES[6/*object[]*/], 3, uBox(::TYPES[20/*double*/], (double)v.X), uBox(::TYPES[20/*double*/], (double)v.Y), uBox(::TYPES[20/*double*/], (double)v.Z)));
}

// private Fuse.Scripting.Array ToArray(int4 v) [instance] :2170
::g::Fuse::Scripting::Array* ThreadWorker::ToArray5(::g::Uno::Int4 v)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "ToArray(int4)");
    return uPtr(Context())->NewArray(uArray::Init<uObject*>(::TYPES[6/*object[]*/], 4, uBox(::TYPES[20/*double*/], (double)v.X), uBox(::TYPES[20/*double*/], (double)v.Y), uBox(::TYPES[20/*double*/], (double)v.Z), uBox(::TYPES[20/*double*/], (double)v.W)));
}

// public object Unwrap(object dc) [instance] :2128
uObject* ThreadWorker::Unwrap(uObject* dc)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Unwrap(object)");

    if (dc == NULL)
        return NULL;
    else if (uIs(dc, ::TYPES[21/*string*/]))
        return dc;
    else if (uIs(dc, ::TYPES[111/*Fuse.IRaw*/]))
        return ::g::Fuse::IRaw::Raw(uInterface(uPtr((uObject*)dc), ::TYPES[111/*Fuse.IRaw*/]));
    else if (uIs(dc, ::TYPES[35/*Fuse.Scripting.Function*/]))
        return dc;
    else if (uIs(dc, ::TYPES[112/*float2*/]))
        return ToArray(uUnbox< ::g::Uno::Float2>(::TYPES[112/*float2*/], dc));
    else if (uIs(dc, ::TYPES[113/*float3*/]))
        return ToArray1(uUnbox< ::g::Uno::Float3>(::TYPES[113/*float3*/], dc));
    else if (uIs(dc, ::TYPES[114/*float4*/]))
        return ToArray2(uUnbox< ::g::Uno::Float4>(::TYPES[114/*float4*/], dc));
    else if (uIs(dc, ::TYPES[115/*int2*/]))
        return ToArray3(uUnbox< ::g::Uno::Int2>(::TYPES[115/*int2*/], dc));
    else if (uIs(dc, ::TYPES[116/*int3*/]))
        return ToArray4(uUnbox< ::g::Uno::Int3>(::TYPES[116/*int3*/], dc));
    else if (uIs(dc, ::TYPES[117/*int4*/]))
        return ToArray5(uUnbox< ::g::Uno::Int4>(::TYPES[117/*int4*/], dc));
    else if (::g::Uno::Type::IsClass(uPtr(::g::Uno::Object::GetType(uPtr(dc)))))
        return WrapScriptClass(dc);
    else if (::g::Uno::Type::IsEnum(uPtr(::g::Uno::Object::GetType(uPtr(dc)))))
        return ::g::Uno::Object::ToString(uPtr(dc));
    else
        return dc;
}

// public void WaitIdle() [instance] :2038
void ThreadWorker::WaitIdle()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "WaitIdle()");
    uPtr(_idle)->WaitOne();
}

// private object WrapScriptClass(object obj) [instance] :1675
uObject* ThreadWorker::WrapScriptClass(uObject* obj)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "WrapScriptClass(object)");
    uObject* so = uAs<uObject*>(obj, ::TYPES[119/*Fuse.Scripting.IScriptObject*/]);

    if ((so != NULL) && (::g::Fuse::Scripting::IScriptObject::ScriptObject(uInterface(uPtr(so), ::TYPES[119/*Fuse.Scripting.IScriptObject*/])) != NULL))
        return ::g::Fuse::Scripting::IScriptObject::ScriptObject(uInterface(uPtr(so), ::TYPES[119/*Fuse.Scripting.IScriptObject*/]));

    ::g::Fuse::Scripting::External* ext = ::g::Fuse::Scripting::External::New1(obj);
    ::g::Fuse::Scripting::ScriptClass* sc = ::g::Fuse::Scripting::ScriptClass::Get(::g::Uno::Object::GetType(uPtr(obj)));

    if (sc == NULL)
        return ext;

    ::g::Fuse::Scripting::Function* ctor = GetClass(sc);
    ::g::Fuse::Scripting::Object* res = uPtr(ctor)->Construct(uArray::Init<uObject*>(::TYPES[6/*object[]*/], 1, ext));

    if (so != NULL)
        ::g::Fuse::Scripting::IScriptObject::SetScriptObject(uInterface(uPtr(so), ::TYPES[119/*Fuse.Scripting.IScriptObject*/]), res, Context());

    return res;
}

// internal static Fuse.Scripting.Context CreateContext(Fuse.Scripting.IThreadWorker worker) [static] :1886
::g::Fuse::Scripting::Context* ThreadWorker::CreateContext(uObject* worker)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "CreateContext(Fuse.Scripting.IThreadWorker)");
    ThreadWorker_typeof()->Init();
    return ::g::Fuse::Scripting::V8::Context::New1(worker);
}

// private static Uno.UX.NameTable FindRootTable(Uno.UX.NameTable names) [static] :1856
::g::Uno::UX::NameTable* ThreadWorker::FindRootTable(::g::Uno::UX::NameTable* names)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "FindRootTable(Uno.UX.NameTable)");
    ThreadWorker_typeof()->Init();
    ::g::Uno::UX::NameTable* nt = names;

    while (nt != NULL)
    {
        if (uPtr(nt)->This() != NULL)
            return nt;

        nt = uPtr(nt)->ParentTable;
    }

    U_THROW(::g::Uno::Exception::New1());
}

// public ThreadWorker New() [static] :1908
ThreadWorker* ThreadWorker::New1()
{
    ThreadWorker* obj1 = (ThreadWorker*)uNew(ThreadWorker_typeof());
    obj1->ctor_();
    return obj1;
}

// public static object Wrap(object obj) [static] :2102
uObject* ThreadWorker::Wrap(uObject* obj)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Wrap(object)");
    ThreadWorker_typeof()->Init();

    if (uIs(obj, ::TYPES[85/*Fuse.Scripting.External*/]))
        return uPtr(uCast< ::g::Fuse::Scripting::External*>(obj, ::TYPES[85/*Fuse.Scripting.External*/]))->Object;
    else if (uIs(obj, ::TYPES[25/*Fuse.Scripting.Object*/]))
    {
        ::g::Fuse::Scripting::Object* sobj = uCast< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[25/*Fuse.Scripting.Object*/]);

        if (uPtr(sobj)->ContainsKey(::STRINGS[160/*"external_ob...*/]))
        {
            ::g::Fuse::Scripting::External* ext = uAs< ::g::Fuse::Scripting::External*>(uPtr(sobj)->Item(::STRINGS[160/*"external_ob...*/]), ::TYPES[85/*Fuse.Scripting.External*/]);

            if (ext != NULL)
                return uPtr(ext)->Object;
        }
    }

    if (uIs(obj, ::TYPES[34/*float*/]))
        return uBox(::TYPES[20/*double*/], (double)uUnbox<float>(::TYPES[34/*float*/], obj));

    if (uIs(obj, ::TYPES[33/*int*/]))
        return uBox(::TYPES[20/*double*/], (double)uUnbox<int>(::TYPES[33/*int*/], obj));

    if (uIs(obj, ::TYPES[118/*uint*/]))
        return uBox(::TYPES[20/*double*/], (double)uUnbox<uint32_t>(::TYPES[118/*uint*/], obj));

    return obj;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class ToLower :1746
// {
static void ToLower_build(uType* type)
{
    ::STRINGS[171] = uString::Const("toLower(");
    ::STRINGS[5] = uString::Const(")");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(1);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ToLower__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* ToLower_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryOperator_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ToLower);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.ToLower", options);
    type->fp_build_ = ToLower_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::UnaryOperator*, uObject*, uObject**))ToLower__Compute_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))ToLower__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public ToLower(Fuse.Reactive.Expression value) :1749
void ToLower__ctor_2_fn(ToLower* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->ctor_2(value);
}

// protected override sealed object Compute(object s) :1750
void ToLower__Compute_fn(ToLower* __this, uObject* s, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.ToLower", "Compute(object)");
    return *__retval = ::g::Uno::String::ToLower(uPtr(::g::Uno::Object::ToString(uPtr(s)))), void();
}

// public ToLower New(Fuse.Reactive.Expression value) :1749
void ToLower__New1_fn(::g::Fuse::Reactive::Expression* value, ToLower** __retval)
{
    *__retval = ToLower::New1(value);
}

// public override sealed string ToString() :1755
void ToLower__ToString_fn(ToLower* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.ToLower", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[171/*"toLower("*/], __this->Operand()), ::STRINGS[5/*")"*/]), void();
}

// public ToLower(Fuse.Reactive.Expression value) [instance] :1749
void ToLower::ctor_2(::g::Fuse::Reactive::Expression* value)
{
    ctor_1(value);
}

// public ToLower New(Fuse.Reactive.Expression value) [static] :1749
ToLower* ToLower::New1(::g::Fuse::Reactive::Expression* value)
{
    ToLower* obj1 = (ToLower*)uNew(ToLower_typeof());
    obj1->ctor_2(value);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class ToUpper :1730
// {
static void ToUpper_build(uType* type)
{
    ::STRINGS[172] = uString::Const("toUpper(");
    ::STRINGS[5] = uString::Const(")");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(1);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ToUpper__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* ToUpper_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryOperator_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ToUpper);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.ToUpper", options);
    type->fp_build_ = ToUpper_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::UnaryOperator*, uObject*, uObject**))ToUpper__Compute_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))ToUpper__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public ToUpper(Fuse.Reactive.Expression value) :1733
void ToUpper__ctor_2_fn(ToUpper* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->ctor_2(value);
}

// protected override sealed object Compute(object s) :1734
void ToUpper__Compute_fn(ToUpper* __this, uObject* s, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.ToUpper", "Compute(object)");
    return *__retval = ::g::Uno::String::ToUpper(uPtr(::g::Uno::Object::ToString(uPtr(s)))), void();
}

// public ToUpper New(Fuse.Reactive.Expression value) :1733
void ToUpper__New1_fn(::g::Fuse::Reactive::Expression* value, ToUpper** __retval)
{
    *__retval = ToUpper::New1(value);
}

// public override sealed string ToString() :1739
void ToUpper__ToString_fn(ToUpper* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.ToUpper", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[172/*"toUpper("*/], __this->Operand()), ::STRINGS[5/*")"*/]), void();
}

// public ToUpper(Fuse.Reactive.Expression value) [instance] :1733
void ToUpper::ctor_2(::g::Fuse::Reactive::Expression* value)
{
    ctor_1(value);
}

// public ToUpper New(Fuse.Reactive.Expression value) [static] :1733
ToUpper* ToUpper::New1(::g::Fuse::Reactive::Expression* value)
{
    ToUpper* obj1 = (ToUpper*)uNew(ToUpper_typeof());
    obj1->ctor_2(value);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Trunc :938
// {
static void Trunc_build(uType* type)
{
    ::STRINGS[173] = uString::Const("trunc");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Trunc__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Trunc_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Trunc);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Trunc", options);
    type->fp_build_ = Trunc_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Trunc(Fuse.Reactive.Expression operand) :941
void Trunc__ctor_3_fn(Trunc* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public Trunc New(Fuse.Reactive.Expression operand) :941
void Trunc__New1_fn(::g::Fuse::Reactive::Expression* operand, Trunc** __retval)
{
    *__retval = Trunc::New1(operand);
}

// internal static double Op(double v) :944
void Trunc__Op_fn(double* v, double* __retval)
{
    *__retval = Trunc::Op(*v);
}

// public Trunc(Fuse.Reactive.Expression operand) [instance] :941
void Trunc::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[173/*"trunc"*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)Trunc__Op_fn));
}

// public Trunc New(Fuse.Reactive.Expression operand) [static] :941
Trunc* Trunc::New1(::g::Fuse::Reactive::Expression* operand)
{
    Trunc* obj1 = (Trunc*)uNew(Trunc_typeof());
    obj1->ctor_3(operand);
    return obj1;
}

// internal static double Op(double v) [static] :944
double Trunc::Op(double v)
{
    return (v < 0.0) ? ::g::Uno::Math::Ceil(v) : ::g::Uno::Math::Floor(v);
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public abstract class UnaryFloatOperator :690
// {
static void UnaryFloatOperator_build(uType* type)
{
    ::STRINGS[6] = uString::Const("(");
    ::STRINGS[5] = uString::Const(")");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(1,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::UnaryFloatOperator, _name), 0,
        UnaryFloatOperator__FloatOp_typeof(), offsetof(::g::Fuse::Reactive::UnaryFloatOperator, _op), 0);
}

::g::Fuse::Reactive::UnaryOperator_type* UnaryFloatOperator_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UnaryFloatOperator);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.UnaryFloatOperator", options);
    type->fp_build_ = UnaryFloatOperator_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::UnaryOperator*, uObject*, uObject**))UnaryFloatOperator__Compute_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))UnaryFloatOperator__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// internal UnaryFloatOperator(Fuse.Reactive.Expression operand, string name, Fuse.Reactive.UnaryFloatOperator.FloatOp op) :695
void UnaryFloatOperator__ctor_2_fn(UnaryFloatOperator* __this, ::g::Fuse::Reactive::Expression* operand, uString* name, uDelegate* op)
{
    __this->ctor_2(operand, name, op);
}

// protected override sealed object Compute(object operand) :701
void UnaryFloatOperator__Compute_fn(UnaryFloatOperator* __this, uObject* operand, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.UnaryFloatOperator", "Compute(object)");
    double ret1;
    double ret2;
    double ret3;
    double ret4;
    double ret5;
    double ret6;
    double ret7;
    double ret8;
    double ret9;
    double ret10;
    ::g::Uno::Float4 v;
    int size;

    if (::g::Fuse::Marshal::TryToZeroFloat4(operand, &v, &size))

        switch (size)
        {
            case 1:
                return *__retval = uBox(::TYPES[20/*double*/], (uPtr(__this->_op)->Invoke(&ret1, 1, uCRef((double)v.Item(0))), ret1)), void();
            case 2:
                return *__retval = uBox(::TYPES[112/*float2*/], ::g::Uno::Float2__New2((float)(uPtr(__this->_op)->Invoke(&ret2, 1, uCRef((double)v.Item(0))), ret2), (float)(uPtr(__this->_op)->Invoke(&ret3, 1, uCRef((double)v.Item(1))), ret3))), void();
            case 3:
                return *__retval = uBox(::TYPES[113/*float3*/], ::g::Uno::Float3__New2((float)(uPtr(__this->_op)->Invoke(&ret4, 1, uCRef((double)v.Item(0))), ret4), (float)(uPtr(__this->_op)->Invoke(&ret5, 1, uCRef((double)v.Item(1))), ret5), (float)(uPtr(__this->_op)->Invoke(&ret6, 1, uCRef((double)v.Item(2))), ret6))), void();
            case 4:
                return *__retval = uBox(::TYPES[114/*float4*/], ::g::Uno::Float4__New2((float)(uPtr(__this->_op)->Invoke(&ret7, 1, uCRef((double)v.Item(0))), ret7), (float)(uPtr(__this->_op)->Invoke(&ret8, 1, uCRef((double)v.Item(1))), ret8), (float)(uPtr(__this->_op)->Invoke(&ret9, 1, uCRef((double)v.Item(2))), ret9), (float)(uPtr(__this->_op)->Invoke(&ret10, 1, uCRef((double)v.Item(3))), ret10))), void();
        }

    return *__retval = NULL, void();
}

// public override sealed string ToString() :722
void UnaryFloatOperator__ToString_fn(UnaryFloatOperator* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.UnaryFloatOperator", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(__this->_name, ::STRINGS[6/*"("*/]), __this->Operand()), ::STRINGS[5/*")"*/]), void();
}

// internal UnaryFloatOperator(Fuse.Reactive.Expression operand, string name, Fuse.Reactive.UnaryFloatOperator.FloatOp op) [instance] :695
void UnaryFloatOperator::ctor_2(::g::Fuse::Reactive::Expression* operand, uString* name, uDelegate* op)
{
    ctor_1(operand);
    _name = name;
    _op = op;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public abstract class UnaryOperator :1987
// {
static void UnaryOperator_build(uType* type)
{
    ::STRINGS[11] = uString::Const(" does not implement the required methods");
    ::TYPES[10] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(UnaryOperator_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator, _Operand), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_Operand", NULL, (void*)UnaryOperator__get_Operand_fn, 0, false, ::g::Fuse::Reactive::Expression_typeof(), 0));
}

UnaryOperator_type* UnaryOperator_typeof()
{
    static uSStrong<UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UnaryOperator);
    options.TypeSize = sizeof(UnaryOperator_type);
    type = (UnaryOperator_type*)uClassType::New("Fuse.Reactive.UnaryOperator", options);
    type->fp_build_ = UnaryOperator_build;
    type->fp_Compute = UnaryOperator__Compute_fn;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))UnaryOperator__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))UnaryOperator__Subscribe_fn;
    return type;
}

// protected UnaryOperator(Fuse.Reactive.Expression operand) :1990
void UnaryOperator__ctor_1_fn(UnaryOperator* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_1(operand);
}

// protected virtual object Compute(object operand) :2000
void UnaryOperator__Compute_fn(UnaryOperator* __this, uObject* operand, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.UnaryOperator", "Compute(object)");
    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::Type::FullName(uPtr(::g::Uno::Object::GetType(__this))), ::STRINGS[11/*" does not i...*/])));
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

// public override Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :1995
void UnaryOperator__Subscribe_fn(UnaryOperator* __this, uObject* context, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.UnaryOperator", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    return *__retval = (uObject*)UnaryOperator__Subscription::Create(__this, context, listener), void();
}

// protected UnaryOperator(Fuse.Reactive.Expression operand) [instance] :1990
void UnaryOperator::ctor_1(::g::Fuse::Reactive::Expression* operand)
{
    ctor_();
    Operand(operand);
}

// protected void OnNewOperand(Fuse.Reactive.IListener listener, object operand) [instance] :2005
void UnaryOperator::OnNewOperand(uObject* listener, uObject* operand)
{
    uStackFrame __("Fuse.Reactive.UnaryOperator", "OnNewOperand(Fuse.Reactive.IListener,object)");
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(listener), ::TYPES[10/*Fuse.Reactive.IListener*/]), (uObject*)this, Compute(operand));
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
    ::TYPES[120] = ValueForwarder__IValueListener_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::ValueObserver_type, interface0),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::ValueObserver_type, interface1));
    type->SetFields(2,
        ::TYPES[120/*Fuse.Reactive.ValueForwarder.IValueListener*/], offsetof(::g::Fuse::Reactive::ValueForwarder, _listener), 0);
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
    type->fp_PushData = (void(*)(::g::Fuse::Reactive::ValueObserver*, uObject*))ValueForwarder__PushData_fn;
    type->interface1.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnClear_fn;
    type->interface1.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnSet_fn;
    type->interface1.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnAdd_fn;
    type->interface1.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnNewAt_fn;
    type->interface1.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnNewAll_fn;
    type->interface1.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface1.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnInsertAt_fn;
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

// protected override sealed void PushData(object newValue) :207
void ValueForwarder__PushData_fn(ValueForwarder* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.ValueForwarder", "PushData(object)");
    ValueForwarder__IValueListener::NewValue(uInterface(uPtr(__this->_listener), ::TYPES[120/*Fuse.Reactive.ValueForwarder.IValueListener*/]), newValue);
}

// public ValueForwarder(Fuse.Reactive.IObservable obs, Fuse.Reactive.ValueForwarder.IValueListener listener) [instance] :201
void ValueForwarder::ctor_1(uObject* obs, uObject* listener)
{
    uStackFrame __("Fuse.Reactive.ValueForwarder", ".ctor(Fuse.Reactive.IObservable,Fuse.Reactive.ValueForwarder.IValueListener)");
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

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.JavaScript\1.2.0\$.uno
// ------------------------------------------------------------------------------------

// public abstract class ValueMirror :2186
// {
static void ValueMirror_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::IRaw_typeof(), offsetof(ValueMirror_type, interface0));
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::ValueMirror, _raw), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Raw", NULL, (void*)ValueMirror__get_Raw_fn, 0, false, uObject_typeof(), 0),
        new uFunction("Unsubscribe", NULL, NULL, offsetof(ValueMirror_type, fp_Unsubscribe), false, uVoid_typeof(), 0),
        new uFunction("Unsubscribe", NULL, (void*)ValueMirror__Unsubscribe1_fn, 0, true, uVoid_typeof(), 1, uObject_typeof()));
}

ValueMirror_type* ValueMirror_typeof()
{
    static uSStrong<ValueMirror_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ValueMirror);
    options.TypeSize = sizeof(ValueMirror_type);
    type = (ValueMirror_type*)uClassType::New("Fuse.Reactive.ValueMirror", options);
    type->fp_build_ = ValueMirror_build;
    type->interface0.fp_get_Raw = (void(*)(uObject*, uObject**))ValueMirror__get_Raw_fn;
    return type;
}

// protected ValueMirror(object raw) :2193
void ValueMirror__ctor__fn(ValueMirror* __this, uObject* raw)
{
    __this->ctor_(raw);
}

// public object get_Raw() :2191
void ValueMirror__get_Raw_fn(ValueMirror* __this, uObject** __retval)
{
    *__retval = __this->Raw();
}

// public static void Unsubscribe(object obj) :2198
void ValueMirror__Unsubscribe1_fn(uObject* obj)
{
    ValueMirror::Unsubscribe1(obj);
}

// protected ValueMirror(object raw) [instance] :2193
void ValueMirror::ctor_(uObject* raw)
{
    _raw = raw;
}

// public object get_Raw() [instance] :2191
uObject* ValueMirror::Raw()
{
    return _raw;
}

// public static void Unsubscribe(object obj) [static] :2198
void ValueMirror::Unsubscribe1(uObject* obj)
{
    uStackFrame __("Fuse.Reactive.ValueMirror", "Unsubscribe(object)");
    ValueMirror* vm = uAs<ValueMirror*>(obj, ValueMirror_typeof());

    if (vm != NULL)
        uPtr(vm)->Unsubscribe();
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive\1.2.0\$.uno
// -------------------------------------------------------------------------

// internal abstract class ValueObserver :126
// {
static void ValueObserver_build(uType* type)
{
    ::TYPES[39] = ::g::Fuse::IArray_typeof();
    ::TYPES[41] = ::g::Fuse::Reactive::IObservable_typeof();
    ::TYPES[5] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::TYPES[5/*Uno.IDisposable*/], offsetof(ValueObserver_type, interface0),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(ValueObserver_type, interface1));
    type->SetFields(0,
        ::TYPES[41/*Fuse.Reactive.IObservable*/], offsetof(::g::Fuse::Reactive::ValueObserver, _obs), 0,
        ::TYPES[5/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::ValueObserver, _obsSub), 0);
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
    type->interface1.fp_OnClear = (void(*)(uObject*))ValueObserver__FuseReactiveIObserverOnClear_fn;
    type->interface1.fp_OnSet = (void(*)(uObject*, uObject*))ValueObserver__FuseReactiveIObserverOnSet_fn;
    type->interface1.fp_OnAdd = (void(*)(uObject*, uObject*))ValueObserver__FuseReactiveIObserverOnAdd_fn;
    type->interface1.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))ValueObserver__FuseReactiveIObserverOnNewAt_fn;
    type->interface1.fp_OnFailed = (void(*)(uObject*, uString*))ValueObserver__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnNewAll = (void(*)(uObject*, uObject*))ValueObserver__FuseReactiveIObserverOnNewAll_fn;
    type->interface1.fp_OnRemoveAt = (void(*)(uObject*, int*))ValueObserver__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface1.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))ValueObserver__FuseReactiveIObserverOnInsertAt_fn;
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
    uStackFrame __("Fuse.Reactive.ValueObserver", "Dispose()");
    __this->Unsubscribe();
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :163
void ValueObserver__FuseReactiveIObserverOnAdd_fn(ValueObserver* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.ValueObserver", "Fuse.Reactive.IObserver.OnAdd(object)");
    __this->PushData(::g::Fuse::IArray::Item(uInterface(uPtr(__this->_obs), ::TYPES[39/*Fuse.IArray*/]), 0));
}

// private void Fuse.Reactive.IObserver.OnClear() :153
void ValueObserver__FuseReactiveIObserverOnClear_fn(ValueObserver* __this)
{
    uStackFrame __("Fuse.Reactive.ValueObserver", "Fuse.Reactive.IObserver.OnClear()");
    __this->PushData(NULL);
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :173
void ValueObserver__FuseReactiveIObserverOnFailed_fn(ValueObserver* __this, uString* message)
{
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :190
void ValueObserver__FuseReactiveIObserverOnInsertAt_fn(ValueObserver* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.ValueObserver", "Fuse.Reactive.IObserver.OnInsertAt(int,object)");
    __this->PushData(::g::Fuse::IArray::Item(uInterface(uPtr(__this->_obs), ::TYPES[39/*Fuse.IArray*/]), 0));
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values) :178
void ValueObserver__FuseReactiveIObserverOnNewAll_fn(ValueObserver* __this, uObject* values)
{
    uStackFrame __("Fuse.Reactive.ValueObserver", "Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray)");

    if (::g::Fuse::IArray::Length(uInterface(uPtr(values), ::TYPES[39/*Fuse.IArray*/])) > 0)
        __this->PushData(::g::Fuse::IArray::Item(uInterface(uPtr(__this->_obs), ::TYPES[39/*Fuse.IArray*/]), 0));
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :168
void ValueObserver__FuseReactiveIObserverOnNewAt_fn(ValueObserver* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.ValueObserver", "Fuse.Reactive.IObserver.OnNewAt(int,object)");
    __this->PushData(::g::Fuse::IArray::Item(uInterface(uPtr(__this->_obs), ::TYPES[39/*Fuse.IArray*/]), 0));
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :184
void ValueObserver__FuseReactiveIObserverOnRemoveAt_fn(ValueObserver* __this, int* index)
{
    uStackFrame __("Fuse.Reactive.ValueObserver", "Fuse.Reactive.IObserver.OnRemoveAt(int)");

    if (::g::Fuse::IArray::Length(uInterface(uPtr(__this->_obs), ::TYPES[39/*Fuse.IArray*/])) > 0)
        __this->PushData(::g::Fuse::IArray::Item(uInterface(uPtr(__this->_obs), ::TYPES[39/*Fuse.IArray*/]), 0));
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :158
void ValueObserver__FuseReactiveIObserverOnSet_fn(ValueObserver* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.ValueObserver", "Fuse.Reactive.IObserver.OnSet(object)");
    __this->PushData(newValue);
}

// public Fuse.Reactive.IObservable get_Observable() :131
void ValueObserver__get_Observable_fn(ValueObserver* __this, uObject** __retval)
{
    *__retval = __this->Observable();
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

// public Fuse.Reactive.IObservable get_Observable() [instance] :131
uObject* ValueObserver::Observable()
{
    return _obs;
}

// protected void Subscribe(Fuse.Reactive.IObservable obs) [instance] :133
void ValueObserver::Subscribe(uObject* obs)
{
    uStackFrame __("Fuse.Reactive.ValueObserver", "Subscribe(Fuse.Reactive.IObservable)");
    _obs = obs;
    _obsSub = ::g::Fuse::Reactive::IObservable::Subscribe(uInterface(uPtr(obs), ::TYPES[41/*Fuse.Reactive.IObservable*/]), (uObject*)this);
}

// protected void Unsubscribe() [instance] :139
void ValueObserver::Unsubscribe()
{
    uStackFrame __("Fuse.Reactive.ValueObserver", "Unsubscribe()");

    if (_obsSub != NULL)
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_obsSub), ::TYPES[5/*Uno.IDisposable*/]));

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
    ::STRINGS[6] = uString::Const("(");
    ::STRINGS[10] = uString::Const(",");
    ::STRINGS[5] = uString::Const(")");
    ::TYPES[121] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Reactive::Expression_typeof(), NULL);
    ::TYPES[71] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Expression_typeof(), NULL);
    ::TYPES[72] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Expression_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(0,
        ::TYPES[121/*Uno.Collections.List<Fuse.Reactive.Expression>*/], offsetof(::g::Fuse::Reactive::VarArgFunction, _args), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_Arguments", NULL, (void*)VarArgFunction__get_Arguments_fn, 0, false, ::TYPES[72/*Uno.Collections.IList<Fuse.Reactive.Expression>*/], 0));
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

// protected generated VarArgFunction() :2092
void VarArgFunction__ctor_1_fn(VarArgFunction* __this)
{
    __this->ctor_1();
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

// protected generated VarArgFunction() [instance] :2092
void VarArgFunction::ctor_1()
{
    _args = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[121/*Uno.Collections.List<Fuse.Reactive.Expression>*/]));
    ctor_();
}

// public Uno.Collections.IList<Fuse.Reactive.Expression> get_Arguments() [instance] :2121
uObject* VarArgFunction::Arguments()
{
    uStackFrame __("Fuse.Reactive.VarArgFunction", "get_Arguments()");
    return (uObject*)_args;
}

// protected string FormatString(string funcName) [instance] :2124
uString* VarArgFunction::FormatString(uString* funcName)
{
    uStackFrame __("Fuse.Reactive.VarArgFunction", "FormatString(string)");
    ::g::Fuse::Reactive::Expression* ret1;
    uString* q = ::g::Uno::String::op_Addition2(funcName, ::STRINGS[6/*"("*/]);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Arguments()), ::TYPES[71/*Uno.Collections.ICollection<Fuse.Reactive.Expression>*/])); ++i)
    {
        if (i > 0)
            q = ::g::Uno::String::op_Addition2(q, ::STRINGS[10/*","*/]);

        q = ::g::Uno::String::op_Addition2(q, ::g::Uno::Object::ToString(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Arguments()), ::TYPES[72/*Uno.Collections.IList<Fuse.Reactive.Expression>*/]), uCRef<int>(i), &ret1), ret1))));
    }

    q = ::g::Uno::String::op_Addition2(q, ::STRINGS[5/*")"*/]);
    return q;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Expressions\1.2.0\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Vector :2252
// {
static void Vector_build(uType* type)
{
    ::TYPES[10] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::SimpleVarArgFunction_type, interface0));
    type->SetFields(1);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Vector__New1_fn, 0, true, type, 0));
}

::g::Fuse::Reactive::SimpleVarArgFunction_type* Vector_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::SimpleVarArgFunction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::SimpleVarArgFunction_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Vector);
    options.TypeSize = sizeof(::g::Fuse::Reactive::SimpleVarArgFunction_type);
    type = (::g::Fuse::Reactive::SimpleVarArgFunction_type*)uClassType::New("Fuse.Reactive.Vector", options);
    type->fp_build_ = Vector_build;
    type->fp_ctor_ = (void*)Vector__New1_fn;
    type->fp_OnNewArguments = (void(*)(::g::Fuse::Reactive::SimpleVarArgFunction*, uArray*, uObject*))Vector__OnNewArguments_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::SimpleVarArgFunction__Subscribe_fn;
    return type;
}

// public generated Vector() :2252
void Vector__ctor_3_fn(Vector* __this)
{
    __this->ctor_3();
}

// public generated Vector New() :2252
void Vector__New1_fn(Vector** __retval)
{
    *__retval = Vector::New1();
}

// protected override sealed void OnNewArguments(Fuse.Reactive.VarArgFunction.Argument[] args, Fuse.Reactive.IListener listener) :2254
void Vector__OnNewArguments_fn(Vector* __this, uArray* args, uObject* listener)
{
    uStackFrame __("Fuse.Reactive.Vector", "OnNewArguments(Fuse.Reactive.VarArgFunction.Argument[],Fuse.Reactive.IListener)");
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(listener), ::TYPES[10/*Fuse.Reactive.IListener*/]), (uObject*)__this, Vector__Array::New1(args));
}

// public generated Vector() [instance] :2252
void Vector::ctor_3()
{
    ctor_2();
}

// public generated Vector New() [static] :2252
Vector* Vector::New1()
{
    Vector* obj1 = (Vector*)uNew(Vector_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\$.uno
// ----------------------------------------------------------------------------------

// public class WhileCount :2878
// {
static void WhileCount_build(uType* type)
{
    ::TYPES[39] = ::g::Fuse::IArray_typeof();
    ::TYPES[5] = ::g::Uno::IDisposable_typeof();
    ::TYPES[41] = ::g::Fuse::Reactive::IObservable_typeof();
    ::TYPES[6] = uObject_typeof()->Array();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileCount_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(WhileCount_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(WhileCount_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(WhileCount_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileCount_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileCount_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(WhileCount_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(WhileCount_type, interface7),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(WhileCount_type, interface8));
    type->SetFields(34,
        ::g::Uno::Int2_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _compare), 0,
        WhileCount__Range_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _high), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _items), 0,
        WhileCount__Range_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _low), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _oldCount), 0,
        ::TYPES[5/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::WhileCount, _subscription), 0);
    type->Reflection.SetFunctions(13,
        new uFunction("get_EqualTo", NULL, (void*)WhileCount__get_EqualTo_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_EqualTo", NULL, (void*)WhileCount__set_EqualTo_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_GreaterThan", NULL, (void*)WhileCount__get_GreaterThan_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_GreaterThan", NULL, (void*)WhileCount__set_GreaterThan_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_GreaterThanEqual", NULL, (void*)WhileCount__get_GreaterThanEqual_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_GreaterThanEqual", NULL, (void*)WhileCount__set_GreaterThanEqual_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_Items", NULL, (void*)WhileCount__get_Items_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Items", NULL, (void*)WhileCount__set_Items_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("get_LessThan", NULL, (void*)WhileCount__get_LessThan_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_LessThan", NULL, (void*)WhileCount__set_LessThan_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_LessThanEqual", NULL, (void*)WhileCount__get_LessThanEqual_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_LessThanEqual", NULL, (void*)WhileCount__set_LessThanEqual_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)WhileCount__New2_fn, 0, true, type, 0));
}

WhileCount_type* WhileCount_typeof()
{
    static uSStrong<WhileCount_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 40;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(WhileCount);
    options.TypeSize = sizeof(WhileCount_type);
    type = (WhileCount_type*)uClassType::New("Fuse.Reactive.WhileCount", options);
    type->fp_build_ = WhileCount_build;
    type->fp_ctor_ = (void*)WhileCount__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileCount__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileCount__OnUnrooted_fn;
    type->interface8.fp_OnSet = (void(*)(uObject*, uObject*))WhileCount__FuseReactiveIObserverOnSet_fn;
    type->interface8.fp_OnFailed = (void(*)(uObject*, uString*))WhileCount__FuseReactiveIObserverOnFailed_fn;
    type->interface8.fp_OnAdd = (void(*)(uObject*, uObject*))WhileCount__FuseReactiveIObserverOnAdd_fn;
    type->interface8.fp_OnRemoveAt = (void(*)(uObject*, int*))WhileCount__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface8.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))WhileCount__FuseReactiveIObserverOnNewAt_fn;
    type->interface8.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))WhileCount__FuseReactiveIObserverOnInsertAt_fn;
    type->interface8.fp_OnClear = (void(*)(uObject*))WhileCount__FuseReactiveIObserverOnClear_fn;
    type->interface8.fp_OnNewAll = (void(*)(uObject*, uObject*))WhileCount__FuseReactiveIObserverOnNewAll_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated WhileCount() :2878
void WhileCount__ctor_6_fn(WhileCount* __this)
{
    __this->ctor_6();
}

// private void Assess(int count) :2959
void WhileCount__Assess_fn(WhileCount* __this, int* count)
{
    __this->Assess(*count);
}

// public int get_EqualTo() :3040
void WhileCount__get_EqualTo_fn(WhileCount* __this, int* __retval)
{
    *__retval = __this->EqualTo();
}

// public void set_EqualTo(int value) :3041
void WhileCount__set_EqualTo_fn(WhileCount* __this, int* value)
{
    __this->EqualTo(*value);
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :3060
void WhileCount__FuseReactiveIObserverOnAdd_fn(WhileCount* __this, uObject* addedValue)
{
    __this->Assess(__this->_oldCount + 1);
}

// private void Fuse.Reactive.IObserver.OnClear() :3078
void WhileCount__FuseReactiveIObserverOnClear_fn(WhileCount* __this)
{
    __this->Assess(0);
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :3056
void WhileCount__FuseReactiveIObserverOnFailed_fn(WhileCount* __this, uString* message)
{
    __this->Assess(0);
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :3073
void WhileCount__FuseReactiveIObserverOnInsertAt_fn(WhileCount* __this, int* index, uObject* value)
{
    __this->Assess(__this->_oldCount + 1);
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values) :3083
void WhileCount__FuseReactiveIObserverOnNewAll_fn(WhileCount* __this, uObject* values)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray)");
    __this->Assess(::g::Fuse::IArray::Length(uInterface(uPtr(values), ::TYPES[39/*Fuse.IArray*/])));
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :3069
void WhileCount__FuseReactiveIObserverOnNewAt_fn(WhileCount* __this, int* index, uObject* value)
{
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :3064
void WhileCount__FuseReactiveIObserverOnRemoveAt_fn(WhileCount* __this, int* index)
{
    __this->Assess(__this->_oldCount - 1);
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :3052
void WhileCount__FuseReactiveIObserverOnSet_fn(WhileCount* __this, uObject* newValue)
{
    __this->Assess(1);
}

// public int get_GreaterThan() :3016
void WhileCount__get_GreaterThan_fn(WhileCount* __this, int* __retval)
{
    *__retval = __this->GreaterThan();
}

// public void set_GreaterThan(int value) :3017
void WhileCount__set_GreaterThan_fn(WhileCount* __this, int* value)
{
    __this->GreaterThan(*value);
}

// public int get_GreaterThanEqual() :3028
void WhileCount__get_GreaterThanEqual_fn(WhileCount* __this, int* __retval)
{
    *__retval = __this->GreaterThanEqual();
}

// public void set_GreaterThanEqual(int value) :3029
void WhileCount__set_GreaterThanEqual_fn(WhileCount* __this, int* value)
{
    __this->GreaterThanEqual(*value);
}

// private bool IsOn(int count) :2965
void WhileCount__IsOn_fn(WhileCount* __this, int* count, bool* __retval)
{
    *__retval = __this->IsOn(*count);
}

// public object get_Items() :2903
void WhileCount__get_Items_fn(WhileCount* __this, uObject** __retval)
{
    *__retval = __this->Items();
}

// public void set_Items(object value) :2904
void WhileCount__set_Items_fn(WhileCount* __this, uObject* value)
{
    __this->Items(value);
}

// public int get_LessThan() :2992
void WhileCount__get_LessThan_fn(WhileCount* __this, int* __retval)
{
    *__retval = __this->LessThan();
}

// public void set_LessThan(int value) :2993
void WhileCount__set_LessThan_fn(WhileCount* __this, int* value)
{
    __this->LessThan(*value);
}

// public int get_LessThanEqual() :3004
void WhileCount__get_LessThanEqual_fn(WhileCount* __this, int* __retval)
{
    *__retval = __this->LessThanEqual();
}

// public void set_LessThanEqual(int value) :3005
void WhileCount__set_LessThanEqual_fn(WhileCount* __this, int* value)
{
    __this->LessThanEqual(*value);
}

// public generated WhileCount New() :2878
void WhileCount__New2_fn(WhileCount** __retval)
{
    *__retval = WhileCount::New2();
}

// private void OnItemsChanged() :2914
void WhileCount__OnItemsChanged_fn(WhileCount* __this)
{
    __this->OnItemsChanged();
}

// protected override sealed void OnRooted() :2880
void WhileCount__OnRooted_fn(WhileCount* __this)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->OnItemsChanged();
}

// protected override sealed void OnUnrooted() :2886
void WhileCount__OnUnrooted_fn(WhileCount* __this)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "OnUnrooted()");

    if (__this->_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_subscription), ::TYPES[5/*Uno.IDisposable*/]));
        __this->_subscription = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// private void UpdateState() :2928
void WhileCount__UpdateState_fn(WhileCount* __this)
{
    __this->UpdateState();
}

// public generated WhileCount() [instance] :2878
void WhileCount::ctor_6()
{
    ctor_5();
}

// private void Assess(int count) [instance] :2959
void WhileCount::Assess(int count)
{
    _oldCount = count;
    SetActive(IsOn(_oldCount));
}

// public int get_EqualTo() [instance] :3040
int WhileCount::EqualTo()
{
    return _compare.X;
}

// public void set_EqualTo(int value) [instance] :3041
void WhileCount::EqualTo(int value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "set_EqualTo(int)");
    _compare.X = (_compare.Y = value);
    _low = 2;
    _high = 2;
    UpdateState();
}

// public int get_GreaterThan() [instance] :3016
int WhileCount::GreaterThan()
{
    return _compare.X;
}

// public void set_GreaterThan(int value) [instance] :3017
void WhileCount::GreaterThan(int value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "set_GreaterThan(int)");
    _compare.X = value;
    _low = 1;
    UpdateState();
}

// public int get_GreaterThanEqual() [instance] :3028
int WhileCount::GreaterThanEqual()
{
    return _compare.X;
}

// public void set_GreaterThanEqual(int value) [instance] :3029
void WhileCount::GreaterThanEqual(int value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "set_GreaterThanEqual(int)");
    _compare.X = value;
    _low = 2;
    UpdateState();
}

// private bool IsOn(int count) [instance] :2965
bool WhileCount::IsOn(int count)
{
    if ((_low == 1) && (count <= _compare.X))
        return false;

    if ((_low == 2) && (count < _compare.X))
        return false;

    if ((_high == 1) && (count >= _compare.Y))
        return false;

    if ((_high == 2) && (count > _compare.Y))
        return false;

    return true;
}

// public object get_Items() [instance] :2903
uObject* WhileCount::Items()
{
    return _items;
}

// public void set_Items(object value) [instance] :2904
void WhileCount::Items(uObject* value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "set_Items(object)");

    if (_items != value)
    {
        _items = value;
        OnItemsChanged();
    }
}

// public int get_LessThan() [instance] :2992
int WhileCount::LessThan()
{
    return _compare.Y;
}

// public void set_LessThan(int value) [instance] :2993
void WhileCount::LessThan(int value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "set_LessThan(int)");
    _compare.Y = value;
    _high = 1;
    UpdateState();
}

// public int get_LessThanEqual() [instance] :3004
int WhileCount::LessThanEqual()
{
    return _compare.Y;
}

// public void set_LessThanEqual(int value) [instance] :3005
void WhileCount::LessThanEqual(int value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "set_LessThanEqual(int)");
    _compare.Y = value;
    _high = 2;
    UpdateState();
}

// private void OnItemsChanged() [instance] :2914
void WhileCount::OnItemsChanged()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "OnItemsChanged()");

    if (!IsRootingStarted())
        return;

    if (_subscription != NULL)
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[5/*Uno.IDisposable*/]));

    uObject* obs = uAs<uObject*>(_items, ::TYPES[41/*Fuse.Reactive.IObservable*/]);

    if (obs != NULL)
        _subscription = ::g::Fuse::Reactive::IObservable::Subscribe(uInterface(uPtr(obs), ::TYPES[41/*Fuse.Reactive.IObservable*/]), (uObject*)this);

    UpdateState();
}

// private void UpdateState() [instance] :2928
void WhileCount::UpdateState()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "UpdateState()");

    if (!IsRootingStarted())
        return;

    uArray* e = uAs<uArray*>(_items, ::TYPES[6/*object[]*/]);

    if (e != NULL)
    {
        Assess(uPtr(e)->Length());
        return;
    }

    uObject* obs = uAs<uObject*>(_items, ::TYPES[41/*Fuse.Reactive.IObservable*/]);

    if (obs != NULL)
    {
        Assess(::g::Fuse::IArray::Length(uInterface(uPtr(obs), ::TYPES[39/*Fuse.IArray*/])));
        return;
    }

    uObject* arr = uAs<uObject*>(_items, ::TYPES[39/*Fuse.IArray*/]);

    if (arr != NULL)
    {
        Assess(::g::Fuse::IArray::Length(uInterface(uPtr(arr), ::TYPES[39/*Fuse.IArray*/])));
        return;
    }

    Assess(0);
}

// public generated WhileCount New() [static] :2878
WhileCount* WhileCount::New2()
{
    WhileCount* obj1 = (WhileCount*)uNew(WhileCount_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\$.uno
// ----------------------------------------------------------------------------------

// public sealed class WhileEmpty :3126
// {
static void WhileEmpty_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::WhileCount_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::WhileCount_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::WhileCount_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface7),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface8));
    type->SetFields(40);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileEmpty__New3_fn, 0, true, type, 0));
}

::g::Fuse::Reactive::WhileCount_type* WhileEmpty_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::WhileCount_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::WhileCount_typeof();
    options.FieldCount = 40;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(WhileEmpty);
    options.TypeSize = sizeof(::g::Fuse::Reactive::WhileCount_type);
    type = (::g::Fuse::Reactive::WhileCount_type*)uClassType::New("Fuse.Reactive.WhileEmpty", options);
    type->fp_build_ = WhileEmpty_build;
    type->fp_ctor_ = (void*)WhileEmpty__New3_fn;
    type->interface8.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnSet_fn;
    type->interface8.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnFailed_fn;
    type->interface8.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnAdd_fn;
    type->interface8.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface8.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnNewAt_fn;
    type->interface8.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnInsertAt_fn;
    type->interface8.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnClear_fn;
    type->interface8.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnNewAll_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public WhileEmpty() :3128
void WhileEmpty__ctor_7_fn(WhileEmpty* __this)
{
    __this->ctor_7();
}

// public WhileEmpty New() :3128
void WhileEmpty__New3_fn(WhileEmpty** __retval)
{
    *__retval = WhileEmpty::New3();
}

// public WhileEmpty() [instance] :3128
void WhileEmpty::ctor_7()
{
    uStackFrame __("Fuse.Reactive.WhileEmpty", ".ctor()");
    ctor_6();
    EqualTo(0);
}

// public WhileEmpty New() [static] :3128
WhileEmpty* WhileEmpty::New3()
{
    WhileEmpty* obj1 = (WhileEmpty*)uNew(WhileEmpty_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\$.uno
// ----------------------------------------------------------------------------------

// public sealed class WhileNotEmpty :3154
// {
static void WhileNotEmpty_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::WhileCount_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::WhileCount_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::WhileCount_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface7),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface8));
    type->SetFields(40);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileNotEmpty__New3_fn, 0, true, type, 0));
}

::g::Fuse::Reactive::WhileCount_type* WhileNotEmpty_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::WhileCount_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::WhileCount_typeof();
    options.FieldCount = 40;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(WhileNotEmpty);
    options.TypeSize = sizeof(::g::Fuse::Reactive::WhileCount_type);
    type = (::g::Fuse::Reactive::WhileCount_type*)uClassType::New("Fuse.Reactive.WhileNotEmpty", options);
    type->fp_build_ = WhileNotEmpty_build;
    type->fp_ctor_ = (void*)WhileNotEmpty__New3_fn;
    type->interface8.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnSet_fn;
    type->interface8.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnFailed_fn;
    type->interface8.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnAdd_fn;
    type->interface8.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface8.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnNewAt_fn;
    type->interface8.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnInsertAt_fn;
    type->interface8.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnClear_fn;
    type->interface8.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnNewAll_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public WhileNotEmpty() :3156
void WhileNotEmpty__ctor_7_fn(WhileNotEmpty* __this)
{
    __this->ctor_7();
}

// public WhileNotEmpty New() :3156
void WhileNotEmpty__New3_fn(WhileNotEmpty** __retval)
{
    *__retval = WhileNotEmpty::New3();
}

// public WhileNotEmpty() [instance] :3156
void WhileNotEmpty::ctor_7()
{
    uStackFrame __("Fuse.Reactive.WhileNotEmpty", ".ctor()");
    ctor_6();
    GreaterThan(0);
}

// public WhileNotEmpty New() [static] :3156
WhileNotEmpty* WhileNotEmpty::New3()
{
    WhileNotEmpty* obj1 = (WhileNotEmpty*)uNew(WhileNotEmpty_typeof());
    obj1->ctor_7();
    return obj1;
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
    uStackFrame __("Fuse.Reactive.Instantiator.WindowItem", "get_CurrentData()");
    return (DataLink != NULL) ? (uObject*)uPtr(DataLink)->Data() : (uObject*)Data;
}

// public void Unlink() [instance] :2212
void Instantiator__WindowItem::Unlink()
{
    uStackFrame __("Fuse.Reactive.Instantiator.WindowItem", "Unlink()");

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

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\$.uno
// ----------------------------------------------------------------------------------

// public class With :3193
// {
static void With_build(uType* type)
{
    ::TYPES[5] = ::g::Uno::IDisposable_typeof();
    ::TYPES[41] = ::g::Fuse::Reactive::IObservable_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(With_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(With_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(With_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(With_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(With_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(With_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(With_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(With_type, interface7),
        ::g::Fuse::Node__ISubtreeDataProvider_typeof(), offsetof(With_type, interface8),
        ::g::Fuse::Reactive::ValueForwarder__IValueListener_typeof(), offsetof(With_type, interface9));
    type->SetFields(33,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::With, _sourceData), 0,
        ::TYPES[5/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::With, _sub), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::With, _subtreeData), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Data", NULL, (void*)With__get_Data_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Data", NULL, (void*)With__set_Data_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction(".ctor", NULL, (void*)With__New2_fn, 0, true, type, 0));
}

With_type* With_typeof()
{
    static uSStrong<With_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 36;
    options.InterfaceCount = 10;
    options.ObjectSize = sizeof(With);
    options.TypeSize = sizeof(With_type);
    type = (With_type*)uClassType::New("Fuse.Reactive.With", options);
    type->fp_build_ = With_build;
    type->fp_ctor_ = (void*)With__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))With__OnRooted_fn;
    type->interface8.fp_GetData = (void(*)(uObject*, ::g::Fuse::Node*, uObject**))With__FuseNodeISubtreeDataProviderGetData_fn;
    type->interface9.fp_NewValue = (void(*)(uObject*, uObject*))With__FuseReactiveValueForwarderIValueListenerNewValue_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated With() :3193
void With__ctor_5_fn(With* __this)
{
    __this->ctor_5();
}

// public object get_Data() :3211
void With__get_Data_fn(With* __this, uObject** __retval)
{
    *__retval = __this->Data();
}

// public void set_Data(object value) :3212
void With__set_Data_fn(With* __this, uObject* value)
{
    __this->Data(value);
}

// private object Fuse.Node.ISubtreeDataProvider.GetData(Fuse.Node n) :3235
void With__FuseNodeISubtreeDataProviderGetData_fn(With* __this, ::g::Fuse::Node* n, uObject** __retval)
{
    return *__retval = __this->_subtreeData, void();
}

// private void Fuse.Reactive.ValueForwarder.IValueListener.NewValue(object value) :3237
void With__FuseReactiveValueForwarderIValueListenerNewValue_fn(With* __this, uObject* value)
{
    __this->SetSubtreeData(value);
}

// public generated With New() :3193
void With__New2_fn(With** __retval)
{
    *__retval = With::New2();
}

// protected override sealed void OnRooted() :3195
void With__OnRooted_fn(With* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->Activate(NULL);
}

// private void SetSubtreeData(object value) :3242
void With__SetSubtreeData_fn(With* __this, uObject* value)
{
    __this->SetSubtreeData(value);
}

// public generated With() [instance] :3193
void With::ctor_5()
{
    ctor_4();
}

// public object get_Data() [instance] :3211
uObject* With::Data()
{
    return _sourceData;
}

// public void set_Data(object value) [instance] :3212
void With::Data(uObject* value)
{
    uStackFrame __("Fuse.Reactive.With", "set_Data(object)");

    if (_sourceData != value)
    {
        if (_sub != NULL)
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_sub), ::TYPES[5/*Uno.IDisposable*/]));

        _sourceData = value;
        uObject* obs = uAs<uObject*>(value, ::TYPES[41/*Fuse.Reactive.IObservable*/]);

        if (obs != NULL)
        {
            SetSubtreeData(NULL);
            _sub = (uObject*)::g::Fuse::Reactive::ValueForwarder::New1(obs, (uObject*)this);
        }
        else
            SetSubtreeData(value);
    }
}

// private void SetSubtreeData(object value) [instance] :3242
void With::SetSubtreeData(uObject* value)
{
    uStackFrame __("Fuse.Reactive.With", "SetSubtreeData(object)");
    uObject* oldData = _subtreeData;
    _subtreeData = value;
    BroadcastDataChange(oldData, value);
}

// public generated With New() [static] :3193
With* With::New2()
{
    With* obj1 = (With*)uNew(With_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

}}} // ::g::Fuse::Reactive
