#include "sort.h"

/**
 * swap - Swap two integers in an array.
 * @arr_n: The first integer to swap.
 * @arr_n1: The second integer to swap.
 */
void swap(int *arr_n, int *arr_n1)
{
	int tmp;

	tmp = *arr_n;
	*arr_n = *arr_n1;
	*arr_n1 = tmp;
}

/**
 * selection_sort - Sort an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array + i) != min)
		{
			swap(array + i, min);
			print_array(array, size);
		}
	}
}
