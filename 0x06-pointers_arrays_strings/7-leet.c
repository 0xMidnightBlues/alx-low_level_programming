#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @str: string to be encoded
 * Return: pointer to str
 */

char *leet(char *str)
{
	int i, j;
	char arr1[] = "aAeEoOtTlL";
	char arr2[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (arr1[j] == str[i])
				str[i] = arr2[j];
		}
	}
	return (str);
}
