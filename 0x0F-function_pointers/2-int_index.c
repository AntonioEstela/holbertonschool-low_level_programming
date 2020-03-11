#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: array of integers.
 * @size: the size of the array.
 * @cmp: pointer to function.
 * Return: -1 or the value of i.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp != 0)
	{
		if (size < 1)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
