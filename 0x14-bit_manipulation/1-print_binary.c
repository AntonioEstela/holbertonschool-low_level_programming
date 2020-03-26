#include "holberton.h"
/**
 * binary_printing - function that prints the binary representation of a number
 * @n: base 10 number.
 * Return: Nothing it is a void function :D
 */
void binary_printing(unsigned int num)
{
	if (num == 0)
	{
		return;
	}

	binary_printing(num >> 1);

	if ((num & 1) == 1)
	{
		_putchar('1');
	}
	if ((num & 1) == 0)
	{
		_putchar('0');
	}
}
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: base 10 number.
 * Return: Nothing it is a void function.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');	
	}
	else
	{
		binary_printing(n);
	}
}
