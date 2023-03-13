#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - Allocates memory for a 2D array of integers
 *
 * @width: The width of the grid
 * @height: The height of the grid
 *
 * Return: A pointer to the newly allocated 2D array or NULL if failure
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	/* Check if width or height is 0 or negative */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for the rows of the grid */
	grid = (int **) malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	/* Allocate memory for the columns of each row */
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* If malloc fails for a row, free memory and return NULL */
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
		/* Initialize each element of the grid to 0 */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
