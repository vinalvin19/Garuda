// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Controls.Primitives/1.2.0/textcontrols/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ViewHandle;}}}}
namespace g{namespace Fuse{namespace Controls{struct TextEditRenderer;}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{

// internal sealed extern class TextEditRenderer :1507
// {
uType* TextEditRenderer_typeof();
void TextEditRenderer__ctor__fn(TextEditRenderer* __this);
void TextEditRenderer__CopyState_fn(::g::Java::Object* container, ::g::Java::Object* sourceHandle, ::g::Java::Object* targetHandle);
void TextEditRenderer__CreateContainer_fn(::g::Java::Object** __retval);
void TextEditRenderer__CreateTextEdit_fn(::g::Java::Object** __retval);
void TextEditRenderer__Draw_fn(TextEditRenderer* __this, uObject* renderer, ::g::Fuse::Controls::Native::ViewHandle* viewHandle, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Float2* position, ::g::Uno::Float2* size, float* density);
void TextEditRenderer__New1_fn(TextEditRenderer** __retval);
void TextEditRenderer__NewRenderer_fn(uObject** __retval);

struct TextEditRenderer : uObject
{
    uStrong< ::g::Fuse::Controls::Native::ViewHandle*> _container;
    uStrong< ::g::Fuse::Controls::Native::ViewHandle*> _renderView;
    static uSStrong<TextEditRenderer*> Instance_;
    static uSStrong<TextEditRenderer*>& Instance() { return TextEditRenderer_typeof()->Init(), Instance_; }

    void ctor_();
    void Draw(uObject* renderer, ::g::Fuse::Controls::Native::ViewHandle* viewHandle, ::g::Uno::Float4x4 localToClipTransform, ::g::Uno::Float2 position, ::g::Uno::Float2 size, float density);
    static void CopyState(::g::Java::Object* container, ::g::Java::Object* sourceHandle, ::g::Java::Object* targetHandle);
    static ::g::Java::Object* CreateContainer();
    static ::g::Java::Object* CreateTextEdit();
    static TextEditRenderer* New1();
    static uObject* NewRenderer();
};
// }

}}} // ::g::Fuse::Controls
