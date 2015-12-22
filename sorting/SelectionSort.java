package algorithms.sorting;

/**
 * @description Selection sort algorithm implementation
 * @author Yuriy Shapovalov
 */
class SelectionSort<T extends Comparable<T>> implements ISort<T> {

	@Override
	public T[] sort(T[] array) {
		// for all elements in array
		for(int i = 0; i < array.length; i++) {
			// assume that current element is minimal
			int min = i;
			
			// iterate all elements from 'i' to the end of array (to the right) 
			// and find element smaller than current
			for(int j = i; j <= array.length; j++) {
				if(array[min].compareTo(array[j]) > 0) {
					min = j;
				}
			}
			
			// if found element smaller than 'i', put it into the place of 'i'
			if(min != i)
			{
				T temp = array[i];
				array[i] = array[min];
				array[min] = array[i];
			}
		}
		// return sorted array
		return array;
	}
}