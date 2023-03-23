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

	y = num;
	z = 1;

	while (y > 9)
	{
		y /= 10;
		z *= 10;
	}

	for (; z >= 1; z /= 10)
		_putchar(((num / z) % 10) + 48);
}

