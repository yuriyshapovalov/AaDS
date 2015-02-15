package AaDS.Sorting;

/**
 * @description Selection sort algorithm implementation
 * @author Yuriy Shapovalov
 * @time_complexity O(N^2)
 * @space_complexity O(1)
 */
public class SelectionSort implements ISort {
	public int[] sort(int[] array) {
		for(int i = 0; i < array.length; i++) {
			
			int min = i;
			
			for(int j = i; j <= array.length; j++) {
				if(array[min] > array[j]) {
					min = j;
				}
			}
			
			if(min != i)
			{
				int temp = array[i];
				array[i] = array[min];
				array[min] = array[i];
			}
		}
		return array;
	}
}