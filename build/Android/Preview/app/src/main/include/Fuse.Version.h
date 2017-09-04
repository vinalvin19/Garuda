// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Common/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct Version;}}

namespace g{
namespace Fuse{

// public static class Version :3954
// {
uClassType* Version_typeof();

struct Version : uObject
{
    static int Major_;
    static int& Major() { return Version_typeof()->Init(), Major_; }
    static int Minor_;
    static int& Minor() { return Version_typeof()->Init(), Minor_; }
    static int Patch_;
    static int& Patch() { return Version_typeof()->Init(), Patch_; }
    static uSStrong<uString*> String_;
    static uSStrong<uString*>& String() { return Version_typeof()->Init(), String_; }
};
// }

}} // ::g::Fuse
