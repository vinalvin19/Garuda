// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Nodes/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{

// public abstract interface IParentObserver :5636
// {
uInterfaceType* IParentObserver_typeof();

struct IParentObserver
{
    void(*fp_OnChildAddedWhileRooted)(uObject*, ::g::Fuse::Node*);
    void(*fp_OnChildMovedWhileRooted)(uObject*, ::g::Fuse::Node*);
    void(*fp_OnChildRemovedWhileRooted)(uObject*, ::g::Fuse::Node*);
    static void OnChildAddedWhileRooted(const uInterface& __this, ::g::Fuse::Node* n) { __this.VTable<IParentObserver>()->fp_OnChildAddedWhileRooted(__this, n); }
    static void OnChildMovedWhileRooted(const uInterface& __this, ::g::Fuse::Node* n) { __this.VTable<IParentObserver>()->fp_OnChildMovedWhileRooted(__this, n); }
    static void OnChildRemovedWhileRooted(const uInterface& __this, ::g::Fuse::Node* n) { __this.VTable<IParentObserver>()->fp_OnChildRemovedWhileRooted(__this, n); }
};
// }

}} // ::g::Fuse
