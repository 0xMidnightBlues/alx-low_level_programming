#include "main.h"

/**
 * _strncopy - copies strings.
 * @dest: dest string
 * @src: src string
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	unsigned	int	i;
	char			*arr;

	i = 0;
	arr = dst;
	while (*src && i < n)
	{
		*dst = *src;
		src++;
		dst++;
		i++;
	}
	while (i < n)
	{
		*dst = '\0';
		dst++;
		i++;
	}
	return (arr);
}
