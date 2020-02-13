#include "holberton.h"
/**
 * print_square -  function that draws a square on the terminal.
 * @size: integer
*/
void print_square(int size)
{
	int x, y;

	if (size > 0)
	{

	for (x = 1; x <= size; x++)
	{

		for (y = 1; y <= size; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	}
	else
	{
		_putchar('\n');
	}

}
