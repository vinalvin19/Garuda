// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Triggers/1.2.0/actions/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public abstract interface IToggleable :870
// {
uInterfaceType* IToggleable_typeof();

struct IToggleable
{
    void(*fp_Toggle)(uObject*);
    static void Toggle(const uInterface& __this) { __this.VTable<IToggleable>()->fp_Toggle(__this); }
};
// }

}}}} // ::g::Fuse::Triggers::Actions
