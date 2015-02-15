@echo off
echo Creating stubs..

REM %1 - algorithm cluster
REM %2 - class/file/module name
REM %3 - 

IF NOT EXIST ..\..\%1\csharp 	    mkdir ..\..\csharp\%1
IF NOT EXIST ..\..\java\%1 			mkdir ..\..\java\%1
IF NOT EXIST ..\..\cpp\%1 		    mkdir ..\..\cpp\%1
IF NOT EXIST ..\..\javascript\%1 	mkdir ..\..\javascript\%1
IF NOT EXIST ..\..\python\%1 	    mkdir ..\..\python\%1
IF NOT EXIST ..\..\R\%1 		    mkdir ..\..\R\%1

IF NOT EXIST ..\..\_tests\csharp\%1 	    mkdir ..\..\_tests\csharp\%1
IF NOT EXIST ..\..\_tests\java\%1 		    mkdir ..\..\_tests\java\%1
IF NOT EXIST ..\..\_tests\cpp\%1 		    mkdir ..\..\_tests\cpp\%1
IF NOT EXIST ..\..\_tests\javascript\%1 	mkdir ..\..\_tests\javascript\%1
IF NOT EXIST ..\..\_tests\python\%1 	    mkdir ..\..\_tests\python\%1
IF NOT EXIST ..\..\_tests\R\%1 				mkdir ..\..\_tests\R\%1

echo Creating stub files...

IF NOT EXIST ..\..\csharp\%1\%2.cs 	    copy /y NUL ..\..\csharp\%1\%2.cs &&       call csCode.bat		..\..\csharp\%1\%2.cs %2 %3
echo File "csharp\%1\%2.cs" created.
IF NOT EXIST ..\..\java\%1\%2.java 	    copy /y NUL ..\..\java\%1\%2.java &&       call javaCode.bat	..\..\java\%1\%2.java %2 %3
echo File "java\%1\%2.java" created.
IF NOT EXIST ..\..\cpp\%1\%2.cpp 		copy /y NUL ..\..\cpp\%1\%2.h	&&         call cppCodeH.bat	..\..\cpp\%1\%2.h %2 %3
echo File "cpp\%1\%2.h" created.
IF NOT EXIST ..\..\cpp\%1\%2.cpp 		copy /y NUL ..\..\cpp\%1\%2.cpp &&         call cppCodeC.bat	..\..\cpp\%1\%2.cpp %2 %3
echo File "cpp\%1\%2.cpp" created.
IF NOT EXIST ..\..\javascript\%1\%2.js 	copy /y NUL ..\..\javascript\%1\%2.js &&   call jsCode.bat		..\..\javascript\%1\%2.js %2 %3
echo File "javascript\%1\%2.js" created.
IF NOT EXIST ..\..\python\%1\%2.py 	    copy /y NUL ..\..\python\%1\%2.py  &&      call pythonCode.bat  ..\..\python\%1\%2.py %2 %3
echo File "python\%1\%2.py" created.
IF NOT EXIST ..\..\R\%1\%2.r 		    copy /y NUL ..\..\R\%1\%2.r &&             call rCode.bat		..\..\R\%1\%2.r %2 %3
echo File "R\%1\%2.r" created.

echo Creating stub tests...
IF NOT EXIST ..\..\_tests\csharp\%1\%2Test.cs 		copy /y NUL ..\..\_tests\csharp\%1\%2Test.cs &&        call csTest.bat ..\..\_tests\csharp\%1\%2Test.cs %2 %3
echo File "_tests\csharp\%1\%2Test.cs" created.
IF NOT EXIST ..\..\_tests\java\%1\%2Test.java 		copy /y NUL ..\..\_tests\java\%1\%2Test.java &&        call javaTest.bat ..\..\_tests\java\%1\%2Test.java %2 %3
echo File "_tests\java\%1\%2Test.java" created.
IF NOT EXIST ..\..\_tests\cpp\%1\%2Test.h	 		copy /y NUL ..\..\_tests\cpp\%1\%2Test.h &&		       call cppTestH.bat ..\..\_tests\cpp\%1\%2Test.h %2 %3
echo File "_tests\cpp\%1\%2Test.h" created.
IF NOT EXIST ..\..\_tests\cpp\%1\%2Test.cpp 		copy /y NUL ..\..\_tests\cpp\%1\%2Test.cpp &&          call cppTestC.bat ..\..\_tests\cpp\%1\%2Test.cpp %2 %3
echo File "_tests\cpp\%1\%2Test.cpp" created.
IF NOT EXIST ..\..\_tests\javascript\%1\%2Test.js 	copy /y NUL ..\..\_tests\javascript\%1\%2Test.js &&    call jsTest.bat ..\..\_tests\javascript\%1\%2Test.js %2 %3
echo File "_tests\javascript\%1\%2Test.js" created.
IF NOT EXIST ..\..\_tests\python\%1\%2Test.py 		copy /y NUL ..\..\_tests\python\%1\%2Test.py &&        call pythonTest.bat ..\..\_tests\python\%1\%2Test.py %2 %3
echo File "_tests\python\%1\%2Test.py" created.
IF NOT EXIST ..\..\_tests\R\%1\%2Test.r 	    	copy /y NUL ..\..\_tests\R\%1\%2Test.r &&              call rTest.bat ..\..\_tests\R\%1\%2Test.r %2 %3
echo File "_tests\R\%1\%2Test.r" created.

echo Done.