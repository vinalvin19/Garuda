:: This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/UnoCore/1.2.1/targets/android/gradle-build.bat.
:: WARNING: Changes might be lost if you edit this file directly.
@echo off
pushd "%~dp0app\src\main"

set JAVA_HOME=C:\Program Files\Java\jdk1.8.0_131\jre
set CMAKE_PATH=""

echo.
echo ## 2/2: garuda.apk

cd "%~dp0/"

if exist %CMAKE_PATH%\NUL goto HASCMAKE
if exist %CMAKE_PATH%\ goto HASCMAKE
goto NOCMAKE

:HASCMAKE
call gradlew assembleDebug || goto ERROR

cd "%~dp0"
"C:\Program Files (x86)\Fuse\uno.exe" cp app/build/outputs/apk/app-debug.apk garuda.apk || goto ERROR

popd && exit /b 0

:NOCMAKE
echo "ERROR: Unable to find the 'cmake' command. Please run 'fuse install android'. Expected to find cmake in """

:ERROR
popd && exit /b 1
