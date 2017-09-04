// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Scripting/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Module;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract class Module :646
// {
struct Module_type : uType
{
    ::g::Uno::IDisposable interface0;
};

Module_type* Module_typeof();
void Module__ctor__fn(Module* __this);
void Module__Dispose_fn(Module* __this);
void Module__get_IsEvaluated_fn(Module* __this, bool* __retval);

struct Module : uObject
{
    bool _isEvaluated;

    void ctor_();
    void Dispose();
    bool IsEvaluated();
};
// }

}}} // ::g::Fuse::Scripting
