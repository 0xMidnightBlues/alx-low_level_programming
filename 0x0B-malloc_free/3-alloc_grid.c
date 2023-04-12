#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
    int     **grid;
    int     i = 0, j;

    if (width <= 0 || height <= 0)
        return (NULL);
    
    if (!(grid = malloc(sizeof(int *) * height)))
        return (NULL);
    while (i < height){
        if (!(grid[i] = malloc(sizeof(int) * width)))
            return (NULL);
        j = 0;
        while (j < width){
            grid[i][j] = 0;
            j++;
        }
        i++;
    }

    return (grid);
}