@echo off
g++ Main.cpp -o Main.exe
if %errorlevel% equ 0 (
    Main.exe
)
