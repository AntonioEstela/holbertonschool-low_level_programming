#include "holberton.h"
/**
 * print_number -  function that prints an integer.
 * @n: integer
*/
void print_number(int n)
{
	int abs = n * -1;

	if (n >= 1000 && n <= 9999)
	{
		_putchar(n / 1000 + '0');
		_putchar((n % 1000) / 100 + '0');
		_putchar((n % 1000) / 10 + '0');
		_putchar((n % 1000) % 10 + '0');
	}
	else if (n >= 100 && n <= 999)
	{
		_putchar(n / 100 + '0');
		_putchar((n % 100) / 10 + '0');
		_putchar(n % 100 + '0');
	}
	else if (n <= 99 && n >= 10)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}

	else if (n < 0)
	{
		_putchar('-');
		_putchar(abs / 10 + '0');
		_putchar(abs % 10 + '0');
	}
	else
	{
		_putchar(n + '0');
	}
}
