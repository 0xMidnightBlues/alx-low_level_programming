#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,
 *
 * from 0 to 14
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int a = 0, result = 0, firstnum, secondnum;

	while (a < 10)
	{
		while (result <= 14)
		{
			if (result < 10)
			{
				secondnum = result;
			}

			else
			{
				firstnum = result / 10;
				secondnum = result % 10;
				_putchar (firstnum + '0');
			}

			_putchar (secondnum + '0');

			result++;
		}
		a++;
		result = 0;
		_putchar ('\n');
	}

}

