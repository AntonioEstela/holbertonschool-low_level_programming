#include "holberton.h"
/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: unsigned int.
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (i == NULL)
	{
		exit(98);
	}

	return (i);
}
