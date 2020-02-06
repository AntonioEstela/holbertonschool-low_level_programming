#include <stdio.h>
/**
 * main - possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int num;
	int num2;
	int sum;

	for (num = 0; num < 99; num++)
	{
		for (num2 = 0; num2 < 10; num++)
		{
			putchar(num + '0');
			putchar(num2 + '0');
			if (sum < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
