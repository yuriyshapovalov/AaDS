using NUnit.Framework;
using AaDS.Sorting;
using AaDS.Helper;

[TestFixture]
[Ignore("Not implemented")]
public class AdaptiveSortTest
{
    private ISort<int> sorter;
    private DataProvider provider;
    private Validator validator;

    [SetUp]
    public void Init()
    {
        this.sorter = new AdaptiveSort<int>();
        this.provider = DataProvider.GetDataProvider();
        this.validator = Validator.GetValidator();
    }

    [Test]
    public void AdaptiveSort_RandomIntegerSequence_Success()
    {
        int[] temp = sorter.Sort((int[])provider.GetRandomData1K());

        if (!validator.ValidateOrder<int>(temp))
        {
            Assert.Fail();
        }
    }

    [Test]
    public void AdaptiveSort_EmptyArray_Success()
    {
        int[] temp = sorter.Sort((int[])provider.GetEmptyIntegerArray());

        if (!validator.ValidateOrder<int>(temp))
        {
            Assert.Fail();
        }
    }

    [Test]
    public void AdaptiveSort_OneElementArray_Success()
    {
        int[] temp = sorter.Sort((int[])provider.GetOneElementIntegerArray());

        if (!validator.ValidateOrder<int>(temp))
        {
            Assert.Fail();
        }
    }
}
