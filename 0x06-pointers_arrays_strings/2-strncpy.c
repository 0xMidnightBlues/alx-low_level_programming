#include "main.h"

/**
 * _strncopy - copies strings.
 * @dest: dest string
 * @src: src string
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int		i;
	char	*arr;

	i = 0;
	arr = dest;
	while (*src && i < n)
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}
	return (arr);
}
