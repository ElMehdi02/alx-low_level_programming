#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates memory for a 2D array
 * @width: the width of the array
 * @height: the height of the array
 * Return: the 2D array created.
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i;
	int j;

	if (width == 0 && height == 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (!array)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (!array[i]) 
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}ù
	return (array);
}
