// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Common/1.2.0/resources/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{

// internal abstract interface ILoading :253
// {
uInterfaceType* ILoading_typeof();

struct ILoading
{
    void(*fp_get_IsLoading)(uObject*, bool*);
    static bool IsLoading(const uInterface& __this) { bool __retval; return __this.VTable<ILoading>()->fp_get_IsLoading(__this, &__retval), __retval; }
};
// }

}} // ::g::Fuse
