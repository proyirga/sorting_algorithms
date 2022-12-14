#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending
 * * order using the Bubble sort algorithm
 * @array: array to be sorted
 * @size:- size of the array
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;

	for (i = 0; i <= size-1; i++)
	{
		size_t j;

		for (j = 0; j <= size-2; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}

	}
}
