@echo off
echo Building project...

REM Compile all .cpp files in the folder
g++ *.cpp -o app.exe

IF %ERRORLEVEL% NEQ 0 (
    echo Build failed.
    pause
    exit /b %ERRORLEVEL%
)

echo Build succeeded!
pause
