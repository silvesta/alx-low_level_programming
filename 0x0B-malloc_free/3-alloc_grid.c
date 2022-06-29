#include "main.h"
#include <stdlib>

/**
 * alloc_grid - Function prototype.
 * Description: Returns a pointer to a 2 dimensional array of integers.
 * @width: Width of the grid.
 * @height: Number of rows in the grid.
 * Return: Pointer.
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int a;
	int b;

	if (width < 1 || height < 1)
		return (0);

	arr = malloc(height * sizeof(int *));

	if (arr == 0)
	{
		free(arr);
		return (0);
	}

	for (a = 0; a < height; a++)
	{
		arr[a] = malloc(width * sizeof(int));

		if (arr[a] == 0)
		{
			for (a--; a >= 0; a--)
			{
				free(arr[a]);
			}

			free(arr);
			return (0);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			arr[a][b] = 0;
		}

	}

	return (arr);

}
