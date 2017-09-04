// This file was generated based on C:/Users/Lotus/Documents/Fuse/garuda/.uno/ux11/Tab.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Tab;}

namespace g{

// public partial sealed class Tab :2
// {
::g::Fuse::Controls::Panel_type* Tab_typeof();
void Tab__SetText_fn(Tab* __this, uString* value, uObject* origin);
void Tab__get_Text_fn(Tab* __this, uString** __retval);
void Tab__set_Text_fn(Tab* __this, uString* value);

struct Tab : ::g::Fuse::Controls::Panel
{
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return Tab_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Tab_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Tab_typeof()->Init(), __selector1_; }
    uStrong<uString*> _field_Text;

    void SetText(uString* value, uObject* origin);
    uString* Text();
    void Text(uString* value);
};
// }

} // ::g
