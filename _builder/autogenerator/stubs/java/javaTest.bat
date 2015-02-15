@echo off

echo.import org.junit.Test;>>%1
echo.import junit.framework.Assert;>>%1
echo.>>%1
echo.public class %2Test {>>%1
echo.>>%1
echo.	private %2 _instance;>>%1
echo.>>%1
echo.	@SetUp>>%1
echo.	public void Init() {>>%1
echo.		_instance = new %2();>>%1
echo.	}>>%1
echo.>>%1
echo.	@Test>>%1
echo.	public void stubTestFunc() {>>%1
echo.		Assert.fail("not implemented");>>%1
echo.	}>>%1
echo.}>>%1