// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Reactive.Bindings/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct Instantiator__TemplateMatch;}}}
namespace g{namespace Uno{namespace UX{struct Template;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private struct Instantiator.TemplateMatch :1827
// {
uStructType* Instantiator__TemplateMatch_typeof();
void Instantiator__TemplateMatch__Matches_fn(Instantiator__TemplateMatch* __this, Instantiator__TemplateMatch* b, bool* __retval);

struct Instantiator__TemplateMatch
{
    bool All;
    uStrong< ::g::Uno::UX::Template*> Template;

    bool Matches(Instantiator__TemplateMatch b);
};
// }

}}} // ::g::Fuse::Reactive
