#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char alphabet;
	char alphABET;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	for (alphABET = 'A'; alphABET <= 'Z'; alphABET++)
	{
		putchar(alphABET);
	}
	putchar('\n');
	return (0);
}
