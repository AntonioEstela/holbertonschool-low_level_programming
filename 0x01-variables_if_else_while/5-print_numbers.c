#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int numbers;

	for (numbers = '0'; numbers <= '9'; numbers++)
	{
		putchar(numbers);
	}
	putchar('\n');
	return (0);
}
