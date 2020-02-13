#include "holberton.h"

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
