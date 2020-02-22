#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: integer.
 * @n: integer.
 */
void reverse_array(int *a, int n)
{
	int tmp, i;
	int j = n - 1;

	for (i = 0; i < n / 2; j--, i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
