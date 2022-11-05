#include "sort.h"

/**
 * selection_sort - sorts an array of integers in 
 * *ascending order using the Selection sort algorithm
 * @array: given array
 * @size: given size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i <= size-2; i++)
	{
		min_index = i;
		for (j = i + 1; j <= size-1; j++)
		{
			if (array[j] < array[min_index])
				min_index = j;
		}
		if (min_index != i)
		{
			int temp;
                        temp = array[min_index];
                        array[min_index] = array[i];
                        array[i] = temp;
	                print_array(array, size);
                }
	}
}
