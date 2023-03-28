#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers, followed by a new line.
 * @a: array of int
 * @n: number of elements
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
		i++;
	}
		printf("\n");
}
