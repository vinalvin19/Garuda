// This file was generated based on C:/Users/Lotus/Documents/Fuse/garuda/garuda.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.garuda_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[8];

namespace g{

// public static generated class garuda_bundle :0
// {
// static garuda_bundle() :0
static void garuda_bundle__cctor__fn(uType* __type)
{
    garuda_bundle::account7dc47b5d_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"garuda"*/]))->GetFile(::STRINGS[1/*"account-c9c...*/]);
    garuda_bundle::baggaged1768d48_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"garuda"*/]))->GetFile(::STRINGS[2/*"baggage-d04...*/]);
    garuda_bundle::flighta4748556_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"garuda"*/]))->GetFile(::STRINGS[3/*"flight-2544...*/]);
    garuda_bundle::more96c5ddd1_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"garuda"*/]))->GetFile(::STRINGS[4/*"more-830950...*/]);
    garuda_bundle::offersba46451b_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"garuda"*/]))->GetFile(::STRINGS[5/*"offers-fec1...*/]);
    garuda_bundle::RobotoMedium47f97f0c_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"garuda"*/]))->GetFile(::STRINGS[6/*"roboto-medi...*/]);
    garuda_bundle::stewardess3464cd6b0_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"garuda"*/]))->GetFile(::STRINGS[7/*"stewardess3...*/]);
}

static void garuda_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("garuda");
    ::STRINGS[1] = uString::Const("account-c9c35ff4.png");
    ::STRINGS[2] = uString::Const("baggage-d04fd7a7.png");
    ::STRINGS[3] = uString::Const("flight-2544fea3.png");
    ::STRINGS[4] = uString::Const("more-83095092.png");
    ::STRINGS[5] = uString::Const("offers-fec139c8.png");
    ::STRINGS[6] = uString::Const("roboto-medium-44b3d1db.ttf");
    ::STRINGS[7] = uString::Const("stewardess3-52b0812b.png");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::garuda_bundle::account7dc47b5d_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::garuda_bundle::baggaged1768d48_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::garuda_bundle::flighta4748556_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::garuda_bundle::more96c5ddd1_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::garuda_bundle::offersba46451b_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::garuda_bundle::RobotoMedium47f97f0c_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::garuda_bundle::stewardess3464cd6b0_, uFieldFlagsStatic);
    type->Reflection.SetFields(7,
        new uField("account7dc47b5d", 0),
        new uField("baggaged1768d48", 1),
        new uField("flighta4748556", 2),
        new uField("more96c5ddd1", 3),
        new uField("offersba46451b", 4),
        new uField("RobotoMedium47f97f0c", 5),
        new uField("stewardess3464cd6b0", 6));
}

uClassType* garuda_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("garuda_bundle", options);
    type->fp_build_ = garuda_bundle_build;
    type->fp_cctor_ = garuda_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> garuda_bundle::account7dc47b5d_;
uSStrong< ::g::Uno::IO::BundleFile*> garuda_bundle::baggaged1768d48_;
uSStrong< ::g::Uno::IO::BundleFile*> garuda_bundle::flighta4748556_;
uSStrong< ::g::Uno::IO::BundleFile*> garuda_bundle::more96c5ddd1_;
uSStrong< ::g::Uno::IO::BundleFile*> garuda_bundle::offersba46451b_;
uSStrong< ::g::Uno::IO::BundleFile*> garuda_bundle::RobotoMedium47f97f0c_;
uSStrong< ::g::Uno::IO::BundleFile*> garuda_bundle::stewardess3464cd6b0_;
// }

} // ::g
