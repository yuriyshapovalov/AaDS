#!/usr/bin/env python

build_code_start_message = "===================== BUILD C# CODE ======================"
build_test_start_message = "===================== BUILD C# TESTS ====================="
run_tests_message = "======================== RUN TESTS ======================="

def build_cs():
	print(build_code_start_message)
	print(build_test_start_message)

if __name__ == '__main__':
	build_cs()

# echo ===================== BUILD C# CODE ======================
# C:\Windows\Microsoft.NET\Framework64\v4.0.30319\msbuild csbuild.xml /t:Build /v:m /nologo

# echo ===================== BUILD C# TESTS =====================
# C:\Windows\Microsoft.NET\Framework64\v4.0.30319\msbuild csbuild.xml /t:BuildTests /v:m /nologo

# echo ======================== RUN TESTS =======================
# nunit-console tests/csharp/SortingTest.dll /xml:tests/csharp/SortingTestResult.xml /nologo
# nunit-console tests/csharp/ListsTest.dll /xml:tests/csharp/ListTestResult.xml /nologo
# nunit-console tests/csharp/TreesTest.dll /xml:tests/csharp/TreesTestResult.xml /nologo


