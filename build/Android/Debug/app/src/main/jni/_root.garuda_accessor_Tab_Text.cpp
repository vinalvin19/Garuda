// This file was generated based on C:/Users/Lotus/Documents/Fuse/garuda/.uno/ux11/garuda.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.garuda_accessor_Tab_Text.h>
#include <_root.Tab.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[3];

namespace g{

// internal sealed class garuda_accessor_Tab_Text :1
// {
// static garuda_accessor_Tab_Text() :1
static void garuda_accessor_Tab_Text__cctor__fn(uType* __type)
{
    garuda_accessor_Tab_Text::Singleton_ = garuda_accessor_Tab_Text::New1();
    garuda_accessor_Tab_Text::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Text"*/]);
}

static void garuda_accessor_Tab_Text_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Text");
    ::TYPES[0] = ::g::Tab_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::garuda_accessor_Tab_Text::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::garuda_accessor_Tab_Text::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* garuda_accessor_Tab_Text_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(garuda_accessor_Tab_Text);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("garuda_accessor_Tab_Text", options);
    type->fp_build_ = garuda_accessor_Tab_Text_build;
    type->fp_ctor_ = (void*)garuda_accessor_Tab_Text__New1_fn;
    type->fp_cctor_ = garuda_accessor_Tab_Text__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))garuda_accessor_Tab_Text__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))garuda_accessor_Tab_Text__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))garuda_accessor_Tab_Text__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))garuda_accessor_Tab_Text__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))garuda_accessor_Tab_Text__get_SupportsOriginSetter_fn;
    return type;
}

// public generated garuda_accessor_Tab_Text() :1
void garuda_accessor_Tab_Text__ctor_1_fn(garuda_accessor_Tab_Text* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :7
void garuda_accessor_Tab_Text__GetAsObject_fn(garuda_accessor_Tab_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uPtr(uCast< ::g::Tab*>(obj, ::TYPES[0/*Tab*/]))->Text(), void();
}

// public override sealed Uno.UX.Selector get_Name() :4
void garuda_accessor_Tab_Text__get_Name_fn(garuda_accessor_Tab_Text* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = garuda_accessor_Tab_Text::_name(), void();
}

// public generated garuda_accessor_Tab_Text New() :1
void garuda_accessor_Tab_Text__New1_fn(garuda_accessor_Tab_Text** __retval)
{
    *__retval = garuda_accessor_Tab_Text::New1();
}

// public override sealed Uno.Type get_PropertyType() :6
void garuda_accessor_Tab_Text__get_PropertyType_fn(garuda_accessor_Tab_Text* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :8
void garuda_accessor_Tab_Text__SetAsObject_fn(garuda_accessor_Tab_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::Tab*>(obj, ::TYPES[0/*Tab*/]))->SetText(uCast<uString*>(v, ::TYPES[1/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :9
void garuda_accessor_Tab_Text__get_SupportsOriginSetter_fn(garuda_accessor_Tab_Text* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector garuda_accessor_Tab_Text::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> garuda_accessor_Tab_Text::Singleton_;

// public generated garuda_accessor_Tab_Text() [instance] :1
void garuda_accessor_Tab_Text::ctor_1()
{
    ctor_();
}

// public generated garuda_accessor_Tab_Text New() [static] :1
garuda_accessor_Tab_Text* garuda_accessor_Tab_Text::New1()
{
    garuda_accessor_Tab_Text* obj1 = (garuda_accessor_Tab_Text*)uNew(garuda_accessor_Tab_Text_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
