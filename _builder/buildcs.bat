@echo off

echo ===================== BUILD C# CODE ======================
C:\Windows\Microsoft.NET\Framework64\v4.0.30319\msbuild csbuild.xml /t:Build

echo ===================== BUILD C# TESTS =====================
C:\Windows\Microsoft.NET\Framework64\v4.0.30319\msbuild csbuild.xml /t:BuildTests

echo ======================== RUN TESTS =======================
nunit-console tests/csharp/SortingTest.dll


