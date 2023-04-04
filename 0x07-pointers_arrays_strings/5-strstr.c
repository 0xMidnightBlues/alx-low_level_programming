#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
 */

char	*_strstr(char *haystack, char *needle)
{
	int		j;
	char	*t;

	while (*haystack != '\0')
	{
		t = haystack;
		j = 0;
		while (*haystack == needle[j] && needle[j] != '\0')
		{
			haystack++;
			j++;
		}
		if (needle[j] == '\0')
			return (t);
		haystack = t + 1;
	}
	if (haystack[0] == '\0' && needle[0] == '\0')
		return (haystack);
	return (0);
}