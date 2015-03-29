#!/usr/bin/env python
from subprocess import call

build_code_start_message = "===================== BUILD C# CODE ======================"
build_test_start_message = "===================== BUILD C# TESTS ====================="

def build_code():
    print(build_code_start_message)
    call(['xbuild', 'csbuild.xml'])
    #call(['C:\Windows\Microsoft.NET\Framework64\v4.0.30319\msbuild', '/t:Build', '/v:m', '/nologo'])

def build_test():
    print(build_test_start_message)
    #call(['C:\Windows\Microsoft.NET\Framework64\v4.0.30319\msbuild csbuild.xml', '/t:BuildTests', '/v:m', '/nologo'])

if __name__ == '__main__':
    build_code()
    build_test()

# echo ======================== RUN TESTS =======================
# nunit-console tests/csharp/SortingTest.dll /xml:tests/csharp/SortingTestResult.xml /nologo
# nunit-console tests/csharp/ListsTest.dll /xml:tests/csharp/ListTestResult.xml /nologo
# nunit-console tests/csharp/TreesTest.dll /xml:tests/csharp/TreesTestResult.xml /nologo


