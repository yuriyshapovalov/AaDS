using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Sorting.Algorithms
{
    /// <summary>
    /// Bubble sort algorithm
    ///  Θ(n) ~ N^2
    /// </summary>
    public class BubbleSort : ISortingAlgorithm
    {
        int[] ISortingAlgorithm.sort(int[] array)
        {
            bool clear = false;
            while (!clear)
            {
                clear = true;

                for (int i = 0; i < array.Length - 1; i++)
                {
                    if (array[i] > array[i + 1])
                    {
                        clear = false;

                        int temp = array[i];
                        array[i] = array[i + 1];
                        array[i + 1] = temp;
                    }
                }
            }
            return array;
        }
    }
}
