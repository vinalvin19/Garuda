// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Navigation/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigatedArgs;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class NavigatedArgs :704
// {
uType* NavigatedArgs_typeof();
void NavigatedArgs__ctor_1_fn(NavigatedArgs* __this, ::g::Fuse::Visual* newVisual);
void NavigatedArgs__New2_fn(::g::Fuse::Visual* newVisual, NavigatedArgs** __retval);
void NavigatedArgs__get_NewVisual_fn(NavigatedArgs* __this, ::g::Fuse::Visual** __retval);
void NavigatedArgs__set_NewVisual_fn(NavigatedArgs* __this, ::g::Fuse::Visual* value);

struct NavigatedArgs : ::g::Uno::EventArgs
{
    uStrong< ::g::Fuse::Visual*> _NewVisual;

    void ctor_1(::g::Fuse::Visual* newVisual);
    ::g::Fuse::Visual* NewVisual();
    void NewVisual(::g::Fuse::Visual* value);
    static NavigatedArgs* New2(::g::Fuse::Visual* newVisual);
};
// }

}}} // ::g::Fuse::Navigation
