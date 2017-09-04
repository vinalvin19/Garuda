// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.WebSockets/1.2.0/android/neovisionaries/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Java{struct Object;}}
namespace g{namespace Neovisionaries{struct WebSocketClient;}}

namespace g{
namespace Neovisionaries{

// internal sealed extern class WebSocketClient :15
// {
struct WebSocketClient_type : uType
{
    ::g::Uno::IDisposable interface0;
};

WebSocketClient_type* WebSocketClient_typeof();
void WebSocketClient__Dispose_fn(WebSocketClient* __this);

struct WebSocketClient : uObject
{
    uStrong< ::g::Java::Object*> _webSocket;

    void Dispose();
};
// }

}} // ::g::Neovisionaries
