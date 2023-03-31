#include "main.h"

/**
 * _strcmp - compares strings.
 * @s1: dest string
 * @s1: src string
 * Return: int of the difference
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (1)
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
			return ((const unsigned char)s1[i] - (const unsigned char)s2[i]);
		else if (s1[i] == '\0' || s2[i] == '\0')
			return ((const unsigned char)s1[i] - (const unsigned char)s2[i]);
		i++;
	}
}
