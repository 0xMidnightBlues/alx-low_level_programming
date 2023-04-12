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

	grid = malloc(sizeof(int *) * height);
	if (!(grid))
		return (NULL);
	while (i < height)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (!(grid[i]))
		{
			while (i >= 0)
				free(grid[--i]);
			free(grid);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}

	return (grid);
}
