#include "holberton.h"
/**
 * print_numbers - funcion that print numbers from 0 - 9.
 *
*/
void print_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		_putchar(num + '0');
		num++;
	}
	_putchar('\n');
}
