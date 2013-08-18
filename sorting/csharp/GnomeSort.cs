using System;

namespace AaDS.Sorting
{
    /// <summary>
    /// Gnome sort algorithm
    ///  Θ(n) ~ ____
    /// </summary>
    public class GnomeSort<T> : ISort<T> where T : IComparable, new()
    {
        public T[] Sort(T[] array)
        {
            // not implemented
            return array;
        }
    }
}
