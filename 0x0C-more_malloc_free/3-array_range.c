#include "holberton.h"
/**
 * array_range - function that creates an array of integers.
 * @min: integer.
 * @max: integer.
 * Return: NULL or the value of arr.
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int) * ((max -  min) + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		*(arr + i) = i;
	}
	return (arr);
}
