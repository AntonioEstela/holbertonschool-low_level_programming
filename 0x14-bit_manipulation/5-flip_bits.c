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
	unsigned int i = 0;

	for (n = n ^ m; n != 0; n >>= 1)
	{
		i += (n & 1);
	}

	return (i);
}
