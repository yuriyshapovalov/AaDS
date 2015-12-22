#!/usr/bin/env python
from subprocess import call

build_code_start_message = "==================== BUILD JAVA CODE ====================="

def build_code():
    print(build_code_start_message)
    call('ant -f build.xml', shell=True)

if __name__ == '__main__':
    build_code()