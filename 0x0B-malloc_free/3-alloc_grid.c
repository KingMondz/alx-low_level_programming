#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: columns of array
 * @height: rows of array
 * Return: pointer as in desc above
 */

int **alloc_grid(int width, int height)
{
	int a, b;
	int **array;

	if (width < 1 || height < 1)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		array[a] = malloc(sizeof(int) * width);
		if (array[a] == NULL)
		{
			for (a = 0; a < height; a++)
			{
				free(array[a]);
			}
			free(array);
			return (NULL);
		}
	}


	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
		{
			array[a][b] = 0;
		}

	return (array);
}
