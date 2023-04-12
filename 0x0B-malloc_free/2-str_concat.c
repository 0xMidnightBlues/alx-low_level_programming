#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to a newly allocated space in memory which s1 + s2
 */
char *str_concat(char *s1, char *s2)
{
    char    *ret;
    int     i = 0, j = 0;

    while (s1[i] != '\0')
        i++;
    while (s2[j] != '\0')
        j++;
    if (!(ret = malloc(sizeof(char) * (i + j) + 1)))
        return (NULL);
    i = 0;
    j = 0;
    while (s1[i] != '\0')
    {
        ret[i] = s1[i];
        i++;
    }
    while (s2[j] != '\0')
    {
        ret[i + j] = s2[j];
        j++;
    }

    return (ret);
}