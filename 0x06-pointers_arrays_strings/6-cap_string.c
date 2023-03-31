#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: string to be capitalized
 * Return: pointer to str
 */

char *cap_string(char *str)
{
	int i = 0, j;
	char separators[] = " \t\n,;.!?\"(){}";

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[i] -= 32;
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (separators[j] == str[i - 1])
						str[i] -= 32;
				}
			}
		}
		i++;
	}
	return (str);
}
