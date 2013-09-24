@echo off

echo =================== BUILD PYTHON CODE ====================

REM !! Update Pythonpath to add link to bin\AaDS
REM MAKE A PACKAGES IN BUILD/BIN
IF NOT EXiST bin\python\AaDS\sorting mkdir bin\python\AaDS\sorting
copy /y NUL bin\python\AaDS\__init__.py
copy /y NUL bin\python\AaDS\sorting\__init__.py
copy ..\sorting\python\*.py bin\python\AaDS\sorting

REM MAKE A PACKAGE INSIDE TESTS
REM IF NOT EXiST ..\_tests\sorting\python\bin mkdir ..\_tests\sorting\python\bin
REM copy /y NUL ..\_tests\sorting\python\bin\__init__.py
REM copy ..\sorting\python\*.py ..\_tests\sorting\python\bin

REM RUN UNIT TESTS

python ..\_tests\sorting\python\SortingTestsBatch.py
