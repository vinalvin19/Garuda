// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Nodes/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Fuse{struct VisualEventArgs;}}

namespace g{
namespace Fuse{

// public class VisualEventArgs :1072
// {
uType* VisualEventArgs_typeof();
void VisualEventArgs__ctor_1_fn(VisualEventArgs* __this, ::g::Fuse::Visual* visual);
void VisualEventArgs__get_IsHandled_fn(VisualEventArgs* __this, bool* __retval);
void VisualEventArgs__set_IsHandled_fn(VisualEventArgs* __this, bool* value);
void VisualEventArgs__New2_fn(::g::Fuse::Visual* visual, VisualEventArgs** __retval);
void VisualEventArgs__get_Visual_fn(VisualEventArgs* __this, ::g::Fuse::Visual** __retval);
void VisualEventArgs__set_Visual_fn(VisualEventArgs* __this, ::g::Fuse::Visual* value);

struct VisualEventArgs : ::g::Uno::EventArgs
{
    bool _IsHandled;
    uStrong< ::g::Fuse::Visual*> _Visual;

    void ctor_1(::g::Fuse::Visual* visual);
    bool IsHandled();
    void IsHandled(bool value);
    ::g::Fuse::Visual* Visual();
    void Visual(::g::Fuse::Visual* value);
    static VisualEventArgs* New2(::g::Fuse::Visual* visual);
};
// }

}} // ::g::Fuse
