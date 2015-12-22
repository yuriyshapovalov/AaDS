package algorithms-java.sorting;

/**
 * @description Selection sort algorithm implementation
 * @author Yuriy Shapovalov
 */
class SelectionSort<T> implements ISort<T> {
	public int[] sort(int[] array) {
		// for all elements in array
		for(int i = 0; i < array.length; i++) {
			
			// assume that current element is minimal
			int min = i;
			
			// iterate all elements from 'i' to the end of array (to the right) 
			// and find element smaller than current
			for(int j = i; j <= array.length; j++) {
				if(array[min] > array[j]) {
					min = j;
				}
			}
			
			// if found element smaller than 'i', need to put it into the place of 'i'
			if(min != i)
			{
				int temp = array[i];
				array[i] = array[min];
				array[min] = array[i];
			}
		}
		// return sorted array
		return array;
	}
}