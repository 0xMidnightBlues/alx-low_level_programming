#include "main.h"

/**
 *  -  copies the string pointed to by src, including 
 * the terminating null byte (\0), to dest.
 * @dest: destination string,
 * @src: source string,
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;
	i = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
