#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: arguments count
 * @av: arguments array
 *
 * Return: string that concatenates all the arguments
 */
char *argstostr(int ac, char **av)
{
	int	i = 0, j, len_sum = 0;
	char	*ret;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			j++;
		}
		len_sum += j;
		i++;
	}
	ret = malloc(sizeof(char) * len_sum + ac + 1);
	if (!ret)
		return (NULL);
	i = 0;
	len_sum = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			ret[len_sum + j] = av[i][j];
			j++;
		}
		ret[len_sum + j++] = '\n';
		len_sum += j;
		i++;
	}
	return (ret);
}
