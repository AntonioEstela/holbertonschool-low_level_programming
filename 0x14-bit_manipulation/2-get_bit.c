#include "holberton.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number to get the bit in the index position.
 * @index: position used to get the bit.
 * Return: the value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits = (sizeof(unsigned int) * 8);

	if (index < bits)
	{
		return ((n >> index) & 1);
	}
	else
	{
		return (-1);
	}
}
