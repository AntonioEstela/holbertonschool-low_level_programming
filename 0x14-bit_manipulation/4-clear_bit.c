#include "holberton.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: number to get the bit in the index position.
 * @index: position used to get the bit.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bits = (sizeof(unsigned int) * 8);

	if (index > bits)
	{
		return (-1);
	}

	*n = *n & ~(1 << index);
	return (1);
}
