@echo off

echo.import unittest>>%1
echo.>>%1
echo.class %2Test(unittest.TestCase):>>%1
echo.>>%1
echo.	# def setUp(self):>>%1
echo.>>%1
echo.	def test_%2Stub(self):>>%1
echo.		self.failIf(True)>>%1
echo.>>%1
echo.if __name__ == "__main__":>>%1
echo.	unittest.main()>>%1