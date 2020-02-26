#include "holberton.h"
/**
 * _sqrt_recursion - Function returns the natural square root of a number.
 * @n: Integer.
 * Return: Result of the square.
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	i = operation(n, 0);
	return (i);
}
/**
 * operation - this function calculates the square of a integer.
 * @i: integer.
 * @j: integer.
 * Return: the result of the operation.
 */
int operation(int i, int j)
{
	int k = 0;

	if ((j * j) > i)
	{
		return (-1);
	}
	else if ((j * j) == i)
	{
		return (j);
	}

		k = operation(i, (j + 1));
		return (k);
}
