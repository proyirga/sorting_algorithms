#include "sort.h"

/**
 * swap_ints - swaps given ints
 * @x: given int 1
 * @y: given int 2
 */

void swap_ints(int *x, int *y)
{
        int tmp;

        tmp = *x;
        *x = *y;
        *y = tmp;
}

/**
 * shell_sort - Sort an array of integers in ascending
 * **order using the shell sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Uses the Knuth interval sequence.
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, i, j;

	if (array == NULL || size < 2)
		return;

	for (gap = 1; gap < (size / 3);)
		gap = gap * 3 + 1;

	for (; gap >= 1; gap /= 3)
	{
		for (i = gap; i < size; i++)
		{
			j = i;
			while (j >= gap && array[j - gap] > array[j])
			{
				swap_ints(array + j, array + (j - gap));
				j -= gap;
			}
		}
		print_array(array, size);
	}
}
