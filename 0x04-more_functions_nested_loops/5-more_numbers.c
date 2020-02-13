#include "holberton.h"
/**
 * more_numbers - funcion that print numbers from 0-14 ten times.
 *
*/
void more_numbers(void)
{
	int num, r;

	for (r = 0; r < 10; r++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num >= 10)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
