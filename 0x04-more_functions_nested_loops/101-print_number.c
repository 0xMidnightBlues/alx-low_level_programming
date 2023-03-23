#include "main.h"

/**
 * print_number - that prints an integer
 *
 * @a: print int
 *
 * Return: Always 0.
 */

void print_number(int a)
{
	unsigned long num, x, y;

	if (a < 0)
	{
		_putchar(45);
		num = a * -1;
	}
	else
		num = a;

	x = num;
	y = 1;

	while (x > 9)
	{
		x /= 10;
		y *= 10;
	}

	for (; y >= 1; y /= 10)
		_putchar(((num / y) % 10) + 48);
}

