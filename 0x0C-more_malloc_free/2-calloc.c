#include "holberton.h"
/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: number of members.
 * @size: size of the arrat.
 * Return: NULL or the value of arr.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		*(arr + i) = 0;
	}
	return (arr);
}
