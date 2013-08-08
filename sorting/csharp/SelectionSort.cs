namespace Sorting.Algorithms
{
    /// <summary>
    /// Selection sort algorithm
    ///  Θ(n) ~ N^2
    /// </summary>
    public class SelectionSort : ISortingAlgorithm
    {
        public int[] sort(int[] array)
        {
            // for all elements in array
            for(int i = 0; i <= array.Length; i++)
            {
                // assume that element under cursor element is minimal 
                // (everything left should be already sorted)
                int min = i; 

                // for all following elements after cursor (find the minimal in sub array)
                for(int j = i; j < array.Length; j++)
                {
                    // if element on 'j' position is less that element on 'min' position
                    if(array[min] > array[j])
                        // change reference to 'min' position
                        min = j;
                }

                // if current element 'i' is not minimal
                if(min != i)
                {
                    // change value of current element and minimal element
                    int temp = array[i];
                    array[i] = array[min];
                    array[min] = temp;
                }       
            }
            // array should be completely sorted here!
            return array;
        }
    }
}
