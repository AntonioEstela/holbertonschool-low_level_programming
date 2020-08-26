#include "search_algos.h"
/**
 * linear_search - Searches in an array using the Linear search algorithm.
 * @array: Pointer to the first element of the array.
 * @size: Is the number of elements in array.
 * @value: Is the value to search for.
 * Return: Index of the value, or -1 on failure.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array != NULL && size != '\0' && value != '\0')
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%zu] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return ((int)i);
			}
		}
	}

	return (-1);
}
