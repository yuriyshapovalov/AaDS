@echo off

echo ===================== BUILD C# CODE ======================
C:\Windows\Microsoft.NET\Framework64\v4.0.30319\msbuild csbuild.xml /t:Build

echo ===================== BUILD C# TESTS =====================
C:\Windows\Microsoft.NET\Framework64\v4.0.30319\msbuild csbuild.xml /t:BuildTests

echo ======================== RUN TESTS =======================
nunit-console tests/csharp/SortingTest.dll /xml:tests/csharp/SortingTestResult.xml /nologo
nunit-console tests/csharp/ListsTest.dll /xml:tests/csharp/ListTestResult.xml /nologo
nunit-console tests/csharp/TreesTest.dll /xml:tests/csharp/TreesTestResult.xml /nologo


