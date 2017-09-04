// This file was generated based on C:/Users/Lotus/Documents/Fuse/garuda/.uno/ux11/WelcomeText.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{struct WelcomeText;}

namespace g{

// public partial sealed class WelcomeText :2
// {
::g::Fuse::Controls::TextControl_type* WelcomeText_typeof();
void WelcomeText__ctor_8_fn(WelcomeText* __this);
void WelcomeText__InitializeUX1_fn(WelcomeText* __this);
void WelcomeText__New4_fn(WelcomeText** __retval);

struct WelcomeText : ::g::Fuse::Controls::Text
{
    void ctor_8();
    void InitializeUX1();
    static WelcomeText* New4();
};
// }

} // ::g
