// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Reactive.Interna-2d54a663.h>
#include <Fuse.Reactive.Interna-396442e8.h>
#include <Fuse.Reactive.Interna-4026c23d.h>
#include <Fuse.Reactive.Interna-5501e448.h>
#include <Fuse.Reactive.Interna-d7d4e77c.h>
#include <Fuse.Reactive.Internal.PatchOp.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Int.h>
#include <Uno.String.h>
static uString* STRINGS[6];
static uType* TYPES[8];

namespace g{
namespace Fuse{
namespace Reactive{
namespace Internal{

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\internal\$.uno
// -------------------------------------------------------------------------------------------

// private struct SimpleAlgorithm<T>.Location :123
// {
static void SimpleAlgorithm__Location_build(uType* type)
{
    ::STRINGS[0] = uString::Const(",");
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Internal::SimpleAlgorithm__Location, From), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Internal::SimpleAlgorithm__Location, To), 0);
}

uStructType* SimpleAlgorithm__Location_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.ValueSize = sizeof(SimpleAlgorithm__Location);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Reactive.Internal.SimpleAlgorithm`1.Location", options);
    type->fp_build_ = SimpleAlgorithm__Location_build;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))SimpleAlgorithm__Location__ToString_fn;
    return type;
}

// public override sealed string ToString() :127
void SimpleAlgorithm__Location__ToString_fn(SimpleAlgorithm__Location* __this, uType* __type, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.Internal.SimpleAlgorithm`1.Location", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition(uBox<int>(::g::Uno::Int_typeof(), __this->From), ::STRINGS[0/*","*/]), uBox<int>(::g::Uno::Int_typeof(), __this->To)), void();
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\internal\$.uno
// -------------------------------------------------------------------------------------------

// internal enum PatchAlgorithm :25
uEnumType* PatchAlgorithm_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Reactive.Internal.PatchAlgorithm", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "RemoveAll", 0LL,
        "Simple", 1LL);
    return type;
}

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\internal\$.uno
// -------------------------------------------------------------------------------------------

// internal struct PatchItem :18
// {
static void PatchItem_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Reactive::Internal::PatchOp_typeof(), offsetof(::g::Fuse::Reactive::Internal::PatchItem, Op), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Internal::PatchItem, A), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Internal::PatchItem, Data), 0);
}

uStructType* PatchItem_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ValueSize = sizeof(PatchItem);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Reactive.Internal.PatchItem", options);
    type->fp_build_ = PatchItem_build;
    return type;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\internal\$.uno
// -------------------------------------------------------------------------------------------

// internal sealed class PatchList :40
// {
static void PatchList_build(uType* type)
{
    ::STRINGS[1] = uString::Const("");
    ::STRINGS[0] = uString::Const(",");
    ::STRINGS[2] = uString::Const("R");
    ::STRINGS[3] = uString::Const("I");
    ::STRINGS[4] = uString::Const("=");
    ::STRINGS[5] = uString::Const("U");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Internal::PatchItem_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Internal::PatchItem_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Reactive::Internal::SimpleAlgorithm_typeof();
    ::TYPES[3] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Reactive::Internal::PatchItem_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof();
    type->MethodTypes[0]->SetPrecalc(
        type->MakeMethod(1/*PatchRemoveAll<T>*/, type->MethodTypes[0]->U(0), NULL),
        ::TYPES[2/*Fuse.Reactive.Internal.SimpleAlgorithm`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->MethodTypes[1]->SetPrecalc(
        ::TYPES[4/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[1]->U(0), NULL));
}

uType* PatchList_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 2;
    options.ObjectSize = sizeof(PatchList);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.Internal.PatchList", options);
    type->MethodTypes[0] = type->NewMethodType(1, 2);
    type->MethodTypes[1] = type->NewMethodType(1, 1);
    type->fp_build_ = PatchList_build;
    type->fp_ctor_ = (void*)PatchList__New1_fn;
    return type;
}

// public generated PatchList() :40
void PatchList__ctor__fn(PatchList* __this)
{
    __this->ctor_();
}

// public static string Format(Uno.Collections.IList<Fuse.Reactive.Internal.PatchItem> list) :72
void PatchList__Format_fn(uObject* list, uString** __retval)
{
    *__retval = PatchList::Format(list);
}

// public generated PatchList New() :40
void PatchList__New1_fn(PatchList** __retval)
{
    *__retval = PatchList::New1();
}

// public static Uno.Collections.List<Fuse.Reactive.Internal.PatchItem> Patch<T>(Uno.Collections.IList<T> from, Uno.Collections.IList<T> to, Fuse.Reactive.Internal.PatchAlgorithm algo, T emptyKey) :42
void PatchList__Patch_fn(uType* __type, uObject* from, uObject* to, int* algo, void* emptyKey, ::g::Uno::Collections::List** __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Reactive.Internal.PatchList.PatchRemoveAll<T>*/),
        __type->Precalced(1/*Fuse.Reactive.Internal.SimpleAlgorithm<T>*/),
    };
    uStackFrame __("Fuse.Reactive.Internal.PatchList", "Patch`1(Uno.Collections.IList<T>,Uno.Collections.IList<T>,Fuse.Reactive.Internal.PatchAlgorithm,T)");
    int algo_ = *algo;
    ::g::Fuse::Reactive::Internal::SimpleAlgorithm* ret3;

    switch (algo_)
    {
        case 0:
            return *__retval = PatchList::PatchRemoveAll(__types[0], from, to), void();
        case 1:
            return *__retval = (::g::Fuse::Reactive::Internal::SimpleAlgorithm__New1_fn(__types[1], from, to, emptyKey, &ret3), ret3)->Calc(), void();
    }

    return *__retval = NULL, void();
}

// private static Uno.Collections.List<Fuse.Reactive.Internal.PatchItem> PatchRemoveAll<T>(Uno.Collections.IList<T> from, Uno.Collections.IList<T> to) :59
void PatchList__PatchRemoveAll_fn(uType* __type, uObject* from, uObject* to, ::g::Uno::Collections::List** __retval)
{
    *__retval = PatchList::PatchRemoveAll(__type, from, to);
}

// public generated PatchList() [instance] :40
void PatchList::ctor_()
{
}

// public static string Format(Uno.Collections.IList<Fuse.Reactive.Internal.PatchItem> list) [static] :72
uString* PatchList::Format(uObject* list)
{
    uStackFrame __("Fuse.Reactive.Internal.PatchList", "Format(Uno.Collections.IList<Fuse.Reactive.Internal.PatchItem>)");
    ::g::Fuse::Reactive::Internal::PatchItem ret2;
    uString* q = ::STRINGS[1/*""*/];

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Reactive.Internal.PatchItem>*/])); ++i)
    {
        if (i > 0)
            q = ::g::Uno::String::op_Addition2(q, ::STRINGS[0/*","*/]);

        ::g::Fuse::Reactive::Internal::PatchItem item = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(list), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Internal.PatchItem>*/]), uCRef<int>(i), &ret2), ret2);

        switch (item.Op)
        {
            case 0:
            {
                q = ::g::Uno::String::op_Addition2(q, ::g::Uno::String::op_Addition1(::STRINGS[2/*"R"*/], uBox<int>(::g::Uno::Int_typeof(), item.A)));
                break;
            }
            case 1:
            {
                q = ::g::Uno::String::op_Addition2(q, ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[3/*"I"*/], uBox<int>(::g::Uno::Int_typeof(), item.A)), ::STRINGS[4/*"="*/]), uBox<int>(::g::Uno::Int_typeof(), item.Data)));
                break;
            }
            case 2:
            {
                q = ::g::Uno::String::op_Addition2(q, ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[5/*"U"*/], uBox<int>(::g::Uno::Int_typeof(), item.A)), ::STRINGS[4/*"="*/]), uBox<int>(::g::Uno::Int_typeof(), item.Data)));
                break;
            }
        }
    }

    return q;
}

// public generated PatchList New() [static] :40
PatchList* PatchList::New1()
{
    PatchList* obj1 = (PatchList*)uNew(PatchList_typeof());
    obj1->ctor_();
    return obj1;
}

// private static Uno.Collections.List<Fuse.Reactive.Internal.PatchItem> PatchRemoveAll<T>(Uno.Collections.IList<T> from, Uno.Collections.IList<T> to) [static] :59
::g::Uno::Collections::List* PatchList::PatchRemoveAll(uType* __type, uObject* from, uObject* to)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
    };
    uStackFrame __("Fuse.Reactive.Internal.PatchList", "PatchRemoveAll`1(Uno.Collections.IList<T>,Uno.Collections.IList<T>)");
    ::g::Fuse::Reactive::Internal::PatchItem collection1;
    ::g::Fuse::Reactive::Internal::PatchItem collection2;
    ::g::Uno::Collections::List* ops = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[3/*Uno.Collections.List<Fuse.Reactive.Internal.PatchItem>*/]);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(from), __types[0])); ++i)
        ::g::Uno::Collections::List__Add_fn(uPtr(ops), uCRef((collection1 = uDefault< ::g::Fuse::Reactive::Internal::PatchItem>(), collection1.Op = 0, collection1.A = 0, collection1)));

    for (int i1 = 0; i1 < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(to), __types[0])); ++i1)
        ::g::Uno::Collections::List__Add_fn(uPtr(ops), uCRef((collection2 = uDefault< ::g::Fuse::Reactive::Internal::PatchItem>(), collection2.Op = 1, collection2.A = i1, collection2.Data = i1, collection2)));

    return ops;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\internal\$.uno
// -------------------------------------------------------------------------------------------

// internal enum PatchOp :8
uEnumType* PatchOp_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Reactive.Internal.PatchOp", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Remove", 0LL,
        "Insert", 1LL,
        "Update", 2LL);
    return type;
}

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.Reactive.Bindings\1.2.0\internal\$.uno
// -------------------------------------------------------------------------------------------

// internal sealed class SimpleAlgorithm<T> :100
// {
static void SimpleAlgorithm_build(uType* type)
{
    ::TYPES[5] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof();
    ::TYPES[3] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Reactive::Internal::PatchItem_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::IList_typeof();
    ::TYPES[7] = ::g::Uno::Collections::Dictionary_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::ICollection_typeof()->MakeType(type->T(0), NULL),
        type->T(0),
        ::g::Uno::Collections::IList_typeof()->MakeType(type->T(0), NULL),
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(type->T(0), ::g::Uno::Int_typeof(), NULL));
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::TYPES[6/*Uno.Collections.IList`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Reactive::Internal::SimpleAlgorithm, _from), 0,
        ::TYPES[3/*Uno.Collections.List<Fuse.Reactive.Internal.PatchItem>*/], offsetof(::g::Fuse::Reactive::Internal::SimpleAlgorithm, _ops), 0,
        ::TYPES[6/*Uno.Collections.IList`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Reactive::Internal::SimpleAlgorithm, _to), 0,
        ::TYPES[7/*Uno.Collections.Dictionary`2*/]->MakeType(type->T(0), ::g::Uno::Int_typeof(), NULL), offsetof(::g::Fuse::Reactive::Internal::SimpleAlgorithm, _toIndex), 0,
        ::TYPES[5/*Uno.Collections.List<bool>*/], offsetof(::g::Fuse::Reactive::Internal::SimpleAlgorithm, _toUsed), 0);
}

uType* SimpleAlgorithm_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.GenericCount = 1;
    options.PrecalcCount = 4;
    options.ObjectSize = sizeof(SimpleAlgorithm);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.Internal.SimpleAlgorithm`1", options);
    type->fp_build_ = SimpleAlgorithm_build;
    return type;
}

// public SimpleAlgorithm(Uno.Collections.IList<T> from, Uno.Collections.IList<T> to, T emptyKey) :108
void SimpleAlgorithm__ctor__fn(SimpleAlgorithm* __this, uObject* from, uObject* to, void* emptyKey)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Uno.Collections.ICollection<T>*/),
    };
    uStackFrame __("Fuse.Reactive.Internal.SimpleAlgorithm`1", ".ctor(Uno.Collections.IList<T>,Uno.Collections.IList<T>,T)");
    __this->_emptyKey() = emptyKey;
    __this->_from = from;
    __this->_to = to;
    __this->_toIndex = __this->Index(to);
    __this->_toUsed = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(::TYPES[5/*Uno.Collections.List<bool>*/], ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(to), __types[0]))));

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(to, __types[0])); ++i)
        ::g::Uno::Collections::List__Add_fn(uPtr(__this->_toUsed), uCRef(false));

    __this->_ops = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[3/*Uno.Collections.List<Fuse.Reactive.Internal.PatchItem>*/]));
}

// private void AppendRemainingTo(int oPos) :187
void SimpleAlgorithm__AppendRemainingTo_fn(SimpleAlgorithm* __this, int* oPos)
{
    __this->AppendRemainingTo(*oPos);
}

// public Uno.Collections.List<Fuse.Reactive.Internal.PatchItem> Calc() :143
void SimpleAlgorithm__Calc_fn(SimpleAlgorithm* __this, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->Calc();
}

// private Fuse.Reactive.Internal.SimpleAlgorithm<T>.Location FindNextAnchor(int fromAt) :201
void SimpleAlgorithm__FindNextAnchor_fn(SimpleAlgorithm* __this, int* fromAt, SimpleAlgorithm__Location* __retval)
{
    *__retval = __this->FindNextAnchor(*fromAt);
}

// private Uno.Collections.Dictionary<T, int> Index(Uno.Collections.IList<T> to) :132
void SimpleAlgorithm__Index_fn(SimpleAlgorithm* __this, uObject* to, ::g::Uno::Collections::Dictionary** __retval)
{
    *__retval = __this->Index(to);
}

// public SimpleAlgorithm New(Uno.Collections.IList<T> from, Uno.Collections.IList<T> to, T emptyKey) :108
void SimpleAlgorithm__New1_fn(uType* __type, uObject* from, uObject* to, void* emptyKey, SimpleAlgorithm** __retval)
{
    SimpleAlgorithm* obj1 = (SimpleAlgorithm*)uNew(__type);
    SimpleAlgorithm__ctor__fn(obj1, from, to, emptyKey);
    return *__retval = obj1, void();
}

// private void AppendRemainingTo(int oPos) [instance] :187
void SimpleAlgorithm::AppendRemainingTo(int oPos)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
    };
    uStackFrame __("Fuse.Reactive.Internal.SimpleAlgorithm`1", "AppendRemainingTo(int)");
    ::g::Fuse::Reactive::Internal::PatchItem collection5;
    bool ret2;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_to), __types[0])); ++i)
    {
        if ((::g::Uno::Collections::List__get_Item_fn(uPtr(_toUsed), uCRef<int>(i), &ret2), ret2))
            continue;

        ::g::Uno::Collections::List__Add_fn(uPtr(_ops), uCRef((collection5 = uDefault< ::g::Fuse::Reactive::Internal::PatchItem>(), collection5.Op = 1, collection5.A = oPos, collection5.Data = i, collection5)));
        ::g::Uno::Collections::List__set_Item_fn(uPtr(_toUsed), uCRef<int>(i), uCRef(true));
        oPos++;
    }
}

// public Uno.Collections.List<Fuse.Reactive.Internal.PatchItem> Calc() [instance] :143
::g::Uno::Collections::List* SimpleAlgorithm::Calc()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
    };
    uStackFrame __("Fuse.Reactive.Internal.SimpleAlgorithm`1", "Calc()");
    ::g::Fuse::Reactive::Internal::PatchItem collection1;
    ::g::Fuse::Reactive::Internal::PatchItem collection2;
    ::g::Fuse::Reactive::Internal::PatchItem collection3;
    ::g::Fuse::Reactive::Internal::PatchItem collection4;
    bool ret3;
    int fromAt = 0;
    int oPos = 0;

    while (fromAt < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_from), __types[0])))
    {
        SimpleAlgorithm__Location anchor = FindNextAnchor(fromAt);

        if (anchor.From == -1)
        {
            while (fromAt < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_from), __types[0])))
            {
                ::g::Uno::Collections::List__Add_fn(uPtr(_ops), uCRef((collection1 = uDefault< ::g::Fuse::Reactive::Internal::PatchItem>(), collection1.Op = 0, collection1.A = (fromAt + oPos), collection1)));
                fromAt++;
                oPos--;
            }

            break;
        }

        int rem = fromAt + oPos;

        for (int i = 0; i < anchor.To; ++i)
        {
            if ((::g::Uno::Collections::List__get_Item_fn(uPtr(_toUsed), uCRef<int>(i), &ret3), ret3))
                continue;

            ::g::Uno::Collections::List__Add_fn(uPtr(_ops), uCRef((collection2 = uDefault< ::g::Fuse::Reactive::Internal::PatchItem>(), collection2.Op = 1, collection2.A = (oPos + anchor.From), collection2.Data = i, collection2)));
            oPos++;
            ::g::Uno::Collections::List__set_Item_fn(uPtr(_toUsed), uCRef<int>(i), uCRef(true));
        }

        while (fromAt < anchor.From)
        {
            ::g::Uno::Collections::List__Add_fn(uPtr(_ops), uCRef((collection3 = uDefault< ::g::Fuse::Reactive::Internal::PatchItem>(), collection3.Op = 0, collection3.A = rem, collection3)));
            oPos--;
            fromAt++;
        }

        ::g::Uno::Collections::List__Add_fn(uPtr(_ops), uCRef((collection4 = uDefault< ::g::Fuse::Reactive::Internal::PatchItem>(), collection4.Op = 2, collection4.A = (fromAt + oPos), collection4.Data = anchor.To, collection4)));
        ::g::Uno::Collections::List__set_Item_fn(uPtr(_toUsed), uCRef<int>(anchor.To), uCRef(true));
        fromAt++;
    }

    AppendRemainingTo(fromAt + oPos);
    return _ops;
}

// private Fuse.Reactive.Internal.SimpleAlgorithm<T>.Location FindNextAnchor(int fromAt) [instance] :201
SimpleAlgorithm__Location SimpleAlgorithm::FindNextAnchor(int fromAt)
{
    uType* __types[] = {
        __type->Precalced(1/*T*/),
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(2/*Uno.Collections.IList<T>*/),
    };
    uStackFrame __("Fuse.Reactive.Internal.SimpleAlgorithm`1", "FindNextAnchor(int)");
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    SimpleAlgorithm__Location collection6;
    SimpleAlgorithm__Location collection7;
    bool ret5;
    bool ret7;

    while (fromAt < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_from), __types[1])))
    {
        int faLoc = -1;

        if ((::g::Uno::Object::Equals1(uBoxPtr(__types[0], (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_from), __types[2]), uCRef<int>(fromAt), &ret4), ret4)), uBoxPtr(__types[0], _emptyKey())) || !(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_toIndex), (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_from), __types[2]), uCRef<int>(fromAt), &ret6), ret6), &faLoc, &ret5), ret5)) || (::g::Uno::Collections::List__get_Item_fn(uPtr(_toUsed), uCRef<int>(faLoc), &ret7), ret7))
        {
            fromAt++;
            continue;
        }

        collection6 = uDefault<SimpleAlgorithm__Location>();
        collection6.From = fromAt;
        collection6.To = faLoc;
        return collection6;
    }

    collection7 = uDefault<SimpleAlgorithm__Location>();
    collection7.From = -1;
    collection7.To = -1;
    return collection7;
}

// private Uno.Collections.Dictionary<T, int> Index(Uno.Collections.IList<T> to) [instance] :132
::g::Uno::Collections::Dictionary* SimpleAlgorithm::Index(uObject* to)
{
    uType* __types[] = {
        __type->Precalced(1/*T*/),
        __type->Precalced(3/*Uno.Collections.Dictionary<T, int>*/),
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(2/*Uno.Collections.IList<T>*/),
    };
    uStackFrame __("Fuse.Reactive.Internal.SimpleAlgorithm`1", "Index(Uno.Collections.IList<T>)");
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret9(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ::g::Uno::Collections::Dictionary* d = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(__types[1]);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(to), __types[2])); ++i)
        if (!::g::Uno::Object::Equals1(uBoxPtr(__types[0], (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(to), __types[3]), uCRef<int>(i), &ret8), ret8)), uBoxPtr(__types[0], _emptyKey())))
            ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(d), (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(to), __types[3]), uCRef<int>(i), &ret9), ret9), uCRef<int>(i));

    return d;
}
// }

}}}} // ::g::Fuse::Reactive::Internal
