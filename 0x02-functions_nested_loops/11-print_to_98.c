#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n: takes in an integer
 *
 */
void print_to_98(int n)
{
	int num;

	if (n > 98)
	{
		for (num = n; num > 97; num--)
		{
			printf("%d", num);
			if (num != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (num = n; num < 99; num++)
		{
			printf("%d", num);
			if (num != 98)
			{
				printf(", ");
			}
		}

	}
	printf("\n");
}
