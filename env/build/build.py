#!/usr/bin/env python
import buildcs
import buildjava
import buildcpp
import buildjavascript
import buildpython
import buildfs
import buildhaskell
import builderlang
import buildclisp
import buildagda
import buildr

header_message = """
**********************************************************
**** AaDS - Algorittms and Data Structures 
**** Licence: CC Attribution ShareAlike (CC-BY-SA 3.0)
**** Author: Yuriy Shapovalov (shapovalov.yuri@gmail.com
**********************************************************"""

build_complete_message = "================== AaDS BUILD COMPLETE ==================="

def build():
    print(header_message)

    buildcs.build_code()
    buildcs.build_test()

    buildjava.build_code()
    buildjava.build_test()

    buildcpp.build_code()
    buildcpp.build_test()
	
    buildpython.build_code()
    buildpython.build_test()

    buildjs.build_code()
    buildjs.build_test()
	
	# buildr.bat 

    print(build_complete_message)

def test():
    #buildcs.run_tests()

if __name__ == '__main__':
	build()