@echo off
"C:\Users\Aayush Mahale\.antigravity\extensions\redhat.java-1.55.0-win32-x64\jre\21.0.11-win32-x86_64\bin\javac.exe" *.java
if %errorlevel% equ 0 (
    "C:\Users\Aayush Mahale\.antigravity\extensions\redhat.java-1.55.0-win32-x64\jre\21.0.11-win32-x86_64\bin\java.exe" Main
)
