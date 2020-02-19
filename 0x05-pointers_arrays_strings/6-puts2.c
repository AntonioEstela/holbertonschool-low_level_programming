#include "holberton.h"

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
