#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds positive numbers.
 * @argc: integer.
 * @argv: character.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, result = 0;

	if (argc < 3)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
			result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
