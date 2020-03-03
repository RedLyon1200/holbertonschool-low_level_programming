#include <stdlib.h>
#include "holberton.h"
/**
 * alloc_grid - create bidimensional array of integers
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to bidimensional array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width < 1 || height < 1)
		return (NULL);

	array = malloc(width * sizeof(int *));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		array[i] = malloc(height * sizeof(int));
		if (array[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			array[i][j] = 0;
	}
	return (array);
}
