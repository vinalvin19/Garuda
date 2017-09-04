// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Reactive.JavaScript/1.2.0/fusejs/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Http;}}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// public sealed class Http :275
// {
::g::Fuse::Scripting::Module_type* Http_typeof();
void Http__ctor_2_fn(Http* __this);
void Http__New2_fn(Http** __retval);

struct Http : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong<Http*> _instance_;
    static uSStrong<Http*>& _instance() { return _instance_; }

    void ctor_2();
    static Http* New2();
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
