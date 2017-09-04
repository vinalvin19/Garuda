// This file was generated based on C:/Users/Lotus/Documents/Fuse/garuda/build/Android/Preview/cache/ux11/garuda.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.garuda_Tab_Text_Property.h>
#include <_root.Tab.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class garuda_Tab_Text_Property :36
// {
static void garuda_Tab_Text_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Tab_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Tab*/], offsetof(::g::garuda_Tab_Text_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* garuda_Tab_Text_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(garuda_Tab_Text_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("garuda_Tab_Text_Property", options);
    type->fp_build_ = garuda_Tab_Text_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))garuda_Tab_Text_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))garuda_Tab_Text_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))garuda_Tab_Text_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))garuda_Tab_Text_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public garuda_Tab_Text_Property(Tab obj, Uno.UX.Selector name) :39
void garuda_Tab_Text_Property__ctor_3_fn(garuda_Tab_Text_Property* __this, ::g::Tab* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :41
void garuda_Tab_Text_Property__Get1_fn(garuda_Tab_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    uStackFrame __("garuda_Tab_Text_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Tab*>(obj, ::TYPES[0/*Tab*/]))->Text(), void();
}

// public garuda_Tab_Text_Property New(Tab obj, Uno.UX.Selector name) :39
void garuda_Tab_Text_Property__New1_fn(::g::Tab* obj, ::g::Uno::UX::Selector* name, garuda_Tab_Text_Property** __retval)
{
    *__retval = garuda_Tab_Text_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :40
void garuda_Tab_Text_Property__get_Object_fn(garuda_Tab_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :42
void garuda_Tab_Text_Property__Set1_fn(garuda_Tab_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uStackFrame __("garuda_Tab_Text_Property", "Set(Uno.UX.PropertyObject,string,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Tab*>(obj, ::TYPES[0/*Tab*/]))->SetText(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :43
void garuda_Tab_Text_Property__get_SupportsOriginSetter_fn(garuda_Tab_Text_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public garuda_Tab_Text_Property(Tab obj, Uno.UX.Selector name) [instance] :39
void garuda_Tab_Text_Property::ctor_3(::g::Tab* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public garuda_Tab_Text_Property New(Tab obj, Uno.UX.Selector name) [static] :39
garuda_Tab_Text_Property* garuda_Tab_Text_Property::New1(::g::Tab* obj, ::g::Uno::UX::Selector name)
{
    garuda_Tab_Text_Property* obj1 = (garuda_Tab_Text_Property*)uNew(garuda_Tab_Text_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
