#include "holberton.h"
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: integer.
 * @size: integer.
 * Return: Nothing it is a void function :D
 */
void print_diagsums(int *a, int size)
{
	int i, num1 = 0, num2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			{
			num1 += *(a + i);
			}
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			{
			num2 += *(a + i);
			}
	}
	printf("%d, %d\n", num1, num2);
}
