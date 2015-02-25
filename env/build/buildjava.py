#!/usr/bin/env python
from subprocess import call

build_code_start_message = "==================== BUILD JAVA CODE ====================="
build_test_start_message = "==================== BUILD JAVA TEST ====================="

def build_code():
    print(build_code_start_message)

    # call(['ant', '-f', 'javabuild.xml'])

def build_test():
    print(build_test_start_message)

if __name__ == '__main__':
    build_code()
    build_test()