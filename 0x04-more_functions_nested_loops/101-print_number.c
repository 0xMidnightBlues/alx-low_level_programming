#include "main.h"

/**
 * print_number - that prints an integer
 *
 * @a: print int
 *
 * Return: Always 0.
 */

void print_number(int n)
{
	unsigned long num = n;

	if(n < 0)
	{
		_putchar('-');
		i *= -1;
	}
	if (i / 10 != 0)
		print_number(i / 10);
	_putchar(i % 10 + '0');
}
