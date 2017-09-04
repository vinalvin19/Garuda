// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Controls.WebView/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{namespace Controls{struct URISchemeEventArgs;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class URISchemeEventArgs :804
// {
uType* URISchemeEventArgs_typeof();
void URISchemeEventArgs__ctor_1_fn(URISchemeEventArgs* __this, uString* url);
void URISchemeEventArgs__New2_fn(uString* url, URISchemeEventArgs** __retval);

struct URISchemeEventArgs : ::g::Uno::EventArgs
{
    uStrong<uString*> Url;

    void ctor_1(uString* url);
    static URISchemeEventArgs* New2(uString* url);
};
// }

}}} // ::g::Fuse::Controls
