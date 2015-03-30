using NUnit.Framework;
using AaDS.Sorting;
using AaDS.Helper;

[TestFixture]
[Ignore("Not implemented")]
public class PatienceSortTest
{
    private ISort<int> sorter;
    private DataProvider provider;
    private Validator validator;

    [SetUp]
    public void Init()
    {
        this.sorter = new PatienceSort<int>();
        this.provider = DataProvider.GetDataProvider();
        this.validator = Validator.GetValidator();
    }

    [Test]
    public void PatienceSort_RandomIntegerSequence_Success()
    {
        int[] temp = sorter.Sort((int[])provider.GetRandomData1K());

        if (!validator.ValidateOrder<int>(temp))
        {
            Assert.Fail();
        }
    }

    [Test]
    public void PatienceSort_EmptyArray_Success()
    {
        int[] temp = sorter.Sort((int[])provider.GetEmptyIntegerArray());

        if (!validator.ValidateOrder<int>(temp))
        {
            Assert.Fail();
        }
    }

    [Test]
    public void PatienceSort_OneElementArray_Success()
    {
        int[] temp = sorter.Sort((int[])provider.GetOneElementIntegerArray());

        if (!validator.ValidateOrder<int>(temp))
        {
            Assert.Fail();
        }
    }
}
