# This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/UnoCore/1.2.1/targets/android/app/src/main/Makefile.
# WARNING: Changes might be lost if you edit this file directly.

CC = arm-linux-androideabi-gcc
CXX = arm-linux-androideabi-g++
STRIP = arm-linux-androideabi-strip
UNO = C:/Program\ Files\ (x86)/Fuse/uno.exe
NDK_DIR = ""
SYSROOT_DIR = $(NDK_DIR)/platforms/android-9/arch-arm
SONAME = libgaruda.so
ABI = armeabi-v7a

CFLAGS = -O3 -g -DNDEBUG
INCLUDE_DIRS = -Iinclude -IC:/Users/Lotus/AppData/Local/Fusetools/Packages/UnoCore/1.2.1/prebuilt/Android/include -I/sources/android/support/include -IC:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Scripting.V8/1.2.0
LD_DIRS = -LC:/Users/Lotus/AppData/Local/Fusetools/Packages/UnoCore/1.2.1/prebuilt/Android/lib/armeabi-v7a -L/sources/cxx-stl/gnu-libstdc++/4.9/libs/armeabi-v7a -LC:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Scripting.V8/1.2.0/lib/Android
LD_LIBS = -landroid -llog -lgnustl_shared -lV8Simple -lEGL -lGLESv2 -lz
STRIP_FLAGS = 

COMMON_FLAGS = \
	$(CFLAGS) \
	$(INCLUDE_DIRS) \
	--sysroot=$(SYSROOT_DIR) \
	-DANDROID \
	-fdata-sections \
	-ffunction-sections \
	-finline-limit=64 \
	-fno-strict-aliasing \
	-fomit-frame-pointer \
	-fpic \
	-fsigned-char \
	-funwind-tables \
	-isystem $(SYSROOT_DIR)/usr/include \
	-march=armv7-a \
	-mfloat-abi=softfp \
	-mfpu=vfpv3-d16 \
	-mthumb \
	-no-canonical-prefixes \
	-Wa,--noexecstack \
	-Wno-psabi

CXX_FLAGS = \
	$(COMMON_FLAGS) \
	-fexceptions \
	-frtti \
	-isystem /sources/cxx-stl/gnu-libstdc++/4.9/include \
	-Wno-invalid-offsetof \
	-std=c++11

CC_FLAGS = \
	$(COMMON_FLAGS) \
	-std=c99

LD_FLAGS = \
	$(CXX_FLAGS) \
	$(LD_DIRS) \
	$(LD_LIBS) \
	-Wl,--fix-cortex-a8 \
	-Wl,--gc-sections \
	-Wl,--no-undefined \
	-Wl,-z,noexecstack \
	-Wl,-z,now \
	-Wl,-z,relro

STATIC_LIBS = \
	C:/Users/Lotus/AppData/Local/Fusetools/Packages/UnoCore/1.2.1/prebuilt/Android/lib/armeabi-v7a/libuImage.a \
	C:/Users/Lotus/AppData/Local/Fusetools/Packages/UnoCore/1.2.1/prebuilt/Android/lib/armeabi-v7a/libpng.a \
	C:/Users/Lotus/AppData/Local/Fusetools/Packages/UnoCore/1.2.1/prebuilt/Android/lib/armeabi-v7a/libjpeg.a \
	C:/Users/Lotus/AppData/Local/Fusetools/Packages/UnoCore/1.2.1/prebuilt/Android/lib/armeabi-v7a/libfreetype.a \
	C:/Users/Lotus/AppData/Local/Fusetools/Packages/UnoCore/1.2.1/prebuilt/Android/lib/armeabi-v7a/libXliMain.a \
	C:/Users/Lotus/AppData/Local/Fusetools/Packages/UnoCore/1.2.1/prebuilt/Android/lib/armeabi-v7a/libXliPlatform.a \
	C:/Users/Lotus/AppData/Local/Fusetools/Packages/UnoCore/1.2.1/prebuilt/Android/lib/armeabi-v7a/libuBase.a

all: libs/$(ABI)/$(SONAME)
all: libs/$(ABI)/libgnustl_shared.so
all: libs/$(ABI)/libV8Simple.so
all: libs/$(ABI)/gdbserver
all: libs/$(ABI)/gdb.setup

libs/$(ABI)/gdbserver: | libs/$(ABI)
	$(UNO) cp $(NDK_DIR)/prebuilt/android-arm/gdbserver/gdbserver libs/$(ABI)

libs/$(ABI)/gdb.setup: gdb.setup | libs/$(ABI)
	$(UNO) cp gdb.setup libs/$(ABI)

libs/$(ABI)/$(SONAME): .uno/Uno/_invoke.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/_mainMobile.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/Memory.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/NativeStackTrace.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/ObjectModel.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/Support.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/Base64.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/EntryPoints.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/JNIHelper.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/Graphics/GLHelper.cpp.o
libs/$(ABI)/$(SONAME): .uno/Implementation/Posix/posix_mutex.cpp.o
libs/$(ABI)/$(SONAME): .uno/Implementation/Posix/posix_reset_event.cpp.o
libs/$(ABI)/$(SONAME): .uno/Implementation/Posix/posix_semaphore.cpp.o
libs/$(ABI)/$(SONAME): .uno/Implementation/Posix/posix_thread.cpp.o
libs/$(ABI)/$(SONAME): .uno/BootstrapperImpl_Android.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.garuda_accessor_Tab_Text.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.garuda_bundle.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.garuda_FuseCont-5ae182df.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.garuda_FuseCont-11b35377.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.garuda_FuseElem-38d84375.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.garuda_Tab_Text_Property.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.MainView.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.page1Text.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.page1TextBawah.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.PagePlaceholder.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.Tab.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.TabIcon.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.WelcomeText.cpp.o
libs/$(ABI)/$(SONAME): .uno/OpenGL.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Collections.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Diagnostics.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Graphics.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.IO.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Platform.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Platform.EventSources.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Runtime.Implementation.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Runtime.Implementation.Internal.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Runtime.InteropServices.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Text.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Threading.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Time.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Time.Calendars.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Time.Text.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.UX.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Data.Json.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Net.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Net.Sockets.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Net.Http.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Net.Http.Implementation.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Java.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.Base.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.Base.Primitives.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.Base.Types.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.Base.Wrappers.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.com.fuse.ExperimentalHttp.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Platform.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Animations.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Preview.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Internal.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Internal.Drawing.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Resources.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Scripting.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Scripting.V8.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Scripting.V8.Simple.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Controls.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Controls.Native.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Controls.Native.Android.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Controls.Native.iOS.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Controls.Graphics.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Controls.NavigationInternal.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Controls.VideoImpl.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Controls.VideoImpl.Android.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Input.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Reactive.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Reactive.FuseJS.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Motion.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Motion.Simulation.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Drawing.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Drawing.Internal.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Drawing.Primitives.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Triggers.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Triggers.Actions.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Elements.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Elements.Internal.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Effects.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Gestures.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Gestures.Internal.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Navigation.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Layouts.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Android.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Android.Controls.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.FileSystem.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Selection.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Storage.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Testing.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.WebSocket.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Experimental.Http.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Experimental.Http.Internal.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Experimental.Cache.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Experimental.TextureLoader.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Neovisionaries.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Polyfills.Window.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/FuseJS.g.cpp.o
libs/$(ABI)/$(SONAME): $(STATIC_LIBS) Makefile link.x | libs/$(ABI)
	$(CXX) $(LD_FLAGS) -shared -Wl,-soname,$(SONAME) -o .uno/$(SONAME) link.x $(STATIC_LIBS)
	$(STRIP) $(STRIP_FLAGS) -o libs/$(ABI)/$(SONAME) .uno/$(SONAME)

libs/$(ABI)/libgnustl_shared.so: /sources/cxx-stl/gnu-libstdc++/4.9/libs/armeabi-v7a/libgnustl_shared.so | libs/$(ABI)
	$(UNO) cp /sources/cxx-stl/gnu-libstdc++/4.9/libs/armeabi-v7a/libgnustl_shared.so libs/$(ABI)/libgnustl_shared.so

libs/$(ABI)/libV8Simple.so: C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Scripting.V8/1.2.0/lib/Android/libV8Simple.so | libs/$(ABI)
	$(UNO) cp C:/Users/Lotus/AppData/Local/Fusetools/Packages/Fuse.Scripting.V8/1.2.0/lib/Android/libV8Simple.so libs/$(ABI)/libV8Simple.so

.uno/Uno/_invoke.cpp.o: include/Uno/ObjectModel.h
.uno/Uno/_invoke.cpp.o: jni/Uno/_invoke.cpp flags.txt | .uno/Uno
	echo Uno/_invoke.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/_invoke.cpp.o -c jni/Uno/_invoke.cpp

.uno/Uno/_mainMobile.cpp.o: include/Uno/Support.h
.uno/Uno/_mainMobile.cpp.o: include/Uno.Exception.h
.uno/Uno/_mainMobile.cpp.o: include/Uno.Platform.CoreApp.h
.uno/Uno/_mainMobile.cpp.o: include/Uno.String.h
.uno/Uno/_mainMobile.cpp.o: include/_root.MainView.h
.uno/Uno/_mainMobile.cpp.o: jni/Uno/_mainMobile.cpp flags.txt | .uno/Uno
	echo Uno/_mainMobile.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/_mainMobile.cpp.o -c jni/Uno/_mainMobile.cpp

.uno/Uno/Memory.cpp.o: include/Uno/_internal.h
.uno/Uno/Memory.cpp.o: include/Uno/Support.h
.uno/Uno/Memory.cpp.o: include/Uno.Type.h
.uno/Uno/Memory.cpp.o: include/Uno.String.h
.uno/Uno/Memory.cpp.o: jni/Uno/Memory.cpp flags.txt | .uno/Uno
	echo Uno/Memory.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/Memory.cpp.o -c jni/Uno/Memory.cpp

.uno/Uno/NativeStackTrace.cpp.o: include/Uno.IntPtr.h
.uno/Uno/NativeStackTrace.cpp.o: jni/Uno/NativeStackTrace.cpp flags.txt | .uno/Uno
	echo Uno/NativeStackTrace.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/NativeStackTrace.cpp.o -c jni/Uno/NativeStackTrace.cpp

.uno/Uno/ObjectModel.cpp.o: include/Uno/_internal.h
.uno/Uno/ObjectModel.cpp.o: include/Uno/Support.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.Bool.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.Byte.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.Char.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.Float.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.Int.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.Object.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.SByte.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.Short.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.String.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.UShort.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.Delegate.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.IndexOutOfRangeException.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.InvalidCastException.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.InvalidOperationException.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.NullReferenceException.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.Type.h
.uno/Uno/ObjectModel.cpp.o: jni/Uno/ObjectModel.cpp flags.txt | .uno/Uno
	echo Uno/ObjectModel.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/ObjectModel.cpp.o -c jni/Uno/ObjectModel.cpp

.uno/Uno/Support.cpp.o: include/Uno/Support.h
.uno/Uno/Support.cpp.o: include/Uno.Byte.h
.uno/Uno/Support.cpp.o: include/Uno.Buffer.h
.uno/Uno/Support.cpp.o: jni/Uno/Support.cpp flags.txt | .uno/Uno
	echo Uno/Support.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/Support.cpp.o -c jni/Uno/Support.cpp

.uno/Uno/Base64.cpp.o: include/Uno.h
.uno/Uno/Base64.cpp.o: jni/Uno/Base64.cpp flags.txt | .uno/Uno
	echo Uno/Base64.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/Base64.cpp.o -c jni/Uno/Base64.cpp

.uno/Uno/EntryPoints.cpp.o: include/Uno/AndroidCommon.h
.uno/Uno/EntryPoints.cpp.o: include/Uno/JNIHelper.h
.uno/Uno/EntryPoints.cpp.o: include/Uno/Graphics/GLHelper.h
.uno/Uno/EntryPoints.cpp.o: include/Android.Base.JNI.h
.uno/Uno/EntryPoints.cpp.o: include/Uno.Platform.CoreApp.h
.uno/Uno/EntryPoints.cpp.o: include/Uno.Platform.TimerEventArgs.h
.uno/Uno/EntryPoints.cpp.o: include/Uno.Platform.EventSou-b16da529.h
.uno/Uno/EntryPoints.cpp.o: include/Uno.Platform.EventSou-afb2ad40.h
.uno/Uno/EntryPoints.cpp.o: include/Uno.Compiler.ExportTa-7a61a803.h
.uno/Uno/EntryPoints.cpp.o: jni/Uno/EntryPoints.cpp flags.txt | .uno/Uno
	echo Uno/EntryPoints.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/EntryPoints.cpp.o -c jni/Uno/EntryPoints.cpp

.uno/Uno/JNIHelper.cpp.o: include/Uno/JNIHelper.h
.uno/Uno/JNIHelper.cpp.o: jni/Uno/JNIHelper.cpp flags.txt | .uno/Uno
	echo Uno/JNIHelper.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/JNIHelper.cpp.o -c jni/Uno/JNIHelper.cpp

.uno/Uno/Graphics/GLHelper.cpp.o: include/Uno/Graphics/GLHelper.h
.uno/Uno/Graphics/GLHelper.cpp.o: include/Uno/JNIHelper.h
.uno/Uno/Graphics/GLHelper.cpp.o: include/Uno.Exception.h
.uno/Uno/Graphics/GLHelper.cpp.o: jni/Uno/Graphics/GLHelper.cpp flags.txt | .uno/Uno/Graphics
	echo Uno/Graphics/GLHelper.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/Graphics/GLHelper.cpp.o -c jni/Uno/Graphics/GLHelper.cpp

.uno/Implementation/Posix/posix_mutex.cpp.o: include/Implementation/Posix/posix_mutex.h
.uno/Implementation/Posix/posix_mutex.cpp.o: jni/Implementation/Posix/posix_mutex.cpp flags.txt | .uno/Implementation/Posix
	echo Implementation/Posix/posix_mutex.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Implementation/Posix/posix_mutex.cpp.o -c jni/Implementation/Posix/posix_mutex.cpp

.uno/Implementation/Posix/posix_reset_event.cpp.o: include/Implementation/Posix/posix_reset_event.h
.uno/Implementation/Posix/posix_reset_event.cpp.o: jni/Implementation/Posix/posix_reset_event.cpp flags.txt | .uno/Implementation/Posix
	echo Implementation/Posix/posix_reset_event.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Implementation/Posix/posix_reset_event.cpp.o -c jni/Implementation/Posix/posix_reset_event.cpp

.uno/Implementation/Posix/posix_semaphore.cpp.o: include/Implementation/Posix/posix_semaphore.h
.uno/Implementation/Posix/posix_semaphore.cpp.o: jni/Implementation/Posix/posix_semaphore.cpp flags.txt | .uno/Implementation/Posix
	echo Implementation/Posix/posix_semaphore.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Implementation/Posix/posix_semaphore.cpp.o -c jni/Implementation/Posix/posix_semaphore.cpp

.uno/Implementation/Posix/posix_thread.cpp.o: include/Uno/Uno.h
.uno/Implementation/Posix/posix_thread.cpp.o: include/Implementation/Posix/posix_thread.h
.uno/Implementation/Posix/posix_thread.cpp.o: jni/Implementation/Posix/posix_thread.cpp flags.txt | .uno/Implementation/Posix
	echo Implementation/Posix/posix_thread.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Implementation/Posix/posix_thread.cpp.o -c jni/Implementation/Posix/posix_thread.cpp

.uno/BootstrapperImpl_Android.cpp.o: include/BootstrapperImpl_Android.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Base.JNI.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Base.Types.Bridge.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.com.fuse.Expe-9d584358.h
.uno/BootstrapperImpl_Android.cpp.o: jni/BootstrapperImpl_Android.cpp flags.txt | .uno
	echo BootstrapperImpl_Android.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/BootstrapperImpl_Android.cpp.o -c jni/BootstrapperImpl_Android.cpp

.uno/_root.g.cpp.o: include/_root.FuseAndroidText-9d82b652.h
.uno/_root.g.cpp.o: include/_root.FuseControls_bundle.h
.uno/_root.g.cpp.o: include/_root.FuseControlsNav-a8c01cdb.h
.uno/_root.g.cpp.o: include/_root.FuseControlsNav-bfeb1093.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPan-1146454c.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPri-3832896e.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPri-38e137c8.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPri-3bbae333.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPri-5e35c2db.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPri-6b573bdb.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPri-7b4ecfe6.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPri-8507d6ea.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPri-accbb5bd.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPri-ca138e33.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPri-ce42971.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPri-d52a5a11.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPri-d9ada289.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPri-e9d2ee5b.h
.uno/_root.g.cpp.o: include/_root.FuseControlsScr-48813899.h
.uno/_root.g.cpp.o: include/_root.FuseControlsScr-f1bcb258.h
.uno/_root.g.cpp.o: include/_root.FuseControlsVideo_bundle.h
.uno/_root.g.cpp.o: include/_root.FuseDrawing_bundle.h
.uno/_root.g.cpp.o: include/_root.FuseDrawingPrim-c6713933.h
.uno/_root.g.cpp.o: include/_root.FuseDrawingSurf-41037ecc.h
.uno/_root.g.cpp.o: include/_root.FuseEffects_bundle.h
.uno/_root.g.cpp.o: include/_root.FuseElements_bundle.h
.uno/_root.g.cpp.o: include/_root.FuseNodes_bundle.h
.uno/_root.g.cpp.o: include/Fuse.Controls.ButtonBase.h
.uno/_root.g.cpp.o: include/Fuse.Controls.Panel.h
.uno/_root.g.cpp.o: include/Fuse.Controls.ScrollViewBase.h
.uno/_root.g.cpp.o: include/Fuse.Controls.Shape.h
.uno/_root.g.cpp.o: include/Fuse.Controls.TextControl.h
.uno/_root.g.cpp.o: include/Fuse.Controls.ToggleControl.h
.uno/_root.g.cpp.o: include/Fuse.Drawing.SolidColor.h
.uno/_root.g.cpp.o: include/Fuse.Drawing.Stroke.h
.uno/_root.g.cpp.o: include/Fuse.Effects.DropShadow.h
.uno/_root.g.cpp.o: include/Fuse.Elements.Element.h
.uno/_root.g.cpp.o: include/Fuse.Gestures.SwipeGesture.h
.uno/_root.g.cpp.o: include/Fuse.Triggers.WhileBool.h
.uno/_root.g.cpp.o: include/Uno.Bool.h
.uno/_root.g.cpp.o: include/Uno.Int.h
.uno/_root.g.cpp.o: include/Uno.Object.h
.uno/_root.g.cpp.o: include/Uno.Runtime.Implement-6e9df330.h
.uno/_root.g.cpp.o: include/Uno.String.h
.uno/_root.g.cpp.o: include/Uno.Type.h
.uno/_root.g.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/_root.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/_root.g.cpp.o: include/Uno.UX.Selector.h
.uno/_root.g.cpp.o: jni/_root.g.cpp flags.txt | .uno
	echo _root.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.g.cpp.o -c jni/_root.g.cpp

.uno/_root.garuda_accessor_Tab_Text.cpp.o: include/_root.garuda_accessor_Tab_Text.h
.uno/_root.garuda_accessor_Tab_Text.cpp.o: include/_root.Tab.h
.uno/_root.garuda_accessor_Tab_Text.cpp.o: include/Uno.Bool.h
.uno/_root.garuda_accessor_Tab_Text.cpp.o: include/Uno.Object.h
.uno/_root.garuda_accessor_Tab_Text.cpp.o: include/Uno.String.h
.uno/_root.garuda_accessor_Tab_Text.cpp.o: include/Uno.Type.h
.uno/_root.garuda_accessor_Tab_Text.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/_root.garuda_accessor_Tab_Text.cpp.o: include/Uno.UX.PropertyObject.h
.uno/_root.garuda_accessor_Tab_Text.cpp.o: include/Uno.UX.Selector.h
.uno/_root.garuda_accessor_Tab_Text.cpp.o: jni/_root.garuda_accessor_Tab_Text.cpp flags.txt | .uno
	echo _root.garuda_accessor_Tab_Text.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.garuda_accessor_Tab_Text.cpp.o -c jni/_root.garuda_accessor_Tab_Text.cpp

.uno/_root.garuda_bundle.cpp.o: include/_root.garuda_bundle.h
.uno/_root.garuda_bundle.cpp.o: include/Uno.IO.Bundle.h
.uno/_root.garuda_bundle.cpp.o: include/Uno.IO.BundleFile.h
.uno/_root.garuda_bundle.cpp.o: include/Uno.String.h
.uno/_root.garuda_bundle.cpp.o: jni/_root.garuda_bundle.cpp flags.txt | .uno
	echo _root.garuda_bundle.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.garuda_bundle.cpp.o -c jni/_root.garuda_bundle.cpp

.uno/_root.garuda_FuseCont-5ae182df.cpp.o: include/_root.garuda_FuseCont-5ae182df.h
.uno/_root.garuda_FuseCont-5ae182df.cpp.o: include/Fuse.Controls.Navigat-70e90308.h
.uno/_root.garuda_FuseCont-5ae182df.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/_root.garuda_FuseCont-5ae182df.cpp.o: include/Uno.UX.PropertyObject.h
.uno/_root.garuda_FuseCont-5ae182df.cpp.o: include/Uno.UX.Selector.h
.uno/_root.garuda_FuseCont-5ae182df.cpp.o: jni/_root.garuda_FuseCont-5ae182df.cpp flags.txt | .uno
	echo _root.garuda_FuseCont-5ae182df.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.garuda_FuseCont-5ae182df.cpp.o -c jni/_root.garuda_FuseCont-5ae182df.cpp

.uno/_root.garuda_FuseCont-11b35377.cpp.o: include/_root.garuda_FuseCont-11b35377.h
.uno/_root.garuda_FuseCont-11b35377.cpp.o: include/Fuse.Controls.TextControl.h
.uno/_root.garuda_FuseCont-11b35377.cpp.o: include/Uno.Bool.h
.uno/_root.garuda_FuseCont-11b35377.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/_root.garuda_FuseCont-11b35377.cpp.o: include/Uno.UX.PropertyObject.h
.uno/_root.garuda_FuseCont-11b35377.cpp.o: jni/_root.garuda_FuseCont-11b35377.cpp flags.txt | .uno
	echo _root.garuda_FuseCont-11b35377.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.garuda_FuseCont-11b35377.cpp.o -c jni/_root.garuda_FuseCont-11b35377.cpp

.uno/_root.garuda_FuseElem-38d84375.cpp.o: include/_root.garuda_FuseElem-38d84375.h
.uno/_root.garuda_FuseElem-38d84375.cpp.o: include/Fuse.Controls.LayoutControl.h
.uno/_root.garuda_FuseElem-38d84375.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/_root.garuda_FuseElem-38d84375.cpp.o: include/Uno.UX.PropertyObject.h
.uno/_root.garuda_FuseElem-38d84375.cpp.o: include/Uno.UX.Selector.h
.uno/_root.garuda_FuseElem-38d84375.cpp.o: jni/_root.garuda_FuseElem-38d84375.cpp flags.txt | .uno
	echo _root.garuda_FuseElem-38d84375.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.garuda_FuseElem-38d84375.cpp.o -c jni/_root.garuda_FuseElem-38d84375.cpp

.uno/_root.garuda_Tab_Text_Property.cpp.o: include/_root.garuda_Tab_Text_Property.h
.uno/_root.garuda_Tab_Text_Property.cpp.o: include/_root.Tab.h
.uno/_root.garuda_Tab_Text_Property.cpp.o: include/Uno.Bool.h
.uno/_root.garuda_Tab_Text_Property.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/_root.garuda_Tab_Text_Property.cpp.o: include/Uno.UX.PropertyObject.h
.uno/_root.garuda_Tab_Text_Property.cpp.o: jni/_root.garuda_Tab_Text_Property.cpp flags.txt | .uno
	echo _root.garuda_Tab_Text_Property.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.garuda_Tab_Text_Property.cpp.o -c jni/_root.garuda_Tab_Text_Property.cpp

.uno/_root.MainView.cpp.o: include/_root.garuda_bundle.h
.uno/_root.MainView.cpp.o: include/_root.garuda_FuseCont-5ae182df.h
.uno/_root.MainView.cpp.o: include/_root.garuda_FuseElem-38d84375.h
.uno/_root.MainView.cpp.o: include/_root.MainView.h
.uno/_root.MainView.cpp.o: include/_root.page1Text.h
.uno/_root.MainView.cpp.o: include/_root.page1TextBawah.h
.uno/_root.MainView.cpp.o: include/_root.PagePlaceholder.h
.uno/_root.MainView.cpp.o: include/_root.TabIcon.h
.uno/_root.MainView.cpp.o: include/_root.WelcomeText.h
.uno/_root.MainView.cpp.o: include/Fuse.Animations.Animator.h
.uno/_root.MainView.cpp.o: include/Fuse.Animations.Easing.h
.uno/_root.MainView.cpp.o: include/Fuse.Animations.IResizeMode.h
.uno/_root.MainView.cpp.o: include/Fuse.Animations.Move.h
.uno/_root.MainView.cpp.o: include/Fuse.Animations.TrackAnimator.h
.uno/_root.MainView.cpp.o: include/Fuse.Animations.Trans-997c8373.h
.uno/_root.MainView.cpp.o: include/Fuse.AppBase.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.BottomB-f0a90651.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.Control.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.DockPanel.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.Grid.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.Image.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.LayoutControl.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.Navigat-70e90308.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.Page.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.PageControl.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.Panel.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.Rectangle.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.Shape.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.StatusB-d3f2d898.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.TextControl.h
.uno/_root.MainView.cpp.o: include/Fuse.Drawing.Brush.h
.uno/_root.MainView.cpp.o: include/Fuse.Drawing.BrushConverter.h
.uno/_root.MainView.cpp.o: include/Fuse.Drawing.Brushes.h
.uno/_root.MainView.cpp.o: include/Fuse.Drawing.Colors.h
.uno/_root.MainView.cpp.o: include/Fuse.Drawing.StaticSolidColor.h
.uno/_root.MainView.cpp.o: include/Fuse.Elements.Alignment.h
.uno/_root.MainView.cpp.o: include/Fuse.Elements.Element.h
.uno/_root.MainView.cpp.o: include/Fuse.Elements.ITransformOrigin.h
.uno/_root.MainView.cpp.o: include/Fuse.Elements.TransformOrigins.h
.uno/_root.MainView.cpp.o: include/Fuse.Elements.TranslationModes.h
.uno/_root.MainView.cpp.o: include/Fuse.FileSystem.FileS-3c9ac41b.h
.uno/_root.MainView.cpp.o: include/Fuse.Font.h
.uno/_root.MainView.cpp.o: include/Fuse.Gestures.Clicked.h
.uno/_root.MainView.cpp.o: include/Fuse.IScalingMode.h
.uno/_root.MainView.cpp.o: include/Fuse.ITranslationMode.h
.uno/_root.MainView.cpp.o: include/Fuse.Layouts.Dock.h
.uno/_root.MainView.cpp.o: include/Fuse.Navigation.While-89f5a828.h
.uno/_root.MainView.cpp.o: include/Fuse.Navigation.WhileActive.h
.uno/_root.MainView.cpp.o: include/Fuse.Node.h
.uno/_root.MainView.cpp.o: include/Fuse.Reactive.FuseJS.-61f763fd.h
.uno/_root.MainView.cpp.o: include/Fuse.Reactive.FuseJS.-97046318.h
.uno/_root.MainView.cpp.o: include/Fuse.Reactive.FuseJS.Http.h
.uno/_root.MainView.cpp.o: include/Fuse.Resources.MemoryPolicy.h
.uno/_root.MainView.cpp.o: include/Fuse.ScalingModes.h
.uno/_root.MainView.cpp.o: include/Fuse.Storage.StorageModule.h
.uno/_root.MainView.cpp.o: include/Fuse.Testing.UnoTestingHelper.h
.uno/_root.MainView.cpp.o: include/Fuse.Translation.h
.uno/_root.MainView.cpp.o: include/Fuse.TranslationModes.h
.uno/_root.MainView.cpp.o: include/Fuse.Triggers.Actions.Set-1.h
.uno/_root.MainView.cpp.o: include/Fuse.Triggers.Actions-7ea0e0be.h
.uno/_root.MainView.cpp.o: include/Fuse.Triggers.Actions-fcab7e57.h
.uno/_root.MainView.cpp.o: include/Fuse.Triggers.BusyTaskModule.h
.uno/_root.MainView.cpp.o: include/Fuse.Triggers.IScrolledLength.h
.uno/_root.MainView.cpp.o: include/Fuse.Triggers.IScrolledLengths.h
.uno/_root.MainView.cpp.o: include/Fuse.Triggers.LayoutAnimation.h
.uno/_root.MainView.cpp.o: include/Fuse.Triggers.LayoutTransition.h
.uno/_root.MainView.cpp.o: include/Fuse.Triggers.Trigger.h
.uno/_root.MainView.cpp.o: include/Fuse.Triggers.WhileKe-99bafeca.h
.uno/_root.MainView.cpp.o: include/Fuse.Visual.h
.uno/_root.MainView.cpp.o: include/Fuse.WebSocket.WebSoc-2254f404.h
.uno/_root.MainView.cpp.o: include/FuseJS.Base64.h
.uno/_root.MainView.cpp.o: include/FuseJS.Bundle.h
.uno/_root.MainView.cpp.o: include/FuseJS.Environment.h
.uno/_root.MainView.cpp.o: include/FuseJS.FileReaderImpl.h
.uno/_root.MainView.cpp.o: include/FuseJS.Globals.h
.uno/_root.MainView.cpp.o: include/FuseJS.Lifecycle.h
.uno/_root.MainView.cpp.o: include/FuseJS.UserEvents.h
.uno/_root.MainView.cpp.o: include/Polyfills.Window.WindowModule.h
.uno/_root.MainView.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/_root.MainView.cpp.o: include/Uno.Collections.IList-1.h
.uno/_root.MainView.cpp.o: include/Uno.Double.h
.uno/_root.MainView.cpp.o: include/Uno.Float.h
.uno/_root.MainView.cpp.o: include/Uno.Float4.h
.uno/_root.MainView.cpp.o: include/Uno.Int.h
.uno/_root.MainView.cpp.o: include/Uno.IO.BundleFile.h
.uno/_root.MainView.cpp.o: include/Uno.Object.h
.uno/_root.MainView.cpp.o: include/Uno.String.h
.uno/_root.MainView.cpp.o: include/Uno.UX.BundleFileSource.h
.uno/_root.MainView.cpp.o: include/Uno.UX.FileSource.h
.uno/_root.MainView.cpp.o: include/Uno.UX.Property-1.h
.uno/_root.MainView.cpp.o: include/Uno.UX.Resource.h
.uno/_root.MainView.cpp.o: include/Uno.UX.Selector.h
.uno/_root.MainView.cpp.o: include/Uno.UX.Size.h
.uno/_root.MainView.cpp.o: include/Uno.UX.Unit.h
.uno/_root.MainView.cpp.o: jni/_root.MainView.cpp flags.txt | .uno
	echo _root.MainView.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.MainView.cpp.o -c jni/_root.MainView.cpp

.uno/_root.page1Text.cpp.o: include/_root.page1Text.h
.uno/_root.page1Text.cpp.o: include/Fuse.Controls.TextControl.h
.uno/_root.page1Text.cpp.o: include/Fuse.Elements.Alignment.h
.uno/_root.page1Text.cpp.o: include/Fuse.Elements.Element.h
.uno/_root.page1Text.cpp.o: include/Uno.Float.h
.uno/_root.page1Text.cpp.o: include/Uno.Float4.h
.uno/_root.page1Text.cpp.o: include/Uno.UX.Size.h
.uno/_root.page1Text.cpp.o: include/Uno.UX.Unit.h
.uno/_root.page1Text.cpp.o: jni/_root.page1Text.cpp flags.txt | .uno
	echo _root.page1Text.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.page1Text.cpp.o -c jni/_root.page1Text.cpp

.uno/_root.page1TextBawah.cpp.o: include/_root.page1TextBawah.h
.uno/_root.page1TextBawah.cpp.o: include/Fuse.Controls.TextControl.h
.uno/_root.page1TextBawah.cpp.o: include/Fuse.Elements.Alignment.h
.uno/_root.page1TextBawah.cpp.o: include/Fuse.Elements.Element.h
.uno/_root.page1TextBawah.cpp.o: include/Fuse.Font.h
.uno/_root.page1TextBawah.cpp.o: include/Uno.Float.h
.uno/_root.page1TextBawah.cpp.o: include/Uno.Float4.h
.uno/_root.page1TextBawah.cpp.o: include/Uno.UX.Size.h
.uno/_root.page1TextBawah.cpp.o: include/Uno.UX.Unit.h
.uno/_root.page1TextBawah.cpp.o: jni/_root.page1TextBawah.cpp flags.txt | .uno
	echo _root.page1TextBawah.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.page1TextBawah.cpp.o -c jni/_root.page1TextBawah.cpp

.uno/_root.PagePlaceholder.cpp.o: include/_root.PagePlaceholder.h
.uno/_root.PagePlaceholder.cpp.o: include/Fuse.Elements.Alignment.h
.uno/_root.PagePlaceholder.cpp.o: include/Fuse.Elements.Element.h
.uno/_root.PagePlaceholder.cpp.o: include/Fuse.Elements.StretchMode.h
.uno/_root.PagePlaceholder.cpp.o: include/Fuse.Layer.h
.uno/_root.PagePlaceholder.cpp.o: include/Fuse.Visual.h
.uno/_root.PagePlaceholder.cpp.o: include/Uno.Float.h
.uno/_root.PagePlaceholder.cpp.o: include/Uno.Float4.h
.uno/_root.PagePlaceholder.cpp.o: jni/_root.PagePlaceholder.cpp flags.txt | .uno
	echo _root.PagePlaceholder.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.PagePlaceholder.cpp.o -c jni/_root.PagePlaceholder.cpp

.uno/_root.Tab.cpp.o: include/_root.Tab.h
.uno/_root.Tab.cpp.o: include/Uno.Bool.h
.uno/_root.Tab.cpp.o: include/Uno.String.h
.uno/_root.Tab.cpp.o: include/Uno.UX.PropertyObject.h
.uno/_root.Tab.cpp.o: include/Uno.UX.Selector.h
.uno/_root.Tab.cpp.o: jni/_root.Tab.cpp flags.txt | .uno
	echo _root.Tab.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.Tab.cpp.o -c jni/_root.Tab.cpp

.uno/_root.TabIcon.cpp.o: include/_root.TabIcon.h
.uno/_root.TabIcon.cpp.o: include/Fuse.Elements.Element.h
.uno/_root.TabIcon.cpp.o: include/Uno.Float.h
.uno/_root.TabIcon.cpp.o: include/Uno.UX.Size.h
.uno/_root.TabIcon.cpp.o: include/Uno.UX.Unit.h
.uno/_root.TabIcon.cpp.o: jni/_root.TabIcon.cpp flags.txt | .uno
	echo _root.TabIcon.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.TabIcon.cpp.o -c jni/_root.TabIcon.cpp

.uno/_root.WelcomeText.cpp.o: include/_root.WelcomeText.h
.uno/_root.WelcomeText.cpp.o: include/Fuse.Controls.TextControl.h
.uno/_root.WelcomeText.cpp.o: include/Fuse.Elements.Alignment.h
.uno/_root.WelcomeText.cpp.o: include/Fuse.Elements.Element.h
.uno/_root.WelcomeText.cpp.o: include/Uno.Float.h
.uno/_root.WelcomeText.cpp.o: jni/_root.WelcomeText.cpp flags.txt | .uno
	echo _root.WelcomeText.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.WelcomeText.cpp.o -c jni/_root.WelcomeText.cpp

.uno/OpenGL.g.cpp.o: include/OpenGL.GL.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLBlendEquation.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLBlendingFactor.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLBufferHandle.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLBufferTarget.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLBufferUsage.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLClearBufferMask.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLCullFaceMode.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLDataType.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLDepthFunction.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLEnableCap.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLError.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLFramebufferAttachment.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLFramebufferHandle.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLFramebufferStatus.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLFramebufferTarget.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLFrontFaceDirection.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLIndexType.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLInteger4Name.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLIntegerName.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLPixelFormat.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLPixelType.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLPrimitiveType.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLProgramHandle.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLProgramParameter.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLRenderbufferHandle.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLRenderbufferStorage.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLRenderbufferTarget.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLShaderHandle.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLShaderParameter.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLShaderType.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLStringName.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLTextureHandle.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLTextureParameterName.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLTextureParameterValue.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLTextureTarget.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLTextureUnit.h
.uno/OpenGL.g.cpp.o: include/Uno.Bool.h
.uno/OpenGL.g.cpp.o: include/Uno.Buffer.h
.uno/OpenGL.g.cpp.o: include/Uno.Float.h
.uno/OpenGL.g.cpp.o: include/Uno.Float2.h
.uno/OpenGL.g.cpp.o: include/Uno.Float2x2.h
.uno/OpenGL.g.cpp.o: include/Uno.Float3.h
.uno/OpenGL.g.cpp.o: include/Uno.Float4.h
.uno/OpenGL.g.cpp.o: include/Uno.Float4x4.h
.uno/OpenGL.g.cpp.o: include/Uno.Int.h
.uno/OpenGL.g.cpp.o: include/Uno.Int4.h
.uno/OpenGL.g.cpp.o: include/Uno.String.h
.uno/OpenGL.g.cpp.o: include/Uno/Support.h
.uno/OpenGL.g.cpp.o: jni/OpenGL.g.cpp flags.txt | .uno
	echo OpenGL.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/OpenGL.g.cpp.o -c jni/OpenGL.g.cpp

.uno/Uno.g.cpp.o: include/Uno.Action.h
.uno/Uno.g.cpp.o: include/Uno.Action-1.h
.uno/Uno.g.cpp.o: include/Uno.Action-2.h
.uno/Uno.g.cpp.o: include/Uno.Action-3.h
.uno/Uno.g.cpp.o: include/Uno.Action-4.h
.uno/Uno.g.cpp.o: include/Uno.AggregateException.h
.uno/Uno.g.cpp.o: include/Uno.Application.h
.uno/Uno.g.cpp.o: include/Uno.ArgumentException.h
.uno/Uno.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.g.cpp.o: include/Uno.ArgumentOutOfRang-6803b39e.h
.uno/Uno.g.cpp.o: include/Uno.Array.h
.uno/Uno.g.cpp.o: include/Uno.Bool.h
.uno/Uno.g.cpp.o: include/Uno.Buffer.h
.uno/Uno.g.cpp.o: include/Uno.Byte.h
.uno/Uno.g.cpp.o: include/Uno.Char.h
.uno/Uno.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.g.cpp.o: include/Uno.Collections.List--251bdc7d.h
.uno/Uno.g.cpp.o: include/Uno.Color.h
.uno/Uno.g.cpp.o: include/Uno.Comparison-1.h
.uno/Uno.g.cpp.o: include/Uno.DateTime.h
.uno/Uno.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.g.cpp.o: include/Uno.Double.h
.uno/Uno.g.cpp.o: include/Uno.Enum.h
.uno/Uno.g.cpp.o: include/Uno.EventArgs.h
.uno/Uno.g.cpp.o: include/Uno.EventHandler.h
.uno/Uno.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Uno.g.cpp.o: include/Uno.Exception.h
.uno/Uno.g.cpp.o: include/Uno.Float.h
.uno/Uno.g.cpp.o: include/Uno.Float2.h
.uno/Uno.g.cpp.o: include/Uno.Float2x2.h
.uno/Uno.g.cpp.o: include/Uno.Float3.h
.uno/Uno.g.cpp.o: include/Uno.Float3x3.h
.uno/Uno.g.cpp.o: include/Uno.Float4.h
.uno/Uno.g.cpp.o: include/Uno.Float4x4.h
.uno/Uno.g.cpp.o: include/Uno.FormatException.h
.uno/Uno.g.cpp.o: include/Uno.Func-1.h
.uno/Uno.g.cpp.o: include/Uno.Func-2.h
.uno/Uno.g.cpp.o: include/Uno.Func-3.h
.uno/Uno.g.cpp.o: include/Uno.Func-4.h
.uno/Uno.g.cpp.o: include/Uno.GC.h
.uno/Uno.g.cpp.o: include/Uno.Generic.h
.uno/Uno.g.cpp.o: include/Uno.IDisposable.h
.uno/Uno.g.cpp.o: include/Uno.IndexOutOfRangeException.h
.uno/Uno.g.cpp.o: include/Uno.Int.h
.uno/Uno.g.cpp.o: include/Uno.Int2.h
.uno/Uno.g.cpp.o: include/Uno.Int4.h
.uno/Uno.g.cpp.o: include/Uno.IntPtr.h
.uno/Uno.g.cpp.o: include/Uno.InvalidCastException.h
.uno/Uno.g.cpp.o: include/Uno.InvalidOperationException.h
.uno/Uno.g.cpp.o: include/Uno.Long.h
.uno/Uno.g.cpp.o: include/Uno.Math.h
.uno/Uno.g.cpp.o: include/Uno.Matrix.h
.uno/Uno.g.cpp.o: include/Uno.NotSupportedException.h
.uno/Uno.g.cpp.o: include/Uno.NullReferenceException.h
.uno/Uno.g.cpp.o: include/Uno.Object.h
.uno/Uno.g.cpp.o: include/Uno.ObjectDisposedException.h
.uno/Uno.g.cpp.o: include/Uno.OverflowException.h
.uno/Uno.g.cpp.o: include/Uno.Platform.Window.h
.uno/Uno.g.cpp.o: include/Uno.Predicate-1.h
.uno/Uno.g.cpp.o: include/Uno.Quaternion.h
.uno/Uno.g.cpp.o: include/Uno.Rect.h
.uno/Uno.g.cpp.o: include/Uno.Recti.h
.uno/Uno.g.cpp.o: include/Uno.Runtime.Implement-1faed10e.h
.uno/Uno.g.cpp.o: include/Uno.Runtime.Implement-444123a4.h
.uno/Uno.g.cpp.o: include/Uno.Runtime.Implement-496b321b.h
.uno/Uno.g.cpp.o: include/Uno.Runtime.Implement-4bb10a0a.h
.uno/Uno.g.cpp.o: include/Uno.Runtime.Implement-78c05898.h
.uno/Uno.g.cpp.o: include/Uno.Runtime.Implement-ed55561e.h
.uno/Uno.g.cpp.o: include/Uno.SByte.h
.uno/Uno.g.cpp.o: include/Uno.Short.h
.uno/Uno.g.cpp.o: include/Uno.String.h
.uno/Uno.g.cpp.o: include/Uno.Text.StringBuilder.h
.uno/Uno.g.cpp.o: include/Uno.Time.ZonedDateTime.h
.uno/Uno.g.cpp.o: include/Uno.Tuple.h
.uno/Uno.g.cpp.o: include/Uno.Tuple-2.h
.uno/Uno.g.cpp.o: include/Uno.Type.h
.uno/Uno.g.cpp.o: include/Uno.UInt.h
.uno/Uno.g.cpp.o: include/Uno.ULong.h
.uno/Uno.g.cpp.o: include/Uno.UShort.h
.uno/Uno.g.cpp.o: include/Uno.Vector.h
.uno/Uno.g.cpp.o: include/Uno.WeakReference-1.h
.uno/Uno.g.cpp.o: include/Uno/Support.h
.uno/Uno.g.cpp.o: jni/Uno.g.cpp flags.txt | .uno
	echo Uno.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.g.cpp.o -c jni/Uno.g.cpp

.uno/Uno.Collections.g.cpp.o: include/Uno.Action-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Array.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Dicti-98f6bc43.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Dicti-bd7b2149.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Dicti-d1699346.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Dicti-d6e3a7c5.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Dicti-e0584c76.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Enume-8ddd045.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Enume-c80626a.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.HashS-aaabdf6f.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.HashSet-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.IList-b56be992.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Linke-712f9f5e.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Linke-998cff42.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.LinkedList-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.List--251bdc7d.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Obser-ca008b9a.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.OfTyp-11c32fbf.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.OfTyp-710e061d.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Order-35b71307.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Prior-7cf783be.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Prior-bb0a4ec8.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Prior-fb66463b.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Queue-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Queue-a4ffa9de.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.RootableList-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Selec-30636d68.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Selec-5ab24080.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Comparison-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Float.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Func-2.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Func-3.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Generic.h
.uno/Uno.Collections.g.cpp.o: include/Uno.IDisposable.h
.uno/Uno.Collections.g.cpp.o: include/Uno.IndexOutOfRangeException.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Int.h
.uno/Uno.Collections.g.cpp.o: include/Uno.InvalidOperationException.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Math.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Object.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Runtime.Implement-eca777ec.h
.uno/Uno.Collections.g.cpp.o: include/Uno.String.h
.uno/Uno.Collections.g.cpp.o: jni/Uno.Collections.g.cpp flags.txt | .uno
	echo Uno.Collections.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Collections.g.cpp.o -c jni/Uno.Collections.g.cpp

.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Android.Base.JNI.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Android.Base.JNI.RefType.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Android.Base.Primitiv-2b9696be.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Android.Base.Primitiv-45253430.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Android.Base.Primitiv-ae5fb0f1.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Android.Base.Primitiv-b7b09a.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Android.Base.Primitiv-e437692f.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Android.Base.Types.String.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Android.Base.Wrappers-88f7a41f.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.Android.AppRoot.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.Android.StatusBarConfig.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.Controls.Native.-3a814c3c.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.Controls.Native.-43e7fbf.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.Controls.Native.-454aa827.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.Controls.Native.-51b6e8e5.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.Controls.Native.-c67cabe.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.Controls.Native.-ca2427b3.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.Controls.Native.-dd7dd49d.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.Controls.Native.-e502cdf1.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.Controls.Native.-f43d469d.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.Controls.VideoIm-78c612f4.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.Internal.Android-336f3d43.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.Platform.SystemUI.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Java.Object.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Neovisionaries.WebSocketClient.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Action.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Action-1.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Byte.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Char.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Compiler.ExportTa-39be7c2b.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Compiler.ExportTa-7a61a803.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Compiler.ExportTa-d4b8b207.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Double.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Float.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Int.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.IO.BundleFile.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Long.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Object.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Platform.AndroidDisplay.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.SByte.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Short.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.String.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno/JNIHelper.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: jni/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp flags.txt | .uno
	echo Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o -c jni/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp

.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.Asser-ca8bbf62.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.Clock.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.Debug-5d778620.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.LogHandler.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Double.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Int.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Long.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Object.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Runtime.Implement-2110557a.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Runtime.Implement-6eefa8cd.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.String.h
.uno/Uno.Diagnostics.g.cpp.o: jni/Uno.Diagnostics.g.cpp flags.txt | .uno
	echo Uno.Diagnostics.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Diagnostics.g.cpp.o -c jni/Uno.Diagnostics.g.cpp

.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GL.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLBufferHandle.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLBufferTarget.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLBufferUsage.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLFramebufferHandle.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLIntegerName.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLRenderbufferHandle.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLStringName.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLTextureHandle.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLTextureParameterName.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLTextureParameterValue.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLTextureTarget.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLTextureUnit.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Buffer.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Char.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Diagnostics.Debug-5d778620.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.FormatException.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.BlendEquation.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.CompareFunc.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.DeviceBuffer.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.Framebuffer.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.FramebufferFlags.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.IndexType.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.PolygonWinding.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.PrimitiveType.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.RenderTarget.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.SamplerState.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.TextureA-43befa07.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.TextureFilter.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.TextureHelpers.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.VertexAt-28188a9f.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.VertexAt-4a875e1d.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.VideoTexture.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Int.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Int2.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.InvalidOperationException.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Math.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.ObjectDisposedException.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Runtime.Implement-122f7885.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Runtime.Implement-157d1e47.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.String.h
.uno/Uno.Graphics.g.cpp.o: include/Uno/Support.h
.uno/Uno.Graphics.g.cpp.o: jni/Uno.Graphics.g.cpp flags.txt | .uno
	echo Uno.Graphics.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Graphics.g.cpp.o -c jni/Uno.Graphics.g.cpp

.uno/Uno.IO.g.cpp.o: include/Uno.Action-1.h
.uno/Uno.IO.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.IO.g.cpp.o: include/Uno.ArgumentOutOfRang-6803b39e.h
.uno/Uno.IO.g.cpp.o: include/Uno.Array.h
.uno/Uno.IO.g.cpp.o: include/Uno.Bool.h
.uno/Uno.IO.g.cpp.o: include/Uno.Byte.h
.uno/Uno.IO.g.cpp.o: include/Uno.Char.h
.uno/Uno.IO.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Uno.IO.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Uno.IO.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Uno.IO.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.IO.g.cpp.o: include/Uno.Collections.List--251bdc7d.h
.uno/Uno.IO.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.IO.g.cpp.o: include/Uno.FormatException.h
.uno/Uno.IO.g.cpp.o: include/Uno.GC.h
.uno/Uno.IO.g.cpp.o: include/Uno.Int.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.BinaryReader.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.BinaryWriter.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.Bundle.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.BundleFile.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.CppXliStream.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.CppXliStreamHandle.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.Directory.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.EndOfStreamException.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.File.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.FileMode.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.FileSystemEnum-710bb025.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.FileSystemEnum-9a4eb43c.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.FileSystemEnum-b83388e7.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.FileSystemEnumerable.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.FileSystemEnumerator.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.FileSystemImpl.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.IOException.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.MemoryStream.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.Path.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.Stream.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.StreamReader.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.StreamWriter.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.TextReader.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.TextWriter.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.UserDirectory.h
.uno/Uno.IO.g.cpp.o: include/Uno.Long.h
.uno/Uno.IO.g.cpp.o: include/Uno.NotSupportedException.h
.uno/Uno.IO.g.cpp.o: include/Uno.Object.h
.uno/Uno.IO.g.cpp.o: include/Uno.Runtime.Implement-ed55561e.h
.uno/Uno.IO.g.cpp.o: include/Uno.Runtime.Implement-f781096a.h
.uno/Uno.IO.g.cpp.o: include/Uno.String.h
.uno/Uno.IO.g.cpp.o: include/Uno.Text.Decoder.h
.uno/Uno.IO.g.cpp.o: include/Uno.Text.Encoding.h
.uno/Uno.IO.g.cpp.o: include/Uno.Text.StringBuilder.h
.uno/Uno.IO.g.cpp.o: include/Uno.UInt.h
.uno/Uno.IO.g.cpp.o: include/Uno/Support.h
.uno/Uno.IO.g.cpp.o: jni/Uno.IO.g.cpp flags.txt | .uno
	echo Uno.IO.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.IO.g.cpp.o -c jni/Uno.IO.g.cpp

.uno/Uno.Platform.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Uno.Platform.g.cpp.o: include/Android.Base.Wrappers-88f7a41f.h
.uno/Uno.Platform.g.cpp.o: include/Android.Bootstrapper.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Compiler.ExportTa-39be7c2b.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Diagnostics.Debug-5d778620.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Double.h
.uno/Uno.Platform.g.cpp.o: include/Uno.EventArgs.h
.uno/Uno.Platform.g.cpp.o: include/Uno.EventHandler.h
.uno/Uno.Platform.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Float.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Int.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Object.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.AndroidDisplay.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.Applicat-bf686309.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.ApplicationState.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.CoreApp.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.Display.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.Displays.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.EventModifiers.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.FrameCha-70b333cb.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.Key.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.KeyEventArgs.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.OSFrame.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.PointerType.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.TimerEventArgs.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.Window.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Runtime.Implement-ce657879.h
.uno/Uno.Platform.g.cpp.o: include/Uno.String.h
.uno/Uno.Platform.g.cpp.o: include/Uno.UInt.h
.uno/Uno.Platform.g.cpp.o: include/Uno/Graphics/GLHelper.h
.uno/Uno.Platform.g.cpp.o: include/Uno/JNIHelper.h
.uno/Uno.Platform.g.cpp.o: jni/Uno.Platform.g.cpp flags.txt | .uno
	echo Uno.Platform.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Platform.g.cpp.o -c jni/Uno.Platform.g.cpp

.uno/Uno.Platform.EventSources.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Platform.EventSources.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.Platform.EventSources.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Uno.Platform.EventSources.g.cpp.o: include/Uno.Int.h
.uno/Uno.Platform.EventSources.g.cpp.o: include/Uno.Object.h
.uno/Uno.Platform.EventSources.g.cpp.o: include/Uno.Platform.Applicat-bf686309.h
.uno/Uno.Platform.EventSources.g.cpp.o: include/Uno.Platform.ApplicationState.h
.uno/Uno.Platform.EventSources.g.cpp.o: include/Uno.Platform.CoreApp.h
.uno/Uno.Platform.EventSources.g.cpp.o: include/Uno.Platform.EventModifiers.h
.uno/Uno.Platform.EventSources.g.cpp.o: include/Uno.Platform.EventSou-afb2ad40.h
.uno/Uno.Platform.EventSources.g.cpp.o: include/Uno.Platform.EventSou-b16da529.h
.uno/Uno.Platform.EventSources.g.cpp.o: include/Uno.Platform.Key.h
.uno/Uno.Platform.EventSources.g.cpp.o: include/Uno.Platform.KeyEventArgs.h
.uno/Uno.Platform.EventSources.g.cpp.o: include/Uno.Platform.OSFrame.h
.uno/Uno.Platform.EventSources.g.cpp.o: include/Uno.String.h
.uno/Uno.Platform.EventSources.g.cpp.o: jni/Uno.Platform.EventSources.g.cpp flags.txt | .uno
	echo Uno.Platform.EventSources.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Platform.EventSources.g.cpp.o -c jni/Uno.Platform.EventSources.g.cpp

.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.ArgumentException.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.ArgumentOutOfRang-6803b39e.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Byte.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Char.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Comparison-1.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Diagnostics.Debug-5d778620.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Double.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Float.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Int.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.InvalidOperationException.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Long.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Object.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implement-2110557a.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implement-444123a4.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implement-496b321b.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implement-5299dae0.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implement-6eefa8cd.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implement-78c05898.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implement-ce657879.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implement-ed55561e.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implement-f781096a.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.String.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.UShort.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno/Base64.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno/Support.h
.uno/Uno.Runtime.Implementation.g.cpp.o: jni/Uno.Runtime.Implementation.g.cpp flags.txt | .uno
	echo Uno.Runtime.Implementation.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Runtime.Implementation.g.cpp.o -c jni/Uno.Runtime.Implementation.g.cpp

.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Buffer.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Byte.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Char.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Double.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Float.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Float2.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Float3.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.FormatException.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Int.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Long.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Math.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Object.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implement-1faed10e.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implement-224692d.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implement-4bb10a0a.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implement-81e7ab4c.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implement-a1573b10.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implement-a46b04a8.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implement-d6dfc54c.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implement-da669e36.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implement-eca777ec.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implement-faed1c6c.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.SByte.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Short.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.String.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Text.StringBuilder.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.UInt.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.ULong.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.UShort.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: jni/Uno.Runtime.Implementation.Internal.g.cpp flags.txt | .uno
	echo Uno.Runtime.Implementation.Internal.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Runtime.Implementation.Internal.g.cpp.o -c jni/Uno.Runtime.Implementation.Internal.g.cpp

.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GL.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLBlendEquation.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLBlendingFactor.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLBufferHandle.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLBufferTarget.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLBufferUsage.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLCullFaceMode.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLDataType.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLDepthFunction.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLEnableCap.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLError.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLFramebufferAttachment.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLFramebufferHandle.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLFramebufferStatus.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLFramebufferTarget.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLFrontFaceDirection.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLIndexType.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLPixelFormat.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLPixelType.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLPrimitiveType.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLProgramHandle.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLProgramParameter.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLRenderbufferHandle.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLRenderbufferStorage.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLRenderbufferTarget.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLShaderHandle.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLShaderParameter.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLShaderType.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLTextureHandle.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLTextureParameterName.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLTextureParameterValue.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLTextureTarget.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLTextureUnit.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Buffer.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Diagnostics.Debug-5d778620.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Float.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Float2.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Float2x2.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Float3.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Float4.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Float4x4.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.BlendEquation.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.CompareFunc.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.DeviceBuffer.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.IndexType.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.PolygonWinding.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.PrimitiveType.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.RenderTarget.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.SamplerState.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.TextureA-43befa07.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.TextureFilter.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.VertexAt-4a875e1d.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.VideoTexture.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Int.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Int2.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.InvalidOperationException.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Object.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Runtime.Implement-122f7885.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Runtime.Implement-157d1e47.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Runtime.Implement-1758a0d3.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Runtime.Implement-476e2792.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Runtime.Implement-6e9df330.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Runtime.Implement-fa7480cd.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.String.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: jni/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp flags.txt | .uno
	echo Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o -c jni/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp

.uno/Uno.Runtime.InteropServices.g.cpp.o: include/Uno.IntPtr.h
.uno/Uno.Runtime.InteropServices.g.cpp.o: include/Uno.Runtime.InteropSe-4769ead5.h
.uno/Uno.Runtime.InteropServices.g.cpp.o: include/Uno.Runtime.InteropSe-e0f0cdcd.h
.uno/Uno.Runtime.InteropServices.g.cpp.o: jni/Uno.Runtime.InteropServices.g.cpp flags.txt | .uno
	echo Uno.Runtime.InteropServices.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Runtime.InteropServices.g.cpp.o -c jni/Uno.Runtime.InteropServices.g.cpp

.uno/Uno.Text.g.cpp.o: include/Uno.ArgumentException.h
.uno/Uno.Text.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.Text.g.cpp.o: include/Uno.ArgumentOutOfRang-6803b39e.h
.uno/Uno.Text.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Text.g.cpp.o: include/Uno.Byte.h
.uno/Uno.Text.g.cpp.o: include/Uno.Char.h
.uno/Uno.Text.g.cpp.o: include/Uno.Int.h
.uno/Uno.Text.g.cpp.o: include/Uno.Runtime.Implement-f781096a.h
.uno/Uno.Text.g.cpp.o: include/Uno.String.h
.uno/Uno.Text.g.cpp.o: include/Uno.Text.Ascii.h
.uno/Uno.Text.g.cpp.o: include/Uno.Text.Base64.h
.uno/Uno.Text.g.cpp.o: include/Uno.Text.Decoder.h
.uno/Uno.Text.g.cpp.o: include/Uno.Text.Encoding.h
.uno/Uno.Text.g.cpp.o: include/Uno.Text.StringBuilder.h
.uno/Uno.Text.g.cpp.o: include/Uno.Text.StringBuilderElement.h
.uno/Uno.Text.g.cpp.o: include/Uno.Text.Utf8.h
.uno/Uno.Text.g.cpp.o: include/Uno.Text.UTF8Decoder.h
.uno/Uno.Text.g.cpp.o: include/Uno.Text.UTF8Encoding.h
.uno/Uno.Text.g.cpp.o: jni/Uno.Text.g.cpp flags.txt | .uno
	echo Uno.Text.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Text.g.cpp.o -c jni/Uno.Text.g.cpp

.uno/Uno.Threading.g.cpp.o: include/Implementation/Posix/posix_mutex.h
.uno/Uno.Threading.g.cpp.o: include/Implementation/Posix/posix_thread.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Action.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Action-1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Action-2.h
.uno/Uno.Threading.g.cpp.o: include/Uno.AggregateException.h
.uno/Uno.Threading.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Collections.Queue-1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Func-1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Func-2.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Int.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Object.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Platform.Applicat-bf686309.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Platform.ApplicationState.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Platform.CoreApp.h
.uno/Uno.Threading.g.cpp.o: include/Uno.String.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.AutoResetEvent.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Cancell-3658717e.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Cancell-99c083b7.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Concurr-cd310558.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.EventResetMode.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.EventWaitHandle.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Future.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Future-1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Future--f69287de.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.FutureState.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.IDispat-1205751.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.IDispat-6494c48e.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.IDispat-8c32ce11.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.IDispatcher.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.IDispat-ff0ea41a.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.ITaskScheduler.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.ManualResetEvent.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Monitor.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Mutex.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Promise-1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Pthread-20218ef3.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Pthread-5f9bc3e8.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Pthread-76d261d4.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.PthreadHelpers.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.SyncDispatcher.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Task.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.TaskDelegate.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.TaskFuture-1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.TaskStatus.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Thread.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.ThreadP-77c81928.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.ThreadP-a7c4648a.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.ThreadP-a88ce999.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.ThreadP-dcb97059.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.ThreadPool.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.ThreadS-435616a4.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.ThreadStart.h
.uno/Uno.Threading.g.cpp.o: include/Uno/Support.h
.uno/Uno.Threading.g.cpp.o: jni/Uno.Threading.g.cpp flags.txt | .uno
	echo Uno.Threading.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Threading.g.cpp.o -c jni/Uno.Threading.g.cpp

.uno/Uno.Time.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.Time.g.cpp.o: include/Uno.ArgumentOutOfRang-6803b39e.h
.uno/Uno.Time.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Time.g.cpp.o: include/Uno.Diagnostics.Clock.h
.uno/Uno.Time.g.cpp.o: include/Uno.Int.h
.uno/Uno.Time.g.cpp.o: include/Uno.Long.h
.uno/Uno.Time.g.cpp.o: include/Uno.Object.h
.uno/Uno.Time.g.cpp.o: include/Uno.String.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Calendars.Era.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Calendars.Gr-1bc32ae1.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Calendars.Ti-285a9be8.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Calendars.We-173d63f9.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Calendars.Ye-a9fcd499.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.CalendarSystem.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Constants.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Converter.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.DateTimeZone.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.DeviceTimeZone.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Duration.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.FixedDateTimeZone.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.HashCodeHelper.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Instant.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.LocalDateTime.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Offset.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Preconditions.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Text.LocalDa-2e9342e4.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Text.OffsetPattern.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.ZonedDateTime.h
.uno/Uno.Time.g.cpp.o: include/Uno.Type.h
.uno/Uno.Time.g.cpp.o: jni/Uno.Time.g.cpp flags.txt | .uno
	echo Uno.Time.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Time.g.cpp.o -c jni/Uno.Time.g.cpp

.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Int.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Long.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.String.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Calendars.Era.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Calendars.Gr-1bc32ae1.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Calendars.Ti-285a9be8.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Calendars.We-173d63f9.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Calendars.Ye-a9fcd499.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Converter.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Instant.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Preconditions.h
.uno/Uno.Time.Calendars.g.cpp.o: jni/Uno.Time.Calendars.g.cpp flags.txt | .uno
	echo Uno.Time.Calendars.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Time.Calendars.g.cpp.o -c jni/Uno.Time.Calendars.g.cpp

.uno/Uno.Time.Text.g.cpp.o: include/Uno.Action-2.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Char.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Func-2.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Int.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Math.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.String.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Text.StringBuilder.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.LocalDateTime.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Offset.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.FixedFo-3caa69db.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.IPatternPart-1.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.LocalDa-2e9342e4.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.LocalDa-9eba1702.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.NumberPart-1.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.OffsetP-7c12f43a.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.OffsetPattern.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.PatternPart-2.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.SeparatorPart-1.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.SignPart-1.h
.uno/Uno.Time.Text.g.cpp.o: jni/Uno.Time.Text.g.cpp flags.txt | .uno
	echo Uno.Time.Text.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Time.Text.g.cpp.o -c jni/Uno.Time.Text.g.cpp

.uno/Uno.UX.g.cpp.o: include/Uno.Action-1.h
.uno/Uno.UX.g.cpp.o: include/Uno.ArgumentException.h
.uno/Uno.UX.g.cpp.o: include/Uno.Bool.h
.uno/Uno.UX.g.cpp.o: include/Uno.Byte.h
.uno/Uno.UX.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Uno.UX.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Uno.UX.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.UX.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.UX.g.cpp.o: include/Uno.EventArgs.h
.uno/Uno.UX.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Uno.UX.g.cpp.o: include/Uno.Float.h
.uno/Uno.UX.g.cpp.o: include/Uno.Float2.h
.uno/Uno.UX.g.cpp.o: include/Uno.IDisposable.h
.uno/Uno.UX.g.cpp.o: include/Uno.Int.h
.uno/Uno.UX.g.cpp.o: include/Uno.InvalidOperationException.h
.uno/Uno.UX.g.cpp.o: include/Uno.IO.BinaryReader.h
.uno/Uno.UX.g.cpp.o: include/Uno.IO.BundleFile.h
.uno/Uno.UX.g.cpp.o: include/Uno.IO.MemoryStream.h
.uno/Uno.UX.g.cpp.o: include/Uno.IO.Stream.h
.uno/Uno.UX.g.cpp.o: include/Uno.IO.StreamReader.h
.uno/Uno.UX.g.cpp.o: include/Uno.Long.h
.uno/Uno.UX.g.cpp.o: include/Uno.NotSupportedException.h
.uno/Uno.UX.g.cpp.o: include/Uno.Object.h
.uno/Uno.UX.g.cpp.o: include/Uno.Predicate-1.h
.uno/Uno.UX.g.cpp.o: include/Uno.String.h
.uno/Uno.UX.g.cpp.o: include/Uno.Threading.Monitor.h
.uno/Uno.UX.g.cpp.o: include/Uno.Type.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.BundleFileSource.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.Expression-1.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.NameTable.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.Property.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.Property-1.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.PropertyAccessor.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.Resource.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.Selector.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.SelectorRegistry.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.Size.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.Size2.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.StreamExtensions.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.Template.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.Unit.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
.uno/Uno.UX.g.cpp.o: jni/Uno.UX.g.cpp flags.txt | .uno
	echo Uno.UX.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.UX.g.cpp.o -c jni/Uno.UX.g.cpp

.uno/Uno.Data.Json.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Data.Json.g.cpp.o: include/Uno.Char.h
.uno/Uno.Data.Json.g.cpp.o: include/Uno.Data.Json.JsonWriter.h
.uno/Uno.Data.Json.g.cpp.o: include/Uno.Int.h
.uno/Uno.Data.Json.g.cpp.o: include/Uno.Object.h
.uno/Uno.Data.Json.g.cpp.o: include/Uno.String.h
.uno/Uno.Data.Json.g.cpp.o: include/Uno.Text.StringBuilder.h
.uno/Uno.Data.Json.g.cpp.o: jni/Uno.Data.Json.g.cpp flags.txt | .uno
	echo Uno.Data.Json.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Data.Json.g.cpp.o -c jni/Uno.Data.Json.g.cpp

.uno/Uno.Net.g.cpp.o: include/Uno.Net.NetworkHelpers.h
.uno/Uno.Net.g.cpp.o: include/Uno.String.h
.uno/Uno.Net.g.cpp.o: jni/Uno.Net.g.cpp flags.txt | .uno
	echo Uno.Net.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Net.g.cpp.o -c jni/Uno.Net.g.cpp

.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.ArgumentOutOfRang-6803b39e.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Byte.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Int.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Long.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.NetworkHelpers.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.NetworkStream.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.Socke-432e1b25.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.Socke-b77e7003.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.Socket.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.SocketFlags.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.String.h
.uno/Uno.Net.Sockets.g.cpp.o: jni/Uno.Net.Sockets.g.cpp flags.txt | .uno
	echo Uno.Net.Sockets.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Net.Sockets.g.cpp.o -c jni/Uno.Net.Sockets.g.cpp

.uno/Uno.Net.Http.g.cpp.o: include/Android.Base.JNI.h
.uno/Uno.Net.Http.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Uno.Net.Http.g.cpp.o: include/Android.Base.Wrappers-90b493fe.h
.uno/Uno.Net.Http.g.cpp.o: include/Android.com.fuse.Expe-9d584358.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Action.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Action-1.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Action-2.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Action-4.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Byte.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Collections.List--251bdc7d.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Diagnostics.Debug-5d778620.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.GC.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Int.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Long.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpDefa-b19f5e55.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpMess-1d2e0b2f.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpMess-2de79056.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpMess-3c1f1370.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpMess-8a5feb56.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpMessageCache.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpMess-b09aa232.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpMess-db3b7805.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpRequestState.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpResponseType.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.Implemen-5e623127.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.Implemen-c964dca9.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.InvalidR-d0abcd6.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.InvalidS-7f541f1c.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.ObjectDisposedException.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Platform.Applicat-bf686309.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Platform.ApplicationState.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Platform.CoreApp.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.String.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Threading.IDispatcher.h
.uno/Uno.Net.Http.g.cpp.o: jni/Uno.Net.Http.g.cpp flags.txt | .uno
	echo Uno.Net.Http.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Net.Http.g.cpp.o -c jni/Uno.Net.Http.g.cpp

.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Android.Base.JNI.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Android.Base.Primitiv-2b9696be.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Android.Base.Types.Arrays.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Android.Base.Types.String.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Array.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Byte.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Collections.List--251bdc7d.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Int.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Long.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Net.Http.HttpMess-1d2e0b2f.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Net.Http.HttpResponseType.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Net.Http.Implemen-5e623127.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Net.Http.Implemen-c964dca9.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.String.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: jni/Uno.Net.Http.Implementation.g.cpp flags.txt | .uno
	echo Uno.Net.Http.Implementation.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Net.Http.Implementation.g.cpp.o -c jni/Uno.Net.Http.Implementation.g.cpp

.uno/Java.g.cpp.o: include/Java.Object.h
.uno/Java.g.cpp.o: jni/Java.g.cpp flags.txt | .uno
	echo Java.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Java.g.cpp.o -c jni/Java.g.cpp

.uno/Android.g.cpp.o: include/Android.Bootstrapper.h
.uno/Android.g.cpp.o: include/BootstrapperImpl_Android.h
.uno/Android.g.cpp.o: jni/Android.g.cpp flags.txt | .uno
	echo Android.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.g.cpp.o -c jni/Android.g.cpp

.uno/Android.Base.g.cpp.o: include/Android.Base.AndroidB-e9b6d531.h
.uno/Android.Base.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.Base.g.cpp.o: include/Android.Base.JNI.RefType.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Primitiv-2b9696be.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Primitiv-45253430.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Primitiv-75a2ab27.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Primitiv-ae5fb0f1.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Primitiv-b7b09a.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Primitiv-e437692f.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Types.String.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Wrappers-88f7a41f.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Wrappers-90b493fe.h
.uno/Android.Base.g.cpp.o: include/Java.Object.h
.uno/Android.Base.g.cpp.o: include/Uno.Bool.h
.uno/Android.Base.g.cpp.o: include/Uno.Byte.h
.uno/Android.Base.g.cpp.o: include/Uno.Char.h
.uno/Android.Base.g.cpp.o: include/Uno.Compiler.ExportTa-39be7c2b.h
.uno/Android.Base.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Android.Base.g.cpp.o: include/Uno.Double.h
.uno/Android.Base.g.cpp.o: include/Uno.Exception.h
.uno/Android.Base.g.cpp.o: include/Uno.Float.h
.uno/Android.Base.g.cpp.o: include/Uno.Int.h
.uno/Android.Base.g.cpp.o: include/Uno.Long.h
.uno/Android.Base.g.cpp.o: include/Uno.Math.h
.uno/Android.Base.g.cpp.o: include/Uno.Object.h
.uno/Android.Base.g.cpp.o: include/Uno.SByte.h
.uno/Android.Base.g.cpp.o: include/Uno.Short.h
.uno/Android.Base.g.cpp.o: include/Uno.String.h
.uno/Android.Base.g.cpp.o: include/Uno.Type.h
.uno/Android.Base.g.cpp.o: include/Uno/JNIHelper.h
.uno/Android.Base.g.cpp.o: jni/Android.Base.g.cpp flags.txt | .uno
	echo Android.Base.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.Base.g.cpp.o -c jni/Android.Base.g.cpp

.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitiv-2924c081.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitiv-2b9696be.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitiv-30a77109.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitiv-45253430.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitiv-65373fdf.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitiv-712df2f8.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitiv-75a2ab27.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitiv-7eef1e73.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitiv-a6e942de.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitiv-ae5fb0f1.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitiv-b7b09a.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitiv-c95fb41d.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitiv-e437692f.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitiv-e52e9f29.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.jweak.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujbyte.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujchar.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujint.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujlong.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitiv-f2634ec4.h
.uno/Android.Base.Primitives.g.cpp.o: include/Uno.Bool.h
.uno/Android.Base.Primitives.g.cpp.o: jni/Android.Base.Primitives.g.cpp flags.txt | .uno
	echo Android.Base.Primitives.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.Base.Primitives.g.cpp.o -c jni/Android.Base.Primitives.g.cpp

.uno/Android.Base.Types.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Primitiv-2b9696be.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Primitiv-45253430.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Primitiv-ae5fb0f1.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Primitiv-b7b09a.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Primitiv-e437692f.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Types.Arrays.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Types.Bridge.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Types.ByteBuffer.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Types.String.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Wrappers-90b493fe.h
.uno/Android.Base.Types.g.cpp.o: include/Uno.Bool.h
.uno/Android.Base.Types.g.cpp.o: include/Uno.Byte.h
.uno/Android.Base.Types.g.cpp.o: include/Uno.Exception.h
.uno/Android.Base.Types.g.cpp.o: include/Uno.Int.h
.uno/Android.Base.Types.g.cpp.o: include/Uno.Long.h
.uno/Android.Base.Types.g.cpp.o: include/Uno.String.h
.uno/Android.Base.Types.g.cpp.o: include/Uno.Type.h
.uno/Android.Base.Types.g.cpp.o: jni/Android.Base.Types.g.cpp flags.txt | .uno
	echo Android.Base.Types.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.Base.Types.g.cpp.o -c jni/Android.Base.Types.g.cpp

.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.JNI.RefType.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Primitiv-2924c081.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Primitiv-2b9696be.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Primitiv-b7b09a.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Types.Bridge.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Wrappers-88f7a41f.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Wrappers-90b493fe.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Uno.Bool.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Uno.Exception.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Uno.Int.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Uno.Long.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Uno.Object.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Uno.String.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Uno.Type.h
.uno/Android.Base.Wrappers.g.cpp.o: jni/Android.Base.Wrappers.g.cpp flags.txt | .uno
	echo Android.Base.Wrappers.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.Base.Wrappers.g.cpp.o -c jni/Android.Base.Wrappers.g.cpp

.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Android.Base.AndroidB-e9b6d531.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Android.Base.Primitiv-2b9696be.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Android.Base.Primitiv-45253430.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Android.Base.Primitiv-e437692f.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Android.com.fuse.Expe-9d584358.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Uno.Bool.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Uno.Exception.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Uno.Int.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Uno.Long.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Uno.Type.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: jni/Android.com.fuse.ExperimentalHttp.g.cpp flags.txt | .uno
	echo Android.com.fuse.ExperimentalHttp.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.com.fuse.ExperimentalHttp.g.cpp.o -c jni/Android.com.fuse.ExperimentalHttp.g.cpp

.uno/Fuse.g.cpp.o: include/_root.FuseNodes_bundle.h
.uno/Fuse.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Fuse.g.cpp.o: include/Android.Base.Wrappers-88f7a41f.h
.uno/Fuse.g.cpp.o: include/Fuse.Android.AppRoot.h
.uno/Fuse.g.cpp.o: include/Fuse.Android.RootGraphicsView.h
.uno/Fuse.g.cpp.o: include/Fuse.Android.StatusBarConfig.h
.uno/Fuse.g.cpp.o: include/Fuse.Android.TextRenderer.h
.uno/Fuse.g.cpp.o: include/Fuse.AndroidProperties.h
.uno/Fuse.g.cpp.o: include/Fuse.App.h
.uno/Fuse.g.cpp.o: include/Fuse.App.RootViewHost.h
.uno/Fuse.g.cpp.o: include/Fuse.AppBase.h
.uno/Fuse.g.cpp.o: include/Fuse.Behavior.h
.uno/Fuse.g.cpp.o: include/Fuse.Binding.h
.uno/Fuse.g.cpp.o: include/Fuse.Box.h
.uno/Fuse.g.cpp.o: include/Fuse.CacheFramebuffer.h
.uno/Fuse.g.cpp.o: include/Fuse.Collision.h
.uno/Fuse.g.cpp.o: include/Fuse.Computer.h
.uno/Fuse.g.cpp.o: include/Fuse.Computer-1.h
.uno/Fuse.g.cpp.o: include/Fuse.Controls.GraphicsView.h
.uno/Fuse.g.cpp.o: include/Fuse.Controls.INativeViewRoot.h
.uno/Fuse.g.cpp.o: include/Fuse.Controls.ITextRenderer.h
.uno/Fuse.g.cpp.o: include/Fuse.Controls.Native.-6c93d881.h
.uno/Fuse.g.cpp.o: include/Fuse.Controls.Native.-e502cdf1.h
.uno/Fuse.g.cpp.o: include/Fuse.Controls.TextControl.h
.uno/Fuse.g.cpp.o: include/Fuse.Controls.TreeRen-26cd82a8.h
.uno/Fuse.g.cpp.o: include/Fuse.DeferredManager.h
.uno/Fuse.g.cpp.o: include/Fuse.Diagnostic.h
.uno/Fuse.g.cpp.o: include/Fuse.DiagnosticHandler.h
.uno/Fuse.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.g.cpp.o: include/Fuse.Diagnostics.Temporal.h
.uno/Fuse.g.cpp.o: include/Fuse.DiagnosticType.h
.uno/Fuse.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.g.cpp.o: include/Fuse.DrawHelpers.h
.uno/Fuse.g.cpp.o: include/Fuse.FastMatrix.h
.uno/Fuse.g.cpp.o: include/Fuse.FastProperty1.h
.uno/Fuse.g.cpp.o: include/Fuse.FastProperty1Link.h
.uno/Fuse.g.cpp.o: include/Fuse.FastProperty1Link-1.h
.uno/Fuse.g.cpp.o: include/Fuse.FastProperty2.h
.uno/Fuse.g.cpp.o: include/Fuse.FastProperty2Link.h
.uno/Fuse.g.cpp.o: include/Fuse.FastProperty2Link-1.h
.uno/Fuse.g.cpp.o: include/Fuse.FileSourceConverter.h
.uno/Fuse.g.cpp.o: include/Fuse.FixedViewport.h
.uno/Fuse.g.cpp.o: include/Fuse.Float2Computer.h
.uno/Fuse.g.cpp.o: include/Fuse.Float3Computer.h
.uno/Fuse.g.cpp.o: include/Fuse.Float4Computer.h
.uno/Fuse.g.cpp.o: include/Fuse.Font.h
.uno/Fuse.g.cpp.o: include/Fuse.FramebufferPool.h
.uno/Fuse.g.cpp.o: include/Fuse.FramebufferPoolImpl.h
.uno/Fuse.g.cpp.o: include/Fuse.FrustumViewport.h
.uno/Fuse.g.cpp.o: include/Fuse.GraphicsWorker.h
.uno/Fuse.g.cpp.o: include/Fuse.HitTestCallback.h
.uno/Fuse.g.cpp.o: include/Fuse.HitTestContext.h
.uno/Fuse.g.cpp.o: include/Fuse.HitTestResult.h
.uno/Fuse.g.cpp.o: include/Fuse.IActualPlacement.h
.uno/Fuse.g.cpp.o: include/Fuse.IArray.h
.uno/Fuse.g.cpp.o: include/Fuse.IBeginRemoveVisu-90c91ef5.h
.uno/Fuse.g.cpp.o: include/Fuse.ICommonViewport.h
.uno/Fuse.g.cpp.o: include/Fuse.IDeferred.h
.uno/Fuse.g.cpp.o: include/Fuse.IFrame.h
.uno/Fuse.g.cpp.o: include/Fuse.IFrustum.h
.uno/Fuse.g.cpp.o: include/Fuse.ILoading.h
.uno/Fuse.g.cpp.o: include/Fuse.ILoadingStatic.h
.uno/Fuse.g.cpp.o: include/Fuse.INameListener.h
.uno/Fuse.g.cpp.o: include/Fuse.Input.Focus.h
.uno/Fuse.g.cpp.o: include/Fuse.Input.FocusNavig-66c283ba.h
.uno/Fuse.g.cpp.o: include/Fuse.Input.Keyboard.h
.uno/Fuse.g.cpp.o: include/Fuse.Internal.FontFac-589fc2ef.h
.uno/Fuse.g.cpp.o: include/Fuse.Internal.FrustumMatrix.h
.uno/Fuse.g.cpp.o: include/Fuse.Internal.MiniLis-9fb880c9.h
.uno/Fuse.g.cpp.o: include/Fuse.Internal.SystemFont.h
.uno/Fuse.g.cpp.o: include/Fuse.InvalidateLayoutReason.h
.uno/Fuse.g.cpp.o: include/Fuse.IObject.h
.uno/Fuse.g.cpp.o: include/Fuse.IParentObserver.h
.uno/Fuse.g.cpp.o: include/Fuse.IRenderViewport.h
.uno/Fuse.g.cpp.o: include/Fuse.IScalingMode.h
.uno/Fuse.g.cpp.o: include/Fuse.ITemplateSource.h
.uno/Fuse.g.cpp.o: include/Fuse.ITransformMode.h
.uno/Fuse.g.cpp.o: include/Fuse.ITransformRelative.h
.uno/Fuse.g.cpp.o: include/Fuse.ITranslationMode.h
.uno/Fuse.g.cpp.o: include/Fuse.IUpdateListener.h
.uno/Fuse.g.cpp.o: include/Fuse.IViewport.h
.uno/Fuse.g.cpp.o: include/Fuse.JSFileSource.h
.uno/Fuse.g.cpp.o: include/Fuse.Json.h
.uno/Fuse.g.cpp.o: include/Fuse.KeyboardBootstrapper.h
.uno/Fuse.g.cpp.o: include/Fuse.Layer.h
.uno/Fuse.g.cpp.o: include/Fuse.LayoutDependent.h
.uno/Fuse.g.cpp.o: include/Fuse.LayoutParams.Flags.h
.uno/Fuse.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.g.cpp.o: include/Fuse.LayoutPriority.h
.uno/Fuse.g.cpp.o: include/Fuse.LayoutRole.h
.uno/Fuse.g.cpp.o: include/Fuse.Marshal.h
.uno/Fuse.g.cpp.o: include/Fuse.Marshal.IConverter.h
.uno/Fuse.g.cpp.o: include/Fuse.MarshalException.h
.uno/Fuse.g.cpp.o: include/Fuse.MobileBootstrapping.h
.uno/Fuse.g.cpp.o: include/Fuse.NameRegistry.h
.uno/Fuse.g.cpp.o: include/Fuse.Node.DataFinder.h
.uno/Fuse.g.cpp.o: include/Fuse.Node.DataWatcher.h
.uno/Fuse.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.g.cpp.o: include/Fuse.Node.IDataEnumerator.h
.uno/Fuse.g.cpp.o: include/Fuse.Node.IDataListener.h
.uno/Fuse.g.cpp.o: include/Fuse.Node.ISiblingDataProvider.h
.uno/Fuse.g.cpp.o: include/Fuse.Node.ISubtreeDataProvider.h
.uno/Fuse.g.cpp.o: include/Fuse.NodeGroupBase.Co-a2bdc185.h
.uno/Fuse.g.cpp.o: include/Fuse.NodeGroupBase.EmptyNode.h
.uno/Fuse.g.cpp.o: include/Fuse.NodeGroupBase.h
.uno/Fuse.g.cpp.o: include/Fuse.NumberComputer.h
.uno/Fuse.g.cpp.o: include/Fuse.OrthographicFrustum.h
.uno/Fuse.g.cpp.o: include/Fuse.PendingRemoveVisual.h
.uno/Fuse.g.cpp.o: include/Fuse.PlacedArgs.h
.uno/Fuse.g.cpp.o: include/Fuse.PlacedHandler.h
.uno/Fuse.g.cpp.o: include/Fuse.Platform.AppEvents.h
.uno/Fuse.g.cpp.o: include/Fuse.Platform.ApplicationState.h
.uno/Fuse.g.cpp.o: include/Fuse.Platform.Lifecycle.h
.uno/Fuse.g.cpp.o: include/Fuse.Platform.SystemUI.h
.uno/Fuse.g.cpp.o: include/Fuse.Preview.SelectionManager.h
.uno/Fuse.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.g.cpp.o: include/Fuse.Ray.h
.uno/Fuse.g.cpp.o: include/Fuse.RelativeTransform-1.h
.uno/Fuse.g.cpp.o: include/Fuse.RenderTargetEntry.h
.uno/Fuse.g.cpp.o: include/Fuse.RequestBringInto-2d120b4f.h
.uno/Fuse.g.cpp.o: include/Fuse.RequestBringIntoViewArgs.h
.uno/Fuse.g.cpp.o: include/Fuse.Resources.DisposalManager.h
.uno/Fuse.g.cpp.o: include/Fuse.Resources.DisposalRequest.h
.uno/Fuse.g.cpp.o: include/Fuse.Resources.Resour-fabdcc8b.h
.uno/Fuse.g.cpp.o: include/Fuse.RootStage.h
.uno/Fuse.g.cpp.o: include/Fuse.RootViewport.h
.uno/Fuse.g.cpp.o: include/Fuse.Rotation.h
.uno/Fuse.g.cpp.o: include/Fuse.Scaling.h
.uno/Fuse.g.cpp.o: include/Fuse.ScalingModes.h
.uno/Fuse.g.cpp.o: include/Fuse.ScalingModes.IdentityMode.h
.uno/Fuse.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/Fuse.g.cpp.o: include/Fuse.Scripting.ExecutionThread.h
.uno/Fuse.g.cpp.o: include/Fuse.Scripting.External.h
.uno/Fuse.g.cpp.o: include/Fuse.Scripting.Function.h
.uno/Fuse.g.cpp.o: include/Fuse.Scripting.Object.h
.uno/Fuse.g.cpp.o: include/Fuse.Scripting.Script-102b1113.h
.uno/Fuse.g.cpp.o: include/Fuse.Scripting.Script-1fc6121d.h
.uno/Fuse.g.cpp.o: include/Fuse.Scripting.ScriptClass.h
.uno/Fuse.g.cpp.o: include/Fuse.Scripting.ScriptMember.h
.uno/Fuse.g.cpp.o: include/Fuse.Scripting.ScriptMethod-1.h
.uno/Fuse.g.cpp.o: include/Fuse.Shear.h
.uno/Fuse.g.cpp.o: include/Fuse.Size2Computer.h
.uno/Fuse.g.cpp.o: include/Fuse.SizeComputer.h
.uno/Fuse.g.cpp.o: include/Fuse.Stage.h
.uno/Fuse.g.cpp.o: include/Fuse.StringComputer.h
.uno/Fuse.g.cpp.o: include/Fuse.SystemFont.h
.uno/Fuse.g.cpp.o: include/Fuse.SystemFont.Style.h
.uno/Fuse.g.cpp.o: include/Fuse.SystemFont.Weight.h
.uno/Fuse.g.cpp.o: include/Fuse.SystemUIFrame.h
.uno/Fuse.g.cpp.o: include/Fuse.TemplateSourceImpl.h
.uno/Fuse.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.g.cpp.o: include/Fuse.Transform.h
.uno/Fuse.g.cpp.o: include/Fuse.Translation.h
.uno/Fuse.g.cpp.o: include/Fuse.TranslationModes.h
.uno/Fuse.g.cpp.o: include/Fuse.TranslationModes.SizeMode.h
.uno/Fuse.g.cpp.o: include/Fuse.TranslationModes-400fada6.h
.uno/Fuse.g.cpp.o: include/Fuse.TranslationModes-5183f957.h
.uno/Fuse.g.cpp.o: include/Fuse.TranslationModes-98d57f14.h
.uno/Fuse.g.cpp.o: include/Fuse.TranslationModes-f01a2450.h
.uno/Fuse.g.cpp.o: include/Fuse.UnhandledExceptionArgs.h
.uno/Fuse.g.cpp.o: include/Fuse.UnhandledExceptionHandler.h
.uno/Fuse.g.cpp.o: include/Fuse.UpdateAction.h
.uno/Fuse.g.cpp.o: include/Fuse.UpdateDispatcher.h
.uno/Fuse.g.cpp.o: include/Fuse.UpdateListener.h
.uno/Fuse.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.g.cpp.o: include/Fuse.UserEvent.h
.uno/Fuse.g.cpp.o: include/Fuse.UserEventArgs.h
.uno/Fuse.g.cpp.o: include/Fuse.UserEventDispatch.h
.uno/Fuse.g.cpp.o: include/Fuse.UserEventHandler.h
.uno/Fuse.g.cpp.o: include/Fuse.ViewportHelpers.h
.uno/Fuse.g.cpp.o: include/Fuse.Visual.CancelInt-459c56d4.h
.uno/Fuse.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.g.cpp.o: include/Fuse.Visual.HitTestRecord.h
.uno/Fuse.g.cpp.o: include/Fuse.Visual.HitTestTr-39a91efd.h
.uno/Fuse.g.cpp.o: include/Fuse.Visual.InteractionItem.h
.uno/Fuse.g.cpp.o: include/Fuse.Visual.ParameterProperty.h
.uno/Fuse.g.cpp.o: include/Fuse.Visual.VisualBits.h
.uno/Fuse.g.cpp.o: include/Fuse.VisualBounds.h
.uno/Fuse.g.cpp.o: include/Fuse.VisualContext.h
.uno/Fuse.g.cpp.o: include/Fuse.VisualEvent-2.h
.uno/Fuse.g.cpp.o: include/Fuse.VisualEventArgs.h
.uno/Fuse.g.cpp.o: include/Fuse.VisualEventHandler.h
.uno/Fuse.g.cpp.o: include/Fuse.VisualEventMode.h
.uno/Fuse.g.cpp.o: include/Fuse.VisualListCache.h
.uno/Fuse.g.cpp.o: include/Fuse.WrapException.h
.uno/Fuse.g.cpp.o: include/OpenGL.GL.h
.uno/Fuse.g.cpp.o: include/OpenGL.GLClearBufferMask.h
.uno/Fuse.g.cpp.o: include/OpenGL.GLEnableCap.h
.uno/Fuse.g.cpp.o: include/OpenGL.GLError.h
.uno/Fuse.g.cpp.o: include/OpenGL.GLFramebufferHandle.h
.uno/Fuse.g.cpp.o: include/OpenGL.GLFramebufferTarget.h
.uno/Fuse.g.cpp.o: include/OpenGL.GLInteger4Name.h
.uno/Fuse.g.cpp.o: include/Uno.Action.h
.uno/Fuse.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.g.cpp.o: include/Uno.Action-3.h
.uno/Fuse.g.cpp.o: include/Uno.AggregateException.h
.uno/Fuse.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Fuse.g.cpp.o: include/Uno.ArgumentOutOfRang-6803b39e.h
.uno/Fuse.g.cpp.o: include/Uno.Array.h
.uno/Fuse.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.g.cpp.o: include/Uno.Char.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.Dicti-d1699346.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.Enume-8ddd045.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.HashSet-1.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.IList-b56be992.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.List--251bdc7d.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.Prior-7cf783be.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.Prior-bb0a4ec8.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.RootableList-1.h
.uno/Fuse.g.cpp.o: include/Uno.Color.h
.uno/Fuse.g.cpp.o: include/Uno.Comparison-1.h
.uno/Fuse.g.cpp.o: include/Uno.Compiler.ExportTa-39be7c2b.h
.uno/Fuse.g.cpp.o: include/Uno.Data.Json.JsonWriter.h
.uno/Fuse.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.g.cpp.o: include/Uno.Diagnostics.Clock.h
.uno/Fuse.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.g.cpp.o: include/Uno.Diagnostics.Debug-5d778620.h
.uno/Fuse.g.cpp.o: include/Uno.Double.h
.uno/Fuse.g.cpp.o: include/Uno.Enum.h
.uno/Fuse.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Fuse.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.g.cpp.o: include/Uno.Float.h
.uno/Fuse.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.g.cpp.o: include/Uno.Func-4.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.Framebuffer.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.FramebufferFlags.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.PrimitiveType.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.RenderTarget.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.VertexAt-4a875e1d.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.g.cpp.o: include/Uno.IDisposable.h
.uno/Fuse.g.cpp.o: include/Uno.Int.h
.uno/Fuse.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.g.cpp.o: include/Uno.IO.Bundle.h
.uno/Fuse.g.cpp.o: include/Uno.IO.BundleFile.h
.uno/Fuse.g.cpp.o: include/Uno.IO.File.h
.uno/Fuse.g.cpp.o: include/Uno.IO.Stream.h
.uno/Fuse.g.cpp.o: include/Uno.Math.h
.uno/Fuse.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.g.cpp.o: include/Uno.Object.h
.uno/Fuse.g.cpp.o: include/Uno.Platform.CoreApp.h
.uno/Fuse.g.cpp.o: include/Uno.Platform.Display.h
.uno/Fuse.g.cpp.o: include/Uno.Platform.Displays.h
.uno/Fuse.g.cpp.o: include/Uno.Platform.EventSou-b16da529.h
.uno/Fuse.g.cpp.o: include/Uno.Platform.Key.h
.uno/Fuse.g.cpp.o: include/Uno.Platform.KeyEventArgs.h
.uno/Fuse.g.cpp.o: include/Uno.Platform.TimerEventArgs.h
.uno/Fuse.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.g.cpp.o: include/Uno.Quaternion.h
.uno/Fuse.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.g.cpp.o: include/Uno.Recti.h
.uno/Fuse.g.cpp.o: include/Uno.Runtime.Implement-5299dae0.h
.uno/Fuse.g.cpp.o: include/Uno.Runtime.Implement-6e9df330.h
.uno/Fuse.g.cpp.o: include/Uno.Runtime.Implement-81e7ab4c.h
.uno/Fuse.g.cpp.o: include/Uno.Runtime.Implement-eca777ec.h
.uno/Fuse.g.cpp.o: include/Uno.SByte.h
.uno/Fuse.g.cpp.o: include/Uno.Short.h
.uno/Fuse.g.cpp.o: include/Uno.String.h
.uno/Fuse.g.cpp.o: include/Uno.Text.StringBuilder.h
.uno/Fuse.g.cpp.o: include/Uno.Threading.AutoResetEvent.h
.uno/Fuse.g.cpp.o: include/Uno.Threading.Concurr-cd310558.h
.uno/Fuse.g.cpp.o: include/Uno.Threading.EventWaitHandle.h
.uno/Fuse.g.cpp.o: include/Uno.Threading.IDispatcher.h
.uno/Fuse.g.cpp.o: include/Uno.Threading.Monitor.h
.uno/Fuse.g.cpp.o: include/Uno.Threading.Thread.h
.uno/Fuse.g.cpp.o: include/Uno.Threading.ThreadStart.h
.uno/Fuse.g.cpp.o: include/Uno.Type.h
.uno/Fuse.g.cpp.o: include/Uno.UInt.h
.uno/Fuse.g.cpp.o: include/Uno.UShort.h
.uno/Fuse.g.cpp.o: include/Uno.UX.BundleFileSource.h
.uno/Fuse.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.g.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/Fuse.g.cpp.o: include/Uno.UX.Property-1.h
.uno/Fuse.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Fuse.g.cpp.o: include/Uno.UX.Resource.h
.uno/Fuse.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.g.cpp.o: include/Uno.UX.Size.h
.uno/Fuse.g.cpp.o: include/Uno.UX.Size2.h
.uno/Fuse.g.cpp.o: include/Uno.UX.Template.h
.uno/Fuse.g.cpp.o: include/Uno.UX.Unit.h
.uno/Fuse.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.g.cpp.o: include/Uno/Graphics/GLHelper.h
.uno/Fuse.g.cpp.o: include/Uno/JNIHelper.h
.uno/Fuse.g.cpp.o: jni/Fuse.g.cpp flags.txt | .uno
	echo Fuse.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.g.cpp.o -c jni/Fuse.g.cpp

.uno/Fuse.Platform.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Fuse.Platform.g.cpp.o: include/Android.Base.Wrappers-88f7a41f.h
.uno/Fuse.Platform.g.cpp.o: include/Fuse.Platform.AppEvents.h
.uno/Fuse.Platform.g.cpp.o: include/Fuse.Platform.ApplicationState.h
.uno/Fuse.Platform.g.cpp.o: include/Fuse.Platform.Lifecycle.h
.uno/Fuse.Platform.g.cpp.o: include/Fuse.Platform.SystemU-2024c55a.h
.uno/Fuse.Platform.g.cpp.o: include/Fuse.Platform.SystemU-a6dfc5d1.h
.uno/Fuse.Platform.g.cpp.o: include/Fuse.Platform.SystemUI.h
.uno/Fuse.Platform.g.cpp.o: include/Fuse.Platform.SystemUIID.h
.uno/Fuse.Platform.g.cpp.o: include/Fuse.Platform.SysUIState.h
.uno/Fuse.Platform.g.cpp.o: include/Java.Object.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.Compiler.ExportTa-39be7c2b.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.Platform.Applicat-bf686309.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.Platform.ApplicationState.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.Platform.CoreApp.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.Platform.g.cpp.o: include/Uno/Graphics/GLHelper.h
.uno/Fuse.Platform.g.cpp.o: include/Uno/JNIHelper.h
.uno/Fuse.Platform.g.cpp.o: jni/Fuse.Platform.g.cpp flags.txt | .uno
	echo Fuse.Platform.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Platform.g.cpp.o -c jni/Fuse.Platform.g.cpp

.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Anima-2f54bcf0.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Anima-9f6f3909.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Animator.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.AnimatorState.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Attra-1414c3f0.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Attra-7dc13006.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Attract.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Attractor-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Avera-2b3394b0.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Avera-d2893fe7.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.AverageMixer.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Change-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Conti-233bd07.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Conti-d67e9f3.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Conve-36a5c7e0.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Conve-36a5c7e2.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Conve-36a5c7e3.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Conve-d9da2591.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Converter-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.ConverterFloat.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.ConverterSize.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.ConverterSize2.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Creat-d717a85f.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Cubic-aa541862.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Cycle-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.CycleState-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.CycleWaveform.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Desti-3d0d380e.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Desti-445b5add.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Discr-864f74d9.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Discr-ab696ab5.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Discr-c354302b.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Discr-c9a8607c.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Discr-ed319c64.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.DiscreteMixer.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-1629b8de.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-2bc722aa.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-2cfac9fd.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-3403b834.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-3a4eddc3.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-415c2349.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-4465e553.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-575a1f5f.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-5c94be4a.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-5e2591f2.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-5f101b83.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-61472a22.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-63fc962e.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-69caaa88.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-76822aaf.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-77784bb7.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-7c43bf9c.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-87c2bc3c.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-88f71b99.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-8d87fbcd.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-9b0d98b6.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-a5b90955.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-b5669208.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-bcab48ca.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-ccffb351.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-d718cbb3.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-dd81a6a5.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-e748cec3.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-e938836c.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-f2fa966f.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-fbce721d.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easing.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.EasingTrack.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.FastM-24ef5203.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.IBase-d3bd6f2e.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.IMixer.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.IMixerHandle-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.IMixerMaster.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.IPlay-a3f2f81f.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.IResize.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.IResizeMode.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.IUnwr-594abe9.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Maste-197394bf.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Maste-2a82cad6.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Maste-4c7af709.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Maste-9f52236c.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.MasterBase-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Mixer.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.MixerBase.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.MixerHandle-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.MixOp.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Move.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Nothi-ca9c5305.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Nothing.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.OpenA-dfad1354.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.OpenAnimator.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Playe-8fa817d1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Player.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.PlayerPart.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.PlayMode.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Range-39d99c29.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.RangeAdapter-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Resiz-a57d457c.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Resize.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Rotate.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Scale.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.SeekDirection.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.SeekResult.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Skew.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Spin.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.SpinState.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Track-26653137.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.TrackAnimator.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.TrackProvider.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Trans-1cbe36aa.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Trans-997c8373.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Trigg-21dd249.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Trigg-75f4f270.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Trigg-96b74ffc.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.FastMatrix.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.IActualPlacement.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Internal.Blender-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Internal.BlenderMap.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.IScalingMode.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.ITranslationMode.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Marshal.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Motion.Destinati-3569762f.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Motion.Destinati-bd678751.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Motion.Simulatio-8063728b.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Motion.Simulatio-a4ba96c1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Motion.Simulatio-b08eb1c5.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.PlacedHandler.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Reactive.Expression.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Reactive.IContext.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Reactive.IExpression.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Reactive.IListener.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.RelativeTransform-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Rotation.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.ScalingModes.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Transform.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Translation.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.TranslationModes.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Diagnostics.Debug-5d778620.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.IDisposable.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.String.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.UX.Property.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.UX.Property-1.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.UX.PropertyAccessor.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.UX.Size.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.UX.Size2.h
.uno/Fuse.Animations.g.cpp.o: jni/Fuse.Animations.g.cpp flags.txt | .uno
	echo Fuse.Animations.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Animations.g.cpp.o -c jni/Fuse.Animations.g.cpp

.uno/Fuse.Preview.g.cpp.o: include/Fuse.Preview.ISelection.h
.uno/Fuse.Preview.g.cpp.o: include/Fuse.Preview.SelectionManager.h
.uno/Fuse.Preview.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Preview.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Preview.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Preview.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Fuse.Preview.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Preview.g.cpp.o: jni/Fuse.Preview.g.cpp flags.txt | .uno
	echo Fuse.Preview.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Preview.g.cpp.o -c jni/Fuse.Preview.g.cpp

.uno/Fuse.Internal.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Fuse.Internal.g.cpp.o: include/Android.Base.Wrappers-88f7a41f.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Drawing.ResampleMode.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Elements.Alignment.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Elements.AlignmentHelpers.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Elements.StretchDirection.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Elements.StretchMode.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Elements.StretchSizing.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Android-2abf7b1f.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Android-336f3d43.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Android-44c8daff.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Android-4d789ec5.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Blender-1.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.BlenderMap.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Curves.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.DoubleBlender.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.DrawManager.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Float2Blender.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Float3Blender.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Float4Blender.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.FloatBlender.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.FontFac-589fc2ef.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.FrustumMatrix.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.IImageC-c450902.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.ImageContainer.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.MiniLis-9fb880c9.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.MiniList-1.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.MiniListMode.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.ObjectL-6b797d25.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.ObjectL-a57e6857.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.ObjectL-cd9a6807.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.ObjectL-dfb3492f.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.ObjectList-1.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.RectPacker.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.ScalarBlender-1.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Size2Blender.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.SizeBlender.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.SizingContainer.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.SkylineNode.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Statistics.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.SystemFont.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.VectorUtil.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Resources.FileImageSource.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Resources.HttpImageSource.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Resources.ImageS-355caaa1.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Resources.ImageS-a985306c.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Resources.ImageSource.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Resources.MemoryPolicy.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Resources.MultiD-7688643f.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Resources.System-1e583f40.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.SystemFont.Style.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.SystemFont.Weight.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.ArgumentOutOfRang-6803b39e.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.Enume-8ddd045.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.HashSet-1.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.Linke-712f9f5e.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.LinkedList-1.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.List--251bdc7d.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.RootableList-1.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Compiler.ExportTa-39be7c2b.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.IndexOutOfRangeException.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.IO.File.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Recti.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Runtime.Implement-eca777ec.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.SByte.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.String.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.UX.Size.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.UX.Size2.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.UX.Unit.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Internal.g.cpp.o: include/Uno/JNIHelper.h
.uno/Fuse.Internal.g.cpp.o: jni/Fuse.Internal.g.cpp flags.txt | .uno
	echo Fuse.Internal.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Internal.g.cpp.o -c jni/Fuse.Internal.g.cpp

.uno/Fuse.Internal.Drawing.g.cpp.o: include/_root.FuseControls_bundle.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.Brush.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.DynamicBrush.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.ImageFil-1398d2ef.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.ImageFill.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.LinearGradient.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.SolidColor.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.StaticSolidColor.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Internal.Drawing-d2380448.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.IRenderViewport.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Graphics.Framebuffer.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Graphics.SamplerState.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Graphics.VertexAt-4a875e1d.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Runtime.Implement-6e9df330.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Runtime.Implement-81e7ab4c.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Internal.Drawing.g.cpp.o: jni/Fuse.Internal.Drawing.g.cpp flags.txt | .uno
	echo Fuse.Internal.Drawing.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Internal.Drawing.g.cpp.o -c jni/Fuse.Internal.Drawing.g.cpp

.uno/Fuse.Resources.g.cpp.o: include/Experimental.Http.Htt-2465a87a.h
.uno/Fuse.Resources.g.cpp.o: include/Experimental.Http.HttpLoader.h
.uno/Fuse.Resources.g.cpp.o: include/Experimental.TextureL-b6dfce5c.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.AppBase.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.GraphicsWorker.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.DisposalManager.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.DisposalRequest.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.FileIm-3dfab082.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.FileIm-450e0bee.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.FileImageSource.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.FileIm-b247fd74.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.FileResource.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.HttpIm-93bb70f8.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.HttpImageSource.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.HttpIm-c131ad92.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.HttpIm-cfc77adc.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ImageS-355caaa1.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ImageS-87193ac7.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ImageS-a985306c.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ImageS-d58bb329.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ImageSource.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.IMemoryResource.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ISoftDisposable.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.Loadin-4ba1d630.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.Loadin-51208ece.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.MemoryPolicy.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.MultiD-7688643f.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ProxyI-8b63b1ea.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.Resour-fabdcc8b.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.System-1e583f40.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.Textur-749306c5.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Resources.g.cpp.o: include/OpenGL.GL.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Collections.List--251bdc7d.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Collections.Obser-ca008b9a.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.IO.File.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.IO.Stream.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.String.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.WeakReference-1.h
.uno/Fuse.Resources.g.cpp.o: include/Uno/Graphics/GLHelper.h
.uno/Fuse.Resources.g.cpp.o: jni/Fuse.Resources.g.cpp flags.txt | .uno
	echo Fuse.Resources.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Resources.g.cpp.o -c jni/Fuse.Resources.g.cpp

.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Marshal.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.AppIni-f38e0a02.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.AppInitialized.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Array.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.BoolChangedArgs.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Callback.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Error.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ExecutionThread.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.External.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Factor-31227d87.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.FileModule.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Function.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.FutureFactory-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.IScriptObject.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.IThreadWorker.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.JSObjectUtils.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Module.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Native-56d41531.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Native-c8feecef.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativeCallback.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativeEvent.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Native-fa549b97.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Native-fe154945.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativeFunction.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativeMember.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativeModule.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativePromise-2.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Object.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Result-92713bce.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ResultFactory-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Script-102b1113.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Script-1fc6121d.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ScriptClass.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ScriptMember.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ScriptMethod.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ScriptMethod-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ScriptModule.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ScriptProperty.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.String-a37c2db8.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Value.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ValueC-23d67df6.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Action-3.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Collections.List--251bdc7d.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Collections.Queue-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Func-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Func-4.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.String.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Threading.Future-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Threading.IDispat-6494c48e.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Threading.IDispatcher.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Threading.Monitor.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Threading.Promise-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Threading.Thread.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Threading.ThreadStart.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Tuple.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Tuple-2.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.UInt.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.UX.Property-1.h
.uno/Fuse.Scripting.g.cpp.o: jni/Fuse.Scripting.g.cpp flags.txt | .uno
	echo Fuse.Scripting.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Scripting.g.cpp.o -c jni/Fuse.Scripting.g.cpp

.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.Callback.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.Error.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.External.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.Function.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Array.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.ArrayHandle.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Aut-dcd881e8.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Con-de81fe14.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Context.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Error.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Function.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Handle.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Mar-7db1c341.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Marshaller.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Object.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Sim-16bddfa6.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Sim-2c5af4ca.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Sim-2cabf98b.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Sim-74518142.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Sim-7fe2f38b.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Sim-8e6db8ec.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Sim-957688e3.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Sim-9a8dd579.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Sim-a28c05c4.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Sim-bff391a1.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Sim-d54ebc8a.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Sim-e23d0cc2.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Sim-f359fae.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.Value.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.V8S-275253a8.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.V8S-919be618.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Collections.List--251bdc7d.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.IDisposable.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.IntPtr.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Runtime.InteropSe-e0f0cdcd.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.String.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Scripting.V8.g.cpp.o: jni/Fuse.Scripting.V8.g.cpp flags.txt | .uno
	echo Fuse.Scripting.V8.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Scripting.V8.g.cpp.o -c jni/Fuse.Scripting.V8.g.cpp

.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Handle.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Sim-16bddfa6.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Sim-2c5af4ca.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Sim-2cabf98b.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Sim-74518142.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Sim-7fe2f38b.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Sim-8e6db8ec.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Sim-957688e3.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Sim-9a8dd579.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Sim-a28c05c4.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Sim-bff391a1.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Sim-d54ebc8a.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Sim-e23d0cc2.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Sim-f359fae.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.Value.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Uno.IntPtr.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Uno.String.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: jni/Fuse.Scripting.V8.Simple.g.cpp flags.txt | .uno
	echo Fuse.Scripting.V8.Simple.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Scripting.V8.Simple.g.cpp.o -c jni/Fuse.Scripting.V8.Simple.g.cpp

.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsNav-a8c01cdb.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsPan-1146454c.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsPri-6b573bdb.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsScr-48813899.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsScr-f1bcb258.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Android.Controls.WebView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Animations.Animator.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Animations.Change-1.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Animations.Scale.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Animations.TrackAnimator.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.AppBase.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Arc.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.BottomB-f0a90651.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.BottomF-14cf09.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Buffere-2ce2abf.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ButtonBase.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Circle.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ContentControl.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Control.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Curve.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.CurveClose.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.CurveExtrude.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.CurvePo-af310e85.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.CurvePoint.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.CurveStyle.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Default-2aa05aed.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.DockPanel.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Element-32c554a5.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Ellipse.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.EllipticalShape.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Extensions.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Fallbac-cc306b75.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.FitMode.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.FreezeDrawable.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Graphic-a81f3443.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Graphic-a9e50d2e.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.GraphicsView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Grid.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Image.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ImageElementDraw.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.INativeViewRoot.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ISourceReceiver.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ITextRenderer.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.IWebView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.JavaScriptCall.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.LayoutC-4864ea29.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.LayoutControl.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.LoadHtmlCall.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-11768b55.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-144a8301.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-20f6897.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-3800373f.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-454aa827.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-56f4c151.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-65e8a589.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-737f180b.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-9abb3393.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-a0a2bb3d.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-a5b5d1b.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-b1307a12.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-b2e724e6.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-bda9e869.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-be81896e.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-c20be635.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-d04e9e71.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-dcf1df13.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-dd7dd49d.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-e502cdf1.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-eb2a3c99.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-f43d469d.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-f8b7cf50.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.ITextView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.IView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-11660598.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-1f9018a.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-2fbffbd2.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-325d320d.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-340a5907.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-3abd94bc.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-4da4086.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-70e90308.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-72feefa7.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-831df711.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-8b5bc4f.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-8c78e52a.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-9705f33a.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-9f619694.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-d377da72.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-d5b6859a.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-d9c18741.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-dfe8cc6e.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-e43a213c.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-fe23abf3.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigator.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.NavigatorSwipe.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Page.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.PageControl.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.PageFreeze.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.PageInd-b9aff4dc.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.PageIndicatorDot.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.PagePrepareBusy.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Panel.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Path.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Path.Positioning.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Rectangle.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.RegularPolygon.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.RemoveType.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ReuseType.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Router_-99c7a92d.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ScrollDirections.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ScrollP-640a7167.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ScrollP-f741d328.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ScrollV-56310436.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ScrollV-8441b02b.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ScrollV-9171ed6c.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ScrollV-b691622.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ScrollView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ScrollViewBase.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Shape.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Shape.R-4809cb74.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Star.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.StatusB-d3f2d898.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Text.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextAlignment.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextCon-f0b9bb41.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextCon-fc687c10.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextControl.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextInp-90db19ac.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextTruncation.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextWrapping.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ToggleControl.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TopFram-291f3101.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TreeRen-26cd82a8.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TreeRen-789810ec.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TreeRenderer.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.URISche-2ed3a615.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Video.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.VideoIm-b5ceac8f.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.WebView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.Brush.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.DrawObjectWatcher.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.DynamicBrush.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.FillRule.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.IDrawObj-d34d045e.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.ISolidColor.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.ISurfaceDrawable.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.LineMetrics.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.LineSegment.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.LineSegmentFlags.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.LineSegments.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.LineSegmentType.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.Primitiv-8e6a7ca2.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.Primitives.Circle.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.Primitives.Wedge.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.ResampleMode.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.SolidColor.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.StaticSolidColor.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.Stroke.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.Surface.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.SurfaceManager.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.SurfacePath.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.SurfaceUtil.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.Alignment.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.AlignmentHelpers.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.BoxSizing.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.Element-bd497d56.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.HitTestMode.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.Interna-78588865.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.ITreeRenderer.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.LayoutM-516f33ff.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.StretchDirection.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.StretchMode.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.StretchSizing.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.Visibility.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.FastProperty2.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Font.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.FramebufferPool.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.FrustumViewport.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.KeepFocusInView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.Scroller.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.Swiped.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.SwipedHow.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.SwipeDirection.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.SwipeGesture.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.SwipingAnimation.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.HitTestContext.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.ICommonViewport.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.IFrustum.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.ILoading.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.ILoadingStatic.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Input.GesturePriority.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Internal.Curves.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Internal.Drawing-d2380448.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Internal.DrawManager.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Internal.IImageC-c450902.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Internal.ImageContainer.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Internal.SizingContainer.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.InvalidateLayoutReason.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.IRenderViewport.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.IViewport.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Json.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.LayoutDependent.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.LayoutPriority.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.LayoutRole.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.Dock.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.DockLayout.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.GridLayout.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.Layout.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.Layouts.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.Orientation.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Marshal.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Motion.MotionConfig.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Motion.ScrollViewMotion.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Activ-5bc1c951.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Activ-7d976650.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Allow-1def7c6f.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.EndSeekArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Expli-27e79c7b.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Histo-b65f239b.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.IRouterOutlet.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Linea-8f82d0a2.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.ModifyRouteHow.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Navig-11678f15.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Navig-4be788bd.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Navigation.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.NavigationArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.NavigationMode.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Navig-b94564f6.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Navig-c3ed68c1.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Navig-f3bd6778.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.OutletType.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Route-2abd492c.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Router.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.RouterModify.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Routi-30764b7e.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.RoutingResult.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Struc-153e70a0.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.SwipeDirection.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.SwipeNavigate.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.UpdateSeekArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Visua-f5708ad5.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.NodeGroupBase.Co-a2bdc185.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.NodeGroupBase.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.OrthographicFrustum.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Platform.ApplicationState.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Platform.Lifecycle.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Platform.SystemU-2024c55a.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Platform.SystemUI.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Ray.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Reactive.BindingMode.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Reactive.Constan-264ec80.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Reactive.Constant.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Reactive.DataBinding.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Reactive.IExpression.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Reactive.Property.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Resources.ImageS-355caaa1.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Resources.ImageS-a985306c.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Resources.ImageS-d58bb329.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Resources.ImageSource.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Scripting.BoolChangedArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Scripting.ExecutionThread.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Scripting.ScriptClass.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Scripting.ScriptMember.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Scripting.ScriptMethod-1.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Scripting.String-a37c2db8.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Translation.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.Actions-b3c1f4a1.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.Actions-fcab7e57.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.BusyTask.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.BusyTaskActivity.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.BusyTaskMatch.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.Transition.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.Trigger.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.WhileBool.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.ViewportHelpers.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.VisualBounds.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.VisualContext.h
.uno/Fuse.Controls.g.cpp.o: include/Java.Object.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Action-3.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.ArgumentException.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Collections.Dicti-d1699346.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Collections.Enume-8ddd045.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Collections.RootableList-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Color.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Diagnostics.Debug-5d778620.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Graphics.Framebuffer.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Graphics.SamplerState.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Graphics.VertexAt-4a875e1d.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Recti.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Runtime.Implement-6e9df330.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Runtime.Implement-81e7ab4c.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.String.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UInt.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.NameTable.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.Property.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.Property-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.PropertyAccessor.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.Size.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.Template.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.Unit.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Controls.g.cpp.o: jni/Fuse.Controls.g.cpp flags.txt | .uno
	echo Fuse.Controls.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Controls.g.cpp.o -c jni/Fuse.Controls.g.cpp

.uno/Fuse.Controls.Native.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Android.Base.Wrappers-88f7a41f.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-11768b55.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-118b98c3.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-20f6897.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-3800373f.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-5999be91.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-6275f02c.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-6c93d881.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-737f180b.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-a5b5d1b.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-ae84b26e.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-b1307a12.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-b2e724e6.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-ba5282a0.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-be81896e.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-c578532e.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-d04e9e71.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-dcf1df13.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-e502cdf1.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-e8015a54.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.ITextView.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.IView.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.ScrollDirections.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.TextAlignment.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.TextInp-90db19ac.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.TextTruncation.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.TextWrapping.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Drawing.Brush.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Drawing.Stroke.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Font.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Resources.HttpImageSource.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Resources.ImageSource.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Java.Object.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Collections.List--251bdc7d.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Compiler.ExportTa-39be7c2b.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Func-1.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.IO.BundleFile.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.IO.Directory.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.IO.File.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.IO.UserDirectory.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Quaternion.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.String.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Threading.Future-1.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Threading.IDispatcher.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Threading.Promise-1.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.UX.BundleFileSource.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno/JNIHelper.h
.uno/Fuse.Controls.Native.g.cpp.o: jni/Fuse.Controls.Native.g.cpp flags.txt | .uno
	echo Fuse.Controls.Native.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Controls.Native.g.cpp.o -c jni/Fuse.Controls.Native.g.cpp

.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Android.Base.Primitiv-2b9696be.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Android.Base.Wrappers-88f7a41f.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.AppBase.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-118b98c3.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-3a814c3c.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-43e7fbf.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-454aa827.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-4da376b6.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-51b6e8e5.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-56f4c151.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-5999be91.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-6009f819.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-6178e8bc.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-65e8a589.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-6c93d881.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-737f180b.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-7babb833.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-88fc1c1d.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-952ea184.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-98938546.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-9abb3393.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-a0a2bb3d.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-ae84b26e.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-ba5282a0.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-c578532e.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-c67cabe.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-ca2427b3.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-dd7dd49d.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-e502cdf1.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-eb2a3c99.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-f43d469d.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-f715ad8a.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-f8b7cf50.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-fb992a16.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.ScrollDirections.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.TextAlignment.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.TextInp-90db19ac.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.TextTruncation.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.TextWrapping.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Drawing.Brush.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Drawing.DynamicBrush.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Drawing.GradientStop.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Drawing.ISurfaceDrawable.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Drawing.LinearGradient.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Drawing.NativeSurface.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Drawing.SolidColor.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Drawing.StaticSolidColor.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Drawing.Stroke.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Drawing.Surface.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Font.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.ICommonViewport.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Input.Pointer.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Input.PointerEventData.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.IViewport.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Resources.FileImageSource.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Resources.HttpImageSource.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Resources.ImageSource.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Resources.MultiD-7688643f.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Resources.System-1e583f40.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Java.Object.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/OpenGL.GL.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Collections.Enume-8ddd045.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Collections.HashSet-1.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Color.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Compiler.ExportTa-39be7c2b.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Func-3.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.IntPtr.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.IO.BundleFile.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.IO.Directory.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.IO.File.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.IO.UserDirectory.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Long.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Platform.PointerType.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.String.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Threading.Future-1.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.UInt.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.UX.BundleFileSource.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno/Graphics/GLHelper.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno/JNIHelper.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: jni/Fuse.Controls.Native.Android.g.cpp flags.txt | .uno
	echo Fuse.Controls.Native.Android.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Controls.Native.Android.g.cpp.o -c jni/Fuse.Controls.Native.Android.g.cpp

.uno/Fuse.Controls.Native.iOS.g.cpp.o: include/Fuse.Controls.Native.-144a8301.h
.uno/Fuse.Controls.Native.iOS.g.cpp.o: include/Fuse.Controls.Native.-737f180b.h
.uno/Fuse.Controls.Native.iOS.g.cpp.o: include/Fuse.Controls.Native.-bda9e869.h
.uno/Fuse.Controls.Native.iOS.g.cpp.o: include/Fuse.Controls.Native.-c20be635.h
.uno/Fuse.Controls.Native.iOS.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Controls.Native.iOS.g.cpp.o: jni/Fuse.Controls.Native.iOS.g.cpp flags.txt | .uno
	echo Fuse.Controls.Native.iOS.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Controls.Native.iOS.g.cpp.o -c jni/Fuse.Controls.Native.iOS.g.cpp

.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Graphic-2a754d11.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Graphics.Visual.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.FastMatrix.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.VisualBounds.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.String.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Controls.Graphics.g.cpp.o: jni/Fuse.Controls.Graphics.g.cpp flags.txt | .uno
	echo Fuse.Controls.Graphics.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Controls.Graphics.g.cpp.o -c jni/Fuse.Controls.Graphics.g.cpp

.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/_root.FuseControlsNav-bfeb1093.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Animations.Animator.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Animations.Change-1.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Animations.Easing.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Animations.Move.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Animations.Scale.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Animations.TrackAnimator.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Animations.Trans-997c8373.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Controls.Navigat-325d320d.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Controls.Navigat-3abd94bc.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Controls.Navigat-72feefa7.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Controls.Navigat-831df711.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Controls.Navigat-8b5bc4f.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Controls.Navigat-8c78e52a.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Controls.Navigat-9705f33a.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Controls.Navigat-9f619694.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Controls.Page.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Controls.Panel.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.ITranslationMode.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Translation.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.TranslationModes.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Triggers.Actions-e720de5b.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Triggers.Actions-fcab7e57.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Triggers.Transit-122edce0.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Triggers.Trigger.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Uno.String.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Uno.UX.Property-1.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: jni/Fuse.Controls.NavigationInternal.g.cpp flags.txt | .uno
	echo Fuse.Controls.NavigationInternal.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Controls.NavigationInternal.g.cpp.o -c jni/Fuse.Controls.NavigationInternal.g.cpp

.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/_root.FuseControlsVideo_bundle.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.Graphics.Visual.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.VideoIm-28d4de69.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.VideoIm-4d990014.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.VideoIm-6db665eb.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.VideoIm-72c895ca.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.VideoIm-7b2eaac1.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.VideoIm-7c15c6f7.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.VideoIm-aeb6ffae.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.VideoIm-aee99c23.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.VideoIm-b5ceac8f.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.VideoIm-bfe06558.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.VideoIm-c1aafe14.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.VideoIm-f0b495bd.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Elements.Alignment.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Elements.StretchDirection.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Elements.StretchMode.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Elements.StretchSizing.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.HitTestContext.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Internal.SizingContainer.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.InvalidateLayoutReason.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.IRenderViewport.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Platform.ApplicationState.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Platform.Lifecycle.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Triggers.BusyTask.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Triggers.BusyTaskActivity.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Triggers.WhileCompleted.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Triggers.WhilePaused.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Triggers.WhilePlaying.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Char.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Collections.Dicti-d1699346.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Diagnostics.Debug-5d778620.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Graphics.IndexType.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Graphics.SamplerState.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Graphics.VertexAt-4a875e1d.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Graphics.VideoTexture.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.IO.Directory.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.IO.File.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.IO.UserDirectory.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Runtime.Implement-6e9df330.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Runtime.Implement-81e7ab4c.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.String.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Threading.Future.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Threading.Future-1.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.UShort.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: jni/Fuse.Controls.VideoImpl.g.cpp flags.txt | .uno
	echo Fuse.Controls.VideoImpl.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Controls.VideoImpl.g.cpp.o -c jni/Fuse.Controls.VideoImpl.g.cpp

.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Android.Base.Wrappers-88f7a41f.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Fuse.Controls.VideoIm-5927e786.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Fuse.Controls.VideoIm-6db665eb.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Fuse.Controls.VideoIm-78c612f4.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Fuse.Controls.VideoIm-7b2eaac1.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Fuse.Controls.VideoIm-c1aafe14.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Fuse.Controls.VideoIm-de88980f.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Fuse.Platform.ApplicationState.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Fuse.Platform.Lifecycle.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Java.Object.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/OpenGL.GL.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/OpenGL.GLTextureHandle.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Compiler.ExportTa-39be7c2b.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Graphics.VideoTexture.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.IO.BundleFile.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.String.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Threading.Future-1.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.UX.BundleFileSource.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno/Graphics/GLHelper.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno/JNIHelper.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: jni/Fuse.Controls.VideoImpl.Android.g.cpp flags.txt | .uno
	echo Fuse.Controls.VideoImpl.Android.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Controls.VideoImpl.Android.g.cpp.o -c jni/Fuse.Controls.VideoImpl.Android.g.cpp

.uno/Fuse.Input.g.cpp.o: include/Fuse.AppBase.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.HitTestCallback.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.HitTestContext.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.HitTestResult.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Capture.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.CaptureType.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.CustomPoin-ba20e234.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Focus.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusDelegator.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusGained.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusGainedArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusGainedHandler.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusLost.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusLostArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusLostHandler.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusNavig-66c283ba.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusPredi-2161b71d.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusPredi-2503a529.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusPrediction.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Gesture.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.GesturePri-ad5d864e.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.GesturePriority.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.GestureRequest.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Gestures.A-f1e8a9d2.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Gestures.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.GestureType.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.HitTestHelpers.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.IGesture.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.INotifyFocus.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.IPointerEv-f0232aef.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.IsFocusabl-1a22ad48.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.IsFocusabl-2b64bc29.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.IsFocusabl-d09357f5.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Keyboard.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.KeyEventArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.KeyPressed.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.KeyPressedArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.KeyPressedHandler.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.KeyReleased.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.KeyReleasedArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.KeyReleasedHandler.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Pointer.Ca-6b632455.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Pointer.De-21c971a8.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Pointer.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Pointer.PELHolder.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Pointer.PELStatus.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Pointer.Po-e761f634.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerEnt-cfe04f3d.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerEntered.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerEnteredArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerEventArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerEventData.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerLeft.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerLeftArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerLeftHandler.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerMoved.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerMovedHandler.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerPre-d85d5994.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerPressed.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerRel-5863e73d.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerReleased.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerWhe-656d8f41.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerWhe-d06481ac.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerWheelMoved.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.SelectionQuery.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Internal.VectorUtil.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.RootViewport.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.VisualEvent-2.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.VisualEventArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.VisualEventMode.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.Input.g.cpp.o: include/Uno.ArgumentException.h
.uno/Fuse.Input.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.Dicti-d1699346.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.Enume-8ddd045.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Comparison-1.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Diagnostics.Clock.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.Input.g.cpp.o: include/Uno.IDisposable.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Platform.Key.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Platform.PointerType.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.Input.g.cpp.o: include/Uno.String.h
.uno/Fuse.Input.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Fuse.Input.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Input.g.cpp.o: jni/Fuse.Input.g.cpp flags.txt | .uno
	echo Fuse.Input.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Input.g.cpp.o -c jni/Fuse.Input.g.cpp

.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Binding.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.DeferredManager.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.IArray.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Internal.ObjectL-a57e6857.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Internal.ObjectList-1.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.IObject.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.ITemplateSource.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Marshal.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.MarshalException.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.NameRegistry.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.BinaryO-44e56a7e.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.BinaryOperator.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.BindingMode.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Clamp.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Conditional.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Constan-264ec80.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Constant.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Data.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.DataBinding.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.DataSubscription.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.EventBinding.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.EventRecord.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Express-ee33104d.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Expression.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.IContext.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.IEventHandler.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.IEventRecord.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.IExpression.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.IListener.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.InnerLi-d480603c.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.InnerListener.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.InstanceDefer.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.InstanceIdentity.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.InstanceReuse.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Instant-2359146.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Instant-75b959b5.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Instant-b1231a0d.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Instant-c0c79dff.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Instant-ca0b61c8.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Instant-d843266f.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Instantiator.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.IObservable.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.IObserver.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.ISubscription.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.IWriteable.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Lerp.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.LookUp.-f2be5323.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.LookUp.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Name.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Propert-3b65e5e6.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Property.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Quatern-13eb7fcd.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Quatern-4692c3b2.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Resourc-a4dc08c7.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Resource.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.SimpleV-1e1b52a3.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.SimpleV-31a29f4e.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Snapsho-9e1b433f.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Snapshot.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Ternary-ba5fcd50.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.TernaryOperator.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.This.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.UnaryOp-a08b90b8.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.UnaryOperator.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.ValueFo-a26c06f.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.ValueForwarder.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.ValueObserver.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.VarArgF-8afe3c06.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.VarArgFunction.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Resources.Resour-fabdcc8b.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Triggers.BusyTask.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Triggers.BusyTaskActivity.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.Dicti-98f6bc43.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.Dicti-d1699346.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.Dicti-d6e3a7c5.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.Enume-8ddd045.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.List--251bdc7d.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.RootableList-1.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.IDisposable.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.String.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.UX.NameTable.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.UX.Property.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.UX.PropertyAccessor.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.UX.Template.h
.uno/Fuse.Reactive.g.cpp.o: jni/Fuse.Reactive.g.cpp flags.txt | .uno
	echo Fuse.Reactive.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Reactive.g.cpp.o -c jni/Fuse.Reactive.g.cpp

.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Diagnostic.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.DiagnosticType.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Marshal.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.MarshalException.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.-56ee06ad.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.-61f763fd.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.-7e6c8c53.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.-80396262.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.-97046318.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.Http.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.Error.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.Function.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.NativeCallback.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.NativeFunction.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.NativeMember.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.Value.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Diagnostics.Clock.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Long.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.String.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.UX.Resource.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: jni/Fuse.Reactive.FuseJS.g.cpp flags.txt | .uno
	echo Fuse.Reactive.FuseJS.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Reactive.FuseJS.g.cpp.o -c jni/Fuse.Reactive.FuseJS.g.cpp

.uno/Fuse.Motion.g.cpp.o: include/Fuse.Animations.Easing.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Marshal.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.Destinati-3569762f.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.Destinati-bd678751.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.MotionConfig.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.MotionDes-5490bd7d.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.MotionUnit.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.NavigationMotion.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.OverflowType.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.ScrollViewMotion.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.Simulatio-17bdd43e.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.Simulatio-1b299d00.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.Simulatio-2e0ddcfb.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.Simulatio-73b2da14.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.Simulatio-8063728b.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.Simulatio-8291fa3c.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.Simulatio-871f3635.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.Simulatio-b08483ab.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.Simulatio-b08eb1c5.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.Simulatio-ca33dcbb.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.SpringFun-9f762851.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.SpringFunction.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Reactive.Expression.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Reactive.IContext.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Reactive.IExpression.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Reactive.IListener.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Motion.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Motion.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Motion.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Motion.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Motion.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Motion.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Motion.g.cpp.o: include/Uno.IDisposable.h
.uno/Fuse.Motion.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Motion.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Motion.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Motion.g.cpp.o: include/Uno.String.h
.uno/Fuse.Motion.g.cpp.o: jni/Fuse.Motion.g.cpp flags.txt | .uno
	echo Fuse.Motion.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Motion.g.cpp.o -c jni/Fuse.Motion.g.cpp

.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Animations.Easing.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Internal.Blender-1.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Internal.BlenderMap.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Internal.ScalarBlender-1.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Internal.Statistics.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.MotionUnit.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.OverflowType.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulatio-17bdd43e.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulatio-1b299d00.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulatio-2e0ddcfb.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulatio-73b2da14.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulatio-7cce7e04.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulatio-8063728b.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulatio-8291fa3c.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulatio-871f3635.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulatio-a4ba96c1.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulatio-b08483ab.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulatio-b08eb1c5.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulatio-bc50bd.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulatio-ca33dcbb.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulatio-edb97e3.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Uno.String.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Motion.Simulation.g.cpp.o: jni/Fuse.Motion.Simulation.g.cpp flags.txt | .uno
	echo Fuse.Motion.Simulation.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Motion.Simulation.g.cpp.o -c jni/Fuse.Motion.Simulation.g.cpp

.uno/Fuse.Drawing.g.cpp.o: include/_root.FuseDrawing_bundle.h
.uno/Fuse.Drawing.g.cpp.o: include/_root.FuseDrawingSurf-41037ecc.h
.uno/Fuse.Drawing.g.cpp.o: include/_root.FuseElements_bundle.h
.uno/Fuse.Drawing.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Fuse.Drawing.g.cpp.o: include/Android.Base.Wrappers-88f7a41f.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Controls.Native.-e502cdf1.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.AndroidCanvasPath.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.AndroidG-d24624b9.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.AndroidSurface.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Brush.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.BrushConverter.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Brushes.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Colors.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.DrawObje-53c107e5.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.DrawObjectWatcher.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.DynamicBrush.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.FillRule.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.GradientStop.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.GraphicsSurface.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.IDrawObj-d34d045e.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.ImageFil-1398d2ef.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.ImageFill.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.INativeS-e8aff21d.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.ISolidColor.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.ISurfaceDrawable.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.ISurfaceProvider.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.LinearGr-4a6ec6a4.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.LinearGradient.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.LinearGr-f3a25b50.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.LineCap.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.LineJoin.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.LineMetrics.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.LineMetricsImpl.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.LineSegment.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.LineSegmentFlags.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.LineSegments.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.LineSegmentType.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.NativeSurface.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.RepeatBaker.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.ResampleMode.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.SolidColor.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.StaticBrush.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.StaticSolidColor.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Stroke.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.StrokeAdjustment.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.StrokeAlignment.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Surface.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.SurfaceManager.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.SurfacePath.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.SurfaceUtil.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.WrapMode.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.FramebufferPool.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.ICommonViewport.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.ILoadingStatic.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Internal.Curves.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Internal.ImageContainer.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Internal.SizingContainer.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.IRenderViewport.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.IViewport.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Marshal.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Resources.DisposalManager.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Resources.ImageS-d58bb329.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Resources.ImageSource.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Resources.MemoryPolicy.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.VisualBounds.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.VisualContext.h
.uno/Fuse.Drawing.g.cpp.o: include/Java.Object.h
.uno/Fuse.Drawing.g.cpp.o: include/OpenGL.GLTextureHandle.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.Dicti-d1699346.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.Enume-8ddd045.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.RootableList-1.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Color.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Compiler.ExportTa-39be7c2b.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.Framebuffer.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.SamplerState.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.VertexAt-4a875e1d.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.NotSupportedException.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Runtime.Implement-6e9df330.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Runtime.Implement-81e7ab4c.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.String.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.UInt.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno/JNIHelper.h
.uno/Fuse.Drawing.g.cpp.o: jni/Fuse.Drawing.g.cpp flags.txt | .uno
	echo Fuse.Drawing.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Drawing.g.cpp.o -c jni/Fuse.Drawing.g.cpp

.uno/Fuse.Drawing.Internal.g.cpp.o: include/Fuse.Drawing.Internal-3dcc41e8.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Fuse.Drawing.Internal-b9d8148e.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Fuse.Drawing.Internal-bacec382.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Fuse.Drawing.Internal-bcd6298f.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.UShort.h
.uno/Fuse.Drawing.Internal.g.cpp.o: jni/Fuse.Drawing.Internal.g.cpp flags.txt | .uno
	echo Fuse.Drawing.Internal.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Drawing.Internal.g.cpp.o -c jni/Fuse.Drawing.Internal.g.cpp

.uno/Fuse.Drawing.Primitives.g.cpp.o: include/_root.FuseDrawingPrim-c6713933.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Brush.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.DynamicBrush.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.ImageFil-1398d2ef.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.ImageFill.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Internal-3dcc41e8.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Internal-b9d8148e.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Internal-bacec382.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Internal-bcd6298f.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.LinearGradient.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitiv-19cb13fc.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitiv-1b750ab3.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitiv-330a8dc2.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitiv-5853c2d0.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitiv-6417a2eb.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitiv-8a015a04.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitiv-8e6a7ca2.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitiv-af20238a.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitiv-caafe7bf.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.Circle.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.Wedge.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitiv-f4d76a57.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitiv-f6feaa19.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.SolidColor.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.StaticSolidColor.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Stroke.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.DeviceBuffer.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.Framebuffer.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.IndexType.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.SamplerState.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.VertexAt-4a875e1d.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Runtime.Implement-6e9df330.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.String.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.UShort.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: jni/Fuse.Drawing.Primitives.g.cpp flags.txt | .uno
	echo Fuse.Drawing.Primitives.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Drawing.Primitives.g.cpp.o -c jni/Fuse.Drawing.Primitives.g.cpp

.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.Anima-9f6f3909.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.Animator.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.Easing.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.IResizeMode.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.Move.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.Nothing.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.Playe-8fa817d1.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.TrackAnimator.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.Trans-997c8373.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.Trigg-21dd249.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.Trigg-75f4f270.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.Trigg-96b74ffc.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.Navigat-2fbffbd2.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.Navigat-340a5907.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.Navigat-4da4086.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.Navigat-70e90308.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.Navigator.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Elements.Preplac-74864b4.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Elements.PreplacementArgs.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.ICommonViewport.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.IScalingMode.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.ITransformRelative.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.ITranslationMode.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.IViewport.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Marshal.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Navigation.INavigation.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Navigation.Navig-11678f15.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Navigation.Navig-4be788bd.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Navigation.NavigationArgs.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Navigation.NavigationMode.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Navigation.Navig-c3ed68c1.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Navigation.Routi-30764b7e.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.NodeGroupBase.Co-a2bdc185.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.PendingRemoveVisual.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.PlacedArgs.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.PlacedHandler.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Platform.SystemU-2024c55a.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Platform.SystemUI.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.RelativeTransform-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Scaling.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Scripting.ExecutionThread.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Scripting.ScriptClass.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Scripting.ScriptMember.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Scripting.ScriptMethod-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Translation.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.TranslationModes.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Actions-b3c1f4a1.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Actions-fcab7e57.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.BusyTask.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.BusyTask.Type.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.BusyTaskActivity.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.BusyTaskMatch.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.BusyTaskModule.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IBusyHandler.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IMediaPlayback.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IPlayback.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IProgress.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IPulseTrigger.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IScroll-2d167265.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IScroll-7d599e87.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IScroll-c30a2192.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IScrolledLength.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IScrolledLengths.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IScroll-f5dfc45d.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IValue-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutA-bbccc818.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutAnimation.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutT-17f13160.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutT-38529711.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutT-3aa69d98.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutT-6adfe46a.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutT-6d66b793.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutT-999d3106.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutT-9d622a39.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutTransition.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Removin-3934475f.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.State.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.StateGr-10cf9727.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.StateGroup.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.StateTransition.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Timeline.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Timeline.State.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Transit-122edce0.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Transition.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.TransitionGroup.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.TransitionMode.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Trigger.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Trigger-506bb336.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Trigger-fd67b2ab.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.TriggerPlayState.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileBool.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileCompleted.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileFalse.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileKe-99bafeca.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileKe-9ea3ef4d.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhilePaused.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhilePlaying.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileTrigger.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileTrue.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileValue-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileValueStatic.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.VisualEvent-2.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Action-3.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.String.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.UX.Resource.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
.uno/Fuse.Triggers.g.cpp.o: jni/Fuse.Triggers.g.cpp flags.txt | .uno
	echo Fuse.Triggers.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Triggers.g.cpp.o -c jni/Fuse.Triggers.g.cpp

.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Controls.IWebView.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Controls.Navigator.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Controls.WebView.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Input.Focus.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Internal.Blender-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.LayoutPriority.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Callback.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Collapse.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Hide.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.IHide.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.IShow.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.LoadHtml.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.LoadUrl.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Pause.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Play.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.PlayTo.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Pulse.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Reload.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Set-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Show.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Stop.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Toggle.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-14263c83.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-1510788d.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-18bf0d20.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-32966389.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-38f4649e.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-39642be7.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-3a870264.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-458e75fc.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-5821cb24.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-79bb5ad.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-7ea0e0be.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-873d043e.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-967f0fff.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-9b9fd4af.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-a1d52f6d.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-a5e0b480.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-b3c1f4a1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-b5190bae.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-b8cdaf7f.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-baf069a8.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-d8fdd070.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-e0327300.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-e0dcfc3.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-e65da75e.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-e720de5b.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-ea70af1f.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-f89d8ce6.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-fcab7e57.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-ff0a4af5.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.IPlayback.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.IPulseTrigger.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.LayoutT-3aa69d98.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.LayoutT-9d622a39.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.LayoutTransition.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.StateGroup.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Timeline.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.UserEvent.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Visual.CancelInt-459c56d4.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.VisualEvent-2.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.VisualEventArgs.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.VisualEventHandler.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.VisualEventMode.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.List--251bdc7d.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.String.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.UX.Expression-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.UX.Property-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: jni/Fuse.Triggers.Actions.g.cpp flags.txt | .uno
	echo Fuse.Triggers.Actions.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Triggers.Actions.g.cpp.o -c jni/Fuse.Triggers.Actions.g.cpp

.uno/Fuse.Elements.g.cpp.o: include/_root.FuseElements_bundle.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Animations.IResizeMode.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.CacheFramebuffer.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Drawing.Brush.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Effects.Effect.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Effects.EffectType.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Alignment.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.AlignmentHelpers.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.AspectConstraint.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.BoxPlacement.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.BoxSizi-fa66d301.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.BoxSizing.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Cache.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.CacheHelper.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.CacheTile.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.CachingMode.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.DisplayHelpers.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Element-484ece7c.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Element-566ff6b4.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Element-59dc4556.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ElementAtlas.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ElementBatch.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ElementBatcher.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Element-bc8d2ebe.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Element-bd497d56.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Element-e8906a44.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Element-fe817708.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.FillAsp-a553d320.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.HitTestMode.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.IElemen-894a094d.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Interac-8b35c528.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ITransformOrigin.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ITreeRenderer.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.LayoutM-516f33ff.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.LayoutM-76ecc3eb.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.LayoutMasterMode.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.LimitBoxSizing.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.NoImpli-72cd78f3.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Optiona-b611048b.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Preplac-74864b4.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.PreplacementArgs.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.SimpleAlignment.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.SingleV-c7c3ef9e.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Standar-ab3ec62c.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.StretchDirection.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.StretchMode.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.StretchSizing.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Transfo-26c51bd7.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Transfo-2f50f509.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Transfo-734866e8.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Transfo-8a441c48.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.TransformOrigins.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Transla-61b329fc.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Transla-62df642a.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Transla-71e7c74f.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Transla-8cfe1f5d.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Transla-c8f7e37e.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Transla-e4a67fe3.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.TranslationModes.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Visibility.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.FastMatrix.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.FastProperty1.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.FixedViewport.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.FramebufferPool.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.HitTestContext.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.IActualPlacement.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.IFrustum.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Internal.RectPacker.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.InvalidateLayoutReason.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.IRenderViewport.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.IScalingMode.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.ITransformRelative.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.ITranslationMode.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.LayoutDependent.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.LayoutPriority.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.OrthographicFrustum.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.PlacedArgs.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.PlacedHandler.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Platform.SystemUI.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.RelativeTransform-1.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Resources.DisposalManager.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.RootViewport.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Scaling.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Translation.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.VisualBounds.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Collections.Linke-712f9f5e.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Collections.LinkedList-1.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Collections.List--251bdc7d.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Diagnostics.Debug-5d778620.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.DeviceBuffer.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.Framebuffer.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.FramebufferFlags.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.IndexType.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.RenderTarget.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.SamplerState.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.VertexAt-4a875e1d.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Recti.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Runtime.Implement-6e9df330.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Runtime.Implement-81e7ab4c.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.String.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.UShort.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.UX.Size.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.UX.Size2.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.UX.Unit.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Elements.g.cpp.o: include/Uno/Graphics/GLHelper.h
.uno/Fuse.Elements.g.cpp.o: jni/Fuse.Elements.g.cpp flags.txt | .uno
	echo Fuse.Elements.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Elements.g.cpp.o -c jni/Fuse.Elements.g.cpp

.uno/Fuse.Elements.Internal.g.cpp.o: include/_root.FuseElements_bundle.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Fuse.Elements.Interna-78588865.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Fuse.IRenderViewport.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Graphics.IndexType.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Graphics.SamplerState.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Graphics.VertexAt-4a875e1d.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Runtime.Implement-6e9df330.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Runtime.Implement-81e7ab4c.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.UShort.h
.uno/Fuse.Elements.Internal.g.cpp.o: jni/Fuse.Elements.Internal.g.cpp flags.txt | .uno
	echo Fuse.Elements.Internal.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Elements.Internal.g.cpp.o -c jni/Fuse.Elements.Internal.g.cpp

.uno/Fuse.Effects.g.cpp.o: include/_root.FuseEffects_bundle.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.BasicEffect.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.Blur.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.Desaturate.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.DropShad-41b5d682.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.DropShadow.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.Duotone.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.Effect.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.EffectHelpers.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.EffectType.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.Halftone.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.Mask.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.Mask.MaskMode.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.FastMatrix.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.FramebufferPool.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Internal.ImageContainer.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.IRenderViewport.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.VisualBounds.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Float2x2.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.Framebuffer.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.IndexType.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.SamplerState.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.VertexAt-4a875e1d.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Runtime.Implement-6e9df330.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Runtime.Implement-81e7ab4c.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.String.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.UShort.h
.uno/Fuse.Effects.g.cpp.o: jni/Fuse.Effects.g.cpp flags.txt | .uno
	echo Fuse.Effects.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Effects.g.cpp.o -c jni/Fuse.Effects.g.cpp

.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Animations.Anima-9f6f3909.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Controls.ScrollDirections.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Controls.ScrollP-640a7167.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Controls.ScrollP-f741d328.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Controls.ScrollView.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Controls.ScrollViewBase.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Clicked.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.ClickedArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.ClickedHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Clicker.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Clicker-80b144c2.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Clicker-96c9e291.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.ClickerTrigger.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.DegreeSpan.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Edge.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Interna-3d271d8a.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Interna-47e25f2f.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Internal.Swiper.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.KeepFocusInView.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.KeepInViewCommon.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Scrolle-e832eba2.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Scroller.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.ScrollTo.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.SetSwipeActive.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Swiped.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.SwipedHow.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.SwipeDirection.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.SwipeGe-f1aed91a.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.SwipeGesture.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.SwipeType.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.SwipingAnimation.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.ToggleS-2ddf1b4f.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.CaptureType.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.Focus.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.FocusGainedArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.FocusGainedHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.FocusLostArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.FocusLostHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.Gesture.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.GesturePri-ad5d864e.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.GesturePriority.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.GestureRequest.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.Gestures.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.GestureType.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.Pointer.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerEventArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.LayoutPriority.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Motion.MotionConfig.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Motion.Simulatio-2e0ddcfb.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Motion.Simulatio-7cce7e04.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Motion.Simulatio-8063728b.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Motion.Simulatio-a4ba96c1.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Motion.Simulatio-edb97e3.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.PlacedHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.RequestBringInto-2d120b4f.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.RequestBringIntoViewArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Triggers.Trigger.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.VisualEvent-2.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.String.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Gestures.g.cpp.o: jni/Fuse.Gestures.g.cpp flags.txt | .uno
	echo Fuse.Gestures.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Gestures.g.cpp.o -c jni/Fuse.Gestures.g.cpp

.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.DegreeSpan.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Edge.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Interna-3d271d8a.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Interna-47e25f2f.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Interna-4c26ec11.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Interna-bc586d01.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Interna-e613cada.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Internal.Swiper.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.SwipeGe-f1aed91a.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.CaptureType.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.Gesture.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.GesturePri-ad5d864e.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.GesturePriority.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.GestureRequest.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.Gestures.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.GestureType.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.Pointer.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.PointerEventArgs.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.PointerMovedHandler.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.PointerPre-d85d5994.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.PointerRel-5863e73d.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Internal.VectorUtil.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.LayoutPriority.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Motion.Simulatio-73b2da14.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Motion.Simulatio-7cce7e04.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Motion.Simulatio-8063728b.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Motion.Simulatio-a4ba96c1.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Motion.Simulatio-b08eb1c5.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Motion.Simulatio-edb97e3.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.VisualEvent-2.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Diagnostics.Clock.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.String.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Gestures.Internal.g.cpp.o: jni/Fuse.Gestures.Internal.g.cpp flags.txt | .uno
	echo Fuse.Gestures.Internal.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Gestures.Internal.g.cpp.o -c jni/Fuse.Gestures.Internal.g.cpp

.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Animations.Anima-9f6f3909.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Gestures.Edge.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Gestures.Interna-4c26ec11.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.CaptureType.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.Gesture.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.GesturePri-ad5d864e.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.GesturePriority.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.GestureRequest.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.Gestures.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.GestureType.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.Keyboard.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.KeyEventArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.KeyPressedArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.KeyPressedHandler.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.PointerEventArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Json.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.LayoutRole.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Marshal.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Motion.MotionConfig.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Motion.NavigationMotion.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Motion.Simulatio-2e0ddcfb.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Motion.Simulatio-7cce7e04.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Motion.Simulatio-8063728b.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Motion.Simulatio-a4ba96c1.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Motion.Simulatio-edb97e3.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Activ-5bc1c951.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Activ-7d976650.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Allow-1def7c6f.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.BackB-3a3fc868.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.BackF-9e5acfb7.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Deact-3ef1eb06.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Direc-58a4052e.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.EdgeNavigation.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.EndSeekArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Enter-2bf42e15.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Enter-a69250fd.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Exiti-99f47629.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Expli-27e79c7b.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.FindR-a7f8c89e.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.FindRouter.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.GoBack.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.GoForward.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Histo-b65f239b.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.IBase-84e3f965.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.INavigation.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.IPage-2d3977f2.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.IPage-9039a314.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.IRouterOutlet.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.ISeek-75d60b5e.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Linea-8f82d0a2.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.ModifyRouteHow.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Navig-11678f15.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Navig-1cc6d860.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Navig-32ba495d.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Navig-3e3f6fb9.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Navig-4be788bd.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Navig-7d6b9b9f.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Navig-a00b4ee0.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Navig-ae9e86c7.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigatedArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigateTo.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigateToggle.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Navigation.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationEdge.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationMode.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Navig-b94564f6.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Navig-c3ed68c1.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Navig-f3bd6778.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.OutletType.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.PageE-5cf97a9f.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.PageExpression.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.PageR-76b3a82b.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Route.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Route-2abd492c.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Route-659908f1.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Route-7a58dae5.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Route-b874a1d7.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Route-ea6aa4c1.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Route-fd65700c.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.RoutePagePath.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.RoutePageProxy.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Router.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.RouterModify.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Routi-30764b7e.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.RoutingResult.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.SnapTo.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Struc-153e70a0.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Struc-5fccc835.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.SwipeDirection.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.SwipeNavigate.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.UpdateSeekArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Visua-b74e2778.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Visua-f5708ad5.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.While-4de49602.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.While-65c5df16.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.While-87a81bce.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.While-89f5a828.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.WhileActive.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.WhileInactive.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Reactive.IContext.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Reactive.IExpression.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Reactive.IListener.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Resources.Resour-fabdcc8b.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Scripting.Array.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Scripting.ExecutionThread.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Scripting.Function.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Scripting.Object.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Scripting.ScriptClass.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Scripting.ScriptMember.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Scripting.ScriptMethod-1.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Triggers.Trigger.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.VisualEvent-2.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Action-3.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Collections.Dicti-d1699346.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.IDisposable.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Platform.Key.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.String.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.UX.Property-1.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
.uno/Fuse.Navigation.g.cpp.o: jni/Fuse.Navigation.g.cpp flags.txt | .uno
	echo Fuse.Navigation.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Navigation.g.cpp.o -c jni/Fuse.Navigation.g.cpp

.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Controls.LayoutControl.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Elements.Alignment.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Elements.AlignmentHelpers.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Elements.Optiona-b611048b.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Elements.SimpleAlignment.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.InvalidateLayoutReason.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layer.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.LayoutDependent.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.LayoutRole.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.CircleLayout.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.Column.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.ColumnLa-8bb1ac12.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.ColumnLayout.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.DefaultLayout.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.Definiti-98edc253.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.DefinitionBase.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.Dock.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.DockLayout.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.FlowDirection.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.GridChildOrder.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.GridLayout.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.Layout.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.Layouts.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.Metric.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.Orientation.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.Row.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.StackLayout.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.StackLayoutMode.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.WrapLayout.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Collections.IList-b56be992.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Collections.RootableList-1.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.String.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Layouts.g.cpp.o: jni/Fuse.Layouts.g.cpp flags.txt | .uno
	echo Fuse.Layouts.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Layouts.g.cpp.o -c jni/Fuse.Layouts.g.cpp

.uno/Fuse.Android.g.cpp.o: include/_root.FuseAndroidText-9d82b652.h
.uno/Fuse.Android.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Fuse.Android.g.cpp.o: include/Android.Base.Wrappers-88f7a41f.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.AppRoot.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.Bitmap.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.Blitter.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.Canvas.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.GLUtils.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.RootGrap-9e25fcdc.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.RootGraphicsView.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.StaticLa-888bb769.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.StaticLayout.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.StatusBarConfig.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.StatusBarHelper.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.TextControlLayout.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.TextPaint.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.TextRend-b6e4a886.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.TextRenderer.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.TextUtil-6613d379.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.TextUtils.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.App.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.Native.-6178e8bc.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.Native.-88fc1c1d.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.Native.-ca2427b3.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.Native.-e502cdf1.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.Native.-f43d469d.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.Native.-f715ad8a.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.TextAlignment.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.TextControl.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.TextTruncation.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.TextWrapping.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Font.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.GraphicsWorker.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.ICommonViewport.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.IViewport.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Platform.SystemUI.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Android.g.cpp.o: include/Java.Object.h
.uno/Fuse.Android.g.cpp.o: include/OpenGL.GL.h
.uno/Fuse.Android.g.cpp.o: include/OpenGL.GLTextureHandle.h
.uno/Fuse.Android.g.cpp.o: include/OpenGL.GLTextureTarget.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Application.h
.uno/Fuse.Android.g.cpp.o: include/Uno.ArgumentOutOfRang-6803b39e.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Color.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Compiler.ExportTa-39be7c2b.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Graphics.SamplerState.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Graphics.VertexAt-4a875e1d.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Recti.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Runtime.Implement-6e9df330.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Runtime.Implement-81e7ab4c.h
.uno/Fuse.Android.g.cpp.o: include/Uno.String.h
.uno/Fuse.Android.g.cpp.o: include/Uno.UInt.h
.uno/Fuse.Android.g.cpp.o: include/Uno.ULong.h
.uno/Fuse.Android.g.cpp.o: include/Uno.UX.Template.h
.uno/Fuse.Android.g.cpp.o: include/Uno/JNIHelper.h
.uno/Fuse.Android.g.cpp.o: jni/Fuse.Android.g.cpp flags.txt | .uno
	echo Fuse.Android.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Android.g.cpp.o -c jni/Fuse.Android.g.cpp

.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.WebView.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls-3a7bea61.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls-b7abe437.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Controls.URISche-2ed3a615.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Controls.WebView.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Navigation.Histo-b65f239b.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Java.Object.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.String.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
.uno/Fuse.Android.Controls.g.cpp.o: jni/Fuse.Android.Controls.g.cpp flags.txt | .uno
	echo Fuse.Android.Controls.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Android.Controls.g.cpp.o -c jni/Fuse.Android.Controls.g.cpp

.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Android.Base.Wrappers-88f7a41f.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Fuse.Android.Controls-3a7bea61.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Fuse.Android.Controls-9d49daa5.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Fuse.Android.Controls-b7abe437.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Java.Object.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Uno.Compiler.ExportTa-39be7c2b.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Uno.String.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Uno/JNIHelper.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: jni/Fuse.Android.Controls.WebViewUtils.g.cpp flags.txt | .uno
	echo Fuse.Android.Controls.WebViewUtils.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o -c jni/Fuse.Android.Controls.WebViewUtils.g.cpp

.uno/Fuse.FileSystem.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Fuse.FileSystem.g.cpp.o: include/Android.Base.Wrappers-88f7a41f.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.AndroidPaths.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.DirectoryInfo.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.FileAttributes.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.FileInfo.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.FileS-3c9ac41b.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.FileS-6a2addd0.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.FileS-986283eb.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.FileS-cd2526b.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.FileS-f9e26269.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.FileStatus.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.FileSystemInfo.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.Nothing.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.PathTools.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.UnifiedPaths.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.Scripting.Array.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.Scripting.Error.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.Scripting.FutureFactory-1.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.Scripting.Native-c8feecef.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.Scripting.NativeCallback.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.Scripting.NativeFunction.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.Scripting.NativeMember.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.Scripting.NativePromise-2.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.Scripting.Object.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.Scripting.Result-92713bce.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.Scripting.ValueC-23d67df6.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Char.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Collections.Dicti-d1699346.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Collections.Enume-8ddd045.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Compiler.ExportTa-39be7c2b.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Double.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Func-1.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Func-3.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Int.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.IO.Directory.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.IO.File.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.IO.Path.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Long.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Object.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Runtime.Implement-eca777ec.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.String.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Threading.Future-1.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Threading.IDispatcher.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Threading.Promise-1.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Time.Constants.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Time.DateTimeZone.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Time.Duration.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Time.Instant.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Time.ZonedDateTime.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.UX.Resource.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno/JNIHelper.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno/Support.h
.uno/Fuse.FileSystem.g.cpp.o: jni/Fuse.FileSystem.g.cpp flags.txt | .uno
	echo Fuse.FileSystem.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.FileSystem.g.cpp.o -c jni/Fuse.FileSystem.g.cpp

.uno/Fuse.Selection.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.IArray.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Marshal.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Reactive.IObservable.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Reactive.ISubscription.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Scripting.ExecutionThread.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Scripting.ScriptClass.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Scripting.ScriptMember.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Scripting.ScriptMethod-1.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Selection.Select-30798591.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Selection.Select-94349afa.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Selection.Selectable.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Selection.Selection.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Selection.Selection.How.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Selection.SelectMode.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Selection.ToggleSelection.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.Action-3.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.IDisposable.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.String.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Selection.g.cpp.o: jni/Fuse.Selection.g.cpp flags.txt | .uno
	echo Fuse.Selection.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Selection.g.cpp.o -c jni/Fuse.Selection.g.cpp

.uno/Fuse.Storage.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/Fuse.Storage.g.cpp.o: include/Fuse.Scripting.FutureFactory-1.h
.uno/Fuse.Storage.g.cpp.o: include/Fuse.Scripting.NativeCallback.h
.uno/Fuse.Storage.g.cpp.o: include/Fuse.Scripting.NativeFunction.h
.uno/Fuse.Storage.g.cpp.o: include/Fuse.Scripting.NativeMember.h
.uno/Fuse.Storage.g.cpp.o: include/Fuse.Scripting.NativePromise-2.h
.uno/Fuse.Storage.g.cpp.o: include/Fuse.Scripting.Result-92713bce.h
.uno/Fuse.Storage.g.cpp.o: include/Fuse.Storage.Applicat-2356c164.h
.uno/Fuse.Storage.g.cpp.o: include/Fuse.Storage.Applicat-8bd00e9b.h
.uno/Fuse.Storage.g.cpp.o: include/Fuse.Storage.ApplicationDir.h
.uno/Fuse.Storage.g.cpp.o: include/Fuse.Storage.StorageModule.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.Func-1.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.IDisposable.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.IO.Directory.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.IO.File.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.IO.FileMode.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.IO.Path.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.IO.Stream.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.IO.UserDirectory.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.String.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.Threading.Future-1.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.Threading.Promise-1.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.UX.Resource.h
.uno/Fuse.Storage.g.cpp.o: jni/Fuse.Storage.g.cpp flags.txt | .uno
	echo Fuse.Storage.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Storage.g.cpp.o -c jni/Fuse.Storage.g.cpp

.uno/Fuse.Testing.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/Fuse.Testing.g.cpp.o: include/Fuse.Scripting.NativeCallback.h
.uno/Fuse.Testing.g.cpp.o: include/Fuse.Scripting.NativeFunction.h
.uno/Fuse.Testing.g.cpp.o: include/Fuse.Scripting.NativeMember.h
.uno/Fuse.Testing.g.cpp.o: include/Fuse.Testing.TestFail-c87eb991.h
.uno/Fuse.Testing.g.cpp.o: include/Fuse.Testing.UnoTesti-f868a38f.h
.uno/Fuse.Testing.g.cpp.o: include/Fuse.Testing.UnoTestingHelper.h
.uno/Fuse.Testing.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Testing.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Testing.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Testing.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Testing.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Testing.g.cpp.o: include/Uno.String.h
.uno/Fuse.Testing.g.cpp.o: include/Uno.UX.Resource.h
.uno/Fuse.Testing.g.cpp.o: jni/Fuse.Testing.g.cpp flags.txt | .uno
	echo Fuse.Testing.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Testing.g.cpp.o -c jni/Fuse.Testing.g.cpp

.uno/Fuse.WebSocket.g.cpp.o: include/Fuse.Scripting.NativeModule.h
.uno/Fuse.WebSocket.g.cpp.o: include/Fuse.WebSocket.Native-505d0c55.h
.uno/Fuse.WebSocket.g.cpp.o: include/Fuse.WebSocket.WebSoc-2254f404.h
.uno/Fuse.WebSocket.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Fuse.WebSocket.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.WebSocket.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.WebSocket.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.WebSocket.g.cpp.o: include/Uno.Object.h
.uno/Fuse.WebSocket.g.cpp.o: include/Uno.String.h
.uno/Fuse.WebSocket.g.cpp.o: include/Uno.UX.Resource.h
.uno/Fuse.WebSocket.g.cpp.o: jni/Fuse.WebSocket.g.cpp flags.txt | .uno
	echo Fuse.WebSocket.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.WebSocket.g.cpp.o -c jni/Fuse.WebSocket.g.cpp

.uno/Experimental.Http.g.cpp.o: include/Experimental.Cache.CacheLoaded.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Cache.IC-2fb0e23a.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Cache.IC-9cfb21d2.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Cache.ICache.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Http.BinaryLoader.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Http.Htt-2465a87a.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Http.HttpLoader.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Http.Int-14679e9d.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Http.Loader.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Http.LoaderConst.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Http.TextLoader.h
.uno/Experimental.Http.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Action-1.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Action-2.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Bool.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Buffer.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Byte.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Char.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Collections.Dicti-d1699346.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Delegate.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Diagnostics.Debug-5d778620.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Exception.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Int.h
.uno/Experimental.Http.g.cpp.o: include/Uno.IO.BinaryReader.h
.uno/Experimental.Http.g.cpp.o: include/Uno.IO.BinaryWriter.h
.uno/Experimental.Http.g.cpp.o: include/Uno.IO.Stream.h
.uno/Experimental.Http.g.cpp.o: include/Uno.IO.StreamReader.h
.uno/Experimental.Http.g.cpp.o: include/Uno.IO.StreamWriter.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Long.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Net.Http.HttpMess-1d2e0b2f.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Net.Http.HttpMess-8a5feb56.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Net.Http.HttpResponseType.h
.uno/Experimental.Http.g.cpp.o: include/Uno.String.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Threading.IDispatcher.h
.uno/Experimental.Http.g.cpp.o: jni/Experimental.Http.g.cpp flags.txt | .uno
	echo Experimental.Http.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Experimental.Http.g.cpp.o -c jni/Experimental.Http.g.cpp

.uno/Experimental.Http.Internal.g.cpp.o: include/Experimental.Http.Int-14679e9d.h
.uno/Experimental.Http.Internal.g.cpp.o: include/Uno.DateTime.h
.uno/Experimental.Http.Internal.g.cpp.o: include/Uno.Int.h
.uno/Experimental.Http.Internal.g.cpp.o: include/Uno.Time.ZonedDateTime.h
.uno/Experimental.Http.Internal.g.cpp.o: jni/Experimental.Http.Internal.g.cpp flags.txt | .uno
	echo Experimental.Http.Internal.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Experimental.Http.Internal.g.cpp.o -c jni/Experimental.Http.Internal.g.cpp

.uno/Experimental.Cache.g.cpp.o: include/Experimental.Cache.CacheLoaded.h
.uno/Experimental.Cache.g.cpp.o: include/Experimental.Cache.IC-2fb0e23a.h
.uno/Experimental.Cache.g.cpp.o: include/Experimental.Cache.IC-9cfb21d2.h
.uno/Experimental.Cache.g.cpp.o: include/Experimental.Cache.ICache.h
.uno/Experimental.Cache.g.cpp.o: include/Experimental.Cache.ProxyStream.h
.uno/Experimental.Cache.g.cpp.o: include/Uno.Bool.h
.uno/Experimental.Cache.g.cpp.o: include/Uno.Byte.h
.uno/Experimental.Cache.g.cpp.o: include/Uno.Int.h
.uno/Experimental.Cache.g.cpp.o: include/Uno.IO.Stream.h
.uno/Experimental.Cache.g.cpp.o: include/Uno.Long.h
.uno/Experimental.Cache.g.cpp.o: include/Uno.NotSupportedException.h
.uno/Experimental.Cache.g.cpp.o: include/Uno.String.h
.uno/Experimental.Cache.g.cpp.o: jni/Experimental.Cache.g.cpp flags.txt | .uno
	echo Experimental.Cache.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Experimental.Cache.g.cpp.o -c jni/Experimental.Cache.g.cpp

.uno/Experimental.TextureLoader.g.cpp.o: include/Experimental.TextureL-1a97077a.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Experimental.TextureL-1f379d0f.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Experimental.TextureL-932cb361.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Experimental.TextureL-b6dfce5c.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Uno.Action-1.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Uno.Bool.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Uno.Buffer.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Uno.Exception.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Uno.Int.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Uno.String.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Uno/Support.h
.uno/Experimental.TextureLoader.g.cpp.o: jni/Experimental.TextureLoader.g.cpp flags.txt | .uno
	echo Experimental.TextureLoader.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Experimental.TextureLoader.g.cpp.o -c jni/Experimental.TextureLoader.g.cpp

.uno/Neovisionaries.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Neovisionaries.g.cpp.o: include/Android.Base.Wrappers-88f7a41f.h
.uno/Neovisionaries.g.cpp.o: include/Java.Object.h
.uno/Neovisionaries.g.cpp.o: include/Neovisionaries.WebSocketClient.h
.uno/Neovisionaries.g.cpp.o: include/Uno.Compiler.ExportTa-39be7c2b.h
.uno/Neovisionaries.g.cpp.o: include/Uno/JNIHelper.h
.uno/Neovisionaries.g.cpp.o: jni/Neovisionaries.g.cpp flags.txt | .uno
	echo Neovisionaries.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Neovisionaries.g.cpp.o -c jni/Neovisionaries.g.cpp

.uno/Polyfills.Window.g.cpp.o: include/Polyfills.Window.WindowModule.h
.uno/Polyfills.Window.g.cpp.o: include/Uno.Bool.h
.uno/Polyfills.Window.g.cpp.o: include/Uno.IO.Bundle.h
.uno/Polyfills.Window.g.cpp.o: include/Uno.IO.BundleFile.h
.uno/Polyfills.Window.g.cpp.o: include/Uno.Object.h
.uno/Polyfills.Window.g.cpp.o: include/Uno.String.h
.uno/Polyfills.Window.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Polyfills.Window.g.cpp.o: include/Uno.UX.Resource.h
.uno/Polyfills.Window.g.cpp.o: jni/Polyfills.Window.g.cpp flags.txt | .uno
	echo Polyfills.Window.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Polyfills.Window.g.cpp.o -c jni/Polyfills.Window.g.cpp

.uno/FuseJS.g.cpp.o: include/Fuse.AndroidProperties.h
.uno/FuseJS.g.cpp.o: include/Fuse.Diagnostics.h
.uno/FuseJS.g.cpp.o: include/Fuse.Node.h
.uno/FuseJS.g.cpp.o: include/Fuse.Platform.ApplicationState.h
.uno/FuseJS.g.cpp.o: include/Fuse.Platform.Lifecycle.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.Array.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.Error.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.FutureFactory-1.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.JSObjectUtils.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.Native-c8feecef.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.NativeCallback.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.NativeEvent.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.NativeFunction.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.NativeMember.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.NativeModule.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.NativePromise-2.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.Object.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.Result-92713bce.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.ResultFactory-1.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.ValueC-23d67df6.h
.uno/FuseJS.g.cpp.o: include/Fuse.UpdateManager.h
.uno/FuseJS.g.cpp.o: include/Fuse.UserEventDispatch.h
.uno/FuseJS.g.cpp.o: include/FuseJS.Base64.h
.uno/FuseJS.g.cpp.o: include/FuseJS.Bundle.ExtractClosure.h
.uno/FuseJS.g.cpp.o: include/FuseJS.Bundle.h
.uno/FuseJS.g.cpp.o: include/FuseJS.Bundle.ReadBuf-7d8ec1c7.h
.uno/FuseJS.g.cpp.o: include/FuseJS.Bundle.ReadClosure.h
.uno/FuseJS.g.cpp.o: include/FuseJS.Environment.h
.uno/FuseJS.g.cpp.o: include/FuseJS.FileReaderImpl.h
.uno/FuseJS.g.cpp.o: include/FuseJS.FileReaderImpl-a8e50314.h
.uno/FuseJS.g.cpp.o: include/FuseJS.Globals.h
.uno/FuseJS.g.cpp.o: include/FuseJS.Latin1Helpers.h
.uno/FuseJS.g.cpp.o: include/FuseJS.Lifecycle.h
.uno/FuseJS.g.cpp.o: include/FuseJS.RaiseEvent.h
.uno/FuseJS.g.cpp.o: include/FuseJS.UserEvents.h
.uno/FuseJS.g.cpp.o: include/Uno.Action.h
.uno/FuseJS.g.cpp.o: include/Uno.Action-1.h
.uno/FuseJS.g.cpp.o: include/Uno.Bool.h
.uno/FuseJS.g.cpp.o: include/Uno.Byte.h
.uno/FuseJS.g.cpp.o: include/Uno.Char.h
.uno/FuseJS.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/FuseJS.g.cpp.o: include/Uno.Collections.Enume-8ddd045.h
.uno/FuseJS.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/FuseJS.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/FuseJS.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/FuseJS.g.cpp.o: include/Uno.Exception.h
.uno/FuseJS.g.cpp.o: include/Uno.Func-1.h
.uno/FuseJS.g.cpp.o: include/Uno.Int.h
.uno/FuseJS.g.cpp.o: include/Uno.IO.Bundle.h
.uno/FuseJS.g.cpp.o: include/Uno.IO.BundleFile.h
.uno/FuseJS.g.cpp.o: include/Uno.IO.Directory.h
.uno/FuseJS.g.cpp.o: include/Uno.IO.File.h
.uno/FuseJS.g.cpp.o: include/Uno.IO.Path.h
.uno/FuseJS.g.cpp.o: include/Uno.Object.h
.uno/FuseJS.g.cpp.o: include/Uno.Predicate-1.h
.uno/FuseJS.g.cpp.o: include/Uno.Runtime.Implement-eca777ec.h
.uno/FuseJS.g.cpp.o: include/Uno.String.h
.uno/FuseJS.g.cpp.o: include/Uno.Text.Ascii.h
.uno/FuseJS.g.cpp.o: include/Uno.Text.Base64.h
.uno/FuseJS.g.cpp.o: include/Uno.Text.Utf8.h
.uno/FuseJS.g.cpp.o: include/Uno.Threading.Future-1.h
.uno/FuseJS.g.cpp.o: include/Uno.Threading.Promise-1.h
.uno/FuseJS.g.cpp.o: include/Uno.UX.BundleFileSource.h
.uno/FuseJS.g.cpp.o: include/Uno.UX.Resource.h
.uno/FuseJS.g.cpp.o: include/Uno.UX.Selector.h
.uno/FuseJS.g.cpp.o: jni/FuseJS.g.cpp flags.txt | .uno
	echo FuseJS.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/FuseJS.g.cpp.o -c jni/FuseJS.g.cpp

include/Uno.h: include/Uno/ObjectModel.h



include/Uno/_internal.h: include/Uno/ObjectModel.h
include/Uno/_internal.h: include/Uno/_gc.h

include/Uno/GraphicsContext.h: include/Uno/Support.h

include/Uno/Memory.h: include/Uno/_config.h

include/Uno/ObjectModel.h: include/Uno/Memory.h

include/Uno/Support.h: include/Uno.Int2.h
include/Uno/Support.h: include/Uno.Float2.h

include/Uno/Uno.h: include/Uno.h
include/Uno/Uno.h: include/Uno/Support.h

include/Uno/XliInterop.h: include/Uno/Support.h



include/Uno/JNIHelper.h: include/Uno/Uno.h
include/Uno/JNIHelper.h: include/Uno/AndroidCommon.h

include/Uno/Graphics/GLHelper.h: include/Uno/AndroidCommon.h




include/Implementation/Posix/posix_thread.h: include/Uno.Threading.Thread.h



include/_root.FuseAndroidText-9d82b652.h: include/Uno.h

include/_root.FuseControls_bundle.h: include/Uno.h

include/_root.FuseControlsNav-bfeb1093.h: include/Uno.Bool.h
include/_root.FuseControlsNav-bfeb1093.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsNav-a8c01cdb.h: include/Uno.Float4.h
include/_root.FuseControlsNav-a8c01cdb.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsPan-1146454c.h: include/Uno.h

include/_root.FuseControlsPri-ce42971.h: include/Uno.UX.PropertyAccessor.h

include/_root.FuseControlsPri-accbb5bd.h: include/Uno.UX.PropertyAccessor.h

include/_root.FuseControlsPri-6b573bdb.h: include/Uno.h

include/_root.FuseControlsPri-d9ada289.h: include/Fuse.Drawing.Brush.h
include/_root.FuseControlsPri-d9ada289.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsPri-e9d2ee5b.h: include/Uno.Float4.h
include/_root.FuseControlsPri-e9d2ee5b.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsPri-3832896e.h: include/Uno.String.h
include/_root.FuseControlsPri-3832896e.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsPri-8507d6ea.h: include/Uno.Float4.h
include/_root.FuseControlsPri-8507d6ea.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsPri-3bbae333.h: include/Fuse.Drawing.Brush.h
include/_root.FuseControlsPri-3bbae333.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsPri-38e137c8.h: include/Uno.Float4.h
include/_root.FuseControlsPri-38e137c8.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsPri-d52a5a11.h: include/Uno.Float.h
include/_root.FuseControlsPri-d52a5a11.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsPri-ca138e33.h: include/Uno.Float.h
include/_root.FuseControlsPri-ca138e33.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsPri-5e35c2db.h: include/Uno.Float.h
include/_root.FuseControlsPri-5e35c2db.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsPri-7b4ecfe6.h: include/Uno.Bool.h
include/_root.FuseControlsPri-7b4ecfe6.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsScr-48813899.h: include/Uno.UX.PropertyAccessor.h

include/_root.FuseControlsScr-f1bcb258.h: include/Uno.Bool.h
include/_root.FuseControlsScr-f1bcb258.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsVideo_bundle.h: include/Uno.h

include/_root.FuseDrawing_bundle.h: include/Uno.h

include/_root.FuseDrawingPrim-c6713933.h: include/Uno.h

include/_root.FuseDrawingSurf-41037ecc.h: include/Uno.h

include/_root.FuseEffects_bundle.h: include/Uno.h

include/_root.FuseElements_bundle.h: include/Uno.h

include/_root.FuseNodes_bundle.h: include/Uno.h

include/_root.garuda_accessor_Tab_Text.h: include/Uno.UX.PropertyAccessor.h

include/_root.garuda_bundle.h: include/Uno.h

include/_root.garuda_FuseCont-5ae182df.h: include/Fuse.Visual.h
include/_root.garuda_FuseCont-5ae182df.h: include/Uno.UX.Property-1.h

include/_root.garuda_FuseCont-11b35377.h: include/Uno.String.h
include/_root.garuda_FuseCont-11b35377.h: include/Uno.UX.Property-1.h

include/_root.garuda_FuseElem-38d84375.h: include/Fuse.Elements.Element.h
include/_root.garuda_FuseElem-38d84375.h: include/Uno.UX.Property-1.h

include/_root.garuda_Tab_Text_Property.h: include/Uno.String.h
include/_root.garuda_Tab_Text_Property.h: include/Uno.UX.Property-1.h

include/_root.MainView.h: include/Fuse.App.h

include/_root.page1Text.h: include/Fuse.Animations.IResize.h
include/_root.page1Text.h: include/Fuse.Binding.h
include/_root.page1Text.h: include/Fuse.Controls.Text.h
include/_root.page1Text.h: include/Fuse.IActualPlacement.h
include/_root.page1Text.h: include/Fuse.ITemplateSource.h
include/_root.page1Text.h: include/Fuse.Node.h
include/_root.page1Text.h: include/Fuse.Scripting.IScriptObject.h
include/_root.page1Text.h: include/Fuse.Triggers.Actions.IHide.h
include/_root.page1Text.h: include/Fuse.Triggers.Actions.IShow.h
include/_root.page1Text.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/_root.page1Text.h: include/Fuse.Triggers.IValue-1.h
include/_root.page1Text.h: include/Uno.Collections.ICollection-1.h
include/_root.page1Text.h: include/Uno.Collections.IEnumerable-1.h
include/_root.page1Text.h: include/Uno.Collections.IList-1.h
include/_root.page1Text.h: include/Uno.String.h
include/_root.page1Text.h: include/Uno.UX.IPropertyListener.h

include/_root.page1TextBawah.h: include/Fuse.Animations.IResize.h
include/_root.page1TextBawah.h: include/Fuse.Binding.h
include/_root.page1TextBawah.h: include/Fuse.Controls.Text.h
include/_root.page1TextBawah.h: include/Fuse.IActualPlacement.h
include/_root.page1TextBawah.h: include/Fuse.ITemplateSource.h
include/_root.page1TextBawah.h: include/Fuse.Node.h
include/_root.page1TextBawah.h: include/Fuse.Scripting.IScriptObject.h
include/_root.page1TextBawah.h: include/Fuse.Triggers.Actions.IHide.h
include/_root.page1TextBawah.h: include/Fuse.Triggers.Actions.IShow.h
include/_root.page1TextBawah.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/_root.page1TextBawah.h: include/Fuse.Triggers.IValue-1.h
include/_root.page1TextBawah.h: include/Uno.Collections.ICollection-1.h
include/_root.page1TextBawah.h: include/Uno.Collections.IEnumerable-1.h
include/_root.page1TextBawah.h: include/Uno.Collections.IList-1.h
include/_root.page1TextBawah.h: include/Uno.String.h
include/_root.page1TextBawah.h: include/Uno.UX.IPropertyListener.h

include/_root.PagePlaceholder.h: include/Fuse.Animations.IResize.h
include/_root.PagePlaceholder.h: include/Fuse.Binding.h
include/_root.PagePlaceholder.h: include/Fuse.Controls.Image.h
include/_root.PagePlaceholder.h: include/Fuse.IActualPlacement.h
include/_root.PagePlaceholder.h: include/Fuse.ITemplateSource.h
include/_root.PagePlaceholder.h: include/Fuse.Node.h
include/_root.PagePlaceholder.h: include/Fuse.Scripting.IScriptObject.h
include/_root.PagePlaceholder.h: include/Fuse.Triggers.Actions.IHide.h
include/_root.PagePlaceholder.h: include/Fuse.Triggers.Actions.IShow.h
include/_root.PagePlaceholder.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/_root.PagePlaceholder.h: include/Uno.Collections.ICollection-1.h
include/_root.PagePlaceholder.h: include/Uno.Collections.IEnumerable-1.h
include/_root.PagePlaceholder.h: include/Uno.Collections.IList-1.h
include/_root.PagePlaceholder.h: include/Uno.UX.IPropertyListener.h

include/_root.Tab.h: include/Fuse.Animations.IResize.h
include/_root.Tab.h: include/Fuse.Binding.h
include/_root.Tab.h: include/Fuse.Controls.Panel.h
include/_root.Tab.h: include/Fuse.Drawing.ISurfaceDrawable.h
include/_root.Tab.h: include/Fuse.IActualPlacement.h
include/_root.Tab.h: include/Fuse.ITemplateSource.h
include/_root.Tab.h: include/Fuse.Node.h
include/_root.Tab.h: include/Fuse.Scripting.IScriptObject.h
include/_root.Tab.h: include/Fuse.Triggers.Actions.IHide.h
include/_root.Tab.h: include/Fuse.Triggers.Actions.IShow.h
include/_root.Tab.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/_root.Tab.h: include/Uno.Collections.ICollection-1.h
include/_root.Tab.h: include/Uno.Collections.IEnumerable-1.h
include/_root.Tab.h: include/Uno.Collections.IList-1.h
include/_root.Tab.h: include/Uno.UX.IPropertyListener.h

include/_root.TabIcon.h: include/Fuse.Animations.IResize.h
include/_root.TabIcon.h: include/Fuse.Binding.h
include/_root.TabIcon.h: include/Fuse.Controls.Image.h
include/_root.TabIcon.h: include/Fuse.IActualPlacement.h
include/_root.TabIcon.h: include/Fuse.ITemplateSource.h
include/_root.TabIcon.h: include/Fuse.Node.h
include/_root.TabIcon.h: include/Fuse.Scripting.IScriptObject.h
include/_root.TabIcon.h: include/Fuse.Triggers.Actions.IHide.h
include/_root.TabIcon.h: include/Fuse.Triggers.Actions.IShow.h
include/_root.TabIcon.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/_root.TabIcon.h: include/Uno.Collections.ICollection-1.h
include/_root.TabIcon.h: include/Uno.Collections.IEnumerable-1.h
include/_root.TabIcon.h: include/Uno.Collections.IList-1.h
include/_root.TabIcon.h: include/Uno.UX.IPropertyListener.h

include/_root.WelcomeText.h: include/Fuse.Animations.IResize.h
include/_root.WelcomeText.h: include/Fuse.Binding.h
include/_root.WelcomeText.h: include/Fuse.Controls.Text.h
include/_root.WelcomeText.h: include/Fuse.IActualPlacement.h
include/_root.WelcomeText.h: include/Fuse.ITemplateSource.h
include/_root.WelcomeText.h: include/Fuse.Node.h
include/_root.WelcomeText.h: include/Fuse.Scripting.IScriptObject.h
include/_root.WelcomeText.h: include/Fuse.Triggers.Actions.IHide.h
include/_root.WelcomeText.h: include/Fuse.Triggers.Actions.IShow.h
include/_root.WelcomeText.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/_root.WelcomeText.h: include/Fuse.Triggers.IValue-1.h
include/_root.WelcomeText.h: include/Uno.Collections.ICollection-1.h
include/_root.WelcomeText.h: include/Uno.Collections.IEnumerable-1.h
include/_root.WelcomeText.h: include/Uno.Collections.IList-1.h
include/_root.WelcomeText.h: include/Uno.String.h
include/_root.WelcomeText.h: include/Uno.UX.IPropertyListener.h

include/OpenGL.GL.h: include/Uno.h

include/OpenGL.GLBlendEquation.h: include/Uno.Int.h

include/OpenGL.GLBlendingFactor.h: include/Uno.Int.h

include/OpenGL.GLBufferHandle.h: include/Uno.Object.h

include/OpenGL.GLBufferTarget.h: include/Uno.Int.h

include/OpenGL.GLBufferUsage.h: include/Uno.Int.h

include/OpenGL.GLClearBufferMask.h: include/Uno.Int.h

include/OpenGL.GLCullFaceMode.h: include/Uno.Int.h

include/OpenGL.GLDataType.h: include/Uno.Int.h

include/OpenGL.GLDepthFunction.h: include/Uno.Int.h

include/OpenGL.GLEnableCap.h: include/Uno.Int.h

include/OpenGL.GLError.h: include/Uno.Int.h

include/OpenGL.GLFramebufferAttachment.h: include/Uno.Int.h

include/OpenGL.GLFramebufferHandle.h: include/Uno.Object.h

include/OpenGL.GLFramebufferStatus.h: include/Uno.Int.h

include/OpenGL.GLFramebufferTarget.h: include/Uno.Int.h

include/OpenGL.GLFrontFaceDirection.h: include/Uno.Int.h

include/OpenGL.GLIndexType.h: include/Uno.Int.h

include/OpenGL.GLInteger4Name.h: include/Uno.Int.h

include/OpenGL.GLIntegerName.h: include/Uno.Int.h

include/OpenGL.GLPixelFormat.h: include/Uno.Int.h

include/OpenGL.GLPixelType.h: include/Uno.Int.h

include/OpenGL.GLPrimitiveType.h: include/Uno.Int.h

include/OpenGL.GLProgramHandle.h: include/Uno.Object.h

include/OpenGL.GLProgramParameter.h: include/Uno.Int.h

include/OpenGL.GLRenderbufferHandle.h: include/Uno.Object.h

include/OpenGL.GLRenderbufferStorage.h: include/Uno.Int.h

include/OpenGL.GLRenderbufferTarget.h: include/Uno.Int.h

include/OpenGL.GLShaderHandle.h: include/Uno.Object.h

include/OpenGL.GLShaderParameter.h: include/Uno.Int.h

include/OpenGL.GLShaderType.h: include/Uno.Int.h

include/OpenGL.GLStringName.h: include/Uno.Int.h

include/OpenGL.GLTextureHandle.h: include/Uno.Object.h

include/OpenGL.GLTextureParameterName.h: include/Uno.Int.h

include/OpenGL.GLTextureParameterValue.h: include/Uno.Int.h

include/OpenGL.GLTextureTarget.h: include/Uno.Int.h

include/OpenGL.GLTextureUnit.h: include/Uno.Int.h

include/Uno.Action.h: include/Uno.Delegate.h

include/Uno.Action-1.h: include/Uno.Delegate.h

include/Uno.Action-2.h: include/Uno.Delegate.h

include/Uno.Action-3.h: include/Uno.Delegate.h

include/Uno.Action-4.h: include/Uno.Delegate.h

include/Uno.AggregateException.h: include/Uno.Exception.h

include/Uno.Application.h: include/Uno.Platform.CoreApp.h

include/Uno.ArgumentException.h: include/Uno.Exception.h

include/Uno.ArgumentNullException.h: include/Uno.ArgumentException.h

include/Uno.ArgumentOutOfRang-6803b39e.h: include/Uno.ArgumentException.h

include/Uno.Array.h: include/Uno.h

include/Uno.Bool.h: include/Uno.Object.h

include/Uno.Buffer.h: include/Uno.Object.h

include/Uno.Byte.h: include/Uno.Object.h

include/Uno.Char.h: include/Uno.Object.h

include/Uno.Color.h: include/Uno.h

include/Uno.Comparison-1.h: include/Uno.Delegate.h

include/Uno.DateTime.h: include/Uno.Object.h

include/Uno.Delegate.h: include/Uno.Object.h

include/Uno.Double.h: include/Uno.Object.h

include/Uno.Enum.h: include/Uno.h

include/Uno.EventArgs.h: include/Uno.Object.h

include/Uno.EventHandler.h: include/Uno.Delegate.h

include/Uno.EventHandler-1.h: include/Uno.Delegate.h

include/Uno.Exception.h: include/Uno.Object.h

include/Uno.Float.h: include/Uno.Object.h

include/Uno.Float2.h: include/Uno.Object.h

include/Uno.Float2x2.h: include/Uno.Object.h

include/Uno.Float3.h: include/Uno.Object.h

include/Uno.Float3x3.h: include/Uno.Object.h

include/Uno.Float4.h: include/Uno.Object.h

include/Uno.Float4x4.h: include/Uno.Object.h

include/Uno.FormatException.h: include/Uno.Exception.h

include/Uno.Func-1.h: include/Uno.Delegate.h

include/Uno.Func-2.h: include/Uno.Delegate.h

include/Uno.Func-3.h: include/Uno.Delegate.h

include/Uno.Func-4.h: include/Uno.Delegate.h

include/Uno.GC.h: include/Uno.h

include/Uno.Generic.h: include/Uno.h

include/Uno.IDisposable.h: include/Uno.Object.h

include/Uno.IndexOutOfRangeException.h: include/Uno.Exception.h

include/Uno.Int.h: include/Uno.Object.h

include/Uno.Int2.h: include/Uno.Object.h

include/Uno.Int4.h: include/Uno.Object.h

include/Uno.IntPtr.h: include/Uno.Object.h

include/Uno.InvalidCastException.h: include/Uno.Exception.h

include/Uno.InvalidOperationException.h: include/Uno.Exception.h

include/Uno.Long.h: include/Uno.Object.h

include/Uno.Math.h: include/Uno.h

include/Uno.Matrix.h: include/Uno.h

include/Uno.NotSupportedException.h: include/Uno.Exception.h

include/Uno.NullReferenceException.h: include/Uno.Exception.h

include/Uno.Object.h: include/Uno.h

include/Uno.ObjectDisposedException.h: include/Uno.Exception.h

include/Uno.OverflowException.h: include/Uno.Exception.h

include/Uno.Predicate-1.h: include/Uno.Delegate.h

include/Uno.Quaternion.h: include/Uno.h

include/Uno.Rect.h: include/Uno.Object.h

include/Uno.Recti.h: include/Uno.Object.h

include/Uno.SByte.h: include/Uno.Object.h

include/Uno.Short.h: include/Uno.Object.h

include/Uno.String.h: include/Uno.Object.h

include/Uno.Tuple.h: include/Uno.h

include/Uno.Tuple-2.h: include/Uno.Object.h

include/Uno.Type.h: include/Uno.Object.h

include/Uno.UInt.h: include/Uno.Object.h

include/Uno.ULong.h: include/Uno.Object.h

include/Uno.UShort.h: include/Uno.Object.h

include/Uno.Vector.h: include/Uno.h

include/Uno.WeakReference-1.h: include/Uno.Object.h

include/Uno.Collections.Dicti-e0584c76.h: include/Uno.Object.h

include/Uno.Collections.Dicti-bd7b2149.h: include/Uno.Int.h

include/Uno.Collections.Dictionary-2.h: include/Uno.Collections.Dicti-e0584c76.h
include/Uno.Collections.Dictionary-2.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.Dictionary-2.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.Dictionary-2.h: include/Uno.Collections.KeyValuePair-2.h
include/Uno.Collections.Dictionary-2.h: include/Uno.Object.h
include/Uno.Collections.Dictionary-2.h: include/Uno.Collections.Dicti-d1699346.h

include/Uno.Collections.Enume-8ddd045.h: include/Uno.h

include/Uno.Collections.List--251bdc7d.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.List--251bdc7d.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.List--251bdc7d.h: include/Uno.IDisposable.h
include/Uno.Collections.List--251bdc7d.h: include/Uno.Object.h

include/Uno.Collections.HashS-aaabdf6f.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.HashS-aaabdf6f.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.HashS-aaabdf6f.h: include/Uno.IDisposable.h
include/Uno.Collections.HashS-aaabdf6f.h: include/Uno.Object.h

include/Uno.Collections.Dicti-98f6bc43.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.Dicti-98f6bc43.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.Dicti-98f6bc43.h: include/Uno.IDisposable.h
include/Uno.Collections.Dicti-98f6bc43.h: include/Uno.Object.h

include/Uno.Collections.Dicti-d1699346.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.Dicti-d1699346.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.Dicti-d1699346.h: include/Uno.Collections.KeyValuePair-2.h
include/Uno.Collections.Dicti-d1699346.h: include/Uno.IDisposable.h
include/Uno.Collections.Dicti-d1699346.h: include/Uno.Object.h

include/Uno.Collections.Queue-a4ffa9de.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.Queue-a4ffa9de.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.Queue-a4ffa9de.h: include/Uno.IDisposable.h
include/Uno.Collections.Queue-a4ffa9de.h: include/Uno.Object.h

include/Uno.Collections.Linke-998cff42.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.Linke-998cff42.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.Linke-998cff42.h: include/Uno.IDisposable.h
include/Uno.Collections.Linke-998cff42.h: include/Uno.Object.h

include/Uno.Collections.HashSet-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.HashSet-1.h: include/Uno.Object.h
include/Uno.Collections.HashSet-1.h: include/Uno.Collections.HashS-aaabdf6f.h

include/Uno.Collections.ICollection-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.ICollection-1.h: include/Uno.Object.h

include/Uno.Collections.IEnumerable-1.h: include/Uno.Object.h

include/Uno.Collections.IEnumerator.h: include/Uno.Object.h

include/Uno.Collections.IEnumerator-1.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.IEnumerator-1.h: include/Uno.IDisposable.h
include/Uno.Collections.IEnumerator-1.h: include/Uno.Object.h

include/Uno.Collections.IList-1.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.IList-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.IList-1.h: include/Uno.Object.h

include/Uno.Collections.IList-b56be992.h: include/Uno.h

include/Uno.Collections.KeyValuePair-2.h: include/Uno.Object.h

include/Uno.Collections.LinkedList-1.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.LinkedList-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.LinkedList-1.h: include/Uno.Object.h

include/Uno.Collections.Enume-c80626a.h: include/Uno.Object.h

include/Uno.Collections.Linke-712f9f5e.h: include/Uno.Object.h

include/Uno.Collections.List-1.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.List-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.List-1.h: include/Uno.Collections.IList-1.h
include/Uno.Collections.List-1.h: include/Uno.Object.h
include/Uno.Collections.List-1.h: include/Uno.Collections.List--251bdc7d.h

include/Uno.Collections.Obser-ca008b9a.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.Obser-ca008b9a.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.Obser-ca008b9a.h: include/Uno.Collections.IList-1.h
include/Uno.Collections.Obser-ca008b9a.h: include/Uno.Object.h

include/Uno.Collections.OfTyp-710e061d.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.OfTyp-710e061d.h: include/Uno.Object.h

include/Uno.Collections.OfTyp-11c32fbf.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.OfTyp-11c32fbf.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.OfTyp-11c32fbf.h: include/Uno.IDisposable.h
include/Uno.Collections.OfTyp-11c32fbf.h: include/Uno.Object.h

include/Uno.Collections.Order-35b71307.h: include/Uno.Object.h

include/Uno.Collections.Prior-7cf783be.h: include/Uno.Collections.Prior-fb66463b.h
include/Uno.Collections.Prior-7cf783be.h: include/Uno.Object.h
include/Uno.Collections.Prior-7cf783be.h: include/Uno.Float2.h
include/Uno.Collections.Prior-7cf783be.h: include/Uno.Float4.h

include/Uno.Collections.Prior-fb66463b.h: include/Uno.Float4.h
include/Uno.Collections.Prior-fb66463b.h: include/Uno.Object.h

include/Uno.Collections.Prior-bb0a4ec8.h: include/Uno.Int.h

include/Uno.Collections.Queue-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.Queue-1.h: include/Uno.Object.h
include/Uno.Collections.Queue-1.h: include/Uno.Collections.Queue-a4ffa9de.h

include/Uno.Collections.RootableList-1.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.RootableList-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.RootableList-1.h: include/Uno.Collections.IList-1.h
include/Uno.Collections.RootableList-1.h: include/Uno.Object.h

include/Uno.Collections.Selec-5ab24080.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.Selec-5ab24080.h: include/Uno.Object.h

include/Uno.Collections.Selec-30636d68.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.Selec-30636d68.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.Selec-30636d68.h: include/Uno.IDisposable.h
include/Uno.Collections.Selec-30636d68.h: include/Uno.Object.h

include/Uno.Collections.Dicti-d6e3a7c5.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.Dicti-d6e3a7c5.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.Dicti-d6e3a7c5.h: include/Uno.Object.h
include/Uno.Collections.Dicti-d6e3a7c5.h: include/Uno.Collections.Dicti-98f6bc43.h

include/Uno.Compiler.ExportTa-7a61a803.h: include/Uno.h

include/Uno.Compiler.ExportTa-d4b8b207.h: include/Uno.h

include/Uno.Compiler.ExportTa-39be7c2b.h: include/Uno.h

include/Uno.Diagnostics.Asser-ca8bbf62.h: include/Uno.Delegate.h

include/Uno.Diagnostics.Clock.h: include/Uno.h

include/Uno.Diagnostics.Debug.h: include/Uno.h

include/Uno.Diagnostics.Debug-5d778620.h: include/Uno.Int.h

include/Uno.Diagnostics.LogHandler.h: include/Uno.Delegate.h

include/Uno.Graphics.BlendEquation.h: include/Uno.Int.h

include/Uno.Graphics.BlendOperand.h: include/Uno.Int.h

include/Uno.Graphics.BufferUsage.h: include/Uno.Int.h

include/Uno.Graphics.CompareFunc.h: include/Uno.Int.h

include/Uno.Graphics.DeviceBuffer.h: include/Uno.IDisposable.h
include/Uno.Graphics.DeviceBuffer.h: include/Uno.Object.h

include/Uno.Graphics.Format.h: include/Uno.Int.h

include/Uno.Graphics.Framebuffer.h: include/Uno.IDisposable.h
include/Uno.Graphics.Framebuffer.h: include/Uno.Object.h

include/Uno.Graphics.FramebufferFlags.h: include/Uno.Int.h

include/Uno.Graphics.IndexBuffer.h: include/Uno.Graphics.DeviceBuffer.h
include/Uno.Graphics.IndexBuffer.h: include/Uno.IDisposable.h

include/Uno.Graphics.IndexType.h: include/Uno.Int.h

include/Uno.Graphics.PolygonFace.h: include/Uno.Int.h

include/Uno.Graphics.PolygonWinding.h: include/Uno.Int.h

include/Uno.Graphics.PrimitiveType.h: include/Uno.Int.h

include/Uno.Graphics.RenderTarget.h: include/Uno.IDisposable.h
include/Uno.Graphics.RenderTarget.h: include/Uno.Int2.h
include/Uno.Graphics.RenderTarget.h: include/Uno.Object.h

include/Uno.Graphics.SamplerState.h: include/Uno.Object.h

include/Uno.Graphics.Texture2D.h: include/Uno.IDisposable.h
include/Uno.Graphics.Texture2D.h: include/Uno.Int2.h
include/Uno.Graphics.Texture2D.h: include/Uno.Object.h

include/Uno.Graphics.TextureA-43befa07.h: include/Uno.Int.h

include/Uno.Graphics.TextureFilter.h: include/Uno.Int.h

include/Uno.Graphics.TextureHelpers.h: include/Uno.h

include/Uno.Graphics.VertexAt-28188a9f.h: include/Uno.Object.h

include/Uno.Graphics.VertexAt-4a875e1d.h: include/Uno.Int.h

include/Uno.Graphics.VertexBuffer.h: include/Uno.Graphics.DeviceBuffer.h
include/Uno.Graphics.VertexBuffer.h: include/Uno.IDisposable.h

include/Uno.Graphics.VideoTexture.h: include/Uno.IDisposable.h
include/Uno.Graphics.VideoTexture.h: include/Uno.Object.h

include/Uno.IO.BinaryReader.h: include/Uno.IDisposable.h
include/Uno.IO.BinaryReader.h: include/Uno.Object.h

include/Uno.IO.BinaryWriter.h: include/Uno.IDisposable.h
include/Uno.IO.BinaryWriter.h: include/Uno.Object.h

include/Uno.IO.Bundle.h: include/Uno.Object.h

include/Uno.IO.BundleFile.h: include/Uno.Object.h

include/Uno.IO.CppXliStream.h: include/Uno.IDisposable.h
include/Uno.IO.CppXliStream.h: include/Uno.IO.Stream.h

include/Uno.IO.CppXliStreamHandle.h: include/Uno.Object.h

include/Uno.IO.Directory.h: include/Uno.h

include/Uno.IO.EndOfStreamException.h: include/Uno.IO.IOException.h

include/Uno.IO.File.h: include/Uno.h

include/Uno.IO.FileMode.h: include/Uno.Int.h

include/Uno.IO.FileSystemEnumerable.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.IO.FileSystemEnumerable.h: include/Uno.Object.h
include/Uno.IO.FileSystemEnumerable.h: include/Uno.String.h

include/Uno.IO.FileSystemEnumerator.h: include/Uno.Collections.IEnumerator.h
include/Uno.IO.FileSystemEnumerator.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.IO.FileSystemEnumerator.h: include/Uno.IDisposable.h
include/Uno.IO.FileSystemEnumerator.h: include/Uno.Object.h
include/Uno.IO.FileSystemEnumerator.h: include/Uno.String.h

include/Uno.IO.FileSystemEnum-b83388e7.h: include/CppXliFileSystemEnumerator.h
include/Uno.IO.FileSystemEnum-b83388e7.h: include/Uno.Object.h

include/Uno.IO.FileSystemEnum-710bb025.h: include/Uno.h

include/Uno.IO.FileSystemEnum-9a4eb43c.h: include/Uno.Int.h

include/Uno.IO.FileSystemImpl.h: include/Uno.h

include/Uno.IO.IOException.h: include/Uno.Exception.h

include/Uno.IO.MemoryStream.h: include/Uno.IDisposable.h
include/Uno.IO.MemoryStream.h: include/Uno.IO.Stream.h

include/Uno.IO.Path.h: include/Uno.h

include/Uno.IO.Stream.h: include/Uno.IDisposable.h
include/Uno.IO.Stream.h: include/Uno.Object.h

include/Uno.IO.StreamReader.h: include/Uno.IDisposable.h
include/Uno.IO.StreamReader.h: include/Uno.IO.TextReader.h

include/Uno.IO.StreamWriter.h: include/Uno.IDisposable.h
include/Uno.IO.StreamWriter.h: include/Uno.IO.TextWriter.h

include/Uno.IO.TextReader.h: include/Uno.IDisposable.h
include/Uno.IO.TextReader.h: include/Uno.Object.h

include/Uno.IO.TextWriter.h: include/Uno.IDisposable.h
include/Uno.IO.TextWriter.h: include/Uno.Object.h

include/Uno.IO.UserDirectory.h: include/Uno.Int.h

include/Uno.Platform.AndroidDisplay.h: include/Uno.Platform.Display.h

include/Uno.Platform.ApplicationState.h: include/Uno.Int.h

include/Uno.Platform.Applicat-bf686309.h: include/Uno.Delegate.h

include/Uno.Platform.CoreApp.h: include/Uno.Object.h

include/Uno.Platform.Display.h: include/Uno.Object.h

include/Uno.Platform.Displays.h: include/Uno.h

include/Uno.Platform.EventModifiers.h: include/Uno.Int.h

include/Uno.Platform.FrameCha-70b333cb.h: include/Uno.EventArgs.h
include/Uno.Platform.FrameCha-70b333cb.h: include/Uno.Rect.h

include/Uno.Platform.Key.h: include/Uno.Int.h

include/Uno.Platform.KeyEventArgs.h: include/Uno.EventArgs.h

include/Uno.Platform.OSFrame.h: include/Uno.Object.h

include/Uno.Platform.PointerType.h: include/Uno.Int.h

include/Uno.Platform.TimerEventArgs.h: include/Uno.EventArgs.h

include/Uno.Platform.Window.h: include/Uno.Platform.OSFrame.h

include/Uno.Platform.EventSou-b16da529.h: include/Uno.h

include/Uno.Platform.EventSou-afb2ad40.h: include/Uno.h

include/Uno.Runtime.Implement-444123a4.h: include/Uno.h

include/Uno.Runtime.Implement-496b321b.h: include/Uno.h

include/Uno.Runtime.Implement-ed55561e.h: include/Uno.h

include/Uno.Runtime.Implement-2110557a.h: include/Uno.h

include/Uno.Runtime.Implement-6eefa8cd.h: include/Uno.h

include/Uno.Runtime.Implement-78c05898.h: include/Uno.h

include/Uno.Runtime.Implement-5299dae0.h: include/Uno.Object.h

include/Uno.Runtime.Implement-ce657879.h: include/Uno.Object.h

include/Uno.Runtime.Implement-f781096a.h: include/Uno.h

include/Uno.Runtime.Implement-eca777ec.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Runtime.Implement-eca777ec.h: include/Uno.Object.h

include/Uno.Runtime.Implement-a1573b10.h: include/Uno.Collections.IEnumerator.h
include/Uno.Runtime.Implement-a1573b10.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Runtime.Implement-a1573b10.h: include/Uno.IDisposable.h
include/Uno.Runtime.Implement-a1573b10.h: include/Uno.Object.h

include/Uno.Runtime.Implement-81e7ab4c.h: include/Uno.h

include/Uno.Runtime.Implement-a46b04a8.h: include/Uno.Int.h

include/Uno.Runtime.Implement-da669e36.h: include/Uno.Runtime.Implement-1faed10e.h

include/Uno.Runtime.Implement-d6dfc54c.h: include/Uno.Runtime.Implement-1faed10e.h

include/Uno.Runtime.Implement-1faed10e.h: include/Uno.Object.h

include/Uno.Runtime.Implement-4bb10a0a.h: include/Uno.Object.h

include/Uno.Runtime.Implement-faed1c6c.h: include/Uno.h

include/Uno.Runtime.Implement-224692d.h: include/Uno.Int.h

include/Uno.Runtime.Implement-1758a0d3.h: include/Uno.IDisposable.h
include/Uno.Runtime.Implement-1758a0d3.h: include/Uno.Object.h

include/Uno.Runtime.Implement-476e2792.h: include/Uno.Object.h

include/Uno.Runtime.Implement-fa7480cd.h: include/Uno.Exception.h

include/Uno.Runtime.Implement-157d1e47.h: include/Uno.h

include/Uno.Runtime.Implement-122f7885.h: include/Uno.h

include/Uno.Runtime.Implement-6e9df330.h: include/Uno.Object.h

include/Uno.Runtime.InteropSe-e0f0cdcd.h: include/Uno.Object.h

include/Uno.Runtime.InteropSe-4769ead5.h: include/Uno.Int.h

include/Uno.Text.Ascii.h: include/Uno.h

include/Uno.Text.Base64.h: include/Uno.h

include/Uno.Text.Decoder.h: include/Uno.Object.h

include/Uno.Text.Encoding.h: include/Uno.Object.h

include/Uno.Text.StringBuilder.h: include/Uno.Object.h

include/Uno.Text.StringBuilderElement.h: include/Uno.Object.h

include/Uno.Text.Utf8.h: include/Uno.h

include/Uno.Text.UTF8Decoder.h: include/Uno.Text.Decoder.h

include/Uno.Text.UTF8Encoding.h: include/Uno.Text.Encoding.h

include/Uno.Threading.IDispat-8c32ce11.h: include/Uno.Object.h

include/Uno.Threading.IDispat-ff0ea41a.h: include/Uno.Object.h

include/Uno.Threading.IDispat-1205751.h: include/Uno.Object.h

include/Uno.Threading.AutoResetEvent.h: include/Uno.IDisposable.h
include/Uno.Threading.AutoResetEvent.h: include/Uno.Threading.EventWaitHandle.h

include/Uno.Threading.Cancell-3658717e.h: include/Uno.Object.h

include/Uno.Threading.Cancell-99c083b7.h: include/Uno.Object.h

include/Uno.Threading.Future--f69287de.h: include/Uno.Object.h

include/Uno.Threading.Concurr-cd310558.h: include/Uno.Object.h

include/Uno.Threading.ThreadP-dcb97059.h: include/Uno.Threading.ThreadP-77c81928.h

include/Uno.Threading.EventResetMode.h: include/Uno.Int.h

include/Uno.Threading.EventWaitHandle.h: include/Implementation/Posix/posix_reset_event.h
include/Uno.Threading.EventWaitHandle.h: include/Uno.IDisposable.h
include/Uno.Threading.EventWaitHandle.h: include/Uno.Object.h

include/Uno.Threading.Future.h: include/Uno.IDisposable.h
include/Uno.Threading.Future.h: include/Uno.Object.h

include/Uno.Threading.Future-1.h: include/Uno.IDisposable.h
include/Uno.Threading.Future-1.h: include/Uno.Threading.Future.h

include/Uno.Threading.FutureState.h: include/Uno.Int.h

include/Uno.Threading.IDispatcher.h: include/Uno.Object.h

include/Uno.Threading.IDispat-6494c48e.h: include/Uno.h

include/Uno.Threading.ITaskScheduler.h: include/Uno.IDisposable.h
include/Uno.Threading.ITaskScheduler.h: include/Uno.Object.h

include/Uno.Threading.ManualResetEvent.h: include/Uno.IDisposable.h
include/Uno.Threading.ManualResetEvent.h: include/Uno.Threading.EventWaitHandle.h

include/Uno.Threading.Monitor.h: include/Uno.h

include/Uno.Threading.Mutex.h: include/Uno.IDisposable.h
include/Uno.Threading.Mutex.h: include/Uno.Object.h

include/Uno.Threading.Pthread-76d261d4.h: include/Uno.Object.h

include/Uno.Threading.ThreadP-a88ce999.h: include/Uno.Threading.ThreadP-77c81928.h

include/Uno.Threading.Promise-1.h: include/Uno.IDisposable.h
include/Uno.Threading.Promise-1.h: include/Uno.Object.h
include/Uno.Threading.Promise-1.h: include/Uno.Threading.Future-1.h

include/Uno.Threading.PthreadHelpers.h: include/Implementation/Posix/posix_reset_event.h
include/Uno.Threading.PthreadHelpers.h: include/Uno.h

include/Uno.Threading.Pthread-5f9bc3e8.h: include/Implementation/Posix/posix_reset_event.h
include/Uno.Threading.Pthread-5f9bc3e8.h: include/Uno.Object.h

include/Uno.Threading.SyncDispatcher.h: include/Uno.Object.h
include/Uno.Threading.SyncDispatcher.h: include/Uno.Threading.IDispatcher.h

include/Uno.Threading.Task.h: include/Uno.IDisposable.h
include/Uno.Threading.Task.h: include/Uno.Object.h

include/Uno.Threading.TaskDelegate.h: include/Uno.Delegate.h

include/Uno.Threading.TaskFuture-1.h: include/Uno.IDisposable.h
include/Uno.Threading.TaskFuture-1.h: include/Uno.Object.h
include/Uno.Threading.TaskFuture-1.h: include/Uno.Threading.Future-1.h

include/Uno.Threading.TaskStatus.h: include/Uno.Int.h

include/Uno.Threading.Thread.h: include/Uno.Object.h

include/Uno.Threading.Pthread-20218ef3.h: include/Uno.Object.h

include/Uno.Threading.ThreadPool.h: include/Uno.IDisposable.h
include/Uno.Threading.ThreadPool.h: include/Uno.Object.h

include/Uno.Threading.ThreadP-a7c4648a.h: include/Uno.IDisposable.h
include/Uno.Threading.ThreadP-a7c4648a.h: include/Uno.Object.h
include/Uno.Threading.ThreadP-a7c4648a.h: include/Uno.Threading.ITaskScheduler.h

include/Uno.Threading.ThreadStart.h: include/Uno.Delegate.h

include/Uno.Threading.ThreadS-435616a4.h: include/Uno.Exception.h

include/Uno.Threading.ThreadP-77c81928.h: include/Uno.Object.h

include/Uno.Time.CalendarSystem.h: include/Uno.Object.h

include/Uno.Time.Constants.h: include/Uno.h

include/Uno.Time.Converter.h: include/Uno.h

include/Uno.Time.DateTimeZone.h: include/Uno.Object.h
include/Uno.Time.DateTimeZone.h: include/Uno.Time.Offset.h

include/Uno.Time.DeviceTimeZone.h: include/Uno.Time.DateTimeZone.h

include/Uno.Time.Duration.h: include/Uno.Object.h

include/Uno.Time.FixedDateTimeZone.h: include/Uno.Time.DateTimeZone.h
include/Uno.Time.FixedDateTimeZone.h: include/Uno.Time.Offset.h

include/Uno.Time.HashCodeHelper.h: include/Uno.h

include/Uno.Time.Instant.h: include/Uno.Object.h

include/Uno.Time.LocalDateTime.h: include/Uno.Object.h
include/Uno.Time.LocalDateTime.h: include/Uno.Time.Instant.h

include/Uno.Time.Offset.h: include/Uno.Object.h

include/Uno.Time.Preconditions.h: include/Uno.h

include/Uno.Time.ZonedDateTime.h: include/Uno.Object.h
include/Uno.Time.ZonedDateTime.h: include/Uno.Time.Offset.h

include/Uno.Time.Calendars.Era.h: include/Uno.Object.h

include/Uno.Time.Calendars.Gr-1bc32ae1.h: include/Uno.Time.Calendars.Ye-a9fcd499.h

include/Uno.Time.Calendars.Ti-285a9be8.h: include/Uno.h

include/Uno.Time.Calendars.We-173d63f9.h: include/Uno.Object.h

include/Uno.Time.Calendars.Ye-a9fcd499.h: include/Uno.Object.h
include/Uno.Time.Calendars.Ye-a9fcd499.h: include/Uno.Time.Instant.h

include/Uno.Time.Text.FixedFo-3caa69db.h: include/Uno.Object.h

include/Uno.Time.Text.IPatternPart-1.h: include/Uno.Object.h

include/Uno.Time.Text.LocalDa-9eba1702.h: include/Uno.Object.h

include/Uno.Time.Text.LocalDa-2e9342e4.h: include/Uno.Object.h

include/Uno.Time.Text.NumberPart-1.h: include/Uno.Int.h
include/Uno.Time.Text.NumberPart-1.h: include/Uno.Object.h
include/Uno.Time.Text.NumberPart-1.h: include/Uno.Time.Text.IPatternPart-1.h
include/Uno.Time.Text.NumberPart-1.h: include/Uno.Time.Text.PatternPart-2.h

include/Uno.Time.Text.OffsetP-7c12f43a.h: include/Uno.Object.h

include/Uno.Time.Text.OffsetPattern.h: include/Uno.Object.h

include/Uno.Time.Text.PatternPart-2.h: include/Uno.Object.h
include/Uno.Time.Text.PatternPart-2.h: include/Uno.Time.Text.IPatternPart-1.h

include/Uno.Time.Text.SeparatorPart-1.h: include/Uno.Char.h
include/Uno.Time.Text.SeparatorPart-1.h: include/Uno.Object.h
include/Uno.Time.Text.SeparatorPart-1.h: include/Uno.Time.Text.IPatternPart-1.h
include/Uno.Time.Text.SeparatorPart-1.h: include/Uno.Time.Text.PatternPart-2.h

include/Uno.Time.Text.SignPart-1.h: include/Uno.Int.h
include/Uno.Time.Text.SignPart-1.h: include/Uno.Object.h
include/Uno.Time.Text.SignPart-1.h: include/Uno.Time.Text.IPatternPart-1.h
include/Uno.Time.Text.SignPart-1.h: include/Uno.Time.Text.PatternPart-2.h

include/Uno.UX.BundleFileSource.h: include/Uno.UX.FileSource.h

include/Uno.UX.Expression-1.h: include/Uno.Delegate.h

include/Uno.UX.FileSource.h: include/Uno.Object.h

include/Uno.UX.IPropertyListener.h: include/Uno.Object.h
include/Uno.UX.IPropertyListener.h: include/Uno.UX.Selector.h

include/Uno.UX.NameTable.h: include/Uno.Object.h

include/Uno.UX.Property.h: include/Uno.UX.PropertyAccessor.h
include/Uno.UX.Property.h: include/Uno.UX.Selector.h

include/Uno.UX.Property-1.h: include/Uno.UX.Property.h

include/Uno.UX.PropertyAccessor.h: include/Uno.Object.h
include/Uno.UX.PropertyAccessor.h: include/Uno.UX.Selector.h

include/Uno.UX.PropertyObject.h: include/Uno.Object.h

include/Uno.UX.Resource.h: include/Uno.Object.h

include/Uno.UX.Selector.h: include/Uno.Object.h

include/Uno.UX.SelectorRegistry.h: include/Uno.h

include/Uno.UX.Size.h: include/Uno.Object.h

include/Uno.UX.Size2.h: include/Uno.Object.h
include/Uno.UX.Size2.h: include/Uno.UX.Size.h

include/Uno.UX.StreamExtensions.h: include/Uno.h

include/Uno.UX.Template.h: include/Uno.Object.h

include/Uno.UX.Unit.h: include/Uno.Int.h

include/Uno.UX.ValueChangedArgs-1.h: include/Uno.EventArgs.h

include/Uno.UX.ValueChangedHandler-1.h: include/Uno.Delegate.h

include/Uno.Data.Json.JsonWriter.h: include/Uno.h

include/Uno.Net.NetworkHelpers.h: include/Uno.Object.h

include/Uno.Net.Sockets.NetworkStream.h: include/Uno.IDisposable.h
include/Uno.Net.Sockets.NetworkStream.h: include/Uno.IO.Stream.h

include/Uno.Net.Sockets.Socket.h: include/Uno.IDisposable.h
include/Uno.Net.Sockets.Socket.h: include/Uno.Object.h

include/Uno.Net.Sockets.Socke-432e1b25.h: include/Uno.Exception.h

include/Uno.Net.Sockets.SocketFlags.h: include/Uno.Int.h

include/Uno.Net.Sockets.Socke-b77e7003.h: include/Uno.Object.h

include/Uno.Net.Http.HttpMess-b09aa232.h: include/Uno.Object.h

include/Uno.Net.Http.HttpMess-3c1f1370.h: include/Uno.Object.h

include/Uno.Net.Http.HttpDefa-b19f5e55.h: include/Uno.Object.h
include/Uno.Net.Http.HttpDefa-b19f5e55.h: include/Uno.Threading.IDispatcher.h

include/Uno.Net.Http.HttpMessageCache.h: include/Uno.h

include/Uno.Net.Http.HttpMess-8a5feb56.h: include/Uno.IDisposable.h
include/Uno.Net.Http.HttpMess-8a5feb56.h: include/Uno.Object.h

include/Uno.Net.Http.HttpMess-1d2e0b2f.h: include/Uno.IDisposable.h
include/Uno.Net.Http.HttpMess-1d2e0b2f.h: include/Uno.Object.h

include/Uno.Net.Http.HttpRequestState.h: include/Uno.Int.h

include/Uno.Net.Http.HttpResponseType.h: include/Uno.Int.h

include/Uno.Net.Http.InvalidR-d0abcd6.h: include/Uno.Exception.h

include/Uno.Net.Http.InvalidS-7f541f1c.h: include/Uno.Exception.h

include/Uno.Net.Http.HttpMess-db3b7805.h: include/Uno.Object.h

include/Uno.Net.Http.HttpMess-2de79056.h: include/Uno.h

include/Uno.Net.Http.Implemen-5e623127.h: include/Android.Base.Wrappers-90b493fe.h
include/Uno.Net.Http.Implemen-5e623127.h: include/Android.com.fuse.Expe-9d584358.h
include/Uno.Net.Http.Implemen-5e623127.h: include/Uno.IDisposable.h
include/Uno.Net.Http.Implemen-5e623127.h: include/Uno.Net.Http.Implemen-c964dca9.h

include/Uno.Net.Http.Implemen-c964dca9.h: include/Uno.IDisposable.h
include/Uno.Net.Http.Implemen-c964dca9.h: include/Uno.Object.h

include/Java.Object.h: include/Uno.Object.h

include/Android.Bootstrapper.h: include/Uno.h

include/Android.Base.AndroidB-e9b6d531.h: include/Uno.Type.h
include/Android.Base.AndroidB-e9b6d531.h: include/Uno.Exception.h
include/Android.Base.AndroidB-e9b6d531.h: include/Uno.h

include/Android.Base.JNI.h: include/Uno.Exception.h
include/Android.Base.JNI.h: include/Uno.h
include/Android.Base.JNI.h: include/Uno/JNIHelper.h

include/Android.Base.JNI.RefType.h: include/Uno.Int.h

include/Android.Base.Primitiv-ae5fb0f1.h: include/Uno.Object.h

include/Android.Base.Primitiv-75a2ab27.h: include/Uno.Object.h

include/Android.Base.Primitiv-7eef1e73.h: include/Uno.Object.h

include/Android.Base.Primitiv-45253430.h: include/Uno.Object.h

include/Android.Base.Primitiv-b7b09a.h: include/Uno.Object.h

include/Android.Base.Primitiv-e52e9f29.h: include/Uno.Object.h

include/Android.Base.Primitives.jweak.h: include/Uno.Object.h

include/Android.Base.Primitiv-30a77109.h: include/Uno.Object.h

include/Android.Base.Primitives.ujbyte.h: include/Uno.Object.h

include/Android.Base.Primitives.ujchar.h: include/Uno.Object.h

include/Android.Base.Primitiv-e437692f.h: include/Uno.Object.h

include/Android.Base.Primitiv-f2634ec4.h: include/Uno.Object.h

include/Android.Base.Primitiv-c95fb41d.h: include/Uno.Object.h

include/Android.Base.Primitives.ujint.h: include/Uno.Object.h

include/Android.Base.Primitives.ujlong.h: include/Uno.Object.h

include/Android.Base.Primitiv-2b9696be.h: include/Uno.Object.h

include/Android.Base.Primitiv-65373fdf.h: include/Uno.Object.h

include/Android.Base.Primitiv-712df2f8.h: include/Uno.Object.h

include/Android.Base.Primitiv-a6e942de.h: include/Uno.Object.h

include/Android.Base.Primitiv-2924c081.h: include/Uno.Object.h

include/Android.Base.Types.Arrays.h: include/Android.Base.JNI.h
include/Android.Base.Types.Arrays.h: include/Uno.h

include/Android.Base.Types.Bridge.h: include/Android.Base.JNI.h
include/Android.Base.Types.Bridge.h: include/Uno.Exception.h
include/Android.Base.Types.Bridge.h: include/Uno.h

include/Android.Base.Types.ByteBuffer.h: include/Android.Base.JNI.h
include/Android.Base.Types.ByteBuffer.h: include/Uno.h

include/Android.Base.Types.String.h: include/Android.Base.JNI.h
include/Android.Base.Types.String.h: include/Uno.h

include/Android.Base.Wrappers-90b493fe.h: include/Uno.Object.h

include/Android.Base.Wrappers-88f7a41f.h: include/Uno.h

include/Android.Base.Wrappers.JWrapper.h: include/Android.Base.AndroidB-e9b6d531.h
include/Android.Base.Wrappers.JWrapper.h: include/Android.Base.JNI.h
include/Android.Base.Wrappers.JWrapper.h: include/Android.Base.Wrappers-90b493fe.h
include/Android.Base.Wrappers.JWrapper.h: include/Java.Object.h
include/Android.Base.Wrappers.JWrapper.h: include/Uno.Exception.h
include/Android.Base.Wrappers.JWrapper.h: include/Uno.IDisposable.h

include/Android.com.fuse.Expe-9d584358.h: include/Android.Base.Wrappers.JWrapper.h
include/Android.com.fuse.Expe-9d584358.h: include/Android.Base.Wrappers-90b493fe.h
include/Android.com.fuse.Expe-9d584358.h: include/Uno.IDisposable.h

include/Fuse.AndroidProperties.h: include/Uno.h

include/Fuse.App.h: include/Fuse.AppBase.h

include/Fuse.AppBase.h: include/Uno.Application.h
include/Fuse.AppBase.h: include/Uno.Float4.h

include/Fuse.Behavior.h: include/Fuse.Binding.h
include/Fuse.Behavior.h: include/Fuse.Node.h
include/Fuse.Behavior.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Behavior.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Behavior.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Behavior.h: include/Uno.Collections.IList-1.h

include/Fuse.Binding.h: include/Uno.Object.h

include/Fuse.Box.h: include/Uno.Float3.h
include/Fuse.Box.h: include/Uno.Object.h

include/Fuse.CacheFramebuffer.h: include/Uno.Object.h

include/Fuse.Visual.CancelInt-459c56d4.h: include/Uno.Int.h

include/Fuse.Collision.h: include/Uno.h

include/Fuse.Computer.h: include/Uno.Object.h

include/Fuse.Computer-1.h: include/Fuse.Computer.h

include/Fuse.NodeGroupBase.Co-a2bdc185.h: include/Uno.Int.h

include/Fuse.Node.DataFinder.h: include/Fuse.Node.IDataEnumerator.h
include/Fuse.Node.DataFinder.h: include/Uno.Object.h

include/Fuse.Node.DataWatcher.h: include/Fuse.Node.DataFinder.h
include/Fuse.Node.DataWatcher.h: include/Fuse.Node.IDataEnumerator.h
include/Fuse.Node.DataWatcher.h: include/Fuse.Node.IDataListener.h

include/Fuse.DeferredManager.h: include/Uno.h

include/Fuse.Diagnostic.h: include/Uno.Object.h

include/Fuse.DiagnosticHandler.h: include/Uno.Delegate.h

include/Fuse.Diagnostics.h: include/Uno.h

include/Fuse.DiagnosticType.h: include/Uno.Int.h

include/Fuse.DrawContext.h: include/Uno.Int4.h
include/Fuse.DrawContext.h: include/Uno.Object.h

include/Fuse.DrawHelpers.h: include/Uno.Float2.h
include/Fuse.DrawHelpers.h: include/Uno.Object.h
include/Fuse.DrawHelpers.h: include/Uno.Runtime.Implement-476e2792.h

include/Fuse.NodeGroupBase.EmptyNode.h: include/Fuse.Binding.h
include/Fuse.NodeGroupBase.EmptyNode.h: include/Fuse.Node.h
include/Fuse.NodeGroupBase.EmptyNode.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.NodeGroupBase.EmptyNode.h: include/Uno.Collections.ICollection-1.h
include/Fuse.NodeGroupBase.EmptyNode.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.NodeGroupBase.EmptyNode.h: include/Uno.Collections.IList-1.h

include/Fuse.FastMatrix.h: include/Uno.Float4x4.h
include/Fuse.FastMatrix.h: include/Uno.Object.h

include/Fuse.FastProperty1.h: include/Uno.Int.h

include/Fuse.FastProperty1Link.h: include/Uno.Object.h

include/Fuse.FastProperty1Link-1.h: include/Fuse.FastProperty1Link.h

include/Fuse.FastProperty2.h: include/Uno.Int.h

include/Fuse.FastProperty2Link.h: include/Uno.Object.h

include/Fuse.FastProperty2Link-1.h: include/Fuse.FastProperty2Link.h

include/Fuse.FileSourceConverter.h: include/Fuse.Marshal.IConverter.h
include/Fuse.FileSourceConverter.h: include/Uno.Object.h

include/Fuse.FixedViewport.h: include/Fuse.ICommonViewport.h
include/Fuse.FixedViewport.h: include/Fuse.IRenderViewport.h
include/Fuse.FixedViewport.h: include/Fuse.IViewport.h
include/Fuse.FixedViewport.h: include/Uno.Float2.h
include/Fuse.FixedViewport.h: include/Uno.Object.h

include/Fuse.LayoutParams.Flags.h: include/Uno.Int.h

include/Fuse.Float2Computer.h: include/Fuse.Computer-1.h
include/Fuse.Float2Computer.h: include/Uno.Float2.h

include/Fuse.Float3Computer.h: include/Fuse.Computer-1.h
include/Fuse.Float3Computer.h: include/Uno.Float3.h

include/Fuse.Float4Computer.h: include/Fuse.Computer-1.h
include/Fuse.Float4Computer.h: include/Uno.Float4.h

include/Fuse.Font.h: include/Uno.Object.h

include/Fuse.FramebufferPool.h: include/Uno.h

include/Fuse.FramebufferPoolImpl.h: include/Fuse.Resources.ISoftDisposable.h
include/Fuse.FramebufferPoolImpl.h: include/Uno.Object.h

include/Fuse.FrustumViewport.h: include/Uno.Float4x4.h
include/Fuse.FrustumViewport.h: include/Uno.Object.h

include/Fuse.GraphicsWorker.h: include/Uno.h

include/Fuse.TranslationModes-f01a2450.h: include/Fuse.ITransformMode.h
include/Fuse.TranslationModes-f01a2450.h: include/Fuse.ITranslationMode.h
include/Fuse.TranslationModes-f01a2450.h: include/Fuse.TranslationModes.SizeMode.h

include/Fuse.HitTestCallback.h: include/Uno.Delegate.h

include/Fuse.HitTestContext.h: include/Fuse.Ray.h
include/Fuse.HitTestContext.h: include/Uno.Float2.h
include/Fuse.HitTestContext.h: include/Uno.Object.h

include/Fuse.Visual.HitTestRecord.h: include/Uno.Object.h

include/Fuse.HitTestResult.h: include/Uno.Object.h

include/Fuse.Visual.HitTestTr-39a91efd.h: include/Uno.Int.h

include/Fuse.IActualPlacement.h: include/Uno.Object.h
include/Fuse.IActualPlacement.h: include/Uno.Float3.h

include/Fuse.IArray.h: include/Uno.Object.h

include/Fuse.IBeginRemoveVisu-90c91ef5.h: include/Uno.Object.h

include/Fuse.ICommonViewport.h: include/Uno.Object.h
include/Fuse.ICommonViewport.h: include/Uno.Float2.h

include/Fuse.Marshal.IConverter.h: include/Uno.Object.h

include/Fuse.Node.IDataEnumerator.h: include/Uno.Object.h

include/Fuse.Node.IDataListener.h: include/Uno.Object.h

include/Fuse.IDeferred.h: include/Uno.Object.h

include/Fuse.ScalingModes.IdentityMode.h: include/Fuse.IScalingMode.h
include/Fuse.ScalingModes.IdentityMode.h: include/Fuse.ITransformMode.h
include/Fuse.ScalingModes.IdentityMode.h: include/Uno.Object.h

include/Fuse.IFrame.h: include/Uno.Object.h
include/Fuse.IFrame.h: include/Uno.Float2.h

include/Fuse.IFrustum.h: include/Uno.Object.h
include/Fuse.IFrustum.h: include/Uno.Float4x4.h

include/Fuse.ILoading.h: include/Uno.Object.h

include/Fuse.ILoadingStatic.h: include/Uno.h

include/Fuse.INameListener.h: include/Uno.Object.h
include/Fuse.INameListener.h: include/Uno.UX.Selector.h

include/Fuse.Visual.InteractionItem.h: include/Uno.Object.h

include/Fuse.InvalidateLayoutReason.h: include/Uno.Int.h

include/Fuse.IObject.h: include/Uno.Object.h

include/Fuse.IParentObserver.h: include/Uno.Object.h

include/Fuse.IRenderViewport.h: include/Fuse.ICommonViewport.h
include/Fuse.IRenderViewport.h: include/Uno.Object.h
include/Fuse.IRenderViewport.h: include/Uno.Float4x4.h

include/Fuse.IScalingMode.h: include/Fuse.ITransformMode.h
include/Fuse.IScalingMode.h: include/Uno.Object.h
include/Fuse.IScalingMode.h: include/Uno.Float3.h

include/Fuse.Node.ISiblingDataProvider.h: include/Uno.Object.h

include/Fuse.Node.ISubtreeDataProvider.h: include/Uno.Object.h

include/Fuse.ITemplateSource.h: include/Uno.Object.h

include/Fuse.ITransformMode.h: include/Uno.Object.h

include/Fuse.ITransformRelative.h: include/Uno.Object.h

include/Fuse.ITranslationMode.h: include/Fuse.ITransformMode.h
include/Fuse.ITranslationMode.h: include/Uno.Object.h
include/Fuse.ITranslationMode.h: include/Uno.Float3.h

include/Fuse.IUpdateListener.h: include/Uno.Object.h

include/Fuse.IViewport.h: include/Fuse.ICommonViewport.h
include/Fuse.IViewport.h: include/Uno.Object.h
include/Fuse.IViewport.h: include/Fuse.Ray.h
include/Fuse.IViewport.h: include/Uno.Float2.h

include/Fuse.JSFileSource.h: include/Uno.UX.FileSource.h

include/Fuse.Json.h: include/Uno.h

include/Fuse.KeyboardBootstrapper.h: include/Uno.Object.h

include/Fuse.Layer.h: include/Uno.Int.h

include/Fuse.LayoutDependent.h: include/Uno.Int.h

include/Fuse.LayoutParams.h: include/Uno.Float2.h
include/Fuse.LayoutParams.h: include/Uno.Object.h

include/Fuse.LayoutPriority.h: include/Uno.h

include/Fuse.LayoutRole.h: include/Uno.Int.h

include/Fuse.TranslationModes-98d57f14.h: include/Fuse.ITransformMode.h
include/Fuse.TranslationModes-98d57f14.h: include/Fuse.ITranslationMode.h
include/Fuse.TranslationModes-98d57f14.h: include/Uno.Object.h

include/Fuse.Marshal.h: include/Uno.h

include/Fuse.MarshalException.h: include/Uno.Exception.h

include/Fuse.MobileBootstrapping.h: include/Uno.Object.h

include/Fuse.NameRegistry.h: include/Uno.h

include/Fuse.Node.h: include/Fuse.Binding.h
include/Fuse.Node.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Node.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Node.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Node.h: include/Uno.Collections.IList-1.h
include/Fuse.Node.h: include/Uno.UX.PropertyObject.h
include/Fuse.Node.h: include/Uno.UX.Selector.h

include/Fuse.NodeGroupBase.h: include/Fuse.Behavior.h
include/Fuse.NodeGroupBase.h: include/Fuse.Binding.h
include/Fuse.NodeGroupBase.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.NodeGroupBase.h: include/Fuse.TemplateSourceImpl.h
include/Fuse.NodeGroupBase.h: include/Uno.Collections.ICollection-1.h
include/Fuse.NodeGroupBase.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.NodeGroupBase.h: include/Uno.Collections.IList-1.h

include/Fuse.NumberComputer.h: include/Fuse.Computer-1.h
include/Fuse.NumberComputer.h: include/Uno.Double.h

include/Fuse.OrthographicFrustum.h: include/Fuse.IFrustum.h
include/Fuse.OrthographicFrustum.h: include/Uno.Float2.h
include/Fuse.OrthographicFrustum.h: include/Uno.Float4x4.h
include/Fuse.OrthographicFrustum.h: include/Uno.Object.h

include/Fuse.Visual.ParameterProperty.h: include/Uno.String.h
include/Fuse.Visual.ParameterProperty.h: include/Uno.UX.Property-1.h

include/Fuse.TranslationModes-400fada6.h: include/Fuse.ITransformMode.h
include/Fuse.TranslationModes-400fada6.h: include/Fuse.ITranslationMode.h
include/Fuse.TranslationModes-400fada6.h: include/Uno.Object.h

include/Fuse.PendingRemoveVisual.h: include/Uno.Object.h

include/Fuse.PlacedArgs.h: include/Uno.EventArgs.h
include/Fuse.PlacedArgs.h: include/Uno.Float2.h

include/Fuse.PlacedHandler.h: include/Uno.Delegate.h

include/Fuse.Properties.h: include/Uno.Object.h

include/Fuse.PropertyHandle.h: include/Uno.Object.h

include/Fuse.Ray.h: include/Uno.Float3.h
include/Fuse.Ray.h: include/Uno.Object.h

include/Fuse.RelativeTransform-1.h: include/Fuse.Binding.h
include/Fuse.RelativeTransform-1.h: include/Fuse.ITransformRelative.h
include/Fuse.RelativeTransform-1.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.RelativeTransform-1.h: include/Fuse.Transform.h
include/Fuse.RelativeTransform-1.h: include/Uno.Collections.ICollection-1.h
include/Fuse.RelativeTransform-1.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.RelativeTransform-1.h: include/Uno.Collections.IList-1.h

include/Fuse.RenderTargetEntry.h: include/Uno.Int2.h
include/Fuse.RenderTargetEntry.h: include/Uno.Int4.h
include/Fuse.RenderTargetEntry.h: include/Uno.Object.h

include/Fuse.RequestBringIntoViewArgs.h: include/Uno.EventArgs.h

include/Fuse.RequestBringInto-2d120b4f.h: include/Uno.Delegate.h

include/Fuse.RootStage.h: include/Uno.Int.h

include/Fuse.App.RootViewHost.h: include/Fuse.Controls.INativeViewRoot.h
include/Fuse.App.RootViewHost.h: include/Uno.Object.h

include/Fuse.RootViewport.h: include/Fuse.Binding.h
include/Fuse.RootViewport.h: include/Fuse.ICommonViewport.h
include/Fuse.RootViewport.h: include/Fuse.ITemplateSource.h
include/Fuse.RootViewport.h: include/Fuse.IViewport.h
include/Fuse.RootViewport.h: include/Fuse.Node.h
include/Fuse.RootViewport.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.RootViewport.h: include/Fuse.Visual.h
include/Fuse.RootViewport.h: include/Uno.Collections.ICollection-1.h
include/Fuse.RootViewport.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.RootViewport.h: include/Uno.Collections.IList-1.h
include/Fuse.RootViewport.h: include/Uno.Float2.h
include/Fuse.RootViewport.h: include/Uno.IDisposable.h
include/Fuse.RootViewport.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Rotation.h: include/Fuse.Binding.h
include/Fuse.Rotation.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Rotation.h: include/Fuse.Transform.h
include/Fuse.Rotation.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Rotation.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Rotation.h: include/Uno.Collections.IList-1.h
include/Fuse.Rotation.h: include/Uno.Float3.h

include/Fuse.Scaling.h: include/Fuse.Binding.h
include/Fuse.Scaling.h: include/Fuse.IScalingMode.h
include/Fuse.Scaling.h: include/Fuse.ITransformRelative.h
include/Fuse.Scaling.h: include/Fuse.RelativeTransform-1.h
include/Fuse.Scaling.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Scaling.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Scaling.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Scaling.h: include/Uno.Collections.IList-1.h
include/Fuse.Scaling.h: include/Uno.Float3.h

include/Fuse.ScalingModes.h: include/Uno.h

include/Fuse.Shear.h: include/Fuse.Binding.h
include/Fuse.Shear.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Shear.h: include/Fuse.Transform.h
include/Fuse.Shear.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Shear.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Shear.h: include/Uno.Collections.IList-1.h
include/Fuse.Shear.h: include/Uno.Float2.h

include/Fuse.Size2Computer.h: include/Fuse.Computer-1.h
include/Fuse.Size2Computer.h: include/Uno.UX.Size2.h

include/Fuse.SizeComputer.h: include/Fuse.Computer-1.h
include/Fuse.SizeComputer.h: include/Uno.UX.Size.h

include/Fuse.TranslationModes.SizeMode.h: include/Fuse.ITransformMode.h
include/Fuse.TranslationModes.SizeMode.h: include/Fuse.ITranslationMode.h
include/Fuse.TranslationModes.SizeMode.h: include/Uno.Object.h
include/Fuse.TranslationModes.SizeMode.h: include/Uno.Float3.h

include/Fuse.Stage.h: include/Fuse.UpdateAction.h
include/Fuse.Stage.h: include/Uno.Object.h

include/Fuse.StringComputer.h: include/Fuse.Computer-1.h
include/Fuse.StringComputer.h: include/Uno.String.h

include/Fuse.SystemFont.Style.h: include/Uno.Int.h

include/Fuse.SystemFont.h: include/Fuse.Font.h

include/Fuse.SystemUIFrame.h: include/Fuse.IFrame.h
include/Fuse.SystemUIFrame.h: include/Uno.Object.h

include/Fuse.TemplateSourceImpl.h: include/Uno.Object.h

include/Fuse.Diagnostics.Temporal.h: include/Uno.IDisposable.h
include/Fuse.Diagnostics.Temporal.h: include/Uno.Object.h

include/Fuse.Time.h: include/Uno.h

include/Fuse.Transform.h: include/Fuse.Binding.h
include/Fuse.Transform.h: include/Fuse.Node.h
include/Fuse.Transform.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Transform.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Transform.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Transform.h: include/Uno.Collections.IList-1.h

include/Fuse.Translation.h: include/Fuse.Binding.h
include/Fuse.Translation.h: include/Fuse.ITransformRelative.h
include/Fuse.Translation.h: include/Fuse.ITranslationMode.h
include/Fuse.Translation.h: include/Fuse.RelativeTransform-1.h
include/Fuse.Translation.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Translation.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Translation.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Translation.h: include/Uno.Collections.IList-1.h

include/Fuse.TranslationModes.h: include/Uno.h

include/Fuse.UnhandledExceptionArgs.h: include/Uno.EventArgs.h

include/Fuse.UnhandledExceptionHandler.h: include/Uno.Delegate.h

include/Fuse.UpdateAction.h: include/Uno.Object.h

include/Fuse.UpdateDispatcher.h: include/Uno.Object.h
include/Fuse.UpdateDispatcher.h: include/Uno.Threading.IDispatcher.h

include/Fuse.UpdateListener.h: include/Uno.Object.h

include/Fuse.UpdateManager.h: include/Uno.h

include/Fuse.UpdateStage.h: include/Uno.Int.h

include/Fuse.UserEvent.h: include/Fuse.Behavior.h
include/Fuse.UserEvent.h: include/Fuse.Binding.h
include/Fuse.UserEvent.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.UserEvent.h: include/Uno.Collections.ICollection-1.h
include/Fuse.UserEvent.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.UserEvent.h: include/Uno.Collections.IList-1.h

include/Fuse.UserEventArgs.h: include/Uno.EventArgs.h

include/Fuse.UserEventDispatch.h: include/Uno.Object.h
include/Fuse.UserEventDispatch.h: include/Uno.UX.Selector.h

include/Fuse.UserEventHandler.h: include/Uno.Delegate.h

include/Fuse.ViewportHelpers.h: include/Uno.h

include/Fuse.Visual.h: include/Fuse.Binding.h
include/Fuse.Visual.h: include/Fuse.Internal.MiniList-1.h
include/Fuse.Visual.h: include/Fuse.ITemplateSource.h
include/Fuse.Visual.h: include/Fuse.LayoutParams.h
include/Fuse.Visual.h: include/Fuse.Node.h
include/Fuse.Visual.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Visual.h: include/Fuse.TemplateSourceImpl.h
include/Fuse.Visual.h: include/Fuse.Visual.InteractionItem.h
include/Fuse.Visual.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Visual.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Visual.h: include/Uno.Collections.IList-1.h
include/Fuse.Visual.h: include/Uno.Float2.h
include/Fuse.Visual.h: include/Uno.UX.IPropertyListener.h
include/Fuse.Visual.h: include/Uno.Float4.h
include/Fuse.Visual.h: include/Uno.Float4x4.h
include/Fuse.Visual.h: include/Uno.Rect.h
include/Fuse.Visual.h: include/Uno.UX.Selector.h

include/Fuse.Visual.VisualBits.h: include/Uno.Int.h

include/Fuse.VisualBounds.h: include/Fuse.Box.h
include/Fuse.VisualBounds.h: include/Uno.Object.h

include/Fuse.VisualContext.h: include/Uno.Int.h

include/Fuse.VisualEvent-2.h: include/Uno.Object.h

include/Fuse.VisualEventArgs.h: include/Uno.EventArgs.h

include/Fuse.VisualEventHandler.h: include/Uno.Delegate.h

include/Fuse.VisualEventMode.h: include/Uno.Int.h

include/Fuse.VisualListCache.h: include/Uno.h

include/Fuse.SystemFont.Weight.h: include/Uno.Int.h

include/Fuse.TranslationModes-5183f957.h: include/Fuse.ITransformMode.h
include/Fuse.TranslationModes-5183f957.h: include/Fuse.ITranslationMode.h
include/Fuse.TranslationModes-5183f957.h: include/Fuse.TranslationModes.SizeMode.h

include/Fuse.WrapException.h: include/Uno.Exception.h

include/Fuse.Platform.AppEvents.h: include/Uno.h

include/Fuse.Platform.ApplicationState.h: include/Uno.Int.h

include/Fuse.Platform.Lifecycle.h: include/Uno.h

include/Fuse.Platform.SystemUI.h: include/Uno.h

include/Fuse.Platform.SystemUIID.h: include/Uno.Int.h

include/Fuse.Platform.SystemU-a6dfc5d1.h: include/Uno.Int.h

include/Fuse.Platform.SystemU-2024c55a.h: include/Uno.EventArgs.h
include/Fuse.Platform.SystemU-2024c55a.h: include/Uno.Rect.h

include/Fuse.Platform.SysUIState.h: include/Uno.Int.h

include/Fuse.Animations.Anima-9f6f3909.h: include/Uno.Int.h

include/Fuse.Animations.Animator.h: include/Uno.UX.PropertyObject.h

include/Fuse.Animations.AnimatorState.h: include/Uno.Object.h

include/Fuse.Animations.Anima-2f54bcf0.h: include/Uno.Int.h

include/Fuse.Animations.Attract.h: include/Fuse.Reactive.Expression.h
include/Fuse.Animations.Attract.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Animations.Attractor-1.h: include/Fuse.Behavior.h
include/Fuse.Animations.Attractor-1.h: include/Fuse.Binding.h
include/Fuse.Animations.Attractor-1.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Animations.Attractor-1.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Animations.Attractor-1.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Animations.Attractor-1.h: include/Uno.Collections.IList-1.h
include/Fuse.Animations.Attractor-1.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Animations.Attra-1414c3f0.h: include/Fuse.Motion.Destinati-3569762f.h

include/Fuse.Animations.Avera-2b3394b0.h: include/Fuse.Animations.IMixerMaster.h
include/Fuse.Animations.Avera-2b3394b0.h: include/Fuse.Animations.Maste-197394bf.h
include/Fuse.Animations.Avera-2b3394b0.h: include/Fuse.Animations.Maste-4c7af709.h
include/Fuse.Animations.Avera-2b3394b0.h: include/Uno.Object.h
include/Fuse.Animations.Avera-2b3394b0.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Animations.Avera-d2893fe7.h: include/Fuse.Animations.IMixerMaster.h
include/Fuse.Animations.Avera-d2893fe7.h: include/Fuse.Animations.Maste-9f52236c.h

include/Fuse.Animations.AverageMixer.h: include/Fuse.Animations.IMixer.h
include/Fuse.Animations.AverageMixer.h: include/Fuse.Animations.MixerBase.h

include/Fuse.Animations.Easin-fbce721d.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-d718cbb3.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-5c94be4a.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-1629b8de.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-9b0d98b6.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-f2fa966f.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Change-1.h: include/Fuse.Animations.TrackAnimator.h

include/Fuse.Animations.Easin-5f101b83.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-ccffb351.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-3403b834.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Conti-233bd07.h: include/Fuse.Animations.Track-26653137.h

include/Fuse.Animations.Conti-d67e9f3.h: include/Fuse.Animations.TrackProvider.h
include/Fuse.Animations.Conti-d67e9f3.h: include/Uno.Object.h

include/Fuse.Animations.Converter-1.h: include/Uno.Object.h
include/Fuse.Animations.Converter-1.h: include/Uno.Float4.h

include/Fuse.Animations.Conve-d9da2591.h: include/Fuse.Animations.Converter-1.h
include/Fuse.Animations.Conve-d9da2591.h: include/Uno.Double.h

include/Fuse.Animations.ConverterFloat.h: include/Fuse.Animations.Converter-1.h
include/Fuse.Animations.ConverterFloat.h: include/Uno.Float.h

include/Fuse.Animations.Conve-36a5c7e2.h: include/Fuse.Animations.Converter-1.h
include/Fuse.Animations.Conve-36a5c7e2.h: include/Uno.Float2.h

include/Fuse.Animations.Conve-36a5c7e3.h: include/Fuse.Animations.Converter-1.h
include/Fuse.Animations.Conve-36a5c7e3.h: include/Uno.Float3.h

include/Fuse.Animations.Conve-36a5c7e0.h: include/Fuse.Animations.Converter-1.h
include/Fuse.Animations.Conve-36a5c7e0.h: include/Uno.Float4.h

include/Fuse.Animations.ConverterSize.h: include/Fuse.Animations.Converter-1.h
include/Fuse.Animations.ConverterSize.h: include/Uno.UX.Size.h

include/Fuse.Animations.ConverterSize2.h: include/Fuse.Animations.Converter-1.h
include/Fuse.Animations.ConverterSize2.h: include/Uno.UX.Size2.h

include/Fuse.Animations.Creat-d717a85f.h: include/Uno.Object.h

include/Fuse.Animations.Cubic-aa541862.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-61472a22.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-63fc962e.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-415c2349.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Cycle-1.h: include/Fuse.Animations.OpenAnimator.h

include/Fuse.Animations.CycleState-1.h: include/Fuse.Animations.OpenA-dfad1354.h

include/Fuse.Animations.CycleWaveform.h: include/Uno.Int.h

include/Fuse.Animations.Desti-3d0d380e.h: include/Uno.Object.h

include/Fuse.Animations.Discr-c9a8607c.h: include/Fuse.Animations.IMixerMaster.h
include/Fuse.Animations.Discr-c9a8607c.h: include/Fuse.Animations.Maste-197394bf.h
include/Fuse.Animations.Discr-c9a8607c.h: include/Fuse.Animations.Maste-4c7af709.h
include/Fuse.Animations.Discr-c9a8607c.h: include/Uno.Object.h
include/Fuse.Animations.Discr-c9a8607c.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Animations.Discr-c354302b.h: include/Fuse.Animations.IMixerMaster.h
include/Fuse.Animations.Discr-c354302b.h: include/Fuse.Animations.Maste-9f52236c.h

include/Fuse.Animations.DiscreteMixer.h: include/Fuse.Animations.IMixer.h
include/Fuse.Animations.DiscreteMixer.h: include/Fuse.Animations.MixerBase.h

include/Fuse.Animations.Discr-ed319c64.h: include/Fuse.Animations.Discr-864f74d9.h
include/Fuse.Animations.Discr-ed319c64.h: include/Fuse.Animations.TrackProvider.h
include/Fuse.Animations.Discr-ed319c64.h: include/Uno.Object.h

include/Fuse.Animations.Discr-ab696ab5.h: include/Fuse.Animations.Track-26653137.h

include/Fuse.Animations.Discr-864f74d9.h: include/Fuse.Animations.TrackProvider.h
include/Fuse.Animations.Discr-864f74d9.h: include/Uno.Object.h

include/Fuse.Animations.Easing.h: include/Uno.Object.h

include/Fuse.Animations.EasingTrack.h: include/Fuse.Animations.Conti-d67e9f3.h
include/Fuse.Animations.EasingTrack.h: include/Fuse.Animations.TrackProvider.h
include/Fuse.Animations.EasingTrack.h: include/Uno.Object.h

include/Fuse.Animations.Easin-e748cec3.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-2cfac9fd.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-69caaa88.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-8d87fbcd.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-575a1f5f.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-87c2bc3c.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.FastM-24ef5203.h: include/Fuse.Binding.h
include/Fuse.Animations.FastM-24ef5203.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Animations.FastM-24ef5203.h: include/Fuse.Transform.h
include/Fuse.Animations.FastM-24ef5203.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Animations.FastM-24ef5203.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Animations.FastM-24ef5203.h: include/Uno.Collections.IList-1.h

include/Fuse.Animations.Maste-2a82cad6.h: include/Uno.Object.h

include/Fuse.Animations.IBase-d3bd6f2e.h: include/Uno.Object.h

include/Fuse.Animations.IMixer.h: include/Uno.Object.h

include/Fuse.Animations.IMixerHandle-1.h: include/Uno.Object.h

include/Fuse.Animations.IMixerMaster.h: include/Uno.Object.h

include/Fuse.Animations.IPlay-a3f2f81f.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Animations.IPlay-a3f2f81f.h: include/Uno.Object.h

include/Fuse.Animations.IResize.h: include/Uno.Object.h
include/Fuse.Animations.IResize.h: include/Uno.Float2.h

include/Fuse.Animations.IResizeMode.h: include/Uno.Object.h

include/Fuse.Animations.IUnwr-594abe9.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Animations.IUnwr-594abe9.h: include/Uno.Object.h

include/Fuse.Animations.Easin-7c43bf9c.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.MasterBase-1.h: include/Fuse.Animations.IMixerMaster.h
include/Fuse.Animations.MasterBase-1.h: include/Uno.Object.h

include/Fuse.Animations.Maste-197394bf.h: include/Fuse.Animations.IMixerMaster.h
include/Fuse.Animations.Maste-197394bf.h: include/Fuse.Animations.Maste-4c7af709.h
include/Fuse.Animations.Maste-197394bf.h: include/Fuse.Animations.MasterBase-1.h
include/Fuse.Animations.Maste-197394bf.h: include/Uno.Object.h
include/Fuse.Animations.Maste-197394bf.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Animations.Maste-4c7af709.h: include/Uno.Object.h

include/Fuse.Animations.Maste-9f52236c.h: include/Fuse.Animations.IMixerMaster.h
include/Fuse.Animations.Maste-9f52236c.h: include/Fuse.Animations.MasterBase-1.h
include/Fuse.Animations.Maste-9f52236c.h: include/Fuse.Transform.h

include/Fuse.Animations.Mixer.h: include/Uno.Object.h

include/Fuse.Animations.MixerBase.h: include/Fuse.Animations.IMixer.h
include/Fuse.Animations.MixerBase.h: include/Uno.Object.h

include/Fuse.Animations.MixerHandle-1.h: include/Fuse.Animations.IMixerHandle-1.h
include/Fuse.Animations.MixerHandle-1.h: include/Uno.Object.h

include/Fuse.Animations.MixOp.h: include/Uno.Int.h

include/Fuse.Animations.Move.h: include/Fuse.Animations.Trans-997c8373.h
include/Fuse.Animations.Move.h: include/Fuse.Translation.h

include/Fuse.Animations.Nothing.h: include/Fuse.Animations.TrackAnimator.h

include/Fuse.Animations.Nothi-ca9c5305.h: include/Fuse.Animations.Track-26653137.h

include/Fuse.Animations.OpenAnimator.h: include/Fuse.Animations.Animator.h

include/Fuse.Animations.OpenA-dfad1354.h: include/Fuse.Animations.AnimatorState.h

include/Fuse.Animations.Player.h: include/Fuse.IUpdateListener.h
include/Fuse.Animations.Player.h: include/Uno.Object.h

include/Fuse.Animations.Playe-8fa817d1.h: include/Uno.Int.h

include/Fuse.Animations.PlayerPart.h: include/Uno.Object.h

include/Fuse.Animations.PlayMode.h: include/Uno.Int.h

include/Fuse.Animations.Easin-bcab48ca.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-2bc722aa.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-76822aaf.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-77784bb7.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-88f71b99.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-e938836c.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-3a4eddc3.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-a5b90955.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-b5669208.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.RangeAdapter-1.h: include/Fuse.Behavior.h
include/Fuse.Animations.RangeAdapter-1.h: include/Fuse.Binding.h
include/Fuse.Animations.RangeAdapter-1.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Animations.RangeAdapter-1.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Animations.RangeAdapter-1.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Animations.RangeAdapter-1.h: include/Uno.Collections.IList-1.h
include/Fuse.Animations.RangeAdapter-1.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Animations.Range-39d99c29.h: include/Uno.h

include/Fuse.Animations.Resize.h: include/Fuse.Animations.TrackAnimator.h

include/Fuse.Animations.Resiz-a57d457c.h: include/Fuse.Animations.Track-26653137.h
include/Fuse.Animations.Resiz-a57d457c.h: include/Uno.Float4.h

include/Fuse.Animations.Rotate.h: include/Fuse.Animations.Trans-997c8373.h
include/Fuse.Animations.Rotate.h: include/Fuse.Rotation.h

include/Fuse.Animations.Scale.h: include/Fuse.Animations.Trans-997c8373.h
include/Fuse.Animations.Scale.h: include/Fuse.Scaling.h

include/Fuse.Animations.SeekDirection.h: include/Uno.Int.h

include/Fuse.Animations.Trigg-75f4f270.h: include/Uno.Int.h

include/Fuse.Animations.SeekResult.h: include/Uno.Int.h

include/Fuse.Animations.Easin-4465e553.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-dd81a6a5.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-5e2591f2.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Skew.h: include/Fuse.Animations.Trans-997c8373.h
include/Fuse.Animations.Skew.h: include/Fuse.Shear.h

include/Fuse.Animations.Spin.h: include/Fuse.Animations.OpenAnimator.h

include/Fuse.Animations.SpinState.h: include/Fuse.Animations.OpenA-dfad1354.h

include/Fuse.Animations.Attra-7dc13006.h: include/Fuse.Reactive.IListener.h
include/Fuse.Animations.Attra-7dc13006.h: include/Uno.Float2.h
include/Fuse.Animations.Attra-7dc13006.h: include/Uno.Float3.h
include/Fuse.Animations.Attra-7dc13006.h: include/Uno.Float4.h
include/Fuse.Animations.Attra-7dc13006.h: include/Uno.IDisposable.h
include/Fuse.Animations.Attra-7dc13006.h: include/Uno.Object.h

include/Fuse.Animations.TrackAnimator.h: include/Fuse.Animations.Animator.h
include/Fuse.Animations.TrackAnimator.h: include/Uno.Float4.h

include/Fuse.Animations.Track-26653137.h: include/Fuse.Animations.AnimatorState.h
include/Fuse.Animations.Track-26653137.h: include/Uno.Float4.h

include/Fuse.Animations.TrackProvider.h: include/Uno.Object.h

include/Fuse.Animations.Trans-997c8373.h: include/Fuse.Animations.TrackAnimator.h
include/Fuse.Animations.Trans-997c8373.h: include/Uno.Float4.h

include/Fuse.Animations.Trans-1cbe36aa.h: include/Fuse.Animations.Track-26653137.h

include/Fuse.Animations.Trigg-96b74ffc.h: include/Uno.Object.h

include/Fuse.Animations.Trigg-21dd249.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Animations.Trigg-21dd249.h: include/Fuse.Animations.IPlay-a3f2f81f.h
include/Fuse.Animations.Trigg-21dd249.h: include/Uno.Object.h

include/Fuse.Animations.Desti-445b5add.h: include/Uno.Delegate.h

include/Fuse.Preview.ISelection.h: include/Uno.Object.h

include/Fuse.Preview.SelectionManager.h: include/Uno.h

include/Fuse.Internal.Android-2abf7b1f.h: include/Uno.Object.h

include/Fuse.Internal.Android-336f3d43.h: include/Uno.h

include/Fuse.Internal.Blender-1.h: include/Uno.Object.h

include/Fuse.Internal.BlenderMap.h: include/Uno.Object.h

include/Fuse.Internal.Curves.h: include/Uno.h

include/Fuse.Internal.DoubleBlender.h: include/Fuse.Internal.ScalarBlender-1.h
include/Fuse.Internal.DoubleBlender.h: include/Uno.Double.h

include/Fuse.Internal.DrawManager.h: include/Uno.h

include/Fuse.Internal.MiniLis-9fb880c9.h: include/Fuse.Internal.MiniList-1.h
include/Fuse.Internal.MiniLis-9fb880c9.h: include/Fuse.Internal.ObjectL-dfb3492f.h
include/Fuse.Internal.MiniLis-9fb880c9.h: include/Uno.Collections.IEnumerator.h
include/Fuse.Internal.MiniLis-9fb880c9.h: include/Uno.Collections.IEnumerator-1.h
include/Fuse.Internal.MiniLis-9fb880c9.h: include/Uno.IDisposable.h
include/Fuse.Internal.MiniLis-9fb880c9.h: include/Uno.Object.h

include/Fuse.Internal.ObjectL-dfb3492f.h: include/Uno.IDisposable.h
include/Fuse.Internal.ObjectL-dfb3492f.h: include/Uno.Object.h

include/Fuse.Internal.ObjectL-6b797d25.h: include/Fuse.Internal.ObjectL-dfb3492f.h
include/Fuse.Internal.ObjectL-6b797d25.h: include/Uno.Collections.IEnumerator.h
include/Fuse.Internal.ObjectL-6b797d25.h: include/Uno.Collections.IEnumerator-1.h
include/Fuse.Internal.ObjectL-6b797d25.h: include/Uno.IDisposable.h
include/Fuse.Internal.ObjectL-6b797d25.h: include/Uno.Object.h

include/Fuse.Internal.ObjectL-a57e6857.h: include/Uno.Int.h

include/Fuse.Internal.Android-44c8daff.h: include/Fuse.Internal.Android-4d789ec5.h
include/Fuse.Internal.Android-44c8daff.h: include/Uno.Object.h

include/Fuse.Internal.Float2Blender.h: include/Fuse.Internal.Blender-1.h
include/Fuse.Internal.Float2Blender.h: include/Uno.Float2.h

include/Fuse.Internal.Float3Blender.h: include/Fuse.Internal.Blender-1.h
include/Fuse.Internal.Float3Blender.h: include/Uno.Float3.h

include/Fuse.Internal.Float4Blender.h: include/Fuse.Internal.Blender-1.h
include/Fuse.Internal.Float4Blender.h: include/Uno.Float4.h

include/Fuse.Internal.FloatBlender.h: include/Fuse.Internal.ScalarBlender-1.h
include/Fuse.Internal.FloatBlender.h: include/Uno.Float.h

include/Fuse.Internal.Android-4d789ec5.h: include/Uno.Object.h

include/Fuse.Internal.FontFac-589fc2ef.h: include/Uno.Object.h

include/Fuse.Internal.FrustumMatrix.h: include/Uno.h

include/Fuse.Internal.IImageC-c450902.h: include/Uno.Object.h

include/Fuse.Internal.ImageContainer.h: include/Uno.Object.h

include/Fuse.Internal.MiniList-1.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Internal.MiniList-1.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Internal.MiniList-1.h: include/Uno.Collections.IList-1.h
include/Fuse.Internal.MiniList-1.h: include/Uno.Object.h

include/Fuse.Internal.MiniListMode.h: include/Uno.Int.h

include/Fuse.Internal.ObjectL-cd9a6807.h: include/Uno.Object.h

include/Fuse.Internal.ObjectList-1.h: include/Fuse.Internal.ObjectL-cd9a6807.h
include/Fuse.Internal.ObjectList-1.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Internal.ObjectList-1.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Internal.ObjectList-1.h: include/Uno.Collections.IList-1.h
include/Fuse.Internal.ObjectList-1.h: include/Uno.Object.h

include/Fuse.Internal.RectPacker.h: include/Fuse.Internal.SkylineNode.h
include/Fuse.Internal.RectPacker.h: include/Uno.Int2.h
include/Fuse.Internal.RectPacker.h: include/Uno.Object.h

include/Fuse.Internal.ScalarBlender-1.h: include/Fuse.Internal.Blender-1.h
include/Fuse.Internal.ScalarBlender-1.h: include/Uno.Object.h

include/Fuse.Internal.Size2Blender.h: include/Fuse.Internal.Blender-1.h
include/Fuse.Internal.Size2Blender.h: include/Uno.UX.Size2.h

include/Fuse.Internal.SizeBlender.h: include/Fuse.Internal.Blender-1.h
include/Fuse.Internal.SizeBlender.h: include/Uno.UX.Size.h

include/Fuse.Internal.SizingContainer.h: include/Uno.Float4.h
include/Fuse.Internal.SizingContainer.h: include/Uno.Object.h

include/Fuse.Internal.SkylineNode.h: include/Uno.Int2.h
include/Fuse.Internal.SkylineNode.h: include/Uno.Object.h

include/Fuse.Internal.Statistics.h: include/Uno.h

include/Fuse.Internal.SystemFont.h: include/Uno.h

include/Fuse.Internal.VectorUtil.h: include/Uno.h

include/Fuse.Internal.Drawing-d2380448.h: include/Uno.Float4x4.h
include/Fuse.Internal.Drawing-d2380448.h: include/Uno.Object.h
include/Fuse.Internal.Drawing-d2380448.h: include/Uno.Runtime.Implement-476e2792.h

include/Fuse.Resources.FileIm-b247fd74.h: include/Uno.Object.h

include/Fuse.Resources.HttpIm-c131ad92.h: include/Uno.Object.h

include/Fuse.Resources.Loadin-4ba1d630.h: include/Uno.Int.h

include/Fuse.Resources.DisposalManager.h: include/Uno.h

include/Fuse.Resources.DisposalRequest.h: include/Uno.Int.h

include/Fuse.Resources.FileImageSource.h: include/Fuse.Resources.ImageSource.h

include/Fuse.Resources.FileIm-450e0bee.h: include/Uno.h

include/Fuse.Resources.FileIm-3dfab082.h: include/Fuse.Resources.IMemoryResource.h
include/Fuse.Resources.FileIm-3dfab082.h: include/Fuse.Resources.Loadin-51208ece.h

include/Fuse.Resources.FileResource.h: include/Uno.UX.FileSource.h

include/Fuse.Resources.HttpImageSource.h: include/Fuse.Resources.ImageSource.h

include/Fuse.Resources.HttpIm-93bb70f8.h: include/Uno.h

include/Fuse.Resources.HttpIm-cfc77adc.h: include/Fuse.Resources.IMemoryResource.h
include/Fuse.Resources.HttpIm-cfc77adc.h: include/Fuse.Resources.Loadin-51208ece.h

include/Fuse.Resources.ImageSource.h: include/Uno.UX.PropertyObject.h
include/Fuse.Resources.ImageSource.h: include/Uno.Float2.h
include/Fuse.Resources.ImageSource.h: include/Uno.Int2.h

include/Fuse.Resources.ImageS-87193ac7.h: include/Uno.EventArgs.h

include/Fuse.Resources.ImageS-355caaa1.h: include/Uno.EventArgs.h

include/Fuse.Resources.ImageS-a985306c.h: include/Uno.Delegate.h

include/Fuse.Resources.ImageS-d58bb329.h: include/Uno.Int.h

include/Fuse.Resources.IMemoryResource.h: include/Uno.Object.h

include/Fuse.Resources.ISoftDisposable.h: include/Uno.Object.h

include/Fuse.Resources.Loadin-51208ece.h: include/Fuse.Resources.ImageSource.h
include/Fuse.Resources.Loadin-51208ece.h: include/Fuse.Resources.IMemoryResource.h
include/Fuse.Resources.Loadin-51208ece.h: include/Uno.Int2.h

include/Fuse.Resources.MemoryPolicy.h: include/Uno.Object.h

include/Fuse.Resources.MultiD-7688643f.h: include/Fuse.Resources.ImageSource.h

include/Fuse.Resources.ProxyI-8b63b1ea.h: include/Uno.Object.h

include/Fuse.Resources.Resour-fabdcc8b.h: include/Uno.h

include/Fuse.Resources.System-1e583f40.h: include/Uno.UX.FileSource.h

include/Fuse.Resources.Textur-749306c5.h: include/Fuse.Resources.ImageSource.h

include/Fuse.Scripting.AppInitialized.h: include/Uno.h

include/Fuse.Scripting.Array.h: include/Fuse.IArray.h
include/Fuse.Scripting.Array.h: include/Uno.Object.h

include/Fuse.Scripting.BoolChangedArgs.h: include/Uno.Bool.h
include/Fuse.Scripting.BoolChangedArgs.h: include/Uno.UX.ValueChangedArgs-1.h

include/Fuse.Scripting.Callback.h: include/Uno.Delegate.h

include/Fuse.Scripting.AppIni-f38e0a02.h: include/Uno.Object.h

include/Fuse.Scripting.Context.h: include/Uno.IDisposable.h
include/Fuse.Scripting.Context.h: include/Uno.Object.h

include/Fuse.Scripting.Native-fe154945.h: include/Uno.Object.h

include/Fuse.Scripting.Error.h: include/Uno.Exception.h

include/Fuse.Scripting.ExecutionThread.h: include/Uno.Int.h

include/Fuse.Scripting.External.h: include/Uno.Object.h

include/Fuse.Scripting.Factor-31227d87.h: include/Uno.Object.h

include/Fuse.Scripting.FileModule.h: include/Fuse.Scripting.ScriptModule.h
include/Fuse.Scripting.FileModule.h: include/Uno.IDisposable.h

include/Fuse.Scripting.Function.h: include/Uno.Object.h

include/Fuse.Scripting.FutureFactory-1.h: include/Uno.Delegate.h

include/Fuse.Scripting.IScriptObject.h: include/Uno.Object.h

include/Fuse.Scripting.IThreadWorker.h: include/Uno.Object.h

include/Fuse.Scripting.JSObjectUtils.h: include/Uno.h

include/Fuse.Scripting.Module.h: include/Uno.IDisposable.h
include/Fuse.Scripting.Module.h: include/Uno.Object.h

include/Fuse.Scripting.NativeCallback.h: include/Uno.Delegate.h

include/Fuse.Scripting.NativeEvent.h: include/Fuse.Scripting.Function.h
include/Fuse.Scripting.NativeEvent.h: include/Fuse.Scripting.Native-c8feecef.h

include/Fuse.Scripting.Native-fa549b97.h: include/Fuse.Scripting.NativeModule.h
include/Fuse.Scripting.Native-fa549b97.h: include/Uno.IDisposable.h

include/Fuse.Scripting.NativeFunction.h: include/Fuse.Scripting.NativeMember.h

include/Fuse.Scripting.NativeMember.h: include/Uno.Object.h

include/Fuse.Scripting.NativeModule.h: include/Fuse.Scripting.Module.h
include/Fuse.Scripting.NativeModule.h: include/Uno.IDisposable.h

include/Fuse.Scripting.NativePromise-2.h: include/Fuse.Scripting.NativeMember.h

include/Fuse.Scripting.Native-c8feecef.h: include/Fuse.Scripting.NativeMember.h

include/Fuse.Scripting.Object.h: include/Fuse.IObject.h
include/Fuse.Scripting.Object.h: include/Uno.Object.h

include/Fuse.Scripting.Native-56d41531.h: include/Uno.Object.h

include/Fuse.Scripting.Result-92713bce.h: include/Uno.Delegate.h

include/Fuse.Scripting.ResultFactory-1.h: include/Uno.Delegate.h

include/Fuse.Scripting.ScriptClass.h: include/Uno.Object.h

include/Fuse.Scripting.ScriptMember.h: include/Uno.Object.h

include/Fuse.Scripting.ScriptMethod.h: include/Fuse.Scripting.ScriptMember.h

include/Fuse.Scripting.ScriptMethod-1.h: include/Fuse.Scripting.ScriptMethod.h

include/Fuse.Scripting.Script-102b1113.h: include/Fuse.Scripting.ScriptMethod.h

include/Fuse.Scripting.ScriptModule.h: include/Fuse.Scripting.Module.h
include/Fuse.Scripting.ScriptModule.h: include/Uno.IDisposable.h

include/Fuse.Scripting.ScriptProperty.h: include/Fuse.Scripting.ScriptMember.h

include/Fuse.Scripting.Script-1fc6121d.h: include/Fuse.Scripting.ScriptProperty.h

include/Fuse.Scripting.String-a37c2db8.h: include/Uno.String.h
include/Fuse.Scripting.String-a37c2db8.h: include/Uno.UX.ValueChangedArgs-1.h

include/Fuse.Scripting.Value.h: include/Uno.h

include/Fuse.Scripting.ValueC-23d67df6.h: include/Uno.Delegate.h

include/Fuse.Scripting.V8.Array.h: include/Fuse.IArray.h
include/Fuse.Scripting.V8.Array.h: include/Fuse.Scripting.Array.h

include/Fuse.Scripting.V8.ArrayHandle.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Aut-dcd881e8.h: include/Uno.IDisposable.h
include/Fuse.Scripting.V8.Aut-dcd881e8.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Mar-7db1c341.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Context.h: include/Fuse.Scripting.Context.h
include/Fuse.Scripting.V8.Context.h: include/Uno.IDisposable.h

include/Fuse.Scripting.V8.Con-de81fe14.h: include/Uno.IDisposable.h
include/Fuse.Scripting.V8.Con-de81fe14.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Error.h: include/Uno.h

include/Fuse.Scripting.V8.Function.h: include/Fuse.Scripting.Function.h

include/Fuse.Scripting.V8.Handle.h: include/Uno.h

include/Fuse.Scripting.V8.Marshaller.h: include/Uno.h

include/Fuse.Scripting.V8.Object.h: include/Fuse.IObject.h
include/Fuse.Scripting.V8.Object.h: include/Fuse.Scripting.Object.h

include/Fuse.Scripting.V8.V8S-919be618.h: include/Uno.h

include/Fuse.Scripting.V8.V8S-275253a8.h: include/Uno.Delegate.h

include/Fuse.Scripting.V8.Sim-bff391a1.h: include/Uno.h

include/Fuse.Scripting.V8.Sim-2c5af4ca.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Sim-74518142.h: include/Uno.Delegate.h

include/Fuse.Scripting.V8.Sim-8e6db8ec.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Sim-16bddfa6.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Sim-9a8dd579.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Sim-f359fae.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Sim-2cabf98b.h: include/Uno.Int.h

include/Fuse.Scripting.V8.Sim-957688e3.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Sim-a28c05c4.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Sim-7fe2f38b.h: include/Uno.Int.h

include/Fuse.Scripting.V8.Sim-d54ebc8a.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Sim-e23d0cc2.h: include/Uno.h

include/Fuse.Scripting.V8.Simple.Value.h: include/Uno.h

include/Fuse.Controls.Arc.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Arc.h: include/Fuse.Binding.h
include/Fuse.Controls.Arc.h: include/Fuse.Controls.EllipticalShape.h
include/Fuse.Controls.Arc.h: include/Fuse.Drawing.IDrawObj-d34d045e.h
include/Fuse.Controls.Arc.h: include/Fuse.Drawing.ISurfaceDrawable.h
include/Fuse.Controls.Arc.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Arc.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.Arc.h: include/Fuse.Node.h
include/Fuse.Controls.Arc.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Arc.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Arc.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Arc.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Controls.Arc.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Arc.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Arc.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Arc.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.BottomB-f0a90651.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.BottomB-f0a90651.h: include/Fuse.Binding.h
include/Fuse.Controls.BottomB-f0a90651.h: include/Fuse.Controls.BottomF-14cf09.h
include/Fuse.Controls.BottomB-f0a90651.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.BottomB-f0a90651.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.BottomB-f0a90651.h: include/Fuse.Node.h
include/Fuse.Controls.BottomB-f0a90651.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.BottomB-f0a90651.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.BottomB-f0a90651.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.BottomB-f0a90651.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Controls.BottomB-f0a90651.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.BottomB-f0a90651.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.BottomB-f0a90651.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.BottomB-f0a90651.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.BottomF-14cf09.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.BottomF-14cf09.h: include/Fuse.Binding.h
include/Fuse.Controls.BottomF-14cf09.h: include/Fuse.Controls.Control.h
include/Fuse.Controls.BottomF-14cf09.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.BottomF-14cf09.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.BottomF-14cf09.h: include/Fuse.Node.h
include/Fuse.Controls.BottomF-14cf09.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.BottomF-14cf09.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.BottomF-14cf09.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.BottomF-14cf09.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Controls.BottomF-14cf09.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.BottomF-14cf09.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.BottomF-14cf09.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.BottomF-14cf09.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Buffere-2ce2abf.h: include/Uno.Object.h

include/Fuse.Controls.ButtonBase.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.ButtonBase.h: include/Fuse.Binding.h
include/Fuse.Controls.ButtonBase.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.ButtonBase.h: include/Fuse.Drawing.ISurfaceDrawable.h
include/Fuse.Controls.ButtonBase.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.ButtonBase.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.ButtonBase.h: include/Fuse.Node.h
include/Fuse.Controls.ButtonBase.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.ButtonBase.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.ButtonBase.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.ButtonBase.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Controls.ButtonBase.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.ButtonBase.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.ButtonBase.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.ButtonBase.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Circle.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Circle.h: include/Fuse.Binding.h
include/Fuse.Controls.Circle.h: include/Fuse.Controls.EllipticalShape.h
include/Fuse.Controls.Circle.h: include/Fuse.Drawing.IDrawObj-d34d045e.h
include/Fuse.Controls.Circle.h: include/Fuse.Drawing.ISurfaceDrawable.h
include/Fuse.Controls.Circle.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Circle.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.Circle.h: include/Fuse.Node.h
include/Fuse.Controls.Circle.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Circle.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Circle.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Circle.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Controls.Circle.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Circle.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Circle.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Circle.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.ContentControl.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.ContentControl.h: include/Fuse.Binding.h
include/Fuse.Controls.ContentControl.h: include/Fuse.Controls.Control.h
include/Fuse.Controls.ContentControl.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.ContentControl.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.ContentControl.h: include/Fuse.Node.h
include/Fuse.Controls.ContentControl.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.ContentControl.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.ContentControl.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.ContentControl.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Controls.ContentControl.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.ContentControl.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.ContentControl.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.ContentControl.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Control.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Control.h: include/Fuse.Binding.h
include/Fuse.Controls.Control.h: include/Fuse.Elements.Element.h
include/Fuse.Controls.Control.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Control.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.Control.h: include/Fuse.Node.h
include/Fuse.Controls.Control.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Control.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Control.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Control.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Controls.Control.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Control.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Control.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Control.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Curve.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Curve.h: include/Fuse.Binding.h
include/Fuse.Controls.Curve.h: include/Fuse.Controls.Shape.h
include/Fuse.Controls.Curve.h: include/Fuse.Drawing.IDrawObj-d34d045e.h
include/Fuse.Controls.Curve.h: include/Fuse.Drawing.ISurfaceDrawable.h
include/Fuse.Controls.Curve.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Curve.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.Curve.h: include/Fuse.Node.h
include/Fuse.Controls.Curve.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Curve.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Curve.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Curve.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Controls.Curve.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Curve.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Curve.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Curve.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.CurveClose.h: include/Uno.Int.h

include/Fuse.Controls.CurveExtrude.h: include/Uno.Int.h

include/Fuse.Controls.CurvePoint.h: include/Fuse.Binding.h
include/Fuse.Controls.CurvePoint.h: include/Fuse.Node.h
include/Fuse.Controls.CurvePoint.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.CurvePoint.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.CurvePoint.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.CurvePoint.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.CurvePoint.h: include/Uno.Float2.h

include/Fuse.Controls.CurveStyle.h: include/Uno.Int.h

include/Fuse.Controls.Default-2aa05aed.h: include/Fuse.Elements.ITreeRenderer.h
include/Fuse.Controls.Default-2aa05aed.h: include/Uno.Object.h

include/Fuse.Controls.ScrollV-b691622.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Controls.ScrollV-b691622.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Controls.ScrollV-b691622.h: include/Fuse.Binding.h
include/Fuse.Controls.ScrollV-b691622.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.ScrollV-b691622.h: include/Fuse.Triggers.Actions-b5190bae.h
include/Fuse.Controls.ScrollV-b691622.h: include/Fuse.Triggers.IPulseTrigger.h
include/Fuse.Controls.ScrollV-b691622.h: include/Fuse.Triggers.WhileTrue.h
include/Fuse.Controls.ScrollV-b691622.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.ScrollV-b691622.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.ScrollV-b691622.h: include/Uno.Collections.IList-1.h

include/Fuse.Controls.Navigat-11660598.h: include/Uno.Object.h

include/Fuse.Controls.DockPanel.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.DockPanel.h: include/Fuse.Binding.h
include/Fuse.Controls.DockPanel.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.DockPanel.h: include/Fuse.Drawing.ISurfaceDrawable.h
include/Fuse.Controls.DockPanel.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.DockPanel.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.DockPanel.h: include/Fuse.Node.h
include/Fuse.Controls.DockPanel.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.DockPanel.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.DockPanel.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.DockPanel.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Controls.DockPanel.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.DockPanel.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.DockPanel.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.DockPanel.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Element-32c554a5.h: include/Uno.Float.h
include/Fuse.Controls.Element-32c554a5.h: include/Uno.UX.Property-1.h

include/Fuse.Controls.Ellipse.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Ellipse.h: include/Fuse.Binding.h
include/Fuse.Controls.Ellipse.h: include/Fuse.Controls.EllipticalShape.h
include/Fuse.Controls.Ellipse.h: include/Fuse.Drawing.IDrawObj-d34d045e.h
include/Fuse.Controls.Ellipse.h: include/Fuse.Drawing.ISurfaceDrawable.h
include/Fuse.Controls.Ellipse.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Ellipse.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.Ellipse.h: include/Fuse.Node.h
include/Fuse.Controls.Ellipse.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Ellipse.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Ellipse.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Ellipse.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Controls.Ellipse.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Ellipse.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Ellipse.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Ellipse.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.EllipticalShape.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.EllipticalShape.h: include/Fuse.Binding.h
include/Fuse.Controls.EllipticalShape.h: include/Fuse.Controls.Shape.h
include/Fuse.Controls.EllipticalShape.h: include/Fuse.Drawing.IDrawObj-d34d045e.h
include/Fuse.Controls.EllipticalShape.h: include/Fuse.Drawing.ISurfaceDrawable.h
include/Fuse.Controls.EllipticalShape.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.EllipticalShape.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.EllipticalShape.h: include/Fuse.Node.h
include/Fuse.Controls.EllipticalShape.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.EllipticalShape.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.EllipticalShape.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.EllipticalShape.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Controls.EllipticalShape.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.EllipticalShape.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.EllipticalShape.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.EllipticalShape.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Extensions.h: include/Uno.h

include/Fuse.Controls.Fallbac-cc306b75.h: include/Fuse.Controls.ISourceReceiver.h
include/Fuse.Controls.Fallbac-cc306b75.h: include/Fuse.Controls.IWebView.h
include/Fuse.Controls.Fallbac-cc306b75.h: include/Fuse.Navigation.IBase-84e3f965.h
include/Fuse.Controls.Fallbac-cc306b75.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Controls.Fallbac-cc306b75.h: include/Uno.Object.h

include/Fuse.Controls.FitMode.h: include/Uno.Int.h

include/Fuse.Controls.FreezeDrawable.h: include/Uno.Float4x4.h
include/Fuse.Controls.FreezeDrawable.h: include/Uno.Object.h
include/Fuse.Controls.FreezeDrawable.h: include/Uno.Runtime.Implement-476e2792.h

include/Fuse.Controls.GraphicsView.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.Binding.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.Controls.LayoutControl.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.Elements.ITreeRenderer.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.ICommonViewport.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.IRenderViewport.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.IViewport.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.Node.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Controls.GraphicsView.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.GraphicsView.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.GraphicsView.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.GraphicsView.h: include/Uno.Float4.h
include/Fuse.Controls.GraphicsView.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Grid.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Grid.h: include/Fuse.Binding.h
include/Fuse.Controls.Grid.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.Grid.h: include/Fuse.Drawing.ISurfaceDrawable.h
include/Fuse.Controls.Grid.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Grid.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.Grid.h: include/Fuse.Node.h
include/Fuse.Controls.Grid.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Grid.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Grid.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Grid.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Controls.Grid.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Grid.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Grid.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Grid.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.CurvePo-af310e85.h: include/Uno.Int.h

include/Fuse.Controls.Image.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Image.h: include/Fuse.Binding.h
include/Fuse.Controls.Image.h: include/Fuse.Controls.LayoutControl.h
include/Fuse.Controls.Image.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Image.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.Image.h: include/Fuse.Node.h
include/Fuse.Controls.Image.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Image.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Image.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Image.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Controls.Image.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Image.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Image.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Image.h: include/Uno.Float2.h
include/Fuse.Controls.Image.h: include/Uno.Float4.h
include/Fuse.Controls.Image.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.ImageElementDraw.h: include/Uno.Float4x4.h
include/Fuse.Controls.ImageElementDraw.h: include/Uno.Object.h
include/Fuse.Controls.ImageElementDraw.h: include/Uno.Runtime.Implement-476e2792.h

include/Fuse.Controls.INativeViewRoot.h: include/Uno.Object.h

include/Fuse.Controls.ISourceReceiver.h: include/Uno.Object.h

include/Fuse.Controls.ITextRenderer.h: include/Uno.Object.h
include/Fuse.Controls.ITextRenderer.h: include/Fuse.LayoutParams.h
include/Fuse.Controls.ITextRenderer.h: include/Uno.Float2.h
include/Fuse.Controls.ITextRenderer.h: include/Uno.Rect.h

include/Fuse.Controls.IWebView.h: include/Fuse.Controls.ISourceReceiver.h
include/Fuse.Controls.IWebView.h: include/Fuse.Navigation.IBase-84e3f965.h
include/Fuse.Controls.IWebView.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Controls.IWebView.h: include/Uno.Object.h

include/Fuse.Controls.JavaScriptCall.h: include/Fuse.Controls.Buffere-2ce2abf.h
include/Fuse.Controls.JavaScriptCall.h: include/Uno.Object.h

include/Fuse.Controls.LayoutControl.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.LayoutControl.h: include/Fuse.Binding.h
include/Fuse.Controls.LayoutControl.h: include/Fuse.Controls.Control.h
include/Fuse.Controls.LayoutControl.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.LayoutControl.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.LayoutControl.h: include/Fuse.Node.h
include/Fuse.Controls.LayoutControl.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.LayoutControl.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.LayoutControl.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.LayoutControl.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Controls.LayoutControl.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.LayoutControl.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.LayoutControl.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.LayoutControl.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.LayoutC-4864ea29.h: include/Fuse.Drawing.IDrawObj-d34d045e.h
include/Fuse.Controls.LayoutC-4864ea29.h: include/Uno.Float2.h
include/Fuse.Controls.LayoutC-4864ea29.h: include/Uno.Object.h

include/Fuse.Controls.LoadHtmlCall.h: include/Fuse.Controls.Buffere-2ce2abf.h
include/Fuse.Controls.LoadHtmlCall.h: include/Uno.Object.h

include/Fuse.Controls.Navigat-70e90308.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Navigat-70e90308.h: include/Fuse.Binding.h
include/Fuse.Controls.Navigat-70e90308.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.Navigat-70e90308.h: include/Fuse.Drawing.ISurfaceDrawable.h
include/Fuse.Controls.Navigat-70e90308.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Navigat-70e90308.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.Navigat-70e90308.h: include/Fuse.Navigation.IBase-84e3f965.h
include/Fuse.Controls.Navigat-70e90308.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Controls.Navigat-70e90308.h: include/Fuse.Node.h
include/Fuse.Controls.Navigat-70e90308.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Navigat-70e90308.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Navigat-70e90308.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Navigat-70e90308.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Controls.Navigat-70e90308.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Navigat-70e90308.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Navigat-70e90308.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Navigat-70e90308.h: include/Uno.UX.IPropertyListener.h
include/Fuse.Controls.Navigat-70e90308.h: include/Fuse.Navigation.Navig-4be788bd.h

include/Fuse.Controls.Navigat-d5b6859a.h: include/Uno.Int.h

include/Fuse.Controls.Navigat-e43a213c.h: include/Uno.Int.h

include/Fuse.Controls.Navigat-340a5907.h: include/Uno.Int.h

include/Fuse.Controls.Navigat-4da4086.h: include/Uno.Delegate.h

include/Fuse.Controls.Navigator.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Navigator.h: include/Fuse.Binding.h
include/Fuse.Controls.Navigator.h: include/Fuse.Controls.Navigat-70e90308.h
include/Fuse.Controls.Navigator.h: include/Fuse.Drawing.ISurfaceDrawable.h
include/Fuse.Controls.Navigator.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Navigator.h: include/Fuse.Internal.MiniList-1.h
include/Fuse.Controls.Navigator.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.Navigator.h: include/Fuse.Navigation.IBase-84e3f965.h
include/Fuse.Controls.Navigator.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Controls.Navigator.h: include/Fuse.Navigation.IRouterOutlet.h
include/Fuse.Controls.Navigator.h: include/Fuse.Node.h
include/Fuse.Controls.Navigator.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Navigator.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Navigator.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Navigator.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Controls.Navigator.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Navigator.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Navigator.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Navigator.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Navigat-d377da72.h: include/Uno.Int.h

include/Fuse.Controls.NavigatorSwipe.h: include/Fuse.Binding.h
include/Fuse.Controls.NavigatorSwipe.h: include/Fuse.NodeGroupBase.h
include/Fuse.Controls.NavigatorSwipe.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.NavigatorSwipe.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.NavigatorSwipe.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.NavigatorSwipe.h: include/Uno.Collections.IList-1.h

include/Fuse.Controls.Navigat-fe23abf3.h: include/Uno.Int.h

include/Fuse.Controls.Navigat-dfe8cc6e.h: include/Uno.Int.h

include/Fuse.Controls.Navigat-2fbffbd2.h: include/Fuse.VisualEventArgs.h

include/Fuse.Controls.Navigat-1f9018a.h: include/Uno.Object.h

include/Fuse.Controls.Page.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Page.h: include/Fuse.Binding.h
include/Fuse.Controls.Page.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.Page.h: include/Fuse.Drawing.ISurfaceDrawable.h
include/Fuse.Controls.Page.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Page.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.Page.h: include/Fuse.Node.h
include/Fuse.Controls.Page.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Page.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Page.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Page.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Controls.Page.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Page.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Page.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Page.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.PageControl.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.PageControl.h: include/Fuse.Binding.h
include/Fuse.Controls.PageControl.h: include/Fuse.Controls.Navigat-70e90308.h
include/Fuse.Controls.PageControl.h: include/Fuse.Drawing.ISurfaceDrawable.h
include/Fuse.Controls.PageControl.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.PageControl.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.PageControl.h: include/Fuse.Navigation.IBase-84e3f965.h
include/Fuse.Controls.PageControl.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Controls.PageControl.h: include/Fuse.Navigation.IRouterOutlet.h
include/Fuse.Controls.PageControl.h: include/Fuse.Navigation.ISeek-75d60b5e.h
include/Fuse.Controls.PageControl.h: include/Fuse.Node.h
include/Fuse.Controls.PageControl.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.PageControl.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.PageControl.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.PageControl.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Controls.PageControl.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.PageControl.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.PageControl.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.PageControl.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Navigat-d9c18741.h: include/Uno.Object.h

include/Fuse.Controls.PageFreeze.h: include/Uno.Int.h

include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Binding.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Drawing.ISurfaceDrawable.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Node.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Controls.PageIndicatorDot.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.PageIndicatorDot.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.PageIndicatorDot.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.PageIndicatorDot.h: include/Uno.Float4.h
include/Fuse.Controls.PageIndicatorDot.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.PageInd-b9aff4dc.h: include/Uno.UX.Template.h

include/Fuse.Controls.PagePrepareBusy.h: include/Uno.Int.h

include/Fuse.Controls.Panel.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Panel.h: include/Fuse.Binding.h
include/Fuse.Controls.Panel.h: include/Fuse.Controls.LayoutControl.h
include/Fuse.Controls.Panel.h: include/Fuse.Drawing.ISurfaceDrawable.h
include/Fuse.Controls.Panel.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Panel.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.Panel.h: include/Fuse.Node.h
include/Fuse.Controls.Panel.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Panel.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Panel.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Panel.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Controls.Panel.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Panel.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Panel.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Panel.h: include/Uno.Float2.h
include/Fuse.Controls.Panel.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Path.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Path.h: include/Fuse.Binding.h
include/Fuse.Controls.Path.h: include/Fuse.Controls.Shape.h
include/Fuse.Controls.Path.h: include/Fuse.Drawing.IDrawObj-d34d045e.h
include/Fuse.Controls.Path.h: include/Fuse.Drawing.ISurfaceDrawable.h
include/Fuse.Controls.Path.h: include/Fuse.Drawing.LineSegment.h
include/Fuse.Controls.Path.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Path.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.Path.h: include/Fuse.Node.h
include/Fuse.Controls.Path.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Path.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Path.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Path.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Controls.Path.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Path.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Path.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Path.h: include/Uno.Float4.h
include/Fuse.Controls.Path.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Path.Positioning.h: include/Uno.Float2.h
include/Fuse.Controls.Path.Positioning.h: include/Uno.Object.h
include/Fuse.Controls.Path.Positioning.h: include/Uno.Rect.h

include/Fuse.Controls.Rectangle.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Rectangle.h: include/Fuse.Binding.h
include/Fuse.Controls.Rectangle.h: include/Fuse.Controls.Shape.h
include/Fuse.Controls.Rectangle.h: include/Fuse.Drawing.IDrawObj-d34d045e.h
include/Fuse.Controls.Rectangle.h: include/Fuse.Drawing.ISurfaceDrawable.h
include/Fuse.Controls.Rectangle.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Rectangle.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.Rectangle.h: include/Fuse.Node.h
include/Fuse.Controls.Rectangle.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Rectangle.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Rectangle.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Rectangle.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Controls.Rectangle.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Rectangle.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Rectangle.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Rectangle.h: include/Uno.Float4.h
include/Fuse.Controls.Rectangle.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.RegularPolygon.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.Binding.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.Controls.Shape.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.Drawing.IDrawObj-d34d045e.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.Drawing.ISurfaceDrawable.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.Node.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Controls.RegularPolygon.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.RegularPolygon.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.RegularPolygon.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.RegularPolygon.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.RemoveType.h: include/Uno.Int.h

include/Fuse.Controls.Shape.R-4809cb74.h: include/Uno.Object.h

include/Fuse.Controls.ReuseType.h: include/Uno.Int.h

include/Fuse.Controls.Router_-99c7a92d.h: include/Uno.Double.h
include/Fuse.Controls.Router_-99c7a92d.h: include/Uno.UX.Property-1.h

include/Fuse.Controls.ScrollDirections.h: include/Uno.Int.h

include/Fuse.Controls.ScrollP-f741d328.h: include/Uno.Float2.h
include/Fuse.Controls.ScrollP-f741d328.h: include/Uno.UX.ValueChangedArgs-1.h

include/Fuse.Controls.ScrollP-640a7167.h: include/Uno.Delegate.h

include/Fuse.Controls.ScrollView.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.ScrollView.h: include/Fuse.Binding.h
include/Fuse.Controls.ScrollView.h: include/Fuse.Controls.Native.-737f180b.h
include/Fuse.Controls.ScrollView.h: include/Fuse.Controls.ScrollViewBase.h
include/Fuse.Controls.ScrollView.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.ScrollView.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.ScrollView.h: include/Fuse.Node.h
include/Fuse.Controls.ScrollView.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.ScrollView.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.ScrollView.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.ScrollView.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Controls.ScrollView.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.ScrollView.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.ScrollView.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.ScrollView.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.ScrollViewBase.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.ScrollViewBase.h: include/Fuse.Binding.h
include/Fuse.Controls.ScrollViewBase.h: include/Fuse.Controls.ContentControl.h
include/Fuse.Controls.ScrollViewBase.h: include/Fuse.Controls.Native.-737f180b.h
include/Fuse.Controls.ScrollViewBase.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.ScrollViewBase.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.ScrollViewBase.h: include/Fuse.Node.h
include/Fuse.Controls.ScrollViewBase.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.ScrollViewBase.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.ScrollViewBase.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.ScrollViewBase.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Controls.ScrollViewBase.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.ScrollViewBase.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.ScrollViewBase.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.ScrollViewBase.h: include/Uno.Float2.h
include/Fuse.Controls.ScrollViewBase.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.ScrollV-9171ed6c.h: include/Uno.Int.h

include/Fuse.Controls.Shape.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Shape.h: include/Fuse.Binding.h
include/Fuse.Controls.Shape.h: include/Fuse.Controls.LayoutControl.h
include/Fuse.Controls.Shape.h: include/Fuse.Drawing.IDrawObj-d34d045e.h
include/Fuse.Controls.Shape.h: include/Fuse.Drawing.ISurfaceDrawable.h
include/Fuse.Controls.Shape.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Shape.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.Shape.h: include/Fuse.Node.h
include/Fuse.Controls.Shape.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Shape.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Shape.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Shape.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Controls.Shape.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Shape.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Shape.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Shape.h: include/Uno.UX.IPropertyListener.h
include/Fuse.Controls.Shape.h: include/Fuse.LayoutParams.h
include/Fuse.Controls.Shape.h: include/Uno.Float2.h
include/Fuse.Controls.Shape.h: include/Uno.Float4.h
include/Fuse.Controls.Shape.h: include/Uno.Rect.h
include/Fuse.Controls.Shape.h: include/Uno.UX.Selector.h

include/Fuse.Controls.Star.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Star.h: include/Fuse.Binding.h
include/Fuse.Controls.Star.h: include/Fuse.Controls.Shape.h
include/Fuse.Controls.Star.h: include/Fuse.Drawing.IDrawObj-d34d045e.h
include/Fuse.Controls.Star.h: include/Fuse.Drawing.ISurfaceDrawable.h
include/Fuse.Controls.Star.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Star.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.Star.h: include/Fuse.Node.h
include/Fuse.Controls.Star.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Star.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Star.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Star.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Controls.Star.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Star.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Star.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Star.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.StatusB-d3f2d898.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.StatusB-d3f2d898.h: include/Fuse.Binding.h
include/Fuse.Controls.StatusB-d3f2d898.h: include/Fuse.Controls.TopFram-291f3101.h
include/Fuse.Controls.StatusB-d3f2d898.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.StatusB-d3f2d898.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.StatusB-d3f2d898.h: include/Fuse.Node.h
include/Fuse.Controls.StatusB-d3f2d898.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.StatusB-d3f2d898.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.StatusB-d3f2d898.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.StatusB-d3f2d898.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Controls.StatusB-d3f2d898.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.StatusB-d3f2d898.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.StatusB-d3f2d898.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.StatusB-d3f2d898.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.TextCon-f0b9bb41.h: include/Uno.UX.Template.h

include/Fuse.Controls.ScrollV-8441b02b.h: include/Uno.UX.Template.h

include/Fuse.Controls.Graphic-a81f3443.h: include/Uno.UX.Template.h

include/Fuse.Controls.ScrollV-56310436.h: include/Uno.UX.Template.h

include/Fuse.Controls.Graphic-a9e50d2e.h: include/Uno.UX.Template.h

include/Fuse.Controls.TextCon-fc687c10.h: include/Uno.UX.Template.h

include/Fuse.Controls.Text.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Text.h: include/Fuse.Binding.h
include/Fuse.Controls.Text.h: include/Fuse.Controls.TextControl.h
include/Fuse.Controls.Text.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Text.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.Text.h: include/Fuse.Node.h
include/Fuse.Controls.Text.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Text.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Text.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Text.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Controls.Text.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.Text.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Text.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Text.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Text.h: include/Uno.String.h
include/Fuse.Controls.Text.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.TextAlignment.h: include/Uno.Int.h

include/Fuse.Controls.TextControl.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.TextControl.h: include/Fuse.Binding.h
include/Fuse.Controls.TextControl.h: include/Fuse.Controls.LayoutControl.h
include/Fuse.Controls.TextControl.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.TextControl.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.TextControl.h: include/Fuse.Node.h
include/Fuse.Controls.TextControl.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.TextControl.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.TextControl.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.TextControl.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Controls.TextControl.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.TextControl.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.TextControl.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.TextControl.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.TextControl.h: include/Uno.Float4.h
include/Fuse.Controls.TextControl.h: include/Uno.String.h
include/Fuse.Controls.TextControl.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.TextInp-90db19ac.h: include/Uno.Int.h

include/Fuse.Controls.TextTruncation.h: include/Uno.Int.h

include/Fuse.Controls.TextWrapping.h: include/Uno.Int.h

include/Fuse.Controls.ToggleControl.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Binding.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Controls.Native.-ba5282a0.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Drawing.ISurfaceDrawable.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Node.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Triggers.Actions-b5190bae.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.ToggleControl.h: include/Uno.Bool.h
include/Fuse.Controls.ToggleControl.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.ToggleControl.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.ToggleControl.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.ToggleControl.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.TopFram-291f3101.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.TopFram-291f3101.h: include/Fuse.Binding.h
include/Fuse.Controls.TopFram-291f3101.h: include/Fuse.Controls.Control.h
include/Fuse.Controls.TopFram-291f3101.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.TopFram-291f3101.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.TopFram-291f3101.h: include/Fuse.Node.h
include/Fuse.Controls.TopFram-291f3101.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.TopFram-291f3101.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.TopFram-291f3101.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.TopFram-291f3101.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Controls.TopFram-291f3101.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.TopFram-291f3101.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.TopFram-291f3101.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.TopFram-291f3101.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.TreeRenderer.h: include/Fuse.Elements.ITreeRenderer.h
include/Fuse.Controls.TreeRenderer.h: include/Uno.Object.h

include/Fuse.Controls.TreeRen-26cd82a8.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.TreeRen-26cd82a8.h: include/Fuse.Binding.h
include/Fuse.Controls.TreeRen-26cd82a8.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.TreeRen-26cd82a8.h: include/Fuse.Drawing.ISurfaceDrawable.h
include/Fuse.Controls.TreeRen-26cd82a8.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.TreeRen-26cd82a8.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.TreeRen-26cd82a8.h: include/Fuse.Node.h
include/Fuse.Controls.TreeRen-26cd82a8.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.TreeRen-26cd82a8.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.TreeRen-26cd82a8.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.TreeRen-26cd82a8.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Controls.TreeRen-26cd82a8.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.TreeRen-26cd82a8.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.TreeRen-26cd82a8.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.TreeRen-26cd82a8.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.URISche-2ed3a615.h: include/Uno.EventArgs.h

include/Fuse.Controls.Video.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Video.h: include/Fuse.Binding.h
include/Fuse.Controls.Video.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.Video.h: include/Fuse.Drawing.ISurfaceDrawable.h
include/Fuse.Controls.Video.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Video.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.Video.h: include/Fuse.Node.h
include/Fuse.Controls.Video.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Video.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Video.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Video.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Controls.Video.h: include/Fuse.Triggers.IMediaPlayback.h
include/Fuse.Controls.Video.h: include/Fuse.Triggers.IPlayback.h
include/Fuse.Controls.Video.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Controls.Video.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Video.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Video.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Video.h: include/Uno.Float4.h
include/Fuse.Controls.Video.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.TreeRen-789810ec.h: include/Fuse.Controls.Native.-e502cdf1.h
include/Fuse.Controls.TreeRen-789810ec.h: include/Uno.IDisposable.h

include/Fuse.Controls.WebView.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.WebView.h: include/Fuse.Binding.h
include/Fuse.Controls.WebView.h: include/Fuse.Controls.ISourceReceiver.h
include/Fuse.Controls.WebView.h: include/Fuse.Controls.IWebView.h
include/Fuse.Controls.WebView.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.WebView.h: include/Fuse.Drawing.ISurfaceDrawable.h
include/Fuse.Controls.WebView.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.WebView.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.WebView.h: include/Fuse.Navigation.IBase-84e3f965.h
include/Fuse.Controls.WebView.h: include/Fuse.Node.h
include/Fuse.Controls.WebView.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.WebView.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.WebView.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.WebView.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Controls.WebView.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Controls.WebView.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.WebView.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.WebView.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.WebView.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Native.-b2e724e6.h: include/Fuse.Controls.Native.-11768b55.h
include/Fuse.Controls.Native.-b2e724e6.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-b2e724e6.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.-b2e724e6.h: include/Uno.Object.h

include/Fuse.Controls.Native.-20f6897.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-20f6897.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.-20f6897.h: include/Uno.Object.h
include/Fuse.Controls.Native.-20f6897.h: include/Uno.Int2.h

include/Fuse.Controls.Native.-d04e9e71.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-d04e9e71.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.-d04e9e71.h: include/Uno.Object.h
include/Fuse.Controls.Native.-d04e9e71.h: include/Uno.Float2.h
include/Fuse.Controls.Native.-d04e9e71.h: include/Uno.Float4.h

include/Fuse.Controls.Native.-be81896e.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-be81896e.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.-be81896e.h: include/Uno.Object.h

include/Fuse.Controls.Native.-118b98c3.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.-118b98c3.h: include/Uno.Object.h

include/Fuse.Controls.Native.-e8015a54.h: include/Fuse.Controls.Native.-118b98c3.h
include/Fuse.Controls.Native.-e8015a54.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.-e8015a54.h: include/Uno.Threading.Promise-1.h

include/Fuse.Controls.Native.-c578532e.h: include/Uno.h

include/Fuse.Controls.Native.-5999be91.h: include/Uno.Object.h

include/Fuse.Controls.Native.-dcf1df13.h: include/Fuse.Controls.Native.-11768b55.h
include/Fuse.Controls.Native.-dcf1df13.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-dcf1df13.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.-dcf1df13.h: include/Uno.Object.h
include/Fuse.Controls.Native.-dcf1df13.h: include/Uno.Float4.h

include/Fuse.Controls.Native.-3800373f.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-3800373f.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.-3800373f.h: include/Uno.Object.h
include/Fuse.Controls.Native.-3800373f.h: include/Uno.Float2.h

include/Fuse.Controls.Native.-737f180b.h: include/Uno.Object.h
include/Fuse.Controls.Native.-737f180b.h: include/Uno.Float2.h

include/Fuse.Controls.Native.-11768b55.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-11768b55.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.-11768b55.h: include/Uno.Object.h

include/Fuse.Controls.Native.-ae84b26e.h: include/Uno.Object.h

include/Fuse.Controls.Native.ITextView.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.ITextView.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.ITextView.h: include/Uno.Object.h
include/Fuse.Controls.Native.ITextView.h: include/Uno.Float4.h

include/Fuse.Controls.Native.-b1307a12.h: include/Uno.Object.h

include/Fuse.Controls.Native.-ba5282a0.h: include/Uno.Object.h

include/Fuse.Controls.Native.IView.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.IView.h: include/Uno.Object.h

include/Fuse.Controls.Native.-6c93d881.h: include/Fuse.Binding.h
include/Fuse.Controls.Native.-6c93d881.h: include/Fuse.ICommonViewport.h
include/Fuse.Controls.Native.-6c93d881.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.Native.-6c93d881.h: include/Fuse.IViewport.h
include/Fuse.Controls.Native.-6c93d881.h: include/Fuse.Node.h
include/Fuse.Controls.Native.-6c93d881.h: include/Fuse.RootViewport.h
include/Fuse.Controls.Native.-6c93d881.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Native.-6c93d881.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Native.-6c93d881.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Native.-6c93d881.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Native.-6c93d881.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.-6c93d881.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Native.-6275f02c.h: include/Fuse.Controls.Native.-118b98c3.h
include/Fuse.Controls.Native.-6275f02c.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.-6275f02c.h: include/Uno.Threading.Promise-1.h

include/Fuse.Controls.Native.-a5b5d1b.h: include/Uno.h

include/Fuse.Controls.Native.-e502cdf1.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.-e502cdf1.h: include/Uno.Int2.h
include/Fuse.Controls.Native.-e502cdf1.h: include/Uno.Object.h
include/Fuse.Controls.Native.-e502cdf1.h: include/Fuse.LayoutParams.h
include/Fuse.Controls.Native.-e502cdf1.h: include/Uno.Float2.h
include/Fuse.Controls.Native.-e502cdf1.h: include/Uno.Float4x4.h

include/Fuse.Controls.Native.-eb2a3c99.h: include/Fuse.Controls.Native.-e502cdf1.h
include/Fuse.Controls.Native.-eb2a3c99.h: include/Fuse.Drawing.INativeS-e8aff21d.h
include/Fuse.Controls.Native.-eb2a3c99.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.-a0a2bb3d.h: include/Fuse.Controls.Native.-11768b55.h
include/Fuse.Controls.Native.-a0a2bb3d.h: include/Fuse.Controls.Native.-952ea184.h
include/Fuse.Controls.Native.-a0a2bb3d.h: include/Fuse.Controls.Native.-b2e724e6.h
include/Fuse.Controls.Native.-a0a2bb3d.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-a0a2bb3d.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.-65e8a589.h: include/Fuse.Controls.Native.-11768b55.h
include/Fuse.Controls.Native.-65e8a589.h: include/Fuse.Controls.Native.-952ea184.h
include/Fuse.Controls.Native.-65e8a589.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-65e8a589.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.-43e7fbf.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.-43e7fbf.h: include/Uno.Object.h

include/Fuse.Controls.Native.-fb992a16.h: include/Fuse.Controls.Native.-20f6897.h
include/Fuse.Controls.Native.-fb992a16.h: include/Fuse.Controls.Native.-4da376b6.h
include/Fuse.Controls.Native.-fb992a16.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-fb992a16.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.-56f4c151.h: include/Fuse.Controls.Native.-4da376b6.h
include/Fuse.Controls.Native.-56f4c151.h: include/Fuse.Controls.Native.-d04e9e71.h
include/Fuse.Controls.Native.-56f4c151.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-56f4c151.h: include/Uno.Float4.h
include/Fuse.Controls.Native.-56f4c151.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.-f43d469d.h: include/Uno.h

include/Fuse.Controls.Native.-7babb833.h: include/Uno.Object.h

include/Fuse.Controls.Native.-98938546.h: include/Fuse.Controls.Native.-4da376b6.h
include/Fuse.Controls.Native.-98938546.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-98938546.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.-88fc1c1d.h: include/Uno.Object.h

include/Fuse.Controls.Native.-f8b7cf50.h: include/Fuse.Controls.Native.-11768b55.h
include/Fuse.Controls.Native.-f8b7cf50.h: include/Fuse.Controls.Native.-952ea184.h
include/Fuse.Controls.Native.-f8b7cf50.h: include/Fuse.Controls.Native.-dcf1df13.h
include/Fuse.Controls.Native.-f8b7cf50.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-f8b7cf50.h: include/Uno.Float4.h
include/Fuse.Controls.Native.-f8b7cf50.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.-454aa827.h: include/Fuse.Controls.Native.-3800373f.h
include/Fuse.Controls.Native.-454aa827.h: include/Fuse.Controls.Native.-4da376b6.h
include/Fuse.Controls.Native.-454aa827.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-454aa827.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.-952ea184.h: include/Fuse.Controls.Native.-11768b55.h
include/Fuse.Controls.Native.-952ea184.h: include/Fuse.Controls.Native.-4da376b6.h
include/Fuse.Controls.Native.-952ea184.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-952ea184.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.-c67cabe.h: include/Fuse.Controls.Native.-98938546.h
include/Fuse.Controls.Native.-c67cabe.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-c67cabe.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.-ca2427b3.h: include/Fuse.Controls.Native.-20f6897.h
include/Fuse.Controls.Native.-ca2427b3.h: include/Fuse.Controls.Native.-fb992a16.h
include/Fuse.Controls.Native.-ca2427b3.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-ca2427b3.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.-51b6e8e5.h: include/Fuse.Controls.Native.-98938546.h
include/Fuse.Controls.Native.-51b6e8e5.h: include/Fuse.Controls.Native.-b1307a12.h
include/Fuse.Controls.Native.-51b6e8e5.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-51b6e8e5.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.-3a814c3c.h: include/Fuse.Controls.Native.-9abb3393.h
include/Fuse.Controls.Native.-3a814c3c.h: include/Fuse.Controls.Native.ITextView.h
include/Fuse.Controls.Native.-3a814c3c.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-3a814c3c.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.-dd7dd49d.h: include/Fuse.Controls.Native.-20f6897.h
include/Fuse.Controls.Native.-dd7dd49d.h: include/Fuse.Controls.Native.-fb992a16.h
include/Fuse.Controls.Native.-dd7dd49d.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-dd7dd49d.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.-9abb3393.h: include/Fuse.Controls.Native.-98938546.h
include/Fuse.Controls.Native.-9abb3393.h: include/Fuse.Controls.Native.ITextView.h
include/Fuse.Controls.Native.-9abb3393.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-9abb3393.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.-f715ad8a.h: include/Uno.Object.h

include/Fuse.Controls.Native.-6178e8bc.h: include/Uno.h

include/Fuse.Controls.Native.-4da376b6.h: include/Fuse.Controls.Native.-e502cdf1.h
include/Fuse.Controls.Native.-4da376b6.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-4da376b6.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.-6009f819.h: include/Uno.Object.h

include/Fuse.Controls.Native.-144a8301.h: include/Uno.Object.h

include/Fuse.Controls.Native.-bda9e869.h: include/Uno.Object.h

include/Fuse.Controls.Native.-c20be635.h: include/Uno.Object.h

include/Fuse.Controls.Graphic-2a754d11.h: include/Fuse.Binding.h
include/Fuse.Controls.Graphic-2a754d11.h: include/Fuse.Controls.Graphics.Visual.h
include/Fuse.Controls.Graphic-2a754d11.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.Graphic-2a754d11.h: include/Fuse.Node.h
include/Fuse.Controls.Graphic-2a754d11.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Graphic-2a754d11.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Graphic-2a754d11.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Graphic-2a754d11.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Graphic-2a754d11.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Graphics.Visual.h: include/Fuse.Binding.h
include/Fuse.Controls.Graphics.Visual.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.Graphics.Visual.h: include/Fuse.Node.h
include/Fuse.Controls.Graphics.Visual.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Graphics.Visual.h: include/Fuse.Visual.h
include/Fuse.Controls.Graphics.Visual.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Graphics.Visual.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Graphics.Visual.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Graphics.Visual.h: include/Uno.Float2.h
include/Fuse.Controls.Graphics.Visual.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Navigat-8c78e52a.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Controls.Navigat-8c78e52a.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Controls.Navigat-8c78e52a.h: include/Fuse.Binding.h
include/Fuse.Controls.Navigat-8c78e52a.h: include/Fuse.Navigation.Enter-a69250fd.h
include/Fuse.Controls.Navigat-8c78e52a.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Navigat-8c78e52a.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Navigat-8c78e52a.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Navigat-8c78e52a.h: include/Uno.Collections.IList-1.h

include/Fuse.Controls.Navigat-9f619694.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Controls.Navigat-9f619694.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Controls.Navigat-9f619694.h: include/Fuse.Binding.h
include/Fuse.Controls.Navigat-9f619694.h: include/Fuse.Navigation.Enter-a69250fd.h
include/Fuse.Controls.Navigat-9f619694.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Navigat-9f619694.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Navigat-9f619694.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Navigat-9f619694.h: include/Uno.Collections.IList-1.h

include/Fuse.Controls.Navigat-3abd94bc.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Controls.Navigat-3abd94bc.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Controls.Navigat-3abd94bc.h: include/Fuse.Binding.h
include/Fuse.Controls.Navigat-3abd94bc.h: include/Fuse.Navigation.Exiti-99f47629.h
include/Fuse.Controls.Navigat-3abd94bc.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Navigat-3abd94bc.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Navigat-3abd94bc.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Navigat-3abd94bc.h: include/Uno.Collections.IList-1.h

include/Fuse.Controls.Navigat-9705f33a.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Controls.Navigat-9705f33a.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Controls.Navigat-9705f33a.h: include/Fuse.Binding.h
include/Fuse.Controls.Navigat-9705f33a.h: include/Fuse.Navigation.Exiti-99f47629.h
include/Fuse.Controls.Navigat-9705f33a.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Navigat-9705f33a.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Navigat-9705f33a.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Navigat-9705f33a.h: include/Uno.Collections.IList-1.h

include/Fuse.Controls.Navigat-325d320d.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Controls.Navigat-325d320d.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Controls.Navigat-325d320d.h: include/Fuse.Binding.h
include/Fuse.Controls.Navigat-325d320d.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Navigat-325d320d.h: include/Fuse.Triggers.Transition.h
include/Fuse.Controls.Navigat-325d320d.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Navigat-325d320d.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Navigat-325d320d.h: include/Uno.Collections.IList-1.h

include/Fuse.Controls.Navigat-831df711.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Controls.Navigat-831df711.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Controls.Navigat-831df711.h: include/Fuse.Binding.h
include/Fuse.Controls.Navigat-831df711.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Navigat-831df711.h: include/Fuse.Triggers.Transition.h
include/Fuse.Controls.Navigat-831df711.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Navigat-831df711.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Navigat-831df711.h: include/Uno.Collections.IList-1.h

include/Fuse.Controls.Navigat-72feefa7.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Controls.Navigat-72feefa7.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Controls.Navigat-72feefa7.h: include/Fuse.Binding.h
include/Fuse.Controls.Navigat-72feefa7.h: include/Fuse.IBeginRemoveVisu-90c91ef5.h
include/Fuse.Controls.Navigat-72feefa7.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Navigat-72feefa7.h: include/Fuse.Triggers.Removin-3934475f.h
include/Fuse.Controls.Navigat-72feefa7.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Navigat-72feefa7.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Navigat-72feefa7.h: include/Uno.Collections.IList-1.h

include/Fuse.Controls.Navigat-8b5bc4f.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Controls.Navigat-8b5bc4f.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Controls.Navigat-8b5bc4f.h: include/Fuse.Binding.h
include/Fuse.Controls.Navigat-8b5bc4f.h: include/Fuse.Navigation.While-4de49602.h
include/Fuse.Controls.Navigat-8b5bc4f.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Navigat-8b5bc4f.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Navigat-8b5bc4f.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Navigat-8b5bc4f.h: include/Uno.Collections.IList-1.h

include/Fuse.Controls.VideoIm-bfe06558.h: include/Fuse.Controls.VideoIm-7b2eaac1.h
include/Fuse.Controls.VideoIm-bfe06558.h: include/Uno.IDisposable.h
include/Fuse.Controls.VideoIm-bfe06558.h: include/Uno.Object.h

include/Fuse.Controls.VideoIm-7c15c6f7.h: include/Fuse.Controls.VideoIm-aee99c23.h
include/Fuse.Controls.VideoIm-7c15c6f7.h: include/Uno.IDisposable.h
include/Fuse.Controls.VideoIm-7c15c6f7.h: include/Uno.Int2.h
include/Fuse.Controls.VideoIm-7c15c6f7.h: include/Uno.Object.h

include/Fuse.Controls.VideoIm-72c895ca.h: include/Uno.Object.h

include/Fuse.Controls.VideoIm-7b2eaac1.h: include/Uno.IDisposable.h
include/Fuse.Controls.VideoIm-7b2eaac1.h: include/Uno.Object.h
include/Fuse.Controls.VideoIm-7b2eaac1.h: include/Uno.Int2.h

include/Fuse.Controls.VideoIm-aee99c23.h: include/Uno.IDisposable.h
include/Fuse.Controls.VideoIm-aee99c23.h: include/Uno.Object.h
include/Fuse.Controls.VideoIm-aee99c23.h: include/Uno.Int2.h

include/Fuse.Controls.VideoIm-f0b495bd.h: include/Uno.IDisposable.h
include/Fuse.Controls.VideoIm-f0b495bd.h: include/Uno.Object.h

include/Fuse.Controls.VideoIm-aeb6ffae.h: include/Uno.Object.h
include/Fuse.Controls.VideoIm-aeb6ffae.h: include/Uno.Runtime.Implement-476e2792.h

include/Fuse.Controls.VideoIm-c1aafe14.h: include/Uno.h

include/Fuse.Controls.VideoIm-28d4de69.h: include/Uno.Float4x4.h
include/Fuse.Controls.VideoIm-28d4de69.h: include/Uno.Object.h
include/Fuse.Controls.VideoIm-28d4de69.h: include/Uno.Runtime.Implement-476e2792.h

include/Fuse.Controls.VideoIm-4d990014.h: include/Uno.h

include/Fuse.Controls.VideoIm-b5ceac8f.h: include/Fuse.Binding.h
include/Fuse.Controls.VideoIm-b5ceac8f.h: include/Fuse.Controls.Graphic-2a754d11.h
include/Fuse.Controls.VideoIm-b5ceac8f.h: include/Fuse.Controls.Video.h
include/Fuse.Controls.VideoIm-b5ceac8f.h: include/Fuse.Controls.VideoIm-72c895ca.h
include/Fuse.Controls.VideoIm-b5ceac8f.h: include/Fuse.ITemplateSource.h
include/Fuse.Controls.VideoIm-b5ceac8f.h: include/Fuse.Node.h
include/Fuse.Controls.VideoIm-b5ceac8f.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.VideoIm-b5ceac8f.h: include/Fuse.Triggers.IMediaPlayback.h
include/Fuse.Controls.VideoIm-b5ceac8f.h: include/Fuse.Triggers.IPlayback.h
include/Fuse.Controls.VideoIm-b5ceac8f.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Controls.VideoIm-b5ceac8f.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.VideoIm-b5ceac8f.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.VideoIm-b5ceac8f.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.VideoIm-b5ceac8f.h: include/Uno.Float2.h
include/Fuse.Controls.VideoIm-b5ceac8f.h: include/Uno.Float4.h
include/Fuse.Controls.VideoIm-b5ceac8f.h: include/Uno.Int2.h
include/Fuse.Controls.VideoIm-b5ceac8f.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.VideoIm-78c612f4.h: include/Fuse.Controls.VideoIm-7b2eaac1.h
include/Fuse.Controls.VideoIm-78c612f4.h: include/Uno.IDisposable.h
include/Fuse.Controls.VideoIm-78c612f4.h: include/Uno.Object.h

include/Fuse.Controls.VideoIm-5927e786.h: include/Fuse.Controls.VideoIm-7b2eaac1.h
include/Fuse.Controls.VideoIm-5927e786.h: include/Uno.IDisposable.h
include/Fuse.Controls.VideoIm-5927e786.h: include/Uno.Threading.Promise-1.h

include/Fuse.Controls.VideoIm-6db665eb.h: include/Uno.Object.h

include/Fuse.Controls.VideoIm-de88980f.h: include/Fuse.Controls.VideoIm-7b2eaac1.h
include/Fuse.Controls.VideoIm-de88980f.h: include/Uno.IDisposable.h
include/Fuse.Controls.VideoIm-de88980f.h: include/Uno.Threading.Promise-1.h

include/Fuse.Input.Gestures.A-f1e8a9d2.h: include/Uno.Object.h

include/Fuse.Input.Capture.h: include/Uno.Object.h

include/Fuse.Input.Pointer.Ca-6b632455.h: include/Uno.IDisposable.h
include/Fuse.Input.Pointer.Ca-6b632455.h: include/Uno.Object.h

include/Fuse.Input.CaptureType.h: include/Uno.Int.h

include/Fuse.Input.CustomPoin-ba20e234.h: include/Fuse.Input.PointerEventArgs.h

include/Fuse.Input.Pointer.De-21c971a8.h: include/Fuse.Input.IPointerEv-f0232aef.h
include/Fuse.Input.Pointer.De-21c971a8.h: include/Uno.Object.h

include/Fuse.Input.Focus.h: include/Uno.h

include/Fuse.Input.FocusDelegator.h: include/Uno.Delegate.h

include/Fuse.Input.FocusGained.h: include/Fuse.Input.FocusGainedArgs.h
include/Fuse.Input.FocusGained.h: include/Fuse.Input.FocusGainedHandler.h
include/Fuse.Input.FocusGained.h: include/Fuse.VisualEvent-2.h

include/Fuse.Input.FocusGainedArgs.h: include/Fuse.VisualEventArgs.h

include/Fuse.Input.FocusGainedHandler.h: include/Uno.Delegate.h

include/Fuse.Input.FocusLost.h: include/Fuse.Input.FocusLostArgs.h
include/Fuse.Input.FocusLost.h: include/Fuse.Input.FocusLostHandler.h
include/Fuse.Input.FocusLost.h: include/Fuse.VisualEvent-2.h

include/Fuse.Input.FocusLostArgs.h: include/Fuse.VisualEventArgs.h

include/Fuse.Input.FocusLostHandler.h: include/Uno.Delegate.h

include/Fuse.Input.FocusNavig-66c283ba.h: include/Uno.Int.h

include/Fuse.Input.FocusPrediction.h: include/Uno.h

include/Fuse.Input.FocusPredi-2161b71d.h: include/Uno.h

include/Fuse.Input.Gesture.h: include/Uno.Object.h
include/Fuse.Input.Gesture.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Input.GesturePriority.h: include/Uno.Int.h

include/Fuse.Input.GesturePri-ad5d864e.h: include/Uno.Object.h

include/Fuse.Input.GestureRequest.h: include/Uno.Int.h

include/Fuse.Input.Gestures.h: include/Uno.h

include/Fuse.Input.GestureType.h: include/Uno.Int.h

include/Fuse.Input.HitTestHelpers.h: include/Uno.h

include/Fuse.Input.IGesture.h: include/Uno.Object.h
include/Fuse.Input.IGesture.h: include/Fuse.Input.GesturePri-ad5d864e.h

include/Fuse.Input.INotifyFocus.h: include/Uno.Object.h

include/Fuse.Input.IPointerEv-f0232aef.h: include/Uno.Object.h

include/Fuse.Input.IsFocusabl-1a22ad48.h: include/Fuse.VisualEventArgs.h

include/Fuse.Input.IsFocusabl-2b64bc29.h: include/Fuse.Input.IsFocusabl-1a22ad48.h
include/Fuse.Input.IsFocusabl-2b64bc29.h: include/Fuse.Input.IsFocusabl-d09357f5.h
include/Fuse.Input.IsFocusabl-2b64bc29.h: include/Fuse.VisualEvent-2.h

include/Fuse.Input.IsFocusabl-d09357f5.h: include/Uno.Delegate.h

include/Fuse.Input.Keyboard.h: include/Uno.h

include/Fuse.Input.KeyEventArgs.h: include/Fuse.VisualEventArgs.h

include/Fuse.Input.KeyPressed.h: include/Fuse.Input.KeyPressedArgs.h
include/Fuse.Input.KeyPressed.h: include/Fuse.Input.KeyPressedHandler.h
include/Fuse.Input.KeyPressed.h: include/Fuse.VisualEvent-2.h

include/Fuse.Input.KeyPressedArgs.h: include/Fuse.Input.KeyEventArgs.h

include/Fuse.Input.KeyPressedHandler.h: include/Uno.Delegate.h

include/Fuse.Input.KeyReleased.h: include/Fuse.Input.KeyReleasedArgs.h
include/Fuse.Input.KeyReleased.h: include/Fuse.Input.KeyReleasedHandler.h
include/Fuse.Input.KeyReleased.h: include/Fuse.VisualEvent-2.h

include/Fuse.Input.KeyReleasedArgs.h: include/Fuse.Input.KeyEventArgs.h

include/Fuse.Input.KeyReleasedHandler.h: include/Uno.Delegate.h

include/Fuse.Input.Pointer.PELHolder.h: include/Uno.Object.h

include/Fuse.Input.Pointer.PELStatus.h: include/Uno.Int.h

include/Fuse.Input.Pointer.h: include/Uno.h

include/Fuse.Input.PointerEntered.h: include/Fuse.Input.PointerEnt-cfe04f3d.h
include/Fuse.Input.PointerEntered.h: include/Fuse.Input.PointerEnteredArgs.h
include/Fuse.Input.PointerEntered.h: include/Fuse.VisualEvent-2.h

include/Fuse.Input.PointerEnteredArgs.h: include/Fuse.Input.PointerEventArgs.h

include/Fuse.Input.PointerEnt-cfe04f3d.h: include/Uno.Delegate.h

include/Fuse.Input.PointerEventArgs.h: include/Fuse.VisualEventArgs.h

include/Fuse.Input.PointerEventData.h: include/Uno.Float2.h
include/Fuse.Input.PointerEventData.h: include/Uno.Object.h

include/Fuse.Input.PointerLeft.h: include/Fuse.Input.PointerLeftArgs.h
include/Fuse.Input.PointerLeft.h: include/Fuse.Input.PointerLeftHandler.h
include/Fuse.Input.PointerLeft.h: include/Fuse.VisualEvent-2.h

include/Fuse.Input.PointerLeftArgs.h: include/Fuse.Input.PointerEventArgs.h

include/Fuse.Input.PointerLeftHandler.h: include/Uno.Delegate.h

include/Fuse.Input.PointerMoved.h: include/Fuse.Input.PointerMovedArgs.h
include/Fuse.Input.PointerMoved.h: include/Fuse.Input.PointerMovedHandler.h
include/Fuse.Input.PointerMoved.h: include/Fuse.VisualEvent-2.h

include/Fuse.Input.PointerMovedArgs.h: include/Fuse.Input.PointerEventArgs.h

include/Fuse.Input.PointerMovedHandler.h: include/Uno.Delegate.h

include/Fuse.Input.PointerPressed.h: include/Fuse.Input.PointerPre-d85d5994.h
include/Fuse.Input.PointerPressed.h: include/Fuse.Input.PointerPressedArgs.h
include/Fuse.Input.PointerPressed.h: include/Fuse.VisualEvent-2.h

include/Fuse.Input.PointerPressedArgs.h: include/Fuse.Input.PointerEventArgs.h

include/Fuse.Input.PointerPre-d85d5994.h: include/Uno.Delegate.h

include/Fuse.Input.Pointer.Po-e761f634.h: include/Uno.Float2.h
include/Fuse.Input.Pointer.Po-e761f634.h: include/Uno.Object.h

include/Fuse.Input.PointerReleased.h: include/Fuse.Input.PointerRel-5863e73d.h
include/Fuse.Input.PointerReleased.h: include/Fuse.Input.PointerReleasedArgs.h
include/Fuse.Input.PointerReleased.h: include/Fuse.VisualEvent-2.h

include/Fuse.Input.PointerReleasedArgs.h: include/Fuse.Input.PointerEventArgs.h

include/Fuse.Input.PointerRel-5863e73d.h: include/Uno.Delegate.h

include/Fuse.Input.PointerWheelMoved.h: include/Fuse.Input.PointerWhe-656d8f41.h
include/Fuse.Input.PointerWheelMoved.h: include/Fuse.Input.PointerWhe-d06481ac.h
include/Fuse.Input.PointerWheelMoved.h: include/Fuse.VisualEvent-2.h

include/Fuse.Input.PointerWhe-656d8f41.h: include/Fuse.Input.PointerEventArgs.h

include/Fuse.Input.PointerWhe-d06481ac.h: include/Uno.Delegate.h

include/Fuse.Input.FocusPredi-2503a529.h: include/Uno.Object.h

include/Fuse.Input.SelectionQuery.h: include/Uno.Object.h

include/Fuse.Reactive.VarArgF-8afe3c06.h: include/Uno.Object.h

include/Fuse.Reactive.BinaryOperator.h: include/Fuse.Reactive.Expression.h
include/Fuse.Reactive.BinaryOperator.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Reactive.BindingMode.h: include/Uno.Int.h

include/Fuse.Reactive.Clamp.h: include/Fuse.Reactive.IExpression.h
include/Fuse.Reactive.Clamp.h: include/Fuse.Reactive.TernaryOperator.h

include/Fuse.Reactive.Conditional.h: include/Fuse.Reactive.IExpression.h
include/Fuse.Reactive.Conditional.h: include/Fuse.Reactive.TernaryOperator.h

include/Fuse.Reactive.Constant.h: include/Fuse.Reactive.Constan-264ec80.h
include/Fuse.Reactive.Constant.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Reactive.Constan-264ec80.h: include/Fuse.Reactive.Expression.h
include/Fuse.Reactive.Constan-264ec80.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Reactive.Instant-ca0b61c8.h: include/Uno.Object.h

include/Fuse.Reactive.Data.h: include/Fuse.Reactive.Expression.h
include/Fuse.Reactive.Data.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Reactive.DataBinding.h: include/Fuse.INameListener.h
include/Fuse.Reactive.DataBinding.h: include/Fuse.Reactive.Express-ee33104d.h
include/Fuse.Reactive.DataBinding.h: include/Fuse.Reactive.IContext.h
include/Fuse.Reactive.DataBinding.h: include/Fuse.Reactive.IListener.h
include/Fuse.Reactive.DataBinding.h: include/Fuse.Reactive.IObserver.h
include/Fuse.Reactive.DataBinding.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Reactive.DataSubscription.h: include/Fuse.Node.DataFinder.h
include/Fuse.Reactive.DataSubscription.h: include/Fuse.Node.IDataEnumerator.h
include/Fuse.Reactive.DataSubscription.h: include/Fuse.Node.IDataListener.h
include/Fuse.Reactive.DataSubscription.h: include/Uno.IDisposable.h

include/Fuse.Reactive.EventBinding.h: include/Fuse.Reactive.Express-ee33104d.h
include/Fuse.Reactive.EventBinding.h: include/Fuse.Reactive.IContext.h
include/Fuse.Reactive.EventBinding.h: include/Fuse.Reactive.IListener.h

include/Fuse.Reactive.EventRecord.h: include/Fuse.Reactive.IEventRecord.h
include/Fuse.Reactive.EventRecord.h: include/Uno.Object.h

include/Fuse.Reactive.Expression.h: include/Fuse.Reactive.IExpression.h
include/Fuse.Reactive.Expression.h: include/Uno.Object.h

include/Fuse.Reactive.Express-ee33104d.h: include/Fuse.Binding.h
include/Fuse.Reactive.Express-ee33104d.h: include/Fuse.Reactive.IContext.h
include/Fuse.Reactive.Express-ee33104d.h: include/Fuse.Reactive.IListener.h

include/Fuse.Reactive.IContext.h: include/Uno.Object.h

include/Fuse.Reactive.IEventHandler.h: include/Uno.Object.h

include/Fuse.Reactive.IEventRecord.h: include/Uno.Object.h

include/Fuse.Reactive.IExpression.h: include/Uno.Object.h

include/Fuse.Reactive.IListener.h: include/Uno.Object.h

include/Fuse.Reactive.InnerListener.h: include/Fuse.Reactive.IListener.h
include/Fuse.Reactive.InnerListener.h: include/Uno.IDisposable.h
include/Fuse.Reactive.InnerListener.h: include/Uno.Object.h

include/Fuse.Reactive.InstanceDefer.h: include/Uno.Int.h

include/Fuse.Reactive.InstanceIdentity.h: include/Uno.Int.h

include/Fuse.Reactive.InstanceReuse.h: include/Uno.Int.h

include/Fuse.Reactive.Instantiator.h: include/Fuse.Behavior.h
include/Fuse.Reactive.Instantiator.h: include/Fuse.Binding.h
include/Fuse.Reactive.Instantiator.h: include/Fuse.IDeferred.h
include/Fuse.Reactive.Instantiator.h: include/Fuse.Node.ISubtreeDataProvider.h
include/Fuse.Reactive.Instantiator.h: include/Fuse.Reactive.IObserver.h
include/Fuse.Reactive.Instantiator.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Reactive.Instantiator.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Reactive.Instantiator.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Reactive.Instantiator.h: include/Uno.Collections.IList-1.h

include/Fuse.Reactive.Instant-2359146.h: include/Fuse.Reactive.IExpression.h
include/Fuse.Reactive.Instant-2359146.h: include/Fuse.Reactive.VarArgFunction.h
include/Fuse.Reactive.Instant-2359146.h: include/Uno.UX.Selector.h

include/Fuse.Reactive.Instant-75b959b5.h: include/Fuse.Reactive.IListener.h
include/Fuse.Reactive.Instant-75b959b5.h: include/Fuse.Reactive.InnerListener.h
include/Fuse.Reactive.Instant-75b959b5.h: include/Uno.IDisposable.h
include/Fuse.Reactive.Instant-75b959b5.h: include/Uno.UX.Selector.h

include/Fuse.Reactive.IObservable.h: include/Fuse.IArray.h
include/Fuse.Reactive.IObservable.h: include/Uno.Object.h

include/Fuse.Reactive.IObserver.h: include/Uno.Object.h

include/Fuse.Reactive.ISubscription.h: include/Uno.IDisposable.h
include/Fuse.Reactive.ISubscription.h: include/Uno.Object.h

include/Fuse.Reactive.ValueFo-a26c06f.h: include/Uno.Object.h

include/Fuse.Reactive.IWriteable.h: include/Uno.IDisposable.h
include/Fuse.Reactive.IWriteable.h: include/Uno.Object.h

include/Fuse.Reactive.Lerp.h: include/Fuse.Reactive.IExpression.h
include/Fuse.Reactive.Lerp.h: include/Fuse.Reactive.TernaryOperator.h

include/Fuse.Reactive.LookUp.h: include/Fuse.Reactive.Expression.h
include/Fuse.Reactive.LookUp.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Reactive.LookUp.-f2be5323.h: include/Fuse.Reactive.IListener.h
include/Fuse.Reactive.LookUp.-f2be5323.h: include/Fuse.Reactive.IObserver.h
include/Fuse.Reactive.LookUp.-f2be5323.h: include/Fuse.Reactive.ValueFo-a26c06f.h
include/Fuse.Reactive.LookUp.-f2be5323.h: include/Uno.IDisposable.h
include/Fuse.Reactive.LookUp.-f2be5323.h: include/Uno.Object.h

include/Fuse.Reactive.Name.h: include/Fuse.Reactive.Constan-264ec80.h
include/Fuse.Reactive.Name.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Reactive.Instant-c0c79dff.h: include/Fuse.Reactive.IObserver.h
include/Fuse.Reactive.Instant-c0c79dff.h: include/Fuse.Reactive.ValueObserver.h
include/Fuse.Reactive.Instant-c0c79dff.h: include/Uno.IDisposable.h

include/Fuse.Reactive.InnerLi-d480603c.h: include/Fuse.Reactive.IObserver.h
include/Fuse.Reactive.InnerLi-d480603c.h: include/Fuse.Reactive.ValueObserver.h
include/Fuse.Reactive.InnerLi-d480603c.h: include/Uno.IDisposable.h

include/Fuse.Reactive.Property.h: include/Fuse.Reactive.Expression.h
include/Fuse.Reactive.Property.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Reactive.Quatern-4692c3b2.h: include/Fuse.Reactive.Expression.h
include/Fuse.Reactive.Quatern-4692c3b2.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Reactive.Resource.h: include/Fuse.Reactive.Expression.h
include/Fuse.Reactive.Resource.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Reactive.Resourc-a4dc08c7.h: include/Uno.IDisposable.h
include/Fuse.Reactive.Resourc-a4dc08c7.h: include/Uno.Object.h

include/Fuse.Reactive.SimpleV-1e1b52a3.h: include/Fuse.Reactive.IExpression.h
include/Fuse.Reactive.SimpleV-1e1b52a3.h: include/Fuse.Reactive.VarArgFunction.h

include/Fuse.Reactive.Snapshot.h: include/Fuse.Reactive.Expression.h
include/Fuse.Reactive.Snapshot.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Reactive.Ternary-ba5fcd50.h: include/Fuse.Reactive.IListener.h
include/Fuse.Reactive.Ternary-ba5fcd50.h: include/Fuse.Reactive.InnerListener.h
include/Fuse.Reactive.Ternary-ba5fcd50.h: include/Uno.IDisposable.h

include/Fuse.Reactive.Snapsho-9e1b433f.h: include/Fuse.Reactive.IListener.h
include/Fuse.Reactive.Snapsho-9e1b433f.h: include/Uno.IDisposable.h
include/Fuse.Reactive.Snapsho-9e1b433f.h: include/Uno.Object.h

include/Fuse.Reactive.UnaryOp-a08b90b8.h: include/Fuse.Reactive.IListener.h
include/Fuse.Reactive.UnaryOp-a08b90b8.h: include/Fuse.Reactive.InnerListener.h
include/Fuse.Reactive.UnaryOp-a08b90b8.h: include/Uno.IDisposable.h

include/Fuse.Reactive.BinaryO-44e56a7e.h: include/Fuse.Reactive.IListener.h
include/Fuse.Reactive.BinaryO-44e56a7e.h: include/Fuse.Reactive.InnerListener.h
include/Fuse.Reactive.BinaryO-44e56a7e.h: include/Uno.IDisposable.h

include/Fuse.Reactive.Quatern-13eb7fcd.h: include/Fuse.Reactive.IListener.h
include/Fuse.Reactive.Quatern-13eb7fcd.h: include/Fuse.Reactive.InnerListener.h
include/Fuse.Reactive.Quatern-13eb7fcd.h: include/Uno.IDisposable.h

include/Fuse.Reactive.Propert-3b65e5e6.h: include/Fuse.Reactive.IWriteable.h
include/Fuse.Reactive.Propert-3b65e5e6.h: include/Uno.IDisposable.h
include/Fuse.Reactive.Propert-3b65e5e6.h: include/Uno.Object.h
include/Fuse.Reactive.Propert-3b65e5e6.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Reactive.SimpleV-31a29f4e.h: include/Fuse.Reactive.IListener.h
include/Fuse.Reactive.SimpleV-31a29f4e.h: include/Fuse.Reactive.InnerListener.h
include/Fuse.Reactive.SimpleV-31a29f4e.h: include/Uno.IDisposable.h

include/Fuse.Reactive.Instant-b1231a0d.h: include/Uno.Object.h

include/Fuse.Reactive.TernaryOperator.h: include/Fuse.Reactive.Expression.h
include/Fuse.Reactive.TernaryOperator.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Reactive.This.h: include/Fuse.Reactive.Constan-264ec80.h
include/Fuse.Reactive.This.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Reactive.UnaryOperator.h: include/Fuse.Reactive.Expression.h
include/Fuse.Reactive.UnaryOperator.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Reactive.ValueForwarder.h: include/Fuse.Reactive.IObserver.h
include/Fuse.Reactive.ValueForwarder.h: include/Fuse.Reactive.ValueObserver.h
include/Fuse.Reactive.ValueForwarder.h: include/Uno.IDisposable.h

include/Fuse.Reactive.ValueObserver.h: include/Fuse.Reactive.IObserver.h
include/Fuse.Reactive.ValueObserver.h: include/Uno.IDisposable.h
include/Fuse.Reactive.ValueObserver.h: include/Uno.Object.h

include/Fuse.Reactive.VarArgFunction.h: include/Fuse.Reactive.Expression.h
include/Fuse.Reactive.VarArgFunction.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Reactive.Instant-d843266f.h: include/Fuse.Reactive.Instant-b1231a0d.h
include/Fuse.Reactive.Instant-d843266f.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.-7e6c8c53.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.-97046318.h: include/Fuse.Scripting.NativeModule.h
include/Fuse.Reactive.FuseJS.-97046318.h: include/Uno.IDisposable.h

include/Fuse.Reactive.FuseJS.Http.h: include/Fuse.Scripting.NativeModule.h
include/Fuse.Reactive.FuseJS.Http.h: include/Uno.IDisposable.h

include/Fuse.Reactive.FuseJS.-56ee06ad.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.-80396262.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.-61f763fd.h: include/Fuse.Scripting.NativeModule.h
include/Fuse.Reactive.FuseJS.-61f763fd.h: include/Uno.IDisposable.h

include/Fuse.Motion.Destinati-bd678751.h: include/Fuse.Motion.Destinati-3569762f.h

include/Fuse.Motion.Destinati-3569762f.h: include/Uno.Object.h

include/Fuse.Motion.MotionConfig.h: include/Uno.Float2.h
include/Fuse.Motion.MotionConfig.h: include/Uno.Object.h

include/Fuse.Motion.MotionDes-5490bd7d.h: include/Uno.Int.h

include/Fuse.Motion.MotionUnit.h: include/Uno.Int.h

include/Fuse.Motion.NavigationMotion.h: include/Fuse.Motion.MotionConfig.h

include/Fuse.Motion.OverflowType.h: include/Uno.Int.h

include/Fuse.Motion.ScrollViewMotion.h: include/Fuse.Motion.MotionConfig.h

include/Fuse.Motion.SpringFunction.h: include/Fuse.Reactive.Expression.h
include/Fuse.Motion.SpringFunction.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Motion.SpringFun-9f762851.h: include/Fuse.Reactive.IListener.h
include/Fuse.Motion.SpringFun-9f762851.h: include/Uno.Float4.h
include/Fuse.Motion.SpringFun-9f762851.h: include/Uno.IDisposable.h
include/Fuse.Motion.SpringFun-9f762851.h: include/Uno.Object.h

include/Fuse.Motion.Simulatio-17bdd43e.h: include/Fuse.Motion.Simulatio-8063728b.h
include/Fuse.Motion.Simulatio-17bdd43e.h: include/Fuse.Motion.Simulatio-a4ba96c1.h
include/Fuse.Motion.Simulatio-17bdd43e.h: include/Fuse.Motion.Simulatio-b08eb1c5.h
include/Fuse.Motion.Simulatio-17bdd43e.h: include/Uno.Object.h

include/Fuse.Motion.Simulatio-ca33dcbb.h: include/Fuse.Motion.Simulatio-8063728b.h
include/Fuse.Motion.Simulatio-ca33dcbb.h: include/Fuse.Motion.Simulatio-a4ba96c1.h
include/Fuse.Motion.Simulatio-ca33dcbb.h: include/Fuse.Motion.Simulatio-b08eb1c5.h
include/Fuse.Motion.Simulatio-ca33dcbb.h: include/Uno.Object.h

include/Fuse.Motion.Simulatio-871f3635.h: include/Fuse.Motion.Simulatio-2e0ddcfb.h
include/Fuse.Motion.Simulatio-871f3635.h: include/Fuse.Motion.Simulatio-8063728b.h
include/Fuse.Motion.Simulatio-871f3635.h: include/Fuse.Motion.Simulatio-a4ba96c1.h
include/Fuse.Motion.Simulatio-871f3635.h: include/Uno.Float2.h
include/Fuse.Motion.Simulatio-871f3635.h: include/Uno.Object.h

include/Fuse.Motion.Simulatio-2e0ddcfb.h: include/Fuse.Motion.Simulatio-8063728b.h
include/Fuse.Motion.Simulatio-2e0ddcfb.h: include/Fuse.Motion.Simulatio-a4ba96c1.h
include/Fuse.Motion.Simulatio-2e0ddcfb.h: include/Uno.Float2.h
include/Fuse.Motion.Simulatio-2e0ddcfb.h: include/Uno.Object.h

include/Fuse.Motion.Simulatio-b08eb1c5.h: include/Fuse.Motion.Simulatio-8063728b.h
include/Fuse.Motion.Simulatio-b08eb1c5.h: include/Fuse.Motion.Simulatio-a4ba96c1.h
include/Fuse.Motion.Simulatio-b08eb1c5.h: include/Uno.Object.h

include/Fuse.Motion.Simulatio-b08483ab.h: include/Fuse.Motion.Simulatio-8063728b.h
include/Fuse.Motion.Simulatio-b08483ab.h: include/Fuse.Motion.Simulatio-a4ba96c1.h
include/Fuse.Motion.Simulatio-b08483ab.h: include/Fuse.Motion.Simulatio-b08eb1c5.h
include/Fuse.Motion.Simulatio-b08483ab.h: include/Uno.Object.h

include/Fuse.Motion.Simulatio-1b299d00.h: include/Fuse.Motion.Simulatio-8063728b.h
include/Fuse.Motion.Simulatio-1b299d00.h: include/Fuse.Motion.Simulatio-a4ba96c1.h
include/Fuse.Motion.Simulatio-1b299d00.h: include/Fuse.Motion.Simulatio-b08eb1c5.h
include/Fuse.Motion.Simulatio-1b299d00.h: include/Uno.Object.h

include/Fuse.Motion.Simulatio-8291fa3c.h: include/Fuse.Motion.Simulatio-8063728b.h
include/Fuse.Motion.Simulatio-8291fa3c.h: include/Fuse.Motion.Simulatio-a4ba96c1.h
include/Fuse.Motion.Simulatio-8291fa3c.h: include/Uno.Object.h

include/Fuse.Motion.Simulatio-8063728b.h: include/Fuse.Motion.Simulatio-a4ba96c1.h
include/Fuse.Motion.Simulatio-8063728b.h: include/Uno.Object.h

include/Fuse.Motion.Simulatio-bc50bd.h: include/Uno.Int.h

include/Fuse.Motion.Simulatio-7cce7e04.h: include/Uno.Object.h

include/Fuse.Motion.Simulatio-edb97e3.h: include/Uno.Int.h

include/Fuse.Motion.Simulatio-a4ba96c1.h: include/Uno.Object.h

include/Fuse.Motion.Simulatio-73b2da14.h: include/Fuse.Motion.Simulatio-8063728b.h
include/Fuse.Motion.Simulatio-73b2da14.h: include/Fuse.Motion.Simulatio-a4ba96c1.h
include/Fuse.Motion.Simulatio-73b2da14.h: include/Fuse.Motion.Simulatio-b08eb1c5.h
include/Fuse.Motion.Simulatio-73b2da14.h: include/Uno.Object.h

include/Fuse.Drawing.AndroidCanvasPath.h: include/Fuse.Drawing.SurfacePath.h

include/Fuse.Drawing.AndroidG-d24624b9.h: include/Uno.Object.h
include/Fuse.Drawing.AndroidG-d24624b9.h: include/Uno.Runtime.Implement-476e2792.h

include/Fuse.Drawing.AndroidSurface.h: include/Fuse.Drawing.LineSegment.h
include/Fuse.Drawing.AndroidSurface.h: include/Fuse.Drawing.Surface.h
include/Fuse.Drawing.AndroidSurface.h: include/Uno.IDisposable.h

include/Fuse.Drawing.Brush.h: include/Uno.UX.PropertyObject.h
include/Fuse.Drawing.Brush.h: include/Uno.Float2.h

include/Fuse.Drawing.BrushConverter.h: include/Fuse.Marshal.IConverter.h
include/Fuse.Drawing.BrushConverter.h: include/Uno.Object.h

include/Fuse.Drawing.Brushes.h: include/Uno.h

include/Fuse.Drawing.Colors.h: include/Uno.h

include/Fuse.Drawing.DrawObjectWatcher.h: include/Fuse.Internal.MiniList-1.h
include/Fuse.Drawing.DrawObjectWatcher.h: include/Uno.Object.h
include/Fuse.Drawing.DrawObjectWatcher.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Drawing.ImageFil-1398d2ef.h: include/Uno.Float2.h
include/Fuse.Drawing.ImageFil-1398d2ef.h: include/Uno.Float4.h
include/Fuse.Drawing.ImageFil-1398d2ef.h: include/Uno.Graphics.SamplerState.h
include/Fuse.Drawing.ImageFil-1398d2ef.h: include/Uno.Object.h

include/Fuse.Drawing.DynamicBrush.h: include/Fuse.Drawing.Brush.h

include/Fuse.Drawing.FillRule.h: include/Uno.Int.h

include/Fuse.Drawing.GradientStop.h: include/Uno.Float4.h
include/Fuse.Drawing.GradientStop.h: include/Uno.UX.PropertyObject.h

include/Fuse.Drawing.GraphicsSurface.h: include/Fuse.Drawing.AndroidSurface.h
include/Fuse.Drawing.GraphicsSurface.h: include/Uno.Float2.h
include/Fuse.Drawing.GraphicsSurface.h: include/Uno.IDisposable.h

include/Fuse.Drawing.IDrawObj-d34d045e.h: include/Uno.Object.h

include/Fuse.Drawing.ImageFill.h: include/Fuse.Drawing.DynamicBrush.h
include/Fuse.Drawing.ImageFill.h: include/Fuse.Drawing.ImageFil-1398d2ef.h
include/Fuse.Drawing.ImageFill.h: include/Fuse.ILoading.h
include/Fuse.Drawing.ImageFill.h: include/Fuse.Internal.IImageC-c450902.h
include/Fuse.Drawing.ImageFill.h: include/Fuse.Resources.IMemoryResource.h
include/Fuse.Drawing.ImageFill.h: include/Uno.Float4.h

include/Fuse.Drawing.INativeS-e8aff21d.h: include/Uno.Object.h

include/Fuse.Drawing.ISolidColor.h: include/Uno.Object.h
include/Fuse.Drawing.ISolidColor.h: include/Uno.Float4.h

include/Fuse.Drawing.ISurfaceDrawable.h: include/Uno.Object.h
include/Fuse.Drawing.ISurfaceDrawable.h: include/Uno.Float2.h

include/Fuse.Drawing.ISurfaceProvider.h: include/Uno.Object.h

include/Fuse.Drawing.DrawObje-53c107e5.h: include/Uno.Object.h

include/Fuse.Drawing.LinearGradient.h: include/Fuse.Drawing.DynamicBrush.h
include/Fuse.Drawing.LinearGradient.h: include/Uno.Float2.h
include/Fuse.Drawing.LinearGradient.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Drawing.LinearGr-4a6ec6a4.h: include/Uno.Float2.h
include/Fuse.Drawing.LinearGr-4a6ec6a4.h: include/Uno.Object.h
include/Fuse.Drawing.LinearGr-4a6ec6a4.h: include/Uno.Runtime.Implement-476e2792.h

include/Fuse.Drawing.LinearGr-f3a25b50.h: include/Uno.Int.h

include/Fuse.Drawing.LineCap.h: include/Uno.Int.h

include/Fuse.Drawing.LineJoin.h: include/Uno.Int.h

include/Fuse.Drawing.LineMetrics.h: include/Uno.h

include/Fuse.Drawing.LineMetricsImpl.h: include/Uno.Float2.h
include/Fuse.Drawing.LineMetricsImpl.h: include/Uno.Object.h
include/Fuse.Drawing.LineMetricsImpl.h: include/Uno.Rect.h

include/Fuse.Drawing.LineSegment.h: include/Uno.Float2.h
include/Fuse.Drawing.LineSegment.h: include/Uno.Object.h

include/Fuse.Drawing.LineSegmentFlags.h: include/Uno.Int.h

include/Fuse.Drawing.LineSegments.h: include/Fuse.Drawing.LineSegment.h
include/Fuse.Drawing.LineSegments.h: include/Uno.Float2.h
include/Fuse.Drawing.LineSegments.h: include/Uno.Object.h

include/Fuse.Drawing.LineSegmentType.h: include/Uno.Int.h

include/Fuse.Drawing.NativeSurface.h: include/Fuse.Drawing.AndroidSurface.h
include/Fuse.Drawing.NativeSurface.h: include/Uno.IDisposable.h

include/Fuse.Drawing.RepeatBaker.h: include/Uno.Float2.h
include/Fuse.Drawing.RepeatBaker.h: include/Uno.Object.h
include/Fuse.Drawing.RepeatBaker.h: include/Uno.Runtime.Implement-476e2792.h

include/Fuse.Drawing.ResampleMode.h: include/Uno.Int.h

include/Fuse.Drawing.SolidColor.h: include/Fuse.Drawing.DynamicBrush.h
include/Fuse.Drawing.SolidColor.h: include/Fuse.Drawing.ISolidColor.h
include/Fuse.Drawing.SolidColor.h: include/Uno.Float4.h

include/Fuse.Drawing.StaticBrush.h: include/Fuse.Drawing.Brush.h

include/Fuse.Drawing.StaticSolidColor.h: include/Fuse.Drawing.ISolidColor.h
include/Fuse.Drawing.StaticSolidColor.h: include/Fuse.Drawing.StaticBrush.h
include/Fuse.Drawing.StaticSolidColor.h: include/Uno.Float4.h

include/Fuse.Drawing.Stroke.h: include/Uno.UX.IPropertyListener.h
include/Fuse.Drawing.Stroke.h: include/Uno.UX.PropertyObject.h

include/Fuse.Drawing.StrokeAdjustment.h: include/Uno.Int.h

include/Fuse.Drawing.StrokeAlignment.h: include/Uno.Int.h

include/Fuse.Drawing.Surface.h: include/Uno.Float2.h
include/Fuse.Drawing.Surface.h: include/Uno.Float4x4.h
include/Fuse.Drawing.Surface.h: include/Uno.IDisposable.h
include/Fuse.Drawing.Surface.h: include/Uno.Object.h
include/Fuse.Drawing.Surface.h: include/Uno.Runtime.Implement-476e2792.h

include/Fuse.Drawing.SurfaceManager.h: include/Uno.h

include/Fuse.Drawing.SurfacePath.h: include/Uno.Object.h

include/Fuse.Drawing.SurfaceUtil.h: include/Uno.h

include/Fuse.Drawing.WrapMode.h: include/Uno.Int.h

include/Fuse.Drawing.Internal-b9d8148e.h: include/Fuse.Drawing.Internal-bacec382.h

include/Fuse.Drawing.Internal-3dcc41e8.h: include/Fuse.Drawing.Internal-bacec382.h

include/Fuse.Drawing.Internal-bacec382.h: include/Uno.Object.h

include/Fuse.Drawing.Internal-bcd6298f.h: include/Fuse.Drawing.Internal-bacec382.h

include/Fuse.Drawing.Primitives.Circle.h: include/Uno.Object.h
include/Fuse.Drawing.Primitives.Circle.h: include/Uno.Runtime.Implement-476e2792.h

include/Fuse.Drawing.Primitiv-8a015a04.h: include/Fuse.Drawing.Primitiv-1b750ab3.h

include/Fuse.Drawing.Primitiv-5853c2d0.h: include/Fuse.Drawing.Primitiv-1b750ab3.h

include/Fuse.Drawing.Primitiv-caafe7bf.h: include/Uno.Object.h

include/Fuse.Drawing.Primitiv-f6feaa19.h: include/Uno.Object.h

include/Fuse.Drawing.Primitiv-330a8dc2.h: include/Fuse.Drawing.Primitiv-caafe7bf.h

include/Fuse.Drawing.Primitiv-af20238a.h: include/Uno.Object.h

include/Fuse.Drawing.Primitiv-19cb13fc.h: include/Fuse.Drawing.Primitiv-af20238a.h

include/Fuse.Drawing.Primitiv-8e6a7ca2.h: include/Uno.Graphics.VertexAt-28188a9f.h
include/Fuse.Drawing.Primitiv-8e6a7ca2.h: include/Uno.Object.h
include/Fuse.Drawing.Primitiv-8e6a7ca2.h: include/Uno.Runtime.Implement-476e2792.h

include/Fuse.Drawing.Primitiv-f4d76a57.h: include/Fuse.Drawing.Primitiv-f6feaa19.h

include/Fuse.Drawing.Primitiv-6417a2eb.h: include/Fuse.Drawing.Primitiv-caafe7bf.h

include/Fuse.Drawing.Primitives.Wedge.h: include/Uno.Object.h

include/Fuse.Drawing.Primitiv-1b750ab3.h: include/Fuse.Drawing.Primitiv-af20238a.h

include/Fuse.Triggers.BusyTask.h: include/Uno.Object.h

include/Fuse.Triggers.BusyTaskActivity.h: include/Uno.Int.h

include/Fuse.Triggers.BusyTaskMatch.h: include/Uno.Int.h

include/Fuse.Triggers.BusyTaskModule.h: include/Fuse.Scripting.NativeModule.h
include/Fuse.Triggers.BusyTaskModule.h: include/Uno.IDisposable.h

include/Fuse.Triggers.IScroll-c30a2192.h: include/Fuse.Triggers.IScrolledLength.h
include/Fuse.Triggers.IScroll-c30a2192.h: include/Uno.Object.h

include/Fuse.Triggers.Trigger-506bb336.h: include/Uno.Object.h

include/Fuse.Triggers.StateGr-10cf9727.h: include/Uno.Object.h

include/Fuse.Triggers.IBusyHandler.h: include/Uno.Object.h

include/Fuse.Triggers.IMediaPlayback.h: include/Fuse.Triggers.IPlayback.h
include/Fuse.Triggers.IMediaPlayback.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Triggers.IMediaPlayback.h: include/Uno.Object.h

include/Fuse.Triggers.IPlayback.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Triggers.IPlayback.h: include/Uno.Object.h

include/Fuse.Triggers.IProgress.h: include/Uno.Object.h

include/Fuse.Triggers.IPulseTrigger.h: include/Uno.Object.h

include/Fuse.Triggers.IScrolledLength.h: include/Uno.Object.h

include/Fuse.Triggers.IScrolledLengths.h: include/Uno.h

include/Fuse.Triggers.IValue-1.h: include/Uno.Object.h

include/Fuse.Triggers.LayoutAnimation.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Triggers.LayoutAnimation.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Triggers.LayoutAnimation.h: include/Fuse.Binding.h
include/Fuse.Triggers.LayoutAnimation.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.LayoutAnimation.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Triggers.LayoutAnimation.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.LayoutAnimation.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.LayoutAnimation.h: include/Uno.Collections.IList-1.h
include/Fuse.Triggers.LayoutAnimation.h: include/Uno.Float2.h
include/Fuse.Triggers.LayoutAnimation.h: include/Uno.Float4x4.h

include/Fuse.Triggers.LayoutA-bbccc818.h: include/Uno.Int.h

include/Fuse.Triggers.LayoutTransition.h: include/Uno.h

include/Fuse.Triggers.LayoutT-17f13160.h: include/Fuse.Triggers.LayoutT-3aa69d98.h
include/Fuse.Triggers.LayoutT-17f13160.h: include/Fuse.Triggers.LayoutT-9d622a39.h
include/Fuse.Triggers.LayoutT-17f13160.h: include/Fuse.VisualEvent-2.h

include/Fuse.Triggers.LayoutT-9d622a39.h: include/Fuse.VisualEventArgs.h

include/Fuse.Triggers.LayoutT-3aa69d98.h: include/Uno.Delegate.h

include/Fuse.Triggers.IScroll-f5dfc45d.h: include/Fuse.Triggers.IScrolledLength.h
include/Fuse.Triggers.IScroll-f5dfc45d.h: include/Uno.Object.h

include/Fuse.Triggers.IScroll-2d167265.h: include/Fuse.Triggers.IScrolledLength.h
include/Fuse.Triggers.IScroll-2d167265.h: include/Uno.Object.h

include/Fuse.Triggers.LayoutT-38529711.h: include/Fuse.ITransformMode.h
include/Fuse.Triggers.LayoutT-38529711.h: include/Fuse.ITranslationMode.h
include/Fuse.Triggers.LayoutT-38529711.h: include/Uno.Object.h

include/Fuse.Triggers.WhileKe-9ea3ef4d.h: include/Fuse.ITransformMode.h
include/Fuse.Triggers.WhileKe-9ea3ef4d.h: include/Fuse.ITranslationMode.h
include/Fuse.Triggers.WhileKe-9ea3ef4d.h: include/Uno.Object.h

include/Fuse.Triggers.Removin-3934475f.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Triggers.Removin-3934475f.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Triggers.Removin-3934475f.h: include/Fuse.Binding.h
include/Fuse.Triggers.Removin-3934475f.h: include/Fuse.IBeginRemoveVisu-90c91ef5.h
include/Fuse.Triggers.Removin-3934475f.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.Removin-3934475f.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Triggers.Removin-3934475f.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.Removin-3934475f.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.Removin-3934475f.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.LayoutT-6adfe46a.h: include/Fuse.Animations.IResizeMode.h
include/Fuse.Triggers.LayoutT-6adfe46a.h: include/Uno.Object.h

include/Fuse.Triggers.LayoutT-999d3106.h: include/Fuse.IScalingMode.h
include/Fuse.Triggers.LayoutT-999d3106.h: include/Fuse.ITransformMode.h
include/Fuse.Triggers.LayoutT-999d3106.h: include/Uno.Object.h

include/Fuse.Triggers.IScroll-7d599e87.h: include/Fuse.Triggers.IScrolledLength.h
include/Fuse.Triggers.IScroll-7d599e87.h: include/Uno.Object.h

include/Fuse.Triggers.Timeline.State.h: include/Uno.Int.h

include/Fuse.Triggers.State.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Triggers.State.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Triggers.State.h: include/Fuse.Binding.h
include/Fuse.Triggers.State.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.State.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Triggers.State.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.State.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.State.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.StateGroup.h: include/Fuse.Behavior.h
include/Fuse.Triggers.StateGroup.h: include/Fuse.Binding.h
include/Fuse.Triggers.StateGroup.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.StateGroup.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.StateGroup.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.StateGroup.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.StateTransition.h: include/Uno.Int.h

include/Fuse.Triggers.Timeline.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Triggers.Timeline.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Triggers.Timeline.h: include/Fuse.Binding.h
include/Fuse.Triggers.Timeline.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.Timeline.h: include/Fuse.Triggers.IPlayback.h
include/Fuse.Triggers.Timeline.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Triggers.Timeline.h: include/Fuse.Triggers.IPulseTrigger.h
include/Fuse.Triggers.Timeline.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Triggers.Timeline.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.Timeline.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.Timeline.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.Transition.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Triggers.Transition.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Triggers.Transition.h: include/Fuse.Binding.h
include/Fuse.Triggers.Transition.h: include/Fuse.Internal.MiniList-1.h
include/Fuse.Triggers.Transition.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.Transition.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Triggers.Transition.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.Transition.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.Transition.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.Transit-122edce0.h: include/Uno.Int.h

include/Fuse.Triggers.TransitionGroup.h: include/Uno.Object.h

include/Fuse.Triggers.TransitionMode.h: include/Uno.Int.h

include/Fuse.Triggers.Trigger.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Triggers.Trigger.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Triggers.Trigger.h: include/Fuse.Binding.h
include/Fuse.Triggers.Trigger.h: include/Fuse.NodeGroupBase.h
include/Fuse.Triggers.Trigger.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.Trigger.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.Trigger.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.Trigger.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.Trigger-fd67b2ab.h: include/Uno.Int.h

include/Fuse.Triggers.TriggerPlayState.h: include/Uno.Int.h

include/Fuse.Triggers.BusyTask.Type.h: include/Uno.Int.h

include/Fuse.Triggers.WhileBool.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Triggers.WhileBool.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Triggers.WhileBool.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileBool.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileBool.h: include/Fuse.Triggers.Actions-b5190bae.h
include/Fuse.Triggers.WhileBool.h: include/Fuse.Triggers.IPulseTrigger.h
include/Fuse.Triggers.WhileBool.h: include/Fuse.Triggers.WhileValue-1.h
include/Fuse.Triggers.WhileBool.h: include/Uno.Bool.h
include/Fuse.Triggers.WhileBool.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileBool.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileBool.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileCompleted.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Triggers.WhileCompleted.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Triggers.WhileCompleted.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileCompleted.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileCompleted.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Triggers.WhileCompleted.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileCompleted.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileCompleted.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileFalse.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Triggers.WhileFalse.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Triggers.WhileFalse.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileFalse.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileFalse.h: include/Fuse.Triggers.Actions-b5190bae.h
include/Fuse.Triggers.WhileFalse.h: include/Fuse.Triggers.IPulseTrigger.h
include/Fuse.Triggers.WhileFalse.h: include/Fuse.Triggers.WhileBool.h
include/Fuse.Triggers.WhileFalse.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileFalse.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileFalse.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileKe-99bafeca.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Triggers.WhileKe-99bafeca.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Triggers.WhileKe-99bafeca.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileKe-99bafeca.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileKe-99bafeca.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Triggers.WhileKe-99bafeca.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileKe-99bafeca.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileKe-99bafeca.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhilePaused.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Triggers.WhilePaused.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Triggers.WhilePaused.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhilePaused.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhilePaused.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Triggers.WhilePaused.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhilePaused.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhilePaused.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhilePlaying.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Triggers.WhilePlaying.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Triggers.WhilePlaying.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhilePlaying.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhilePlaying.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Triggers.WhilePlaying.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhilePlaying.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhilePlaying.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileTrigger.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Triggers.WhileTrigger.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Triggers.WhileTrigger.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileTrigger.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileTrigger.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Triggers.WhileTrigger.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileTrigger.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileTrigger.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileTrue.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Triggers.WhileTrue.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Triggers.WhileTrue.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileTrue.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileTrue.h: include/Fuse.Triggers.Actions-b5190bae.h
include/Fuse.Triggers.WhileTrue.h: include/Fuse.Triggers.IPulseTrigger.h
include/Fuse.Triggers.WhileTrue.h: include/Fuse.Triggers.WhileBool.h
include/Fuse.Triggers.WhileTrue.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileTrue.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileTrue.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileValue-1.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Triggers.WhileValue-1.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Triggers.WhileValue-1.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileValue-1.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileValue-1.h: include/Fuse.Triggers.IPulseTrigger.h
include/Fuse.Triggers.WhileValue-1.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Triggers.WhileValue-1.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileValue-1.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileValue-1.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileValueStatic.h: include/Uno.h

include/Fuse.Triggers.LayoutT-6d66b793.h: include/Fuse.ITransformMode.h
include/Fuse.Triggers.LayoutT-6d66b793.h: include/Fuse.ITranslationMode.h
include/Fuse.Triggers.LayoutT-6d66b793.h: include/Uno.Object.h

include/Fuse.Triggers.Actions-873d043e.h: include/Fuse.Triggers.Actions-fcab7e57.h

include/Fuse.Triggers.Actions-39642be7.h: include/Fuse.Triggers.Actions-fcab7e57.h

include/Fuse.Triggers.Actions.Callback.h: include/Fuse.Triggers.Actions-fcab7e57.h

include/Fuse.Triggers.Actions-18bf0d20.h: include/Fuse.Triggers.Actions-fcab7e57.h

include/Fuse.Triggers.Actions.Collapse.h: include/Fuse.Triggers.Actions-fcab7e57.h

include/Fuse.Triggers.Actions-d8fdd070.h: include/Fuse.Triggers.Actions-fcab7e57.h

include/Fuse.Triggers.Actions-967f0fff.h: include/Fuse.Triggers.Actions-5821cb24.h
include/Fuse.Triggers.Actions-967f0fff.h: include/Uno.Object.h

include/Fuse.Triggers.Actions-b8cdaf7f.h: include/Fuse.Triggers.Actions-fcab7e57.h

include/Fuse.Triggers.Actions-7ea0e0be.h: include/Fuse.Triggers.Actions-fcab7e57.h

include/Fuse.Triggers.Actions.Hide.h: include/Fuse.Triggers.Actions-fcab7e57.h

include/Fuse.Triggers.Actions-ea70af1f.h: include/Uno.Object.h

include/Fuse.Triggers.Actions.IHide.h: include/Uno.Object.h

include/Fuse.Triggers.Actions.IShow.h: include/Uno.Object.h

include/Fuse.Triggers.Actions-5821cb24.h: include/Uno.Object.h

include/Fuse.Triggers.Actions-b5190bae.h: include/Uno.Object.h

include/Fuse.Triggers.Actions-9b9fd4af.h: include/Uno.EventArgs.h

include/Fuse.Triggers.Actions-458e75fc.h: include/Uno.Delegate.h

include/Fuse.Triggers.Actions.LoadHtml.h: include/Fuse.Controls.ISourceReceiver.h
include/Fuse.Triggers.Actions.LoadHtml.h: include/Fuse.Triggers.Actions-e0dcfc3.h

include/Fuse.Triggers.Actions.LoadUrl.h: include/Fuse.Triggers.Actions-e0dcfc3.h

include/Fuse.Triggers.Actions.Pause.h: include/Fuse.Triggers.Actions-baf069a8.h

include/Fuse.Triggers.Actions.Play.h: include/Fuse.Triggers.Actions-baf069a8.h

include/Fuse.Triggers.Actions-baf069a8.h: include/Fuse.Triggers.Actions-fcab7e57.h

include/Fuse.Triggers.Actions.PlayTo.h: include/Fuse.Triggers.Actions-baf069a8.h

include/Fuse.Triggers.Actions.Pulse.h: include/Fuse.Triggers.Actions-fcab7e57.h

include/Fuse.Triggers.Actions-32966389.h: include/Fuse.Triggers.Actions-fcab7e57.h

include/Fuse.Triggers.Actions-1510788d.h: include/Fuse.Triggers.Actions-fcab7e57.h

include/Fuse.Triggers.Actions-38f4649e.h: include/Fuse.Triggers.Actions-fcab7e57.h
include/Fuse.Triggers.Actions-38f4649e.h: include/Uno.UX.Selector.h

include/Fuse.Triggers.Actions-a5e0b480.h: include/Fuse.Triggers.Actions-fcab7e57.h

include/Fuse.Triggers.Actions-e720de5b.h: include/Fuse.Triggers.Actions-fcab7e57.h

include/Fuse.Triggers.Actions.Reload.h: include/Fuse.Triggers.Actions-e0dcfc3.h

include/Fuse.Triggers.Actions-79bb5ad.h: include/Fuse.Triggers.Actions-fcab7e57.h

include/Fuse.Triggers.Actions.Set-1.h: include/Fuse.Triggers.Actions-fcab7e57.h

include/Fuse.Triggers.Actions.Show.h: include/Fuse.Triggers.Actions-fcab7e57.h

include/Fuse.Triggers.Actions.Stop.h: include/Fuse.Triggers.Actions-baf069a8.h

include/Fuse.Triggers.Actions-14263c83.h: include/Fuse.Triggers.Actions-e0dcfc3.h

include/Fuse.Triggers.Actions-f89d8ce6.h: include/Fuse.Triggers.Actions-fcab7e57.h

include/Fuse.Triggers.Actions-3a870264.h: include/Uno.Int.h

include/Fuse.Triggers.Actions.Toggle.h: include/Fuse.Triggers.Actions-fcab7e57.h

include/Fuse.Triggers.Actions-e65da75e.h: include/Fuse.Triggers.Actions-fcab7e57.h

include/Fuse.Triggers.Actions-ff0a4af5.h: include/Fuse.Triggers.Actions-fcab7e57.h

include/Fuse.Triggers.Actions-a1d52f6d.h: include/Uno.Int.h

include/Fuse.Triggers.Actions-fcab7e57.h: include/Uno.UX.PropertyObject.h

include/Fuse.Triggers.Actions-b3c1f4a1.h: include/Uno.Int.h

include/Fuse.Triggers.Actions-e0327300.h: include/Uno.UX.PropertyObject.h

include/Fuse.Triggers.Actions-e0dcfc3.h: include/Fuse.Triggers.Actions-fcab7e57.h

include/Fuse.Elements.Alignment.h: include/Uno.Int.h

include/Fuse.Elements.AlignmentHelpers.h: include/Uno.h

include/Fuse.Elements.Transfo-734866e8.h: include/Fuse.Elements.ITransformOrigin.h
include/Fuse.Elements.Transfo-734866e8.h: include/Uno.Object.h

include/Fuse.Elements.AspectConstraint.h: include/Uno.Int.h

include/Fuse.Elements.Transfo-26c51bd7.h: include/Fuse.Elements.ITransformOrigin.h
include/Fuse.Elements.Transfo-26c51bd7.h: include/Uno.Float2.h
include/Fuse.Elements.Transfo-26c51bd7.h: include/Uno.Object.h

include/Fuse.Elements.BoxPlacement.h: include/Uno.Float2.h
include/Fuse.Elements.BoxPlacement.h: include/Uno.Object.h

include/Fuse.Elements.BoxSizing.h: include/Uno.Object.h
include/Fuse.Elements.BoxSizing.h: include/Fuse.Elements.BoxPlacement.h
include/Fuse.Elements.BoxSizing.h: include/Fuse.LayoutParams.h
include/Fuse.Elements.BoxSizing.h: include/Uno.Float2.h
include/Fuse.Elements.BoxSizing.h: include/Uno.UX.Size.h

include/Fuse.Elements.Element-bd497d56.h: include/Uno.Int.h

include/Fuse.Elements.Cache.h: include/Fuse.Elements.CacheTile.h
include/Fuse.Elements.Cache.h: include/Uno.Object.h
include/Fuse.Elements.Cache.h: include/Uno.Recti.h

include/Fuse.Elements.CacheHelper.h: include/Uno.Float2.h
include/Fuse.Elements.CacheHelper.h: include/Uno.Object.h
include/Fuse.Elements.CacheHelper.h: include/Uno.Runtime.Implement-476e2792.h

include/Fuse.Elements.CacheTile.h: include/Uno.Float4x4.h
include/Fuse.Elements.CacheTile.h: include/Uno.Object.h
include/Fuse.Elements.CacheTile.h: include/Uno.Recti.h

include/Fuse.Elements.CachingMode.h: include/Uno.Int.h

include/Fuse.Elements.Transfo-8a441c48.h: include/Fuse.Elements.ITransformOrigin.h
include/Fuse.Elements.Transfo-8a441c48.h: include/Uno.Object.h

include/Fuse.Elements.BoxSizi-fa66d301.h: include/Uno.Int.h

include/Fuse.Elements.DisplayHelpers.h: include/Uno.h

include/Fuse.Elements.Element.h: include/Fuse.Animations.IResize.h
include/Fuse.Elements.Element.h: include/Fuse.Binding.h
include/Fuse.Elements.Element.h: include/Fuse.Elements.Element-e8906a44.h
include/Fuse.Elements.Element.h: include/Fuse.IActualPlacement.h
include/Fuse.Elements.Element.h: include/Fuse.ITemplateSource.h
include/Fuse.Elements.Element.h: include/Fuse.Node.h
include/Fuse.Elements.Element.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Elements.Element.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Elements.Element.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Elements.Element.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Elements.Element.h: include/Fuse.Visual.h
include/Fuse.Elements.Element.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Elements.Element.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Elements.Element.h: include/Uno.Collections.IList-1.h
include/Fuse.Elements.Element.h: include/Uno.Float2.h
include/Fuse.Elements.Element.h: include/Uno.UX.IPropertyListener.h
include/Fuse.Elements.Element.h: include/Uno.UX.Size.h
include/Fuse.Elements.Element.h: include/Fuse.LayoutParams.h
include/Fuse.Elements.Element.h: include/Uno.Float3.h
include/Fuse.Elements.Element.h: include/Uno.Float4.h
include/Fuse.Elements.Element.h: include/Uno.Rect.h
include/Fuse.Elements.Element.h: include/Uno.Recti.h
include/Fuse.Elements.Element.h: include/Uno.UX.Size2.h

include/Fuse.Elements.ElementAtlas.h: include/Uno.Object.h

include/Fuse.Elements.Element-bc8d2ebe.h: include/Uno.Object.h

include/Fuse.Elements.Element-fe817708.h: include/Uno.h

include/Fuse.Elements.Element-566ff6b4.h: include/Uno.Object.h

include/Fuse.Elements.Element-59dc4556.h: include/Fuse.Resources.ISoftDisposable.h
include/Fuse.Elements.Element-59dc4556.h: include/Uno.Object.h

include/Fuse.Elements.ElementBatch.h: include/Fuse.Elements.IElemen-894a094d.h
include/Fuse.Elements.ElementBatch.h: include/Uno.Graphics.VertexAt-28188a9f.h
include/Fuse.Elements.ElementBatch.h: include/Uno.Object.h
include/Fuse.Elements.ElementBatch.h: include/Uno.Runtime.Implement-476e2792.h

include/Fuse.Elements.Element-484ece7c.h: include/Uno.Object.h
include/Fuse.Elements.Element-484ece7c.h: include/Uno.Recti.h

include/Fuse.Elements.ElementBatcher.h: include/Fuse.Resources.ISoftDisposable.h
include/Fuse.Elements.ElementBatcher.h: include/Uno.IDisposable.h
include/Fuse.Elements.ElementBatcher.h: include/Uno.Object.h

include/Fuse.Elements.FillAsp-a553d320.h: include/Fuse.Elements.BoxSizing.h

include/Fuse.Elements.Element-e8906a44.h: include/Fuse.LayoutParams.h
include/Fuse.Elements.Element-e8906a44.h: include/Uno.Float2.h
include/Fuse.Elements.Element-e8906a44.h: include/Uno.Object.h

include/Fuse.Elements.HitTestMode.h: include/Uno.Int.h

include/Fuse.Elements.IElemen-894a094d.h: include/Uno.Object.h
include/Fuse.Elements.IElemen-894a094d.h: include/Uno.Float4x4.h
include/Fuse.Elements.IElemen-894a094d.h: include/Uno.Rect.h

include/Fuse.Elements.Interac-8b35c528.h: include/Fuse.Binding.h
include/Fuse.Elements.Interac-8b35c528.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Elements.Interac-8b35c528.h: include/Fuse.Transform.h
include/Fuse.Elements.Interac-8b35c528.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Elements.Interac-8b35c528.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Elements.Interac-8b35c528.h: include/Uno.Collections.IList-1.h
include/Fuse.Elements.Interac-8b35c528.h: include/Uno.Float2.h

include/Fuse.Elements.ITransformOrigin.h: include/Uno.Object.h
include/Fuse.Elements.ITransformOrigin.h: include/Uno.Float3.h

include/Fuse.Elements.ITreeRenderer.h: include/Uno.Object.h
include/Fuse.Elements.ITreeRenderer.h: include/Fuse.LayoutParams.h

include/Fuse.Elements.LayoutM-516f33ff.h: include/Fuse.Elements.BoxSizing.h

include/Fuse.Elements.LayoutM-76ecc3eb.h: include/Uno.Object.h

include/Fuse.Elements.LayoutMasterMode.h: include/Uno.Int.h

include/Fuse.Elements.LimitBoxSizing.h: include/Fuse.Elements.BoxSizing.h

include/Fuse.Elements.NoImpli-72cd78f3.h: include/Fuse.Elements.Standar-ab3ec62c.h

include/Fuse.Elements.Transla-e4a67fe3.h: include/Fuse.ITransformMode.h
include/Fuse.Elements.Transla-e4a67fe3.h: include/Fuse.ITranslationMode.h
include/Fuse.Elements.Transla-e4a67fe3.h: include/Uno.Object.h
include/Fuse.Elements.Transla-e4a67fe3.h: include/Uno.Float3.h

include/Fuse.Elements.Optiona-b611048b.h: include/Uno.Int.h

include/Fuse.Elements.Transla-62df642a.h: include/Fuse.Elements.Transla-e4a67fe3.h
include/Fuse.Elements.Transla-62df642a.h: include/Fuse.ITransformMode.h
include/Fuse.Elements.Transla-62df642a.h: include/Fuse.ITranslationMode.h

include/Fuse.Elements.PreplacementArgs.h: include/Uno.EventArgs.h

include/Fuse.Elements.Preplac-74864b4.h: include/Uno.Delegate.h

include/Fuse.Elements.Transla-c8f7e37e.h: include/Fuse.Animations.IResizeMode.h
include/Fuse.Elements.Transla-c8f7e37e.h: include/Uno.Object.h

include/Fuse.Elements.SimpleAlignment.h: include/Uno.Int.h

include/Fuse.Elements.SingleV-c7c3ef9e.h: include/Fuse.Elements.IElemen-894a094d.h
include/Fuse.Elements.SingleV-c7c3ef9e.h: include/Uno.Object.h

include/Fuse.Elements.Transla-61b329fc.h: include/Fuse.IScalingMode.h
include/Fuse.Elements.Transla-61b329fc.h: include/Fuse.ITransformMode.h
include/Fuse.Elements.Transla-61b329fc.h: include/Uno.Object.h

include/Fuse.Elements.Standar-ab3ec62c.h: include/Fuse.Elements.BoxSizing.h

include/Fuse.Elements.StretchDirection.h: include/Uno.Int.h

include/Fuse.Elements.StretchMode.h: include/Uno.Int.h

include/Fuse.Elements.StretchSizing.h: include/Uno.Int.h

include/Fuse.Elements.Transla-8cfe1f5d.h: include/Uno.Object.h

include/Fuse.Elements.Transfo-2f50f509.h: include/Fuse.Elements.ITransformOrigin.h
include/Fuse.Elements.Transfo-2f50f509.h: include/Uno.Object.h

include/Fuse.Elements.Transla-71e7c74f.h: include/Fuse.Elements.Transla-e4a67fe3.h
include/Fuse.Elements.Transla-71e7c74f.h: include/Fuse.ITransformMode.h
include/Fuse.Elements.Transla-71e7c74f.h: include/Fuse.ITranslationMode.h

include/Fuse.Elements.TransformOrigins.h: include/Uno.h

include/Fuse.Elements.TranslationModes.h: include/Uno.h

include/Fuse.Elements.Visibility.h: include/Uno.Int.h

include/Fuse.Elements.Interna-78588865.h: include/Uno.Object.h
include/Fuse.Elements.Interna-78588865.h: include/Uno.Runtime.Implement-476e2792.h

include/Fuse.Effects.BasicEffect.h: include/Fuse.Binding.h
include/Fuse.Effects.BasicEffect.h: include/Fuse.Effects.Effect.h
include/Fuse.Effects.BasicEffect.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Effects.BasicEffect.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Effects.BasicEffect.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Effects.BasicEffect.h: include/Uno.Collections.IList-1.h
include/Fuse.Effects.BasicEffect.h: include/Uno.Rect.h
include/Fuse.Effects.BasicEffect.h: include/Uno.Recti.h

include/Fuse.Effects.DropShad-41b5d682.h: include/Uno.Float4x4.h
include/Fuse.Effects.DropShad-41b5d682.h: include/Uno.Object.h
include/Fuse.Effects.DropShad-41b5d682.h: include/Uno.Runtime.Implement-476e2792.h

include/Fuse.Effects.Blur.h: include/Fuse.Binding.h
include/Fuse.Effects.Blur.h: include/Fuse.Effects.BasicEffect.h
include/Fuse.Effects.Blur.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Effects.Blur.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Effects.Blur.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Effects.Blur.h: include/Uno.Collections.IList-1.h
include/Fuse.Effects.Blur.h: include/Uno.Float4x4.h
include/Fuse.Effects.Blur.h: include/Uno.Runtime.Implement-476e2792.h

include/Fuse.Effects.Desaturate.h: include/Fuse.Binding.h
include/Fuse.Effects.Desaturate.h: include/Fuse.Effects.BasicEffect.h
include/Fuse.Effects.Desaturate.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Effects.Desaturate.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Effects.Desaturate.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Effects.Desaturate.h: include/Uno.Collections.IList-1.h
include/Fuse.Effects.Desaturate.h: include/Uno.Float4x4.h
include/Fuse.Effects.Desaturate.h: include/Uno.Runtime.Implement-476e2792.h

include/Fuse.Effects.DropShadow.h: include/Fuse.Binding.h
include/Fuse.Effects.DropShadow.h: include/Fuse.Effects.BasicEffect.h
include/Fuse.Effects.DropShadow.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Effects.DropShadow.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Effects.DropShadow.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Effects.DropShadow.h: include/Uno.Collections.IList-1.h
include/Fuse.Effects.DropShadow.h: include/Uno.Float4.h

include/Fuse.Effects.Duotone.h: include/Fuse.Binding.h
include/Fuse.Effects.Duotone.h: include/Fuse.Effects.BasicEffect.h
include/Fuse.Effects.Duotone.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Effects.Duotone.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Effects.Duotone.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Effects.Duotone.h: include/Uno.Collections.IList-1.h
include/Fuse.Effects.Duotone.h: include/Uno.Float3.h
include/Fuse.Effects.Duotone.h: include/Uno.Float4x4.h
include/Fuse.Effects.Duotone.h: include/Uno.Runtime.Implement-476e2792.h

include/Fuse.Effects.Effect.h: include/Fuse.Binding.h
include/Fuse.Effects.Effect.h: include/Fuse.Node.h
include/Fuse.Effects.Effect.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Effects.Effect.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Effects.Effect.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Effects.Effect.h: include/Uno.Collections.IList-1.h

include/Fuse.Effects.EffectHelpers.h: include/Uno.Object.h
include/Fuse.Effects.EffectHelpers.h: include/Uno.Runtime.Implement-476e2792.h

include/Fuse.Effects.EffectType.h: include/Uno.Int.h

include/Fuse.Effects.Halftone.h: include/Fuse.Binding.h
include/Fuse.Effects.Halftone.h: include/Fuse.Effects.BasicEffect.h
include/Fuse.Effects.Halftone.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Effects.Halftone.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Effects.Halftone.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Effects.Halftone.h: include/Uno.Collections.IList-1.h
include/Fuse.Effects.Halftone.h: include/Uno.Float4x4.h
include/Fuse.Effects.Halftone.h: include/Uno.Runtime.Implement-476e2792.h

include/Fuse.Effects.Mask.h: include/Fuse.Binding.h
include/Fuse.Effects.Mask.h: include/Fuse.Effects.BasicEffect.h
include/Fuse.Effects.Mask.h: include/Fuse.Internal.IImageC-c450902.h
include/Fuse.Effects.Mask.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Effects.Mask.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Effects.Mask.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Effects.Mask.h: include/Uno.Collections.IList-1.h
include/Fuse.Effects.Mask.h: include/Uno.Float4x4.h
include/Fuse.Effects.Mask.h: include/Uno.Runtime.Implement-476e2792.h

include/Fuse.Effects.Mask.MaskMode.h: include/Uno.Int.h

include/Fuse.Gestures.Clicked.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Gestures.Clicked.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Gestures.Clicked.h: include/Fuse.Binding.h
include/Fuse.Gestures.Clicked.h: include/Fuse.Gestures.ClickerTrigger.h
include/Fuse.Gestures.Clicked.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.Clicked.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.Clicked.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.Clicked.h: include/Uno.Collections.IList-1.h

include/Fuse.Gestures.ClickedArgs.h: include/Fuse.Input.CustomPoin-ba20e234.h

include/Fuse.Gestures.ClickedHandler.h: include/Uno.Delegate.h

include/Fuse.Gestures.Clicker.h: include/Fuse.Input.IGesture.h
include/Fuse.Gestures.Clicker.h: include/Uno.Float2.h
include/Fuse.Gestures.Clicker.h: include/Uno.Object.h

include/Fuse.Gestures.Clicker-80b144c2.h: include/Uno.Delegate.h

include/Fuse.Gestures.Clicker-96c9e291.h: include/Uno.Int.h

include/Fuse.Gestures.ClickerTrigger.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Gestures.ClickerTrigger.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Gestures.ClickerTrigger.h: include/Fuse.Binding.h
include/Fuse.Gestures.ClickerTrigger.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.ClickerTrigger.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Gestures.ClickerTrigger.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.ClickerTrigger.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.ClickerTrigger.h: include/Uno.Collections.IList-1.h

include/Fuse.Gestures.DegreeSpan.h: include/Uno.Object.h

include/Fuse.Gestures.Edge.h: include/Uno.Int.h

include/Fuse.Gestures.KeepFocusInView.h: include/Fuse.Binding.h
include/Fuse.Gestures.KeepFocusInView.h: include/Fuse.Gestures.KeepInViewCommon.h
include/Fuse.Gestures.KeepFocusInView.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.KeepFocusInView.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.KeepFocusInView.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.KeepFocusInView.h: include/Uno.Collections.IList-1.h

include/Fuse.Gestures.KeepInViewCommon.h: include/Fuse.Behavior.h
include/Fuse.Gestures.KeepInViewCommon.h: include/Fuse.Binding.h
include/Fuse.Gestures.KeepInViewCommon.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.KeepInViewCommon.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.KeepInViewCommon.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.KeepInViewCommon.h: include/Uno.Collections.IList-1.h

include/Fuse.Gestures.Scrolle-e832eba2.h: include/Uno.Int.h

include/Fuse.Gestures.Scroller.h: include/Fuse.Behavior.h
include/Fuse.Gestures.Scroller.h: include/Fuse.Binding.h
include/Fuse.Gestures.Scroller.h: include/Fuse.Input.IGesture.h
include/Fuse.Gestures.Scroller.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.Scroller.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.Scroller.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.Scroller.h: include/Uno.Collections.IList-1.h
include/Fuse.Gestures.Scroller.h: include/Uno.Float2.h
include/Fuse.Gestures.Scroller.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Gestures.ScrollTo.h: include/Fuse.Triggers.Actions-fcab7e57.h
include/Fuse.Gestures.ScrollTo.h: include/Uno.Float2.h

include/Fuse.Gestures.SetSwipeActive.h: include/Fuse.Triggers.Actions-fcab7e57.h

include/Fuse.Gestures.Swiped.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Gestures.Swiped.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Gestures.Swiped.h: include/Fuse.Binding.h
include/Fuse.Gestures.Swiped.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.Swiped.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Gestures.Swiped.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.Swiped.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.Swiped.h: include/Uno.Collections.IList-1.h

include/Fuse.Gestures.SwipedHow.h: include/Uno.Int.h

include/Fuse.Gestures.SwipeDirection.h: include/Uno.Int.h

include/Fuse.Gestures.SwipeGesture.h: include/Fuse.Behavior.h
include/Fuse.Gestures.SwipeGesture.h: include/Fuse.Binding.h
include/Fuse.Gestures.SwipeGesture.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.SwipeGesture.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.SwipeGesture.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.SwipeGesture.h: include/Uno.Collections.IList-1.h
include/Fuse.Gestures.SwipeGesture.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Gestures.SwipeGe-f1aed91a.h: include/Uno.Object.h

include/Fuse.Gestures.SwipeType.h: include/Uno.Int.h

include/Fuse.Gestures.SwipingAnimation.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Gestures.SwipingAnimation.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Gestures.SwipingAnimation.h: include/Fuse.Binding.h
include/Fuse.Gestures.SwipingAnimation.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.SwipingAnimation.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Gestures.SwipingAnimation.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.SwipingAnimation.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.SwipingAnimation.h: include/Uno.Collections.IList-1.h
include/Fuse.Gestures.SwipingAnimation.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Gestures.ToggleS-2ddf1b4f.h: include/Fuse.Triggers.Actions-fcab7e57.h

include/Fuse.Gestures.Interna-bc586d01.h: include/Uno.Object.h

include/Fuse.Gestures.Interna-4c26ec11.h: include/Uno.Float2.h
include/Fuse.Gestures.Interna-4c26ec11.h: include/Uno.Object.h

include/Fuse.Gestures.Interna-e613cada.h: include/Uno.Int.h

include/Fuse.Gestures.Internal.Swiper.h: include/Fuse.Input.IGesture.h
include/Fuse.Gestures.Internal.Swiper.h: include/Uno.Float2.h
include/Fuse.Gestures.Internal.Swiper.h: include/Uno.Object.h

include/Fuse.Gestures.Interna-3d271d8a.h: include/Uno.Float2.h
include/Fuse.Gestures.Interna-3d271d8a.h: include/Uno.Float4.h
include/Fuse.Gestures.Interna-3d271d8a.h: include/Uno.UX.IPropertyListener.h
include/Fuse.Gestures.Interna-3d271d8a.h: include/Uno.UX.PropertyObject.h

include/Fuse.Gestures.Interna-47e25f2f.h: include/Uno.Int.h

include/Fuse.Navigation.Activ-5bc1c951.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Navigation.Activ-5bc1c951.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Navigation.Activ-5bc1c951.h: include/Fuse.Binding.h
include/Fuse.Navigation.Activ-5bc1c951.h: include/Fuse.Navigation.Navig-ae9e86c7.h
include/Fuse.Navigation.Activ-5bc1c951.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.Activ-5bc1c951.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.Activ-5bc1c951.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.Activ-5bc1c951.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.Route-659908f1.h: include/Uno.Delegate.h

include/Fuse.Navigation.Activ-7d976650.h: include/Uno.Delegate.h

include/Fuse.Navigation.Allow-1def7c6f.h: include/Uno.Int.h

include/Fuse.Navigation.BackB-3a3fc868.h: include/Uno.Int.h

include/Fuse.Navigation.BackF-9e5acfb7.h: include/Fuse.Triggers.Actions-fcab7e57.h

include/Fuse.Navigation.Deact-3ef1eb06.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Navigation.Deact-3ef1eb06.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Navigation.Deact-3ef1eb06.h: include/Fuse.Binding.h
include/Fuse.Navigation.Deact-3ef1eb06.h: include/Fuse.Navigation.Navig-ae9e86c7.h
include/Fuse.Navigation.Deact-3ef1eb06.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.Deact-3ef1eb06.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.Deact-3ef1eb06.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.Deact-3ef1eb06.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.Direc-58a4052e.h: include/Fuse.Binding.h
include/Fuse.Navigation.Direc-58a4052e.h: include/Fuse.IParentObserver.h
include/Fuse.Navigation.Direc-58a4052e.h: include/Fuse.Navigation.IBase-84e3f965.h
include/Fuse.Navigation.Direc-58a4052e.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Navigation.Direc-58a4052e.h: include/Fuse.Navigation.Visua-f5708ad5.h
include/Fuse.Navigation.Direc-58a4052e.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.Direc-58a4052e.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.Direc-58a4052e.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.Direc-58a4052e.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.EdgeNavigation.h: include/Fuse.Binding.h
include/Fuse.Navigation.EdgeNavigation.h: include/Fuse.IParentObserver.h
include/Fuse.Navigation.EdgeNavigation.h: include/Fuse.Navigation.IBase-84e3f965.h
include/Fuse.Navigation.EdgeNavigation.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Navigation.EdgeNavigation.h: include/Fuse.Navigation.Visua-f5708ad5.h
include/Fuse.Navigation.EdgeNavigation.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.EdgeNavigation.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.EdgeNavigation.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.EdgeNavigation.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.EndSeekArgs.h: include/Uno.Object.h

include/Fuse.Navigation.Enter-2bf42e15.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Navigation.Enter-2bf42e15.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Navigation.Enter-2bf42e15.h: include/Fuse.Binding.h
include/Fuse.Navigation.Enter-2bf42e15.h: include/Fuse.Navigation.Navig-ae9e86c7.h
include/Fuse.Navigation.Enter-2bf42e15.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.Enter-2bf42e15.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.Enter-2bf42e15.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.Enter-2bf42e15.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.Enter-a69250fd.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Navigation.Enter-a69250fd.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Navigation.Enter-a69250fd.h: include/Fuse.Binding.h
include/Fuse.Navigation.Enter-a69250fd.h: include/Fuse.Navigation.Enter-2bf42e15.h
include/Fuse.Navigation.Enter-a69250fd.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.Enter-a69250fd.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.Enter-a69250fd.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.Enter-a69250fd.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.Exiti-99f47629.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Navigation.Exiti-99f47629.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Navigation.Exiti-99f47629.h: include/Fuse.Binding.h
include/Fuse.Navigation.Exiti-99f47629.h: include/Fuse.Navigation.Enter-2bf42e15.h
include/Fuse.Navigation.Exiti-99f47629.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.Exiti-99f47629.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.Exiti-99f47629.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.Exiti-99f47629.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.Expli-27e79c7b.h: include/Fuse.Binding.h
include/Fuse.Navigation.Expli-27e79c7b.h: include/Fuse.IParentObserver.h
include/Fuse.Navigation.Expli-27e79c7b.h: include/Fuse.Navigation.IBase-84e3f965.h
include/Fuse.Navigation.Expli-27e79c7b.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Navigation.Expli-27e79c7b.h: include/Fuse.Navigation.Visua-f5708ad5.h
include/Fuse.Navigation.Expli-27e79c7b.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.Expli-27e79c7b.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.Expli-27e79c7b.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.Expli-27e79c7b.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.FindRouter.h: include/Fuse.Reactive.Expression.h
include/Fuse.Navigation.FindRouter.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Navigation.Route-fd65700c.h: include/Uno.Object.h

include/Fuse.Navigation.GoBack.h: include/Fuse.Navigation.BackF-9e5acfb7.h

include/Fuse.Navigation.GoForward.h: include/Fuse.Navigation.BackF-9e5acfb7.h

include/Fuse.Navigation.Histo-b65f239b.h: include/Uno.Delegate.h

include/Fuse.Navigation.IBase-84e3f965.h: include/Uno.Object.h

include/Fuse.Navigation.INavigation.h: include/Fuse.Navigation.IBase-84e3f965.h
include/Fuse.Navigation.INavigation.h: include/Uno.Object.h
include/Fuse.Navigation.INavigation.h: include/Fuse.Navigation.Navig-4be788bd.h

include/Fuse.Navigation.IPage-2d3977f2.h: include/Uno.Object.h

include/Fuse.Navigation.IPage-9039a314.h: include/Uno.Object.h

include/Fuse.Navigation.IRouterOutlet.h: include/Uno.Object.h

include/Fuse.Navigation.ISeek-75d60b5e.h: include/Fuse.Navigation.IBase-84e3f965.h
include/Fuse.Navigation.ISeek-75d60b5e.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Navigation.ISeek-75d60b5e.h: include/Uno.Object.h

include/Fuse.Navigation.Route-ea6aa4c1.h: include/Uno.Object.h

include/Fuse.Navigation.Linea-8f82d0a2.h: include/Fuse.Binding.h
include/Fuse.Navigation.Linea-8f82d0a2.h: include/Fuse.IParentObserver.h
include/Fuse.Navigation.Linea-8f82d0a2.h: include/Fuse.Navigation.IBase-84e3f965.h
include/Fuse.Navigation.Linea-8f82d0a2.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Navigation.Linea-8f82d0a2.h: include/Fuse.Navigation.ISeek-75d60b5e.h
include/Fuse.Navigation.Linea-8f82d0a2.h: include/Fuse.Navigation.Struc-153e70a0.h
include/Fuse.Navigation.Linea-8f82d0a2.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.Linea-8f82d0a2.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.Linea-8f82d0a2.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.Linea-8f82d0a2.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.ModifyRouteHow.h: include/Uno.Int.h

include/Fuse.Navigation.NavigatedArgs.h: include/Uno.EventArgs.h

include/Fuse.Navigation.Navig-b94564f6.h: include/Uno.Delegate.h

include/Fuse.Navigation.NavigateTo.h: include/Fuse.Navigation.Navig-7d6b9b9f.h

include/Fuse.Navigation.NavigateToggle.h: include/Fuse.Navigation.Navig-7d6b9b9f.h

include/Fuse.Navigation.Navigation.h: include/Uno.Object.h

include/Fuse.Navigation.Navig-ae9e86c7.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Navigation.Navig-ae9e86c7.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Navigation.Navig-ae9e86c7.h: include/Fuse.Binding.h
include/Fuse.Navigation.Navig-ae9e86c7.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.Navig-ae9e86c7.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Navigation.Navig-ae9e86c7.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.Navig-ae9e86c7.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.Navig-ae9e86c7.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.NavigationArgs.h: include/Uno.EventArgs.h

include/Fuse.Navigation.NavigationEdge.h: include/Uno.Int.h

include/Fuse.Navigation.Navig-11678f15.h: include/Uno.Int.h

include/Fuse.Navigation.Navig-c3ed68c1.h: include/Uno.Delegate.h

include/Fuse.Navigation.NavigationMode.h: include/Uno.Int.h

include/Fuse.Navigation.Navig-32ba495d.h: include/Uno.Delegate.h

include/Fuse.Navigation.Navig-3e3f6fb9.h: include/Uno.h

include/Fuse.Navigation.Navig-a00b4ee0.h: include/Fuse.Navigation.IPage-2d3977f2.h
include/Fuse.Navigation.Navig-a00b4ee0.h: include/Uno.Object.h

include/Fuse.Navigation.Navig-4be788bd.h: include/Uno.Object.h

include/Fuse.Navigation.Navig-f3bd6778.h: include/Uno.Int.h

include/Fuse.Navigation.Struc-5fccc835.h: include/Uno.Int.h

include/Fuse.Navigation.Navig-7d6b9b9f.h: include/Fuse.Triggers.Actions-fcab7e57.h

include/Fuse.Navigation.OutletType.h: include/Uno.Int.h

include/Fuse.Navigation.Visua-b74e2778.h: include/Uno.Object.h

include/Fuse.Navigation.PageExpression.h: include/Fuse.Reactive.Expression.h
include/Fuse.Navigation.PageExpression.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Navigation.PageR-76b3a82b.h: include/Fuse.Behavior.h
include/Fuse.Navigation.PageR-76b3a82b.h: include/Fuse.Binding.h
include/Fuse.Navigation.PageR-76b3a82b.h: include/Fuse.Navigation.IPage-9039a314.h
include/Fuse.Navigation.PageR-76b3a82b.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.PageR-76b3a82b.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.PageR-76b3a82b.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.PageR-76b3a82b.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.Route-b874a1d7.h: include/Uno.Delegate.h

include/Fuse.Navigation.Route.h: include/Uno.Object.h

include/Fuse.Navigation.RoutePagePath.h: include/Uno.Int.h

include/Fuse.Navigation.RoutePageProxy.h: include/Fuse.Navigation.Route-ea6aa4c1.h
include/Fuse.Navigation.RoutePageProxy.h: include/Uno.Object.h

include/Fuse.Navigation.Route-7a58dae5.h: include/Uno.Int.h

include/Fuse.Navigation.Router.h: include/Fuse.Binding.h
include/Fuse.Navigation.Router.h: include/Fuse.Navigation.IBase-84e3f965.h
include/Fuse.Navigation.Router.h: include/Fuse.Node.h
include/Fuse.Navigation.Router.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.Router.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.Router.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.Router.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.Route-2abd492c.h: include/Fuse.Triggers.Actions-fcab7e57.h

include/Fuse.Navigation.RouterModify.h: include/Fuse.Triggers.Actions-fcab7e57.h

include/Fuse.Navigation.Routi-30764b7e.h: include/Uno.Int.h

include/Fuse.Navigation.RoutingResult.h: include/Uno.Int.h

include/Fuse.Navigation.SnapTo.h: include/Uno.Int.h

include/Fuse.Navigation.Navig-1cc6d860.h: include/Uno.Delegate.h

include/Fuse.Navigation.Struc-153e70a0.h: include/Fuse.Binding.h
include/Fuse.Navigation.Struc-153e70a0.h: include/Fuse.IParentObserver.h
include/Fuse.Navigation.Struc-153e70a0.h: include/Fuse.Navigation.IBase-84e3f965.h
include/Fuse.Navigation.Struc-153e70a0.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Navigation.Struc-153e70a0.h: include/Fuse.Navigation.ISeek-75d60b5e.h
include/Fuse.Navigation.Struc-153e70a0.h: include/Fuse.Navigation.Visua-f5708ad5.h
include/Fuse.Navigation.Struc-153e70a0.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.Struc-153e70a0.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.Struc-153e70a0.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.Struc-153e70a0.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.PageE-5cf97a9f.h: include/Fuse.Navigation.IPage-9039a314.h
include/Fuse.Navigation.PageE-5cf97a9f.h: include/Uno.IDisposable.h
include/Fuse.Navigation.PageE-5cf97a9f.h: include/Uno.Object.h

include/Fuse.Navigation.FindR-a7f8c89e.h: include/Uno.IDisposable.h
include/Fuse.Navigation.FindR-a7f8c89e.h: include/Uno.Object.h

include/Fuse.Navigation.SwipeDirection.h: include/Uno.Int.h

include/Fuse.Navigation.SwipeNavigate.h: include/Fuse.Behavior.h
include/Fuse.Navigation.SwipeNavigate.h: include/Fuse.Binding.h
include/Fuse.Navigation.SwipeNavigate.h: include/Fuse.Input.IGesture.h
include/Fuse.Navigation.SwipeNavigate.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.SwipeNavigate.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.SwipeNavigate.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.SwipeNavigate.h: include/Uno.Collections.IList-1.h
include/Fuse.Navigation.SwipeNavigate.h: include/Uno.Float2.h

include/Fuse.Navigation.UpdateSeekArgs.h: include/Uno.Object.h

include/Fuse.Navigation.Visua-f5708ad5.h: include/Fuse.Behavior.h
include/Fuse.Navigation.Visua-f5708ad5.h: include/Fuse.Binding.h
include/Fuse.Navigation.Visua-f5708ad5.h: include/Fuse.IParentObserver.h
include/Fuse.Navigation.Visua-f5708ad5.h: include/Fuse.Navigation.IBase-84e3f965.h
include/Fuse.Navigation.Visua-f5708ad5.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Navigation.Visua-f5708ad5.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.Visua-f5708ad5.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.Visua-f5708ad5.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.Visua-f5708ad5.h: include/Uno.Collections.IList-1.h
include/Fuse.Navigation.Visua-f5708ad5.h: include/Fuse.Navigation.Navig-4be788bd.h

include/Fuse.Navigation.WhileActive.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Navigation.WhileActive.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Navigation.WhileActive.h: include/Fuse.Binding.h
include/Fuse.Navigation.WhileActive.h: include/Fuse.Navigation.While-89f5a828.h
include/Fuse.Navigation.WhileActive.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.WhileActive.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.WhileActive.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.WhileActive.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.WhileInactive.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Navigation.WhileInactive.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Navigation.WhileInactive.h: include/Fuse.Binding.h
include/Fuse.Navigation.WhileInactive.h: include/Fuse.Navigation.While-89f5a828.h
include/Fuse.Navigation.WhileInactive.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.WhileInactive.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.WhileInactive.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.WhileInactive.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.While-87a81bce.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Navigation.While-87a81bce.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Navigation.While-87a81bce.h: include/Fuse.Binding.h
include/Fuse.Navigation.While-87a81bce.h: include/Fuse.Navigation.While-89f5a828.h
include/Fuse.Navigation.While-87a81bce.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.While-87a81bce.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.While-87a81bce.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.While-87a81bce.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.While-65c5df16.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Navigation.While-65c5df16.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Navigation.While-65c5df16.h: include/Fuse.Binding.h
include/Fuse.Navigation.While-65c5df16.h: include/Fuse.Navigation.While-89f5a828.h
include/Fuse.Navigation.While-65c5df16.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.While-65c5df16.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.While-65c5df16.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.While-65c5df16.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.While-4de49602.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Navigation.While-4de49602.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Navigation.While-4de49602.h: include/Fuse.Binding.h
include/Fuse.Navigation.While-4de49602.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.While-4de49602.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Navigation.While-4de49602.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.While-4de49602.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.While-4de49602.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.While-89f5a828.h: include/Fuse.Animations.IBase-d3bd6f2e.h
include/Fuse.Navigation.While-89f5a828.h: include/Fuse.Animations.IUnwr-594abe9.h
include/Fuse.Navigation.While-89f5a828.h: include/Fuse.Binding.h
include/Fuse.Navigation.While-89f5a828.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.While-89f5a828.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Navigation.While-89f5a828.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.While-89f5a828.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.While-89f5a828.h: include/Uno.Collections.IList-1.h

include/Fuse.Layouts.CircleLayout.h: include/Fuse.Layouts.Layout.h

include/Fuse.Layouts.Column.h: include/Fuse.Layouts.DefinitionBase.h

include/Fuse.Layouts.ColumnLayout.h: include/Fuse.Layouts.Layout.h

include/Fuse.Layouts.ColumnLa-8bb1ac12.h: include/Uno.Int.h

include/Fuse.Layouts.Definiti-98edc253.h: include/Uno.Int.h

include/Fuse.Layouts.DefaultLayout.h: include/Fuse.Layouts.Layout.h

include/Fuse.Layouts.DefinitionBase.h: include/Uno.UX.PropertyObject.h

include/Fuse.Layouts.Dock.h: include/Uno.Int.h

include/Fuse.Layouts.DockLayout.h: include/Fuse.Layouts.Layout.h

include/Fuse.Layouts.FlowDirection.h: include/Uno.Int.h

include/Fuse.Layouts.GridChildOrder.h: include/Uno.Int.h

include/Fuse.Layouts.GridLayout.h: include/Fuse.Layouts.Layout.h

include/Fuse.Layouts.Layout.h: include/Uno.UX.PropertyObject.h
include/Fuse.Layouts.Layout.h: include/Fuse.LayoutParams.h
include/Fuse.Layouts.Layout.h: include/Uno.Float2.h
include/Fuse.Layouts.Layout.h: include/Uno.Float4.h

include/Fuse.Layouts.Layouts.h: include/Uno.h

include/Fuse.Layouts.Metric.h: include/Uno.Int.h

include/Fuse.Layouts.Orientation.h: include/Uno.Int.h

include/Fuse.Layouts.Row.h: include/Fuse.Layouts.DefinitionBase.h

include/Fuse.Layouts.StackLayout.h: include/Fuse.Layouts.Layout.h

include/Fuse.Layouts.StackLayoutMode.h: include/Uno.Int.h

include/Fuse.Layouts.WrapLayout.h: include/Fuse.Layouts.Layout.h

include/Fuse.Android.StaticLa-888bb769.h: include/Uno.Int.h

include/Fuse.Android.AppRoot.h: include/Uno.h

include/Fuse.Android.TextRend-b6e4a886.h: include/Uno.Object.h
include/Fuse.Android.TextRend-b6e4a886.h: include/Uno.Recti.h

include/Fuse.Android.Bitmap.h: include/Uno.IDisposable.h
include/Fuse.Android.Bitmap.h: include/Uno.Object.h

include/Fuse.Android.Blitter.h: include/Uno.Float2.h
include/Fuse.Android.Blitter.h: include/Uno.Object.h
include/Fuse.Android.Blitter.h: include/Uno.Runtime.Implement-476e2792.h

include/Fuse.Android.Canvas.h: include/Uno.Object.h

include/Fuse.Android.GLUtils.h: include/Uno.Object.h

include/Fuse.Android.RootGraphicsView.h: include/Fuse.Animations.IResize.h
include/Fuse.Android.RootGraphicsView.h: include/Fuse.Binding.h
include/Fuse.Android.RootGraphicsView.h: include/Fuse.Controls.GraphicsView.h
include/Fuse.Android.RootGraphicsView.h: include/Fuse.Elements.ITreeRenderer.h
include/Fuse.Android.RootGraphicsView.h: include/Fuse.IActualPlacement.h
include/Fuse.Android.RootGraphicsView.h: include/Fuse.ICommonViewport.h
include/Fuse.Android.RootGraphicsView.h: include/Fuse.IRenderViewport.h
include/Fuse.Android.RootGraphicsView.h: include/Fuse.ITemplateSource.h
include/Fuse.Android.RootGraphicsView.h: include/Fuse.IViewport.h
include/Fuse.Android.RootGraphicsView.h: include/Fuse.Node.h
include/Fuse.Android.RootGraphicsView.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Android.RootGraphicsView.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Android.RootGraphicsView.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Android.RootGraphicsView.h: include/Fuse.Triggers.Actions-ea70af1f.h
include/Fuse.Android.RootGraphicsView.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Android.RootGraphicsView.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Android.RootGraphicsView.h: include/Uno.Collections.IList-1.h
include/Fuse.Android.RootGraphicsView.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Android.StaticLayout.h: include/Uno.Object.h

include/Fuse.Android.StatusBarConfig.h: include/Fuse.Behavior.h
include/Fuse.Android.StatusBarConfig.h: include/Fuse.Binding.h
include/Fuse.Android.StatusBarConfig.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Android.StatusBarConfig.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Android.StatusBarConfig.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Android.StatusBarConfig.h: include/Uno.Collections.IList-1.h

include/Fuse.Android.StatusBarHelper.h: include/Uno.h

include/Fuse.Android.RootGrap-9e25fcdc.h: include/Uno.UX.Template.h

include/Fuse.Android.TextControlLayout.h: include/Uno.Object.h
include/Fuse.Android.TextControlLayout.h: include/Uno.Recti.h

include/Fuse.Android.TextPaint.h: include/Uno.Object.h

include/Fuse.Android.TextRenderer.h: include/Fuse.Controls.ITextRenderer.h
include/Fuse.Android.TextRenderer.h: include/Uno.Float2.h
include/Fuse.Android.TextRenderer.h: include/Uno.Object.h

include/Fuse.Android.TextUtils.h: include/Uno.Object.h

include/Fuse.Android.TextUtil-6613d379.h: include/Uno.Int.h

include/Fuse.Android.Controls.WebView.h: include/Fuse.Controls.ISourceReceiver.h
include/Fuse.Android.Controls.WebView.h: include/Fuse.Controls.IWebView.h
include/Fuse.Android.Controls.WebView.h: include/Fuse.Controls.Native.-98938546.h
include/Fuse.Android.Controls.WebView.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Android.Controls.WebView.h: include/Fuse.Navigation.IBase-84e3f965.h
include/Fuse.Android.Controls.WebView.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Android.Controls.WebView.h: include/Uno.IDisposable.h

include/Fuse.Android.Controls-9d49daa5.h: include/Uno.Object.h

include/Fuse.Android.Controls-3a7bea61.h: include/Uno.Object.h

include/Fuse.Android.Controls-b7abe437.h: include/Uno.h

include/Fuse.FileSystem.AndroidPaths.h: include/Uno.Object.h

include/Fuse.FileSystem.FileS-cd2526b.h: include/Uno.Object.h

include/Fuse.FileSystem.FileS-6a2addd0.h: include/Uno.Object.h

include/Fuse.FileSystem.DirectoryInfo.h: include/Fuse.FileSystem.FileSystemInfo.h

include/Fuse.FileSystem.FileAttributes.h: include/Uno.Int.h

include/Fuse.FileSystem.FileInfo.h: include/Fuse.FileSystem.FileSystemInfo.h

include/Fuse.FileSystem.FileStatus.h: include/Uno.Object.h

include/Fuse.FileSystem.FileS-f9e26269.h: include/Uno.h

include/Fuse.FileSystem.FileSystemInfo.h: include/Uno.Object.h

include/Fuse.FileSystem.FileS-3c9ac41b.h: include/Fuse.Scripting.NativeModule.h
include/Fuse.FileSystem.FileS-3c9ac41b.h: include/Uno.IDisposable.h

include/Fuse.FileSystem.FileS-986283eb.h: include/Uno.Object.h

include/Fuse.FileSystem.Nothing.h: include/Uno.Object.h

include/Fuse.FileSystem.PathTools.h: include/Uno.h

include/Fuse.FileSystem.UnifiedPaths.h: include/Uno.h

include/Fuse.Selection.Selection.How.h: include/Uno.Int.h

include/Fuse.Selection.Select-94349afa.h: include/Fuse.IArray.h
include/Fuse.Selection.Select-94349afa.h: include/Uno.Object.h

include/Fuse.Selection.Selectable.h: include/Fuse.Behavior.h
include/Fuse.Selection.Selectable.h: include/Fuse.Binding.h
include/Fuse.Selection.Selectable.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Selection.Selectable.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Selection.Selectable.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Selection.Selectable.h: include/Uno.Collections.IList-1.h

include/Fuse.Selection.Selection.h: include/Fuse.Behavior.h
include/Fuse.Selection.Selection.h: include/Fuse.Binding.h
include/Fuse.Selection.Selection.h: include/Fuse.Reactive.IObserver.h
include/Fuse.Selection.Selection.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Selection.Selection.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Selection.Selection.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Selection.Selection.h: include/Uno.Collections.IList-1.h

include/Fuse.Selection.Select-30798591.h: include/Uno.Int.h

include/Fuse.Selection.SelectMode.h: include/Uno.Int.h

include/Fuse.Selection.ToggleSelection.h: include/Fuse.Triggers.Actions-fcab7e57.h

include/Fuse.Storage.ApplicationDir.h: include/Uno.h

include/Fuse.Storage.Applicat-2356c164.h: include/Uno.Object.h

include/Fuse.Storage.StorageModule.h: include/Fuse.Scripting.NativeModule.h
include/Fuse.Storage.StorageModule.h: include/Uno.IDisposable.h

include/Fuse.Storage.Applicat-8bd00e9b.h: include/Uno.Object.h

include/Fuse.Testing.TestFail-c87eb991.h: include/Uno.Exception.h

include/Fuse.Testing.UnoTesti-f868a38f.h: include/Uno.Object.h

include/Fuse.Testing.UnoTestingHelper.h: include/Fuse.Scripting.NativeModule.h
include/Fuse.Testing.UnoTestingHelper.h: include/Uno.IDisposable.h

include/Fuse.WebSocket.Native-505d0c55.h: include/Fuse.Scripting.NativeModule.h
include/Fuse.WebSocket.Native-505d0c55.h: include/Uno.IDisposable.h

include/Fuse.WebSocket.WebSoc-2254f404.h: include/Fuse.WebSocket.Native-505d0c55.h
include/Fuse.WebSocket.WebSoc-2254f404.h: include/Uno.IDisposable.h

include/Experimental.Http.BinaryLoader.h: include/Experimental.Http.Loader.h

include/Experimental.Http.HttpLoader.h: include/Uno.h

include/Experimental.Http.Htt-2465a87a.h: include/Uno.Object.h

include/Experimental.Http.Loader.h: include/Uno.Object.h

include/Experimental.Http.LoaderConst.h: include/Uno.h

include/Experimental.Http.TextLoader.h: include/Experimental.Http.Loader.h

include/Experimental.Http.Int-14679e9d.h: include/Uno.h

include/Experimental.Cache.CacheLoaded.h: include/Uno.Delegate.h

include/Experimental.Cache.ICache.h: include/Uno.Object.h

include/Experimental.Cache.IC-2fb0e23a.h: include/Uno.Object.h

include/Experimental.Cache.IC-9cfb21d2.h: include/Uno.Object.h

include/Experimental.Cache.ProxyStream.h: include/Uno.IDisposable.h
include/Experimental.Cache.ProxyStream.h: include/Uno.IO.Stream.h

include/Experimental.TextureL-1f379d0f.h: include/Uno.Object.h

include/Experimental.TextureL-932cb361.h: include/Uno.Exception.h

include/Experimental.TextureL-b6dfce5c.h: include/Uno.h

include/Experimental.TextureL-1a97077a.h: include/Uno.h

include/Neovisionaries.WebSocketClient.h: include/Uno.IDisposable.h
include/Neovisionaries.WebSocketClient.h: include/Uno.Object.h

include/Polyfills.Window.WindowModule.h: include/Fuse.Scripting.FileModule.h
include/Polyfills.Window.WindowModule.h: include/Uno.IDisposable.h

include/FuseJS.Base64.h: include/Fuse.Scripting.NativeModule.h
include/FuseJS.Base64.h: include/Uno.IDisposable.h

include/FuseJS.Bundle.h: include/Fuse.Scripting.NativeModule.h
include/FuseJS.Bundle.h: include/Uno.IDisposable.h

include/FuseJS.Environment.h: include/Fuse.Scripting.NativeModule.h
include/FuseJS.Environment.h: include/Uno.IDisposable.h

include/FuseJS.Bundle.ExtractClosure.h: include/Uno.Object.h

include/FuseJS.FileReaderImpl-a8e50314.h: include/Uno.Object.h

include/FuseJS.FileReaderImpl.h: include/Fuse.Scripting.NativeModule.h
include/FuseJS.FileReaderImpl.h: include/Uno.IDisposable.h

include/FuseJS.Globals.h: include/Fuse.Scripting.NativeModule.h
include/FuseJS.Globals.h: include/Uno.IDisposable.h

include/FuseJS.Latin1Helpers.h: include/Uno.h

include/FuseJS.Lifecycle.h: include/Fuse.Scripting.Native-fa549b97.h
include/FuseJS.Lifecycle.h: include/Uno.IDisposable.h

include/FuseJS.RaiseEvent.h: include/Uno.Object.h

include/FuseJS.Bundle.ReadBuf-7d8ec1c7.h: include/Uno.Object.h

include/FuseJS.Bundle.ReadClosure.h: include/Uno.Object.h

include/FuseJS.UserEvents.h: include/Fuse.Scripting.NativeModule.h
include/FuseJS.UserEvents.h: include/Uno.IDisposable.h

libs/$(ABI): | libs
	$(UNO) mkdir libs/$(ABI)

libs:
	$(UNO) mkdir libs

.uno/Uno: | .uno
	$(UNO) mkdir .uno/Uno

.uno:
	$(UNO) mkdir .uno

.uno/Uno/Graphics: | .uno/Uno
	$(UNO) mkdir .uno/Uno/Graphics

.uno/Implementation/Posix: | .uno/Implementation
	$(UNO) mkdir .uno/Implementation/Posix

.uno/Implementation: | .uno
	$(UNO) mkdir .uno/Implementation
