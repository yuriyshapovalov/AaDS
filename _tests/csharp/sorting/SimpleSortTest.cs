using NUnit.Framework;
using AaDS.Sorting;
using AaDS.DataProvider;

[TestFixture]
public class SimpleSortTest
{
	// private SimpleSort _testInstance;
	private DataProvider _provider;

	[SetUp]
	public void Init()
	{
		// this._testInstance = new SimpleSort();
		this._provider = DataProvider.GetDataProvider();
	}

	// remove it after real code will be created
	[Test]
	public void AlwaysFailedTestStub()
	{
		Assert.Fail();
	}
}
