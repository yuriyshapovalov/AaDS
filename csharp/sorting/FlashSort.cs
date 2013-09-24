using System;

namespace AaDS.Sorting
{
    /// <summary>
    /// Flash sort algorithm
    ///  Θ(n) ~ ____
    /// </summary>
    public class FlashSort<T> : ISort<T> where T : IComparable, new()
    {
        public T[] Sort(T[] array)
        {
            // not implemented
            return array;
        }
    }
}
