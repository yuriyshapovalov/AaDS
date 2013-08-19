@echo off
echo Creating stubs..

IF EXIST ..\%1 goto makesubfolders

mkdir ..\%1
mkdir ..\_tests\%1

:makesubfolder

IF NOT EXIST ..\%1\csharp 	mkdir ..\%1\csharp
IF NOT EXIST ..\%1\java 	mkdir ..\%1\java
IF NOT EXIST ..\%1\cpp 		mkdir ..\%1\cpp
IF NOT EXIST ..\%1\javascript 	mkdir ..\%1\javascript
IF NOT EXIST ..\%1\python 	mkdir ..\%1\python
IF NOT EXIST ..\%1\R 		mkdir ..\%1\R

IF NOT EXIST ..\_tests\%1\csharp 	mkdir ..\_tests\%1\csharp
IF NOT EXIST ..\_tests\%1\java 		mkdir ..\_tests\%1\java
IF NOT EXIST ..\_tests\%1\cpp 		mkdir ..\_tests\%1\cpp
IF NOT EXIST ..\_tests\%1\javascript 	mkdir ..\_tests\%1\javascript
IF NOT EXIST ..\_tests\%1\python 	mkdir ..\_tests\%1\python
IF NOT EXIST ..\_tests\%1\R 		mkdir ..\_tests\%1\R

echo Creating stub files...

IF NOT EXIST ..\%1\csharp\%2.cs 	copy /y NUL ..\%1\csharp\%2.cs && call ../autofill/csCode.bat 
IF NOT EXIST ..\%1\java\%2.java 	copy /y NUL ..\%1\java\%2.java
IF NOT EXIST ..\%1\cpp\%2.cpp 		copy /y NUL ..\%1\cpp\%2.cpp
IF NOT EXIST ..\%1\javascript\%2.js 	copy /y NUL ..\%1\javascript\%2.js
IF NOT EXIST ..\%1\python\%2.py 	copy /y NUL ..\%1\python\%2.py
IF NOT EXIST ..\%1\R\%2.r 		copy /y NUL ..\%1\R\%2.r


IF NOT EXIST ..\_tests\%1\csharp\%2.cs 		copy /y NUL ..\_tests\%1\csharp\%2Test.cs
IF NOT EXIST ..\_tests\%1\java\%2.java 		copy /y NUL ..\_tests\%1\java\%2Test.java
IF NOT EXIST ..\_tests\%1\cpp\%2.cpp 		copy /y NUL ..\_tests\%1\cpp\%2Test.cpp
IF NOT EXIST ..\_tests\%1\javascript\%2.js 	copy /y NUL ..\_tests\%1\javascript\%2Test.js
IF NOT EXIST ..\_tests\%1\python\%2.py 		copy /y NUL ..\_tests\%1\python\%2Test.py
IF NOT EXIST ..\_tests\%1\R\%2.r 		copy /y NUL ..\_tests\%1\R\%2Test.r

echo Done.


