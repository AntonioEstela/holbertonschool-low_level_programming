#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 * @argc: integer.
 * @argv: character.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, j, k, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else if (argc == 3)
	{
		for (i = 0; i < argc; i++)
		{
			if (i == 1)
			{
				j = atoi(argv[i]);
			}
			else if (i == 2)
			{
				k = atoi(argv[i]);
			}
		}
	result = k * j;
	printf("%d\n", result);
	}
	return (0);
}
