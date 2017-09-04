// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Scripting/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.ScriptMember.h>
namespace g{namespace Fuse{namespace Scripting{struct ScriptMethod;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract class ScriptMethod :1534
// {
uType* ScriptMethod_typeof();
void ScriptMethod__ctor_1_fn(ScriptMethod* __this, uString* name, int* thread);

struct ScriptMethod : ::g::Fuse::Scripting::ScriptMember
{
    int Thread;

    void ctor_1(uString* name, int thread);
};
// }

}}} // ::g::Fuse::Scripting
