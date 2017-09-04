:: This file was generated based on C:/Users/Lotus/AppData/Local/Fusetools/Packages/UnoCore/1.2.1/targets/android/run.bat.
:: WARNING: Changes might be lost if you edit this file directly.
@echo off

if "%1" == "debug" (
    echo Opening Android Studio
    "C:\Program Files (x86)\Fuse\uno.exe" open -a"Android Studio" "%~dp0garuda"
    exit /b %ERRORLEVEL%
)

if "%1" == "uninstall" (
    echo Uninstalling com.apps.garuda
    "C:\Program Files (x86)\Fuse\uno.exe" adb uninstall com.apps.garuda
    exit /b %ERRORLEVEL%
)

"C:\Program Files (x86)\Fuse\uno.exe" launch-apk "%~dp0garuda.apk" ^
    --package=com.apps.garuda ^
    --activity=garuda ^
    --sym-dir="%~dp0src\main\.uno" ^
    %*
exit /b %ERRORLEVEL%
