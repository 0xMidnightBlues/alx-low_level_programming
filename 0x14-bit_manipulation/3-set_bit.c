#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at an index.
 * @n: the input number
 * @index: the input index
 * Return: 1 if works if failure -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 0;

	if (index > 63)
		return (-1);

	mask = 1 << index;
	*n = *n | mask;
	return (1);
}
