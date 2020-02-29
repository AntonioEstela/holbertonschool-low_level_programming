#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it.
 * @argc: integer.
 * @argv: character.
 * Return: Always 0.
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i = argc - 1;

	printf("%d\n", i);
	return (0);
}
