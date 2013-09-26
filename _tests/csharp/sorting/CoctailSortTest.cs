using NUnit.Framework;
using AaDS.Sorting;
using AaDS.DataProvider;

[TestFixture]
public class CoctailSortTest
{
    private ISort<int> sorter;
    public DataProvider provider;

    [SetUp]
    public void Init()
    {
        this.sorter = new CoctailSort<int>();
        this.provider = DataProvider.GetDataProvider();
    }

    [Test]
    public void Sort_CoctailSortSimpleIntegerArray_Success()
    {
        int[] temp = sorter.Sort((int[])provider.GetRandomData1K());

        for (int i = 0; i < temp.Length - 1; i++)
        {
            if (temp[i] > temp[i + 1])
            {
                Assert.Fail();
            }
        }
    }

    [Test]
    public void Sort_EmptyArray_Success()
    {
        int[] temp = sorter.Sort((int[])provider.GetEmptyIntegerArray());

        if (!ValidateCorrectOrder(temp))
        {
            Assert.Fail();
        }
    }

    [Test]
    public void Sort_OneElementArray_Success()
    {
        int[] temp = sorter.Sort((int[])provider.GetOneElementIntegerArray());

        if (!ValidateCorrectOrder(temp))
        {
            Assert.Fail();
        }
    }

    private bool ValidateCorrectOrder(int[] array)
    {
        for (int i = 0; i < array.Length - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                return false;
            }
        }
        return true;
    }
}
