// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Reactive.JavaScript/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Diagnos-fd30c5a5.h>
namespace g{namespace Fuse{namespace Reactive{struct JavaScript;}}}
namespace g{namespace Fuse{namespace Reactive{struct ModuleInstance;}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Scripting{struct ModuleResult;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class ModuleInstance :589
// {
uType* ModuleInstance_typeof();
void ModuleInstance__ctor_1_fn(ModuleInstance* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js);
void ModuleInstance__Dispose_fn(ModuleInstance* __this);
void ModuleInstance__Evaluate_fn(ModuleInstance* __this);
void ModuleInstance__EvaluateExports_fn(ModuleInstance* __this, uObject** __retval);
void ModuleInstance__EvaluateModule_fn(ModuleInstance* __this);
void ModuleInstance__New2_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js, ModuleInstance** __retval);
void ModuleInstance__SetDataContext_fn(ModuleInstance* __this);

struct ModuleInstance : ::g::Fuse::Reactive::DiagnosticSubject
{
    uStrong<uObject*> _dc;
    uStrong< ::g::Uno::Collections::Dictionary*> _deps;
    uStrong< ::g::Fuse::Reactive::DiagnosticSubject*> _diagnostic1;
    uStrong< ::g::Fuse::Reactive::JavaScript*> _js;
    uStrong< ::g::Fuse::Scripting::ModuleResult*> _moduleResult;
    static uSStrong<uObject*> _resetHookMutex_;
    static uSStrong<uObject*>& _resetHookMutex() { return ModuleInstance_typeof()->Init(), _resetHookMutex_; }
    uStrong< ::g::Fuse::Reactive::ThreadWorker*> _worker;

    void ctor_1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js);
    void Dispose();
    void Evaluate();
    uObject* EvaluateExports();
    void EvaluateModule();
    void SetDataContext();
    static ModuleInstance* New2(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js);
};
// }

}}} // ::g::Fuse::Reactive
