
class MergeSort {

    public static <T extends Comparable<T>> void sort(T[] arr) {
        if(arr.length <= 1)
            return;
        T[] aux = (T[]) new Object[arr.length];
        sort(arr, 0, arr.length-1, aux);
    }

    private static <T extends Comparable<T>> void sort(T[] arr, int lo, int hi, T[] aux) {
        if (hi <= lo)
            return;
        int mid = (hi + lo) / 2;
        sort(arr, lo, mid, aux);
        sort(arr, mid+1, hi, aux);
        merge(arr, lo, mid, hi, aux);
    }

    private static <T extends Comparable<T>> void merge(T[] arr, int lo, int mid, int hi, T[] aux) {
        for(int i = lo; i <= hi; i++)
            aux[i] = arr[i];

        int i = lo, j = mid + 1;
        for (int k = lo; k <= hi; k++) {
            if (i > mid)
                arr[k] = aux[j++];
            else if(j > hi)
                arr[k] = aux[i++];
            else if (aux[i].compareTo(aux[j]) > 0)
                arr[k] = aux[j++];
            else
                arr[k] = aux[i++];
        }
    }
}