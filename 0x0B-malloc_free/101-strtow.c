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
	int	i = 0, j = 0, k = 0, len, word_len;

	len = countwords(str);
	if (!str || len == 0)
		return (NULL);
	tab = malloc(sizeof(char *) * (len));
	if (!(tab))
		return (NULL);
	while (i < len)
	{
		word_len = 0;
		while (str[k] == ' ')
        		k++;
		while (str[k] != '\0' && str[k] != ' ')
		{
			word_len++;
			k++;
		}
		tab[i] = malloc(sizeof(char) * word_len + 1);
		if (!tab[i])
			return (NULL);
		i++;	
	}
	k = 0;
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
