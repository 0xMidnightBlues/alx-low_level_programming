#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, brk;

	for (i = 0; s[i] != '\0'; i++)
	{
		brk = 1;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				brk = 0;
				break;
			}
		}
		if (brk == 1)
			break;
	}
	return (i);
}
