// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Reactive/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IObserver.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct ValueObserver;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal abstract class ValueObserver :126
// {
struct ValueObserver_type : uType
{
    ::g::Uno::IDisposable interface0;
    ::g::Fuse::Reactive::IObserver interface1;
    void(*fp_Dispose)(::g::Fuse::Reactive::ValueObserver*);
};

ValueObserver_type* ValueObserver_typeof();
void ValueObserver__ctor__fn(ValueObserver* __this);
void ValueObserver__Dispose_fn(ValueObserver* __this);
void ValueObserver__Subscribe_fn(ValueObserver* __this, uObject* obs);
void ValueObserver__Unsubscribe_fn(ValueObserver* __this);

struct ValueObserver : uObject
{
    uStrong<uObject*> _obs;
    uStrong<uObject*> _obsSub;

    void ctor_();
    void Dispose() { (((ValueObserver_type*)__type)->fp_Dispose)(this); }
    void Subscribe(uObject* obs);
    void Unsubscribe();
    static void Dispose(ValueObserver* __this) { ValueObserver__Dispose_fn(__this); }
};
// }

}}} // ::g::Fuse::Reactive
