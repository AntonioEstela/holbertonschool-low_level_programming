#include "holberton.h"
/**
 * puts2 - function that prints every other character of a string.
 * @str: character
 */
void puts2(char *str)
{
	int count = 0;

	for (; str[count] != '\0'; count++)
	{
		if (count % 2 == 0)
		{
			_putchar(str[count]);
		}
	}
	_putchar('\n');
}
