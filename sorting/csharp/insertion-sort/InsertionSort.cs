using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Sorting.Algorithms
{
    /// <summary>
    /// Insertion sort algorithm
    ///  Θ(n) ~ N^2
    /// </summary>
    public class InsertionSort : ISortingAlgorithm
    {
        int[] ISortingAlgorithm.sort(int[] array)
        {
            // for all elements in array
            for (int i = 0; i < array.Length; i++)
            {
                // select element under cursor
                int element = array[i];

                // go from 'i' cursor in reverse order 
                int j = i - 1;
                for (;j >= 0 && array[j] > element; j--)
                {
                    array[j + 1] = array[j];
                }
                array[j + 1] = element;
            }
            return array;
        }
    }
}
