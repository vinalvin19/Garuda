// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Scripting/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct ScriptClass;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptMember;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class ScriptClass :1624
// {
uType* ScriptClass_typeof();
void ScriptClass__ctor__fn(ScriptClass* __this, uType* unoType, uArray* members);
void ScriptClass__New1_fn(uType* unoType, uArray* members, ScriptClass** __retval);
void ScriptClass__Register_fn(uType* unoType, uArray* members);

struct ScriptClass : uObject
{
    uStrong<uArray*> _members;
    uStrong<uType*> _unoType;
    static uSStrong< ::g::Uno::Collections::Dictionary*> _unoTypeToScriptClass_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _unoTypeToScriptClass() { return ScriptClass_typeof()->Init(), _unoTypeToScriptClass_; }

    void ctor_(uType* unoType, uArray* members);
    static ScriptClass* New1(uType* unoType, uArray* members);
    static void Register(uType* unoType, uArray* members);
};
// }

}}} // ::g::Fuse::Scripting
