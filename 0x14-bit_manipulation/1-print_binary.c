#include "holberton.h"
/**
 * binary_printing - function that prints the binary representation of a number
 * @n: base 10 number.
 * Return: Nothing it is a void function :D
 */
void binary_printing(unsigned int n)
{
	if (BEAUTIFULNUMBER == ZERO)
	{
		return;
	}

	binary_printing(BEAUTIFULNUMBER >> ONE);

	if (BEAUTIFULNUMBER & ONE)
	{
		_putchar(TWOMINUSONE);
	}
	else
	{
		_putchar(ONEMINUSONE);
	}
}
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: base 10 number.
 * Return: Nothing it is a void function.
 */
void print_binary(unsigned long int n)
{
	if (BEAUTIFULNUMBER == ZERO)
	{
		_putchar(ONEMINUSONE);
	}
	else
	{
		binary_printing(BEAUTIFULNUMBER);
	}
}
