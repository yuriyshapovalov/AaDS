@echo off

echo ==================================================
echo                      BUILD                        
echo ==================================================
C:\Windows\Microsoft.NET\Framework64\v4.0.30319\msbuild csbuild.xml /t:BuildWithTests /v:d

echo ==================================================
echo                     TESTING                       
echo ==================================================
nunit-console tests/csharp/SortingTest.dll


