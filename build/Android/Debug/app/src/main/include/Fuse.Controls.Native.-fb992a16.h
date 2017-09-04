// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Controls.Native/1.2.0/android/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-20f6897.h>
#include <Fuse.Controls.Native.-4da376b6.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct GraphicsViewBase;}}}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public abstract extern class GraphicsViewBase :225
// {
struct GraphicsViewBase_type : ::g::Fuse::Controls::Native::Android::View_type
{
    ::g::Fuse::Controls::Native::IGraphicsView interface2;
};

GraphicsViewBase_type* GraphicsViewBase_typeof();
void GraphicsViewBase__ctor_6_fn(GraphicsViewBase* __this, ::g::Java::Object* handle);
void GraphicsViewBase__BeginDraw_fn(GraphicsViewBase* __this, ::g::Uno::Int2* size, bool* __retval);
void GraphicsViewBase__DestroySurface_fn(GraphicsViewBase* __this);
void GraphicsViewBase__EndDraw_fn(GraphicsViewBase* __this);
void GraphicsViewBase__get_GraphicsViewHandle_fn(GraphicsViewBase* __this, ::g::Java::Object** __retval);
void GraphicsViewBase__SetSurface_fn(GraphicsViewBase* __this, ::g::Java::Object* surfaceHandle);

struct GraphicsViewBase : ::g::Fuse::Controls::Native::Android::View
{
    void* _eglSurface;
    uStrong< ::g::Java::Object*> _graphicsViewHandle;
    void* _nativeWindow;
    uStrong< ::g::Java::Object*> _surfaceHandle;

    void ctor_6(::g::Java::Object* handle);
    bool BeginDraw(::g::Uno::Int2 size);
    void DestroySurface();
    void EndDraw();
    ::g::Java::Object* GraphicsViewHandle();
    void SetSurface(::g::Java::Object* surfaceHandle);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
