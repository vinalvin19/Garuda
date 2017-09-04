// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Drawing.Surface/1.2.0/android/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Runtime.Implement-476e2792.h>
namespace g{namespace Fuse{namespace Drawing{struct AndroidGraphicsDrawHelper;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed extern class AndroidGraphicsDrawHelper :849
// {
uType* AndroidGraphicsDrawHelper_typeof();
void AndroidGraphicsDrawHelper__ctor__fn(AndroidGraphicsDrawHelper* __this);
void AndroidGraphicsDrawHelper__DrawImageFill_fn(AndroidGraphicsDrawHelper* __this, ::g::Uno::Graphics::Texture2D* texture);
void AndroidGraphicsDrawHelper__init_DrawCalls_fn(AndroidGraphicsDrawHelper* __this);
void AndroidGraphicsDrawHelper__New1_fn(AndroidGraphicsDrawHelper** __retval);

struct AndroidGraphicsDrawHelper : uObject
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_d190bdb5;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> DrawImageFill_VertexData_d190bdb5_1_1_1;
    static uSStrong<AndroidGraphicsDrawHelper*> Singleton_;
    static uSStrong<AndroidGraphicsDrawHelper*>& Singleton() { return AndroidGraphicsDrawHelper_typeof()->Init(), Singleton_; }

    void ctor_();
    void DrawImageFill(::g::Uno::Graphics::Texture2D* texture);
    void init_DrawCalls();
    static AndroidGraphicsDrawHelper* New1();
};
// }

}}} // ::g::Fuse::Drawing
