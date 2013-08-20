@echo off

echo.# %2 tests>>%1
echo.test.test_%2_methodStub ^<- function(): >>%1
echo.{>>%1
echo.	# remove it after real code will be created>>%1
echo.	checkTrue(1 == 0) >>%1
echo.}>>%1
