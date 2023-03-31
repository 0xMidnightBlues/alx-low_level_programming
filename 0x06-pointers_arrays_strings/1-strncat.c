#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: dest string
 * @src: src string
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	unsigned	int i;
	unsigned	int	j;

	j = 0;
	i = 0;
	i = ft_strlen(s1);
	while (s2[j] && j < n)
		s1[i++] = s2[j++];
	s1[i] = '\0';
	return (s1);
}
