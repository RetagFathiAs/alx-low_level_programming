#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Entry point
 *@width: rows of matrix
 *@height: columns of string
 * Return: a pointer to a 2 dimensional array of integers or null
 */
int **alloc_grid(int width, int height)
{
	int **matrix2d;
	int i;
	int j;
	int l;
	int *p;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix2d = (int **)malloc(height * sizeof(int *));
	if (matrix2d == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(matrix2d + i) = (int *)malloc(width * sizeof(int));
		if (*(matrix2d + i) == NULL)
		{
			for (i = 0; i < height; i++)
			{
				p = matrix2d[i];
				free(p);
			}
			free(matrix2d);
			return (NULL);
		}
	}
	for (l = 0; l < height; l++)
	{
		for (j = 0; j < width; j++)
		{
			matrix2d[l][j] = 0;
		}
	}
	return (matrix2d);
}
