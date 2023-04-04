#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @s: string to search
 * @c: char to find
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */
 
char	*ft_strchr(const char *s, int c)
{
	int		index;

	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] == (char)c)
			return ((char*)(s + index));
		index++;
	}
	if (c == '\0')
		return ((char*)(s + index));
	return (NULL);
}
