@echo off

import org.junit.Test;
import junit.framework.Assert;

public class %2Test {

	private %2 _instance;

	@SetUp
	public void Init() {
		_instance = new %2();
	}

	@Test
	public void stubTestFunc() {
		Assert.fail("not implemented");
	}
}