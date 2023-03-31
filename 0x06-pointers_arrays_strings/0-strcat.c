#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: dest string
 * @src: src string
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		j++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
