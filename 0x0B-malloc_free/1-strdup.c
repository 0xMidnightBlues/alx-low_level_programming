#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to allocate space in memory
 *
 * Return: a pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	char    *ret;
	int     i = 0;

	if (!str)
	{
		return (NULL);
	}
	while (str[i] != '\0')
		i++;
	ret = malloc(sizeof(char) * i + 1);
	if (!(ret))
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		ret[i] = str[i];
		i++;
	}
	return (ret);
}

