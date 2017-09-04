// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Scripting/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeMember;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract class NativeMember :1195
// {
uType* NativeMember_typeof();
void NativeMember__ctor__fn(NativeMember* __this, uString* name);
void NativeMember__get_Context_fn(NativeMember* __this, ::g::Fuse::Scripting::Context** __retval);
void NativeMember__set_Context_fn(NativeMember* __this, ::g::Fuse::Scripting::Context* value);
void NativeMember__get_Name_fn(NativeMember* __this, uString** __retval);
void NativeMember__set_Name_fn(NativeMember* __this, uString* value);

struct NativeMember : uObject
{
    uStrong< ::g::Fuse::Scripting::Context*> _Context;
    uStrong<uString*> _Name;

    void ctor_(uString* name);
    ::g::Fuse::Scripting::Context* Context();
    void Context(::g::Fuse::Scripting::Context* value);
    uString* Name();
    void Name(uString* value);
};
// }

}}} // ::g::Fuse::Scripting
