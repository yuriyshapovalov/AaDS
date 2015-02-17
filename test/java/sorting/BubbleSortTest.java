import org.junit.Test;

public class BubbleSortTest {
	DataProvider provider = DataProvider.GetDataProvider();
	
	@Test
	public void TestRandomData() {
		BubbleSort sorter = new BubbleSort();
		
		int[] randomArray = provider.GetRandomData1K();
		int[] sortedArray = sorter.sort();
		
		Assert.AreEqual(sortedArray.Length, randomArray.Length)
		
		for(int i = 0; i < sortedArray; i++) {
			if(sortedArray[i] > sortedArray[i+1]) {
				Assert.Fail();
			}
		}
	}
}