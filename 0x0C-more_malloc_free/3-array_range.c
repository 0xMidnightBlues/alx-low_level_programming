#include <stdlib.h>


/**
 * array_range - creates an array of integers.
 * @min: start of array
 * @max: end of array
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int	i = 0, start = min;
	int	*array;

	if (max < min)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	if (!array)
		return (NULL);
	
	while (i < max - min + 1)
		array[i++] = start++;
	
	return (array);
}
