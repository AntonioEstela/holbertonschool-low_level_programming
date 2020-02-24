#include "holberton.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s: character.
 * @b: character.
 * @n: unsigned integer.
 * Return: the value of s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
