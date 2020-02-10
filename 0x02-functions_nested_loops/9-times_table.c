#include "holberton.h"
/**
 * times_table - prints the 9 times table
 * @void: no argument
 */
void times_table(void)
{
	int num, num2, mul;

	for (num = 0; num <= 9; num++)
	{
		for (num2 = 0; num2 <= 9; num2++)
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
				_putchar(mul + '0');
			}
			else if (mul >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(mul / 10 + '0');
				_putchar(mul % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
