// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Triggers/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{

// internal abstract interface IDeferred :845
// {
uInterfaceType* IDeferred_typeof();

struct IDeferred
{
    void(*fp_Perform)(uObject*, bool*);
    static bool Perform(const uInterface& __this) { bool __retval; return __this.VTable<IDeferred>()->fp_Perform(__this, &__retval), __retval; }
};
// }

}} // ::g::Fuse
