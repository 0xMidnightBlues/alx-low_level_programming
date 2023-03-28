#include "main.h"

/**
 * swap -  swaps the values of two integers.
 * @a: 1st pointer
 * @b: 2nd pointer
 * Return: northing
 */

void swap_int(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
