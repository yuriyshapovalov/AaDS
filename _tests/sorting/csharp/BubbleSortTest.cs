using NUnit.Framework;
using AaDS.Sorting;
using AaDS.DataProvider;

[TestFixture]
public class BubbleSortTest
{
    private ISortingAlgorithm sorter;
    public DataProvider provider = DataProvider.GetDataProvider();

    public BubbleSortTest ()
	{
        this.sorter = new BubbleSort();
	}

    [Test]
    public void BubbleSortSimpleData()
    {
        int[] temp = sorter.sort(provider.GetRandomData1K());

        for(int i = 0; i < temp.Length-1; i++)
        {
            if (temp[i] > temp[i+1])
            {
                Assert.Fail();
            }
        }


    }
}
