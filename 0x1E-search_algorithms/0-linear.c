#include "search_algos.h"
/**
 * linear_search - Function that searches for a value in an array of integers.
 * @array: array of integers to search in.
 * @size: size of the given array.
 * @value: value to search in the array.
 * Return: -1 in failure otherwhise the function returns the index of value.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%zu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return ((int)i);
		}
	}

	return (-1);
}
