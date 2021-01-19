@echo off
DEL output.exe
copy C:\users\d_dud\source\repos\PiBasic\Windows\Output.cpp C:\users\d_dud\source\repos\PiBasic\PiBasicCompile
REM @clang++ -O3 -std=c++14 output.cpp ..\V2\src\engine\*cpp ..\V2\src\graphics\*.cpp -IC:\Users\d_dud\Development\SDL2-2.0.12\include -LC:\Users\d_dud\Development\SDL2-2.0.12\lib\x64 -lSDL2main -lSDL2 -lShell32 -REM REM Xlinker /subsystem:windows -o output.exe
REM output.exe
REM del x64 /s /q
REM msbuild /property:Configuration=Release
REM x64\Release\PiBasicCompile
