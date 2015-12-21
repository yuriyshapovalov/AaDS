package AaDS.Sorting;

public interface ISort<T extends Comparable<T>> {
    T[] sort (T[] array);
}