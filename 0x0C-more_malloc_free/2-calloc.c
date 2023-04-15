#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of array elements
 * @size: size of bytes to be allocated
 *
 * Return: 0 if nmemb or size is 0 or malloc fails, otherwise
 * return a pointer to the allocated array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void	*ret;

	if (nmemb == 0 || size == 0)
		return (NULL);
	
	ret = malloc(nmemb * size);
	if (!ret)
		return (NULL);
	return (ret);
}
