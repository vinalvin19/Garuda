// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.WebSockets/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace WebSocket{struct NativeFunctionModule;}}}

namespace g{
namespace Fuse{
namespace WebSocket{

// public abstract class NativeFunctionModule :111
// {
::g::Fuse::Scripting::Module_type* NativeFunctionModule_typeof();
void NativeFunctionModule__ctor_2_fn(NativeFunctionModule* __this, uString* name);

struct NativeFunctionModule : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong<NativeFunctionModule*> _instance_;
    static uSStrong<NativeFunctionModule*>& _instance() { return _instance_; }

    void ctor_2(uString* name);
};
// }

}}} // ::g::Fuse::WebSocket
