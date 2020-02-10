#include "holberton.h"
/**
 * print_alphabet_x10 - Print the alphabet 10 times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char letter, new_line;

	for (new_line = 0; new_line < 10; new_line++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
