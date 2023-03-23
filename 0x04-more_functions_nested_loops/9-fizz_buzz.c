#include <stdio.h>

/**
 * main - entry point
 *
 * Return: void
 */

void main(void)
{
	int a = 100, b = 1;

	while (b <= a)
	{
		if (b % 3 == 0 && b % 5 == 0)
			printf("FizzBuzz ");

		else if (b % 3 == 0)
			printf("Fizz ");

		else if (b % 5 == 0)
		{
			if (b < a)
				printf("Buzz ");
			else
				printf("Buzz");
		}

		else
			printf("%i ", b);

		b++;

	}
	printf("\n");
}

