#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - This function to allocates memory to a grid
 * @width: the first dimension
 * @height: the second dimension
 * Return: returns a pointer to a 2 dimensional array of integers
 *
 */
 
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (j = 0; j < i;  j++)
				free(ptr[j]);
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
		if (width <= 0 || height <= 0)
		return  (NULL);
	return (ptr);
}
