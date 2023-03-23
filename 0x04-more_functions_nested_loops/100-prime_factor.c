#include <stdio.h>

/**
 * main - entry point.
 *
 * Return: Always 0.
 */

int main(void)
{
	long a = 612852475143, b;

	for (b = 2; b < a; b++)
	{
		while (a % b == 0)
			a = a / b;
	}

	printf("%ld\n", a);
	return (0);
}
