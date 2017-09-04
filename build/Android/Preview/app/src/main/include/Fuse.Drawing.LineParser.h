// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Drawing.Surface/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct LineParser;}}}
namespace g{namespace Fuse{namespace Drawing{struct LineSegment;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// public sealed class LineParser :2438
// {
uType* LineParser_typeof();
void LineParser__ctor__fn(LineParser* __this);
void LineParser__New1_fn(LineParser** __retval);
void LineParser__ParseSVGPath_fn(uString* data, uObject* segments);

struct LineParser : uObject
{
    void ctor_();
    static LineParser* New1();
    static void ParseSVGPath(uString* data, uObject* segments);
};
// }

}}} // ::g::Fuse::Drawing
