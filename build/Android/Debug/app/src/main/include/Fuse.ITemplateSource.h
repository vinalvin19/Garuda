// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Nodes/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace UX{struct Template;}}}

namespace g{
namespace Fuse{

// public abstract interface ITemplateSource :7739
// {
uInterfaceType* ITemplateSource_typeof();

struct ITemplateSource
{
    void(*fp_FindTemplate)(uObject*, uString*, ::g::Uno::UX::Template**);
    static ::g::Uno::UX::Template* FindTemplate(const uInterface& __this, uString* key) { ::g::Uno::UX::Template* __retval; return __this.VTable<ITemplateSource>()->fp_FindTemplate(__this, key, &__retval), __retval; }
};
// }

}} // ::g::Fuse
