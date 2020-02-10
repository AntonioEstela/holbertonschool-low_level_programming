#include "holberton.h"
/**
 * print_sign - prints the sign of a number
 * @n: variable of type integer
 * Return: only when is necesary
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
