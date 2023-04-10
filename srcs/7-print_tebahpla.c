#include <stdio.h>

/**
 * main - rints the lowercase alphabet in reverse, followed by a new line.
 *
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
		putchar(c--);
	putchar('\n');

	return (0);
}

