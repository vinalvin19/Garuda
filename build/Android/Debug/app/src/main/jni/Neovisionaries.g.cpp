// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Java.Object.h>
#include <jni.h>
#include <Neovisionaries.WebSocketClient.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno/JNIHelper.h>

namespace g{
namespace Neovisionaries{

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Fuse.WebSockets\1.2.0\android\neovisionaries\$.uno
// --------------------------------------------------------------------------------------------------

// internal sealed extern class WebSocketClient :15
// {
static void WebSocketClient_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(WebSocketClient_type, interface0));
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Neovisionaries::WebSocketClient, _webSocket), 0);
}

WebSocketClient_type* WebSocketClient_typeof()
{
    static uSStrong<WebSocketClient_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(WebSocketClient);
    options.TypeSize = sizeof(WebSocketClient_type);
    type = (WebSocketClient_type*)uClassType::New("Neovisionaries.WebSocketClient", options);
    type->fp_build_ = WebSocketClient_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))WebSocketClient__Dispose_fn;
    return type;
}

// public void Dispose() :105
void WebSocketClient__Dispose_fn(WebSocketClient* __this)
{
    __this->Dispose();
}

// public void Dispose() [instance] :105
void WebSocketClient::Dispose()
{
    _webSocket = NULL;
}
// }

}} // ::g::Neovisionaries
