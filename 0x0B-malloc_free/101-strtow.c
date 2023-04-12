#include <stdlib.h>
/**
 * countwords - count the words in a str.
 * @s: string
 *
 * Return: word count
 */
static	int	countwords(char const *s)
{
	int	counter;
	int	index;

	counter = 0;
	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] != ' ' && (s[index + 1] == ' ' || s[index + 1] == '\0'))
			counter++;
		index++;
	}
	return (counter);
}

/**
 * strtow - splits a string into words.
 * @str: string to be splitted
 *
 * Return: pointer to an array that contain words
 */
char **strtow(char *str)
{
	char	**tab;
	int	i = 0, j = 0, k = 0, len = 0;

	if (!str)
		return (NULL);
	if (!(tab = (char **)malloc(sizeof(char *) * (countwords(str) + 1))))
		return (NULL);
	while (str[len] != '\0')
		len++;
	while (i < countwords(str))
		tab[i++] = (char *)malloc(len + 1);
	i = 0;
	while (str[j] != '\0')
	{
		while (str[j] != ' ' && str[j] != '\0')
			tab[i][k++] = str[j++];
		if (k != 0)
			tab[i++][k] = '\0';
		else
			j++;
		k = 0;
	}
	tab[i] = 0;
	return (tab);
}
