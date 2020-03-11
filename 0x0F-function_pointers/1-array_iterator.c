#include "function_pointers.h"
/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array.
 * @array: array to iterate.
 * @size: size of the array.
 * @action: function.
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i, j;

	j = size;
	if (size <= 0 || array == NULL || *action == NULL)
	{
		return;
	}
	for (i = 0; i < j; i++)
	{
		action(array[i]);
	}
}
