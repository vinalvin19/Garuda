// This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/Uno.Testing/1.2.1/exceptions/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{namespace Testing{struct AssertionFailedException;}}}

namespace g{
namespace Uno{
namespace Testing{

// internal sealed class AssertionFailedException :5
// {
::g::Uno::Exception_type* AssertionFailedException_typeof();
void AssertionFailedException__ctor_3_fn(AssertionFailedException* __this, uString* fileName, int* line, uString* memberName, uString* expected, uString* actual);
void AssertionFailedException__New4_fn(uString* fileName, int* line, uString* memberName, uString* expected, uString* actual, AssertionFailedException** __retval);

struct AssertionFailedException : ::g::Uno::Exception
{
    uStrong<uObject*> Actual;
    uStrong<uObject*> Expected;
    uStrong<uString*> FileName;
    int Line;
    uStrong<uString*> MemberName;

    void ctor_3(uString* fileName, int line, uString* memberName, uString* expected, uString* actual);
    static AssertionFailedException* New4(uString* fileName, int line, uString* memberName, uString* expected, uString* actual);
};
// }

}}} // ::g::Uno::Testing
