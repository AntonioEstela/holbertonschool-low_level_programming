#include "holberton.h"

void print_triangle(int size)
{
	int width, height, prints;

	if (size > 0)
	{
		for (height = 1; height <= size; height++)
		{
			for(width = 1; width <= (size - height); width++)
			{
				_putchar(' ');
			}
			for (prints = 1; prints <= height; prints++)
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