// This file was generated based on C:/Users/Lotus/Documents/Fuse/garuda/.uno/ux11/garuda.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.garuda_Tab_Text_Property.h>
#include <_root.Tab.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
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

// public override sealed string Get(Uno.UX.PropertyObject obj) :41
void garuda_Tab_Text_Property__Get1_fn(garuda_Tab_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    return *__retval = uPtr(uCast< ::g::Tab*>(obj, ::TYPES[0/*Tab*/]))->Text(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :40
void garuda_Tab_Text_Property__get_Object_fn(garuda_Tab_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :42
void garuda_Tab_Text_Property__Set1_fn(garuda_Tab_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uPtr(uCast< ::g::Tab*>(obj, ::TYPES[0/*Tab*/]))->SetText(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :43
void garuda_Tab_Text_Property__get_SupportsOriginSetter_fn(garuda_Tab_Text_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

} // ::g