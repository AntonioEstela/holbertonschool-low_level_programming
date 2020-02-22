#include"holberton.h"
/**
* print_number - prints an integer.
* @n: int n
* Return: Always 0.
*/
void print_number(int n)
{
	int i = n;
	int j = 1;

	if (n < 0)
	{
		j = -1;
		_putchar('-');
	}
	while (i > 9 || i < -9)
	{
		i = i / 10;
		j = j * 10;
	}
	while (j > 9 || j < -9)
	{
		_putchar((n / j) % 10 + '0');
		j = j / 10;
	}
	if (n < 0)
	{
		_putchar((n % 10)  * -1 + '0');
	}
	else
	{
		_putchar(n % 10 + '0');
	}
}
