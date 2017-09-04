// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Scripting/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.ScriptMember.h>
namespace g{namespace Fuse{namespace Scripting{struct ScriptProperty;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract class ScriptProperty :1510
// {
uType* ScriptProperty_typeof();
void ScriptProperty__ctor_1_fn(ScriptProperty* __this, uString* name, uString* modifier);

struct ScriptProperty : ::g::Fuse::Scripting::ScriptMember
{
    uStrong<uString*> Modifier;

    void ctor_1(uString* name, uString* modifier);
};
// }

}}} // ::g::Fuse::Scripting
