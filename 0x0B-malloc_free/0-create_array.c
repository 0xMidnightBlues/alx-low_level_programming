#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char.
 * @size: size of the array
 * @c: char to init the array with
 *
 * Return: array created
 */

char *create_array(unsigned int size, char c)
{
    if (size == 0)
        return (NULL);
    char            *array;
    unsigned    int i = 0;

    array = malloc(sizeof(char) * size + 1);
    if (!array)
        return (NULL);
    while (i < size)
    {
        array[i] = c;
        i++;
    }
    
    return (array);
}
