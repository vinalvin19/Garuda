// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Android/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.AppBase.h>
namespace g{namespace Fuse{namespace Controls{struct GraphicsView;}}}
namespace g{namespace Fuse{namespace Controls{struct TreeRendererPanel;}}}
namespace g{namespace Fuse{struct App;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Platform{struct TimerEventArgs;}}}

namespace g{
namespace Fuse{

// public abstract extern class App :157
// {
::g::Fuse::AppBase_type* App_typeof();
void App__ctor_3_fn(App* __this);
void App__get_Children_fn(App* __this, uObject** __retval);
void App__get_ChildrenVisual_fn(App* __this, ::g::Fuse::Visual** __retval);
void App__OnTick_fn(App* __this, uObject* sender, ::g::Uno::Platform::TimerEventArgs* args);
void App__PropagateBackground_fn(App* __this);
void App__get_RootVisual_fn(App* __this, ::g::Fuse::Visual** __retval);

struct App : ::g::Fuse::AppBase
{
    uStrong< ::g::Fuse::Controls::GraphicsView*> _graphicsView;
    uStrong< ::g::Fuse::Controls::TreeRendererPanel*> _renderPanel;

    void ctor_3();
    ::g::Fuse::Visual* ChildrenVisual();
    void OnTick(uObject* sender, ::g::Uno::Platform::TimerEventArgs* args);
    void PropagateBackground();
    ::g::Fuse::Visual* RootVisual();
};
// }

}} // ::g::Fuse
