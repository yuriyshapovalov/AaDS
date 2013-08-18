using System;

namespace AaDS.Sorting
{
    /// <summary>
    /// Library sort algorithm
    ///  Θ(n) ~ ____
    /// </summary>
    public class LibrarySort<T> : ISort<T> where T : IComparable, new()
    {
        public T[] Sort(T[] array)
        {
            // not implemented
            return array;
        }
    }
}
