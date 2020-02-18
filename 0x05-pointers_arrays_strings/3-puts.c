#include "holberton.h"
/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 * @str: character
 */
void _puts(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		_putchar(str[count]);
	}
	putchar('\n');
}
