#!/usr/bin/env python
from subprocess import call

build_code_start_message = "===================== BUILD C# CODE ======================"
build_test_start_message = "===================== BUILD C# TESTS ====================="
run_tests_start_message  = "===================== RUN UNIT TESTS ====================="

def build_code():
    print(build_code_start_message)
    call(['xbuild', 'csbuild.xml', '/target:Build', '/verbosity:normal','/nologo'])
    #call(['C:\Windows\Microsoft.NET\Framework64\v4.0.30319\msbuild', '/t:Build', '/v:m', '/nologo'])

def build_test():
    print(build_test_start_message)
    call(['xbuild', 'csbuild.xml', '/target:BuildTests', '/verbosity:normal','/nologo'])
    #call(['C:\Windows\Microsoft.NET\Framework64\v4.0.30319\msbuild csbuild.xml', '/t:BuildTests', '/v:m', '/nologo'])

def run_tests():
    print(run_tests_start_message)
    call(['nunit-console', 'tests/csharp/SortingTest.dll', '/xml:tests/csharp/SortingTestResult.xml', '/nologo'])

if __name__ == '__main__':
    build_code()
    build_test()
    run_tests()



