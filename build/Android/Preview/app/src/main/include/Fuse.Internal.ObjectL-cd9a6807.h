// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Common/1.2.0/internal/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct ObjectList__Node;}}}

namespace g{
namespace Fuse{
namespace Internal{

// private struct ObjectList<T>.Node :1794
// {
uStructType* ObjectList__Node_typeof();
void ObjectList__Node__Clear_fn(ObjectList__Node* __this, uType* __type);

struct ObjectList__Node
{
    uStrong<uObject*> Value;
    int Next;
    int Prev;
    int8_t AddVersion;
    int8_t RemoveVersion;
    int Ordered;

    void Clear(uType* __type);
};
// }

}}} // ::g::Fuse::Internal
