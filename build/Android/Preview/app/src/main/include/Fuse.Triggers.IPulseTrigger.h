// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Triggers/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Triggers{

// public abstract interface IPulseTrigger :2138
// {
uInterfaceType* IPulseTrigger_typeof();

struct IPulseTrigger
{
    void(*fp_Pulse)(uObject*);
    static void Pulse(const uInterface& __this) { __this.VTable<IPulseTrigger>()->fp_Pulse(__this); }
};
// }

}}} // ::g::Fuse::Triggers
