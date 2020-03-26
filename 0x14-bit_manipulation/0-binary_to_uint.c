#include "holberton.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: binary number to convert.
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	unsigned int i;

	if (b == '\0')
	{
		return (1);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num = (num * 2) + (b[i] - '0');
	}
	return (num);
}
