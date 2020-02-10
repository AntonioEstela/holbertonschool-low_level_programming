#include "holberton.h"
/**
 * jack_bauer - prints every minute of the day from 00:00 to 23:59.
 *
 * Return: 1 if > 0, 0 if == 0, positive if negative
 */
void jack_bauer(void)
{
	int min, hour;

	for (hour = 0; hour <= 23; hour++)
	{
		for (min = 0; min <= 59 ; min++)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar('\n');
		}
	}
}
