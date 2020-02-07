#include <stdio.h>
/**
 * main - entry block
 * @void: no argument
 * Return: 0
 **/
int main(void)
{
	int num, num2, count;

	for (num = 0; num <= 9; num++)
	{
		for (num2 = (num + 1); num2 <= 9; num2++)
		{
			putchar(num + '0');
			putchar(num2 + '0');
			count++;
			if (count < 45)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
