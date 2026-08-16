@echo off
C:\Windows\Microsoft.NET\Framework64\v4.0.30319\csc.exe /out:Main.exe *.cs
if %errorlevel% equ 0 (
    Main.exe
)
