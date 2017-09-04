// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Collections.List-1.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Testing.Assert.h>
#include <Uno.Testing.Assertion-65eaa948.h>
#include <Uno.Testing.NamedTestMethod.h>
#include <Uno.Testing.Registry.h>
#include <Uno.Testing.TestAttribute.h>
static uString* STRINGS[1];
static uType* TYPES[1];

namespace g{
namespace Uno{
namespace Testing{

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Testing\1.2.1\$.uno
// -----------------------------------------------------------------------

// public partial static class Assert :131
// {
// static Assert() :131
static void Assert__cctor__fn(uType* __type)
{
    Assert::maxStringLength_ = 300;
}

static void Assert_build(uType* type)
{
    ::STRINGS[0] = uString::Const("");
    type->SetFields(0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Uno::Testing::Assert::maxStringLength_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction("Fail", NULL, (void*)Assert__Fail_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::String_typeof()));
}

uClassType* Assert_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Testing.Assert", options);
    type->fp_build_ = Assert_build;
    type->fp_cctor_ = Assert__cctor__fn;
    return type;
}

// public static void Fail(string message, [string filePath], [int lineNumber], [string memberName]) :550
void Assert__Fail_fn(uString* message, uString* filePath, int* lineNumber, uString* memberName)
{
    Assert::Fail(message, filePath, *lineNumber, memberName);
}

// private static void ReportFailure(string filePath, int lineNumber, string memberName, string expected, string actual) :143
void Assert__ReportFailure_fn(uString* filePath, int* lineNumber, uString* memberName, uString* expected, uString* actual)
{
    Assert::ReportFailure(filePath, *lineNumber, memberName, expected, actual);
}

int Assert::maxStringLength_;

// public static void Fail(string message, [string filePath], [int lineNumber], [string memberName]) [static] :550
void Assert::Fail(uString* message, uString* filePath, int lineNumber, uString* memberName)
{
    uStackFrame __("Uno.Testing.Assert", "Fail(string,[string],[int],[string])");
    Assert_typeof()->Init();
    Assert::ReportFailure(filePath, lineNumber, memberName, ::STRINGS[0/*""*/], message);
}

// private static void ReportFailure(string filePath, int lineNumber, string memberName, string expected, string actual) [static] :143
void Assert::ReportFailure(uString* filePath, int lineNumber, uString* memberName, uString* expected, uString* actual)
{
    uStackFrame __("Uno.Testing.Assert", "ReportFailure(string,int,string,string,string)");
    Assert_typeof()->Init();
    U_THROW(::g::Uno::Testing::AssertionFailedException::New4(filePath, lineNumber, memberName, expected, actual));
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Testing\1.2.1\exceptions\$.uno
// ----------------------------------------------------------------------------------

// internal sealed class AssertionFailedException :5
// {
static void AssertionFailedException_build(uType* type)
{
    type->SetFields(4,
        uObject_typeof(), offsetof(::g::Uno::Testing::AssertionFailedException, Actual), 0,
        uObject_typeof(), offsetof(::g::Uno::Testing::AssertionFailedException, Expected), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Testing::AssertionFailedException, FileName), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Testing::AssertionFailedException, Line), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Testing::AssertionFailedException, MemberName), 0);
}

::g::Uno::Exception_type* AssertionFailedException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(AssertionFailedException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.Testing.AssertionFailedException", options);
    type->fp_build_ = AssertionFailedException_build;
    return type;
}

// public AssertionFailedException(string fileName, int line, string memberName, string expected, string actual) :13
void AssertionFailedException__ctor_3_fn(AssertionFailedException* __this, uString* fileName, int* line, uString* memberName, uString* expected, uString* actual)
{
    __this->ctor_3(fileName, *line, memberName, expected, actual);
}

// public AssertionFailedException New(string fileName, int line, string memberName, string expected, string actual) :13
void AssertionFailedException__New4_fn(uString* fileName, int* line, uString* memberName, uString* expected, uString* actual, AssertionFailedException** __retval)
{
    *__retval = AssertionFailedException::New4(fileName, *line, memberName, expected, actual);
}

// public AssertionFailedException(string fileName, int line, string memberName, string expected, string actual) [instance] :13
void AssertionFailedException::ctor_3(uString* fileName, int line, uString* memberName, uString* expected, uString* actual)
{
    ctor_();
    FileName = fileName;
    Line = line;
    MemberName = memberName;
    Expected = expected;
    Actual = actual;
}

// public AssertionFailedException New(string fileName, int line, string memberName, string expected, string actual) [static] :13
AssertionFailedException* AssertionFailedException::New4(uString* fileName, int line, uString* memberName, uString* expected, uString* actual)
{
    AssertionFailedException* obj1 = (AssertionFailedException*)uNew(AssertionFailedException_typeof());
    obj1->ctor_3(fileName, line, memberName, expected, actual);
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Testing\1.2.1\$.uno
// -----------------------------------------------------------------------

// internal sealed class NamedTestMethod :867
// {
static void NamedTestMethod_build(uType* type)
{
}

uType* NamedTestMethod_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(NamedTestMethod);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Testing.NamedTestMethod", options);
    type->fp_build_ = NamedTestMethod_build;
    return type;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Testing\1.2.1\$.uno
// -----------------------------------------------------------------------

// public sealed class Registry :893
// {
static void Registry_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Testing::NamedTestMethod_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[0/*Uno.Collections.List<Uno.Testing.NamedTestMethod>*/], offsetof(::g::Uno::Testing::Registry, _tests), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Registry__New1_fn, 0, true, type, 0));
}

uType* Registry_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Registry);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Testing.Registry", options);
    type->fp_build_ = Registry_build;
    type->fp_ctor_ = (void*)Registry__New1_fn;
    return type;
}

// public generated Registry() :893
void Registry__ctor__fn(Registry* __this)
{
    __this->ctor_();
}

// public generated Registry New() :893
void Registry__New1_fn(Registry** __retval)
{
    *__retval = Registry::New1();
}

// public generated Registry() [instance] :893
void Registry::ctor_()
{
    _tests = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<Uno.Testing.NamedTestMethod>*/]));
}

// public generated Registry New() [static] :893
Registry* Registry::New1()
{
    Registry* obj1 = (Registry*)uNew(Registry_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\Users\Lotus\AppData\Local\Fusetools\Packages\Uno.Testing\1.2.1\attributes\$.uno
// ----------------------------------------------------------------------------------

// public sealed class TestAttribute :25
// {
static void TestAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TestAttribute__New1_fn, 0, true, type, 0));
}

uType* TestAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(TestAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Testing.TestAttribute", options);
    type->fp_build_ = TestAttribute_build;
    type->fp_ctor_ = (void*)TestAttribute__New1_fn;
    return type;
}

// public generated TestAttribute() :25
void TestAttribute__ctor_1_fn(TestAttribute* __this)
{
    __this->ctor_1();
}

// public generated TestAttribute New() :25
void TestAttribute__New1_fn(TestAttribute** __retval)
{
    *__retval = TestAttribute::New1();
}

// public generated TestAttribute() [instance] :25
void TestAttribute::ctor_1()
{
    ctor_();
}

// public generated TestAttribute New() [static] :25
TestAttribute* TestAttribute::New1()
{
    TestAttribute* obj1 = (TestAttribute*)uNew(TestAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

}}} // ::g::Uno::Testing
