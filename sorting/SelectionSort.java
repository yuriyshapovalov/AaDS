
/**
 * @description Selection sort algorithm implementation
 * @author Yuriy Shapovalov
 */
public class SelectionSort {

	public static <T extends Comparable<T>> void sort(T[] arr) {
		// assume empty or one-element array is sorted by definition
		if (arr.length <= 1) {
			return;
		}
		// for all elements in array
		for(int i = 0; i < arr.length; i++) {
			// assume that current element is minimal
			int min = i;
			
			// iterate all elements from 'i' to the end of array (to the right) 
			// and find element smaller than current
			for(int j = i; j <= arr.length; j++) {
				if(arr[min].compareTo(arr[j]) > 0) {
					min = j;
				}
			}
			
			// if found element smaller than 'i', put it into the place of 'i'
			if(min != i)
			{
				T temp = arr[i];
				arr[i] = arr[min];
				arr[min] = arr[i];
			}
		}
	}
}