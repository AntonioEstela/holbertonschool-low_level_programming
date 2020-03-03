#include "holberton.h"
/**
 * create_array - function that creates an array of chars.
 * @size: unsigned int.
 * @c: character.
 * Return: Returns a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(c) * size);

	if (size == 0)
	{
		return (NULL);
	}
	else if (arr == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
		*(arr + i) = c;
		}

		return (arr);
	}
}
