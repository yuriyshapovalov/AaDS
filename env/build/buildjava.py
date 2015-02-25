#!/usr/bin/env python
from subprocess import call

build_start_message = "==================== BUILD JAVA CODE ====================="

def build_java():
	print(build_start_message)

	call(['ant', '-f', 'javabuild.xml'])

if __name__ == '__main__':
	build_java()