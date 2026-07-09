@echo off
REM Build all C++ source files in the repository root using MinGW/g++
setlocal enabledelayedexpansion
for %%F in (*.cpp) do (
    echo Compiling %%F...
    g++ -std=c++17 -O2 "%%F" -o "%%~nF.exe"
    if errorlevel 1 (
        echo Failed to compile %%F
        exit /b 1
    )
)
echo All files compiled successfully.
endlocal
