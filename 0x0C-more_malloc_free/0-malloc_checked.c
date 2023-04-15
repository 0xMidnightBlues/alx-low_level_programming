#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: size of memory to be allocated
 *
 * Return: Returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void	*ret;

	ret = malloc(b);
	if (!ret)
		exit(98);
	return (ret);
}
