#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char.
 * @size: size of the array
 * @c: char to init the array with
 *
 * Return: 
 */

char *create_array(unsigned int size, char c)
{
    if (size == 0)
        return (NULL);
    char            *array;
    unsigned    int i = 0;

    if (!(array = malloc(sizeof(char) * size + 1)))
        return (NULL);
    while (i < size)
    {
        array[i] = c;
        i++;
    }
    
    return (array);
}