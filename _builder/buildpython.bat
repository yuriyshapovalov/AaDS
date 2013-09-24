@echo off

echo =================== BUILD PYTHON CODE ====================

REM MAKE A PACKAGES IN BUILD/BIN
IF NOT EXiST bin\python\sorting mkdir bin\python\sorting
copy /y NUL bin\python\sorting\__init__.py
copy ..\sorting\python\*.py bin\python\sorting

REM MAKE A PACKAGE INSIDE TESTS
IF NOT EXiST ..\_tests\sorting\python\bin mkdir ..\_tests\sorting\python\bin
copy /y NUL ..\_tests\sorting\python\bin\__init__.py
copy ..\sorting\python\*.py ..\_tests\sorting\python\bin

REM RUN UNIT TESTS

python ..\_tests\sorting\python\BubbleSortTest.py
