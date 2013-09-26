@echo off

echo =================== BUILD PYTHON CODE ====================

REM MAKE A PACKAGES IN BUILD/BIN
IF NOT EXiST bin\python\AaDS\sorting mkdir bin\python\AaDS\sorting
IF NOT EXiST bin\python\AaDS\lists mkdir bin\python\AaDS\lists
IF NOT EXiST bin\python\AaDS\trees mkdir bin\python\AaDS\trees
IF NOT EXiST bin\python\AaDS\graph mkdir bin\python\AaDS\graph

copy /y NUL bin\python\AaDS\__init__.py

copy /y NUL bin\python\AaDS\sorting\__init__.py
copy /y NUL bin\python\AaDS\lists\__init__.py
copy /y NUL bin\python\AaDS\trees\__init__.py
copy /y NUL bin\python\AaDS\graph\__init__.py

copy ..\python\sorting\*.py bin\python\AaDS\sorting
copy ..\python\lists\*.py bin\python\AaDS\lists
copy ..\python\trees\*.py bin\python\AaDS\trees
copy ..\python\graph\*.py bin\python\AaDS\graph

REM RUN UNIT TESTS

echo ==================== PYTHON TEST RUN =====================
python ..\_tests\python\sorting\TestBatchSorting.py
