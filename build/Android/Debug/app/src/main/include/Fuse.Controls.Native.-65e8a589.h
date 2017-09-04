// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Controls.Native/1.2.0/android/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-11768b55.h>
#include <Fuse.Controls.Native.-952ea184.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct Ellipse;}}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// internal sealed extern class Ellipse :195
// {
::g::Fuse::Controls::Native::Android::Shape_type* Ellipse_typeof();
void Ellipse__ctor_7_fn(Ellipse* __this);
void Ellipse__New4_fn(Ellipse** __retval);
void Ellipse__UpdateShapeDrawable1_fn(Ellipse* __this, ::g::Java::Object* handle);
void Ellipse__UpdateShapeDrawable_fn(Ellipse* __this, ::g::Java::Object* handle, float* pixelsPerPoint);

struct Ellipse : ::g::Fuse::Controls::Native::Android::Shape
{
    void ctor_7();
    void UpdateShapeDrawable1(::g::Java::Object* handle);
    static Ellipse* New4();
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
