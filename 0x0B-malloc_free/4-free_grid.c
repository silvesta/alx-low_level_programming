#include "main.h"
#include <stdlib>

/**
 * free_grid - Function prototype
 * Description: Frees memory allocated to a 2d array.
 * @grid: pointer to a pointer to an int.
 * @height: Height of the grid.
 * Return: void.
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a; a < height; a++)
	{
		free(grid[a]);
	}

	return (grid);
}

