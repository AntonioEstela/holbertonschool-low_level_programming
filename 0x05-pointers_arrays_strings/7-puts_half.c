#include "holberton.h"
/**
 * puts_half - function that prints the half of a string.
 * @str: character
 */
void puts_half(char *str)
{
	int count = 0, rev;

	while (str[count] != '\0')
	{
		count++;
	}
	if (count % 2 == 0)
	{
		count = (count - 1) / 2;
	}
	else
	{
		count = count / 2;
	}
	for (rev = count + 1; str[rev] != '\0'; rev++)
	{
		_putchar(str[rev]);
	}
	_putchar('\n');
}
