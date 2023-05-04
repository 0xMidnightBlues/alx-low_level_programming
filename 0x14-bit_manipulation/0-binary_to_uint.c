#include "main.h"

/**
 * binary_to_ret - function that converts a binary number to an unsigned int.
 * @b: pointer to the string of 0's and 1's
 * Return: an unsigned int number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ret;
	int len, binary;

	if (!b)
		return (0);

	ret = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, binary = 1; len >= 0; len--, binary *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			ret += binary;
		}
	}
	return (ret);
}

