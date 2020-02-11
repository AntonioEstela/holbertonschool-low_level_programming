#include "holberton.h"
/**
 * print_times_table - prints the n times table
 * @void: no argument
 */
void print_times_table(int n)
{
	int num, num2, mul;

	if (n > 15 || n < 0)
	{
		return;
	}

	for (num = 0; num <= n; num++)
	{
		for (num2 = 0; num2 <= n; num2++)
		{
			mul = (num * num2);
			if (num2 == 0)
			{
				_putchar(mul + '0');
			}
			else if (mul <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(mul + '0');
			}
			else if (mul >= 10 && mul < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(mul / 10 + '0');
				_putchar(mul % 10 + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(mul / 100 + '0');
				_putchar(mul / 10 % 10 + '0');
				_putchar(mul % 10 + '0');

			}
		}
		_putchar('\n');
	}
}
