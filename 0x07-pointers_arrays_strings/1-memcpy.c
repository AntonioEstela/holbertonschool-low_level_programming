#include "holberton.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: array of type character.
 * @src:  array of type character.
 * @n: unsigned integer.
 * Return: the value of dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
