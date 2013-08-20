@echo off

echo.# %2>>%1
echo.# ... operation: O(n) ~ >>%1
echo.# >>%1
echo.%2 ^<- function(x, ...) UseMethod("%2")>> %1
echo.{>>%1
echo.	# function >>%1
echo.	%2.stubMethod ^<- function(x)>>%1
echo.	{}>>%1
echo.}>>%1