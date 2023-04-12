#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initi it with the char c.
 * @size: size of the array
 * @c: char to init the array with
 *
 * Return: array created
 */

char *create_array(unsigned int size, char c)
{
	unsigned    int i = 0;
	char            *array;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (!array)
		return (NULL);
	while (i < size)
	{
		array[i] = c;
		i++;
	}

	return (array);
}

