#include "sort.h"

/**
 * swap_ints - swaps two integers.
 * @x: given integer 1.
 * @y: given second integer 2.
 */

void swap_ints(int *x, int *y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}
