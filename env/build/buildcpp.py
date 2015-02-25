#!/usr/bin/env python
from subprocess import call

build_code_start_message = "==================== BUILD C++ CODE ======================"
build_test_start_message = "==================== BUILD C++ TEST ======================"

def build_code():
    print(build_code_start_message)

def build_test():
    print(build_test_start_message)

if __name__ == '__main__':
    build_code()
    build_test()