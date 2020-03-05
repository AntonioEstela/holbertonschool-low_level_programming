#include "holberton.h"
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array of int
 * @width: width of matrix
 * @height: height of matrix
 * Return: Pointer, NULL if fail
 */
int **alloc_grid(int width, int height)
{
	int **arr, i, j, k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int *) * width);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		*(arr + i) = malloc(sizeof(int) * height);

		if (*(arr + i) == NULL)
		{
			for (k = 0; k < i; i++)
			{
				free(*(arr + k));
			}
			free(arr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			*(*(arr + i) + j) = 0;
		}

	}
	return (arr);
}
