package algorithms.sorting;

interface ISort<T extends Comparable<T>> {
    T[] sort (T[] array);
}