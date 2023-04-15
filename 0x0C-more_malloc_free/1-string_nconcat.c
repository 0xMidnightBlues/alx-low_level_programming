#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: numbers of characters from s2 to concat
 *
 * Return: new allocated space in memory of s1, followed by the first n bytes of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char    *ret;
	unsigned int     i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0' && j < n)
		j++;
	ret = malloc(sizeof(char) * (i + j) + 1);
	if (!(ret))
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		ret[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0' && j < n)
	{
		ret[i + j] = s2[j];
		j++;
	}

	return (ret);
}
