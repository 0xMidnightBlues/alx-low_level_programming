#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: dest string
 * @src: src string
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] && j < n)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
