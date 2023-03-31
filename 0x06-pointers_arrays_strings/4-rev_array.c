#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: int array
 * @n: length
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	i = 0;
	while (i < n / 2)
	{
		tmp = a[n - i];
		a[n - i] = a[i];
		a[i] = tmp;
		i++;
	}
}
