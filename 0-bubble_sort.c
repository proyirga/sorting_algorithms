#include "sort.h"

/**
 * swap - swap elements of a list
 * @arr_n: value given at n point of a list
 * @arr_n1: value at n + 1
 */

void swap(int *arr_n, int *arr_n1)
{
	int tmp = *arr_n;
	*arr_n = *arr_n1;
	*arr_n1 = tmp;
}
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
	size_t i, j;

	for (i = 0; i <= size; i++)
	{
		if (array == NULL || size < 2)
			return;

		for (j = 0; j <= size - 2; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}

	}
}
