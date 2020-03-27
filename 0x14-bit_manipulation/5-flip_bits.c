#include "holberton.h"
/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: number to compare.
 * @m: number to compare.
 * Return: returns the number of bits you would need to flip
 * to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0, z;

	for (z = n ^ m; z != 0; z >>= 1)
	{
		i += (z & 1);
	}

	return (i);
}
