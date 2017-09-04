// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Navigation/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationPageProxy;}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationPageProxy__ObsoleteWrapper;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// private sealed class NavigationPageProxy.ObsoleteWrapper :1576
// {
uType* NavigationPageProxy__ObsoleteWrapper_typeof();
void NavigationPageProxy__ObsoleteWrapper__ctor__fn(NavigationPageProxy__ObsoleteWrapper* __this);
void NavigationPageProxy__ObsoleteWrapper__New1_fn(NavigationPageProxy__ObsoleteWrapper** __retval);
void NavigationPageProxy__ObsoleteWrapper__ReadyImpl_fn(NavigationPageProxy__ObsoleteWrapper* __this, ::g::Fuse::Navigation::NavigationPageProxy* npp);
void NavigationPageProxy__ObsoleteWrapper__UnreadyImpl_fn(NavigationPageProxy__ObsoleteWrapper* __this, ::g::Fuse::Navigation::NavigationPageProxy* npp);

struct NavigationPageProxy__ObsoleteWrapper : uObject
{
    uStrong<uDelegate*> Ready;
    uStrong<uDelegate*> Unready;

    void ctor_();
    void ReadyImpl(::g::Fuse::Navigation::NavigationPageProxy* npp);
    void UnreadyImpl(::g::Fuse::Navigation::NavigationPageProxy* npp);
    static NavigationPageProxy__ObsoleteWrapper* New1();
};
// }

}}} // ::g::Fuse::Navigation
