// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Navigation/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Navigation.IPage-2d3977f2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationPageProxy;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class NavigationPageProxy :1439
// {
struct NavigationPageProxy_type : uType
{
    ::g::Fuse::Navigation::IPagePropertyListener interface0;
};

NavigationPageProxy_type* NavigationPageProxy_typeof();
void NavigationPageProxy__ctor__fn(NavigationPageProxy* __this);
void NavigationPageProxy__ctor_1_fn(NavigationPageProxy* __this, uDelegate* ready, uDelegate* unready);
void NavigationPageProxy__Dispose_fn(NavigationPageProxy* __this);
void NavigationPageProxy__FuseNavigationIPagePropertyListenerPageChanged_fn(NavigationPageProxy* __this, ::g::Fuse::Visual* n);
void NavigationPageProxy__Init_fn(NavigationPageProxy* __this, uDelegate* ready, uDelegate* unready, ::g::Fuse::Visual* source);
void NavigationPageProxy__get_IsReady_fn(NavigationPageProxy* __this, bool* __retval);
void NavigationPageProxy__get_Navigation_fn(NavigationPageProxy* __this, uObject** __retval);
void NavigationPageProxy__New1_fn(NavigationPageProxy** __retval);
void NavigationPageProxy__New2_fn(uDelegate* ready, uDelegate* unready, NavigationPageProxy** __retval);
void NavigationPageProxy__OnPageRootingCompleted_fn(NavigationPageProxy* __this);
void NavigationPageProxy__get_Page_fn(NavigationPageProxy* __this, ::g::Fuse::Visual** __retval);
void NavigationPageProxy__set_Page_fn(NavigationPageProxy* __this, ::g::Fuse::Visual* value);
void NavigationPageProxy__Rooted_fn(NavigationPageProxy* __this, ::g::Fuse::Visual* source);
void NavigationPageProxy__RootImpl_fn(NavigationPageProxy* __this, ::g::Fuse::Visual* source);
void NavigationPageProxy__Unrooted_fn(NavigationPageProxy* __this);
void NavigationPageProxy__UnrootImpl_fn(NavigationPageProxy* __this);

struct NavigationPageProxy : uObject
{
    uStrong<uObject*> _navigation;
    uStrong< ::g::Fuse::Visual*> _pageBind;
    uStrong<uDelegate*> _ready;
    uStrong< ::g::Fuse::Visual*> _source;
    uStrong<uDelegate*> _unready;
    bool _waitRootingCompleted;
    uStrong< ::g::Fuse::Visual*> _Page;

    void ctor_();
    void ctor_1(uDelegate* ready, uDelegate* unready);
    void Dispose();
    void Init(uDelegate* ready, uDelegate* unready, ::g::Fuse::Visual* source);
    bool IsReady();
    uObject* Navigation();
    void OnPageRootingCompleted();
    ::g::Fuse::Visual* Page();
    void Page(::g::Fuse::Visual* value);
    void Rooted(::g::Fuse::Visual* source);
    void RootImpl(::g::Fuse::Visual* source);
    void Unrooted();
    void UnrootImpl();
    static NavigationPageProxy* New1();
    static NavigationPageProxy* New2(uDelegate* ready, uDelegate* unready);
};
// }

}}} // ::g::Fuse::Navigation
