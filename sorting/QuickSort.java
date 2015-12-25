
class QuickSort {

    public static <T extends Comparable<T>> void sort(T[] arr) {
        if (arr.length <= 1) {
            return;
        }
        sort(arr, 0, arr.length-1);
    }

    private static <T extends Comparable<T>> void sort(T[] arr, int lo, int hi) {
        if(hi <= lo)
            return;

        int j = partition(arr, lo, hi);
        sort(arr, lo, j-1);
        sort(arr, j+1, hi);
    }

    private static <T extends Comparable<T>> int partition(T[] arr, int lo, int hi) {
        int i = lo;
        int j = hi+1;
        while (true) {
            while (arr[++i].compareTo(arr[lo]) < 0) {
                if (i == hi)
                    break;
            }
            while(arr[--j].compareTo(arr[lo]) > 0) {
                if (j == lo)
                    break;
            }
            if (i >= j)
                break;
            exch(arr, i, j);
        }
        exch(arr, lo, j);

        return j;
    }

    private static <T> void exch(T[] arr, int i, int j) {
        T swap = arr[i];
        arr[i] = arr[j];
        arr[j] = swap;
    }
}