@echo off
echo Creating stubs..

IF EXIST ..\%1 goto makesubfolders

mkdir ..\%1
mkdir ..\_tests\%1

:makesubfolder

IF NOT EXIST ..\..\%1\csharp 	    mkdir ..\..\%1\csharp
IF NOT EXIST ..\..\%1\java 			mkdir ..\..\%1\java
IF NOT EXIST ..\..\%1\cpp 		    mkdir ..\..\%1\cpp
IF NOT EXIST ..\..\%1\javascript 	mkdir ..\..\%1\javascript
IF NOT EXIST ..\..\%1\python 	    mkdir ..\..\%1\python
IF NOT EXIST ..\..\%1\R 		    mkdir ..\..\%1\R

IF NOT EXIST ..\..\_tests\%1\csharp 	    mkdir ..\..\_tests\%1\csharp
IF NOT EXIST ..\..\_tests\%1\java 		    mkdir ..\..\_tests\%1\java
IF NOT EXIST ..\..\_tests\%1\cpp 		    mkdir ..\..\_tests\%1\cpp
IF NOT EXIST ..\..\_tests\%1\javascript 	mkdir ..\..\_tests\%1\javascript
IF NOT EXIST ..\..\_tests\%1\python 	    mkdir ..\..\_tests\%1\python
IF NOT EXIST ..\..\_tests\%1\R 				mkdir ..\..\_tests\%1\R

echo Creating stub files...

IF NOT EXIST ..\..\%1\csharp\%2.cs 	    copy /y NUL ..\..\%1\csharp\%2.cs &&       call csCode.bat		..\..\%1\csharp\%2.cs %2 %3
IF NOT EXIST ..\..\%1\java\%2.java 	    copy /y NUL ..\..\%1\java\%2.java &&       call javaCode.bat	..\..\%1\java\%2.java %2 %3
IF NOT EXIST ..\..\%1\cpp\%2.cpp 		copy /y NUL ..\..\%1\cpp\%2.h	&&         call cppCodeH.bat	..\..\%1\cpp\%2.h %2 %3
IF NOT EXIST ..\..\%1\cpp\%2.cpp 		copy /y NUL ..\..\%1\cpp\%2.cpp &&         call cppCodeC.bat	..\..\%1\cpp\%2.cpp %2 %3
IF NOT EXIST ..\..\%1\javascript\%2.js 	copy /y NUL ..\..\%1\javascript\%2.js &&   call jsCode.bat		..\..\%1\javascript\%2.js %2 %3
IF NOT EXIST ..\..\%1\python\%2.py 	    copy /y NUL ..\..\%1\python\%2.py  &&      call pythonCode.bat  ..\..\%1\python\%2.py %2 %3
IF NOT EXIST ..\..\%1\R\%2.r 		    copy /y NUL ..\..\%1\R\%2.r &&             call rCode.bat		..\..\%1\R\%2.r %2 %3


IF NOT EXIST ..\..\_tests\%1\csharp\%2Test.cs 		copy /y NUL ..\..\_tests\%1\csharp\%2Test.cs &&        call csTest.bat ..\..\_tests\%1\csharp\%2Test.cs %2 %3
IF NOT EXIST ..\..\_tests\%1\java\%2Test.java 		copy /y NUL ..\..\_tests\%1\java\%2Test.java &&        call javaTest.bat ..\..\_tests\%1\java\%2Test.java %2 %3
IF NOT EXIST ..\..\_tests\%1\cpp\%2Test.h	 		copy /y NUL ..\..\_tests\%1\cpp\%2Test.h &&		       call csTestH.bat ..\..\_tests\%1\cpp\%2Test.h %2 %3
IF NOT EXIST ..\..\_tests\%1\cpp\%2Test.cpp 		copy /y NUL ..\..\_tests\%1\cpp\%2Test.cpp &&          call csTestC.bat ..\..\_tests\%1\cpp\%2Test.cpp %2 %3
IF NOT EXIST ..\..\_tests\%1\javascript\%2Test.js 	copy /y NUL ..\..\_tests\%1\javascript\%2Test.js &&    call jsTest.bat ..\..\_tests\%1\javascript\%2Test.js %2 %3
IF NOT EXIST ..\..\_tests\%1\python\%2Test.py 		copy /y NUL ..\..\_tests\%1\python\%2Test.py &&        call pythonTest.bat ..\..\_tests\%1\python\%2Test.py %2 %3
IF NOT EXIST ..\..\_tests\%1\R\%2Test.r 	    	copy /y NUL ..\..\_tests\%1\R\%2Test.r &&              call rTest.bat ..\..\_tests\%1\R\%2Test.r %2 %3

echo Done.


