
public class InsertionSort {
    
    public static <T extends Comparable<T>> void sort(T[] arr) {
        // assume empty or one-element array is sorted by definition
        if (arr.length <= 1) {
            return;
        }

        for (int i = 1; i < arr.length; i++) {
            int k = i;
            while(k > 0) {
                if (arr[k].compareTo(arr[k-1]) < 0) {
                    T temp = arr[k];
                    arr[k] = arr[k-1];
                    arr[k-1] = temp;
                }
                k--;
            }
        }
    }
}