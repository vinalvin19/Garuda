// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Navigation/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.PulseTrigger-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationTrigger;}}}
namespace g{namespace Fuse{namespace Navigation{struct RoutePageProxy;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public abstract class NavigationTrigger :15
// {
struct NavigationTrigger_type : ::g::Fuse::Triggers::Trigger_type
{
    void(*fp_ActiveChanged)(::g::Fuse::Navigation::NavigationTrigger*, bool*, bool*);
};

NavigationTrigger_type* NavigationTrigger_typeof();
void NavigationTrigger__ctor_6_fn(NavigationTrigger* __this);
void NavigationTrigger__OnRooted_fn(NavigationTrigger* __this);
void NavigationTrigger__OnUnrooted_fn(NavigationTrigger* __this);
void NavigationTrigger__get_Path_fn(NavigationTrigger* __this, int* __retval);
void NavigationTrigger__set_Path_fn(NavigationTrigger* __this, int* value);
void NavigationTrigger__get_When_fn(NavigationTrigger* __this, int* __retval);
void NavigationTrigger__set_When_fn(NavigationTrigger* __this, int* value);

struct NavigationTrigger : ::g::Fuse::Triggers::PulseTrigger
{
    int _path;
    uStrong< ::g::Fuse::Navigation::RoutePageProxy*> _proxy;
    int _when;

    void ctor_6();
    void ActiveChanged(bool isActive, bool isRoot) { (((NavigationTrigger_type*)__type)->fp_ActiveChanged)(this, &isActive, &isRoot); }
    int Path();
    void Path(int value);
    int When();
    void When(int value);
};
// }

}}} // ::g::Fuse::Navigation
