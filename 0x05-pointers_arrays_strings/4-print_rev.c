#include "holberton.h"
/**
 * print_rev - function that prints a string, in reverse.
 * @s: string
 */
void print_rev(char *s)
{
	int rev;
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	for (rev = count - 1; rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
}
