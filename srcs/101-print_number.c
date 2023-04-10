#include "main.h"

/**
 * print_number - that prints an integer
 *
 * @n: print int
 *
 * Return: void.
 */

void print_number(int n)
{
	unsigned long i = n;

	if (n < 0)
	{
		_putchar('-');
		i *= -1;
	}
	if (i / 10 != 0)
		print_number(i / 10);
	_putchar(i % 10 + '0');
}
