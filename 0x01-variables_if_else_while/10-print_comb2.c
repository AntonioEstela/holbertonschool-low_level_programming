#include <stdio.h>
/**
 * main - entry block
 * @void: no argument
 * Return: 0
 **/
int main(void)
{
	int num, num2, sum;

	for (num = 0; num <= 9; num++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			putchar(num + '0');
			putchar(num2 + '0');
			if (sum < 99)
			{
				putchar(',');
				putchar(' ');
			}
			sum++;
		}
	}
	putchar('\n');
	return (0);
}
