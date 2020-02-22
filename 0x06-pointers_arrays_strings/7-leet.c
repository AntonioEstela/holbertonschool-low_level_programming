#include "holberton.h"
/**
 * *leet - function that encodes a string into 1337.
 * @str: character.
 * Return: the value of str.
 */
char *leet(char *str)
{
	int upper[] = {65, 69, 79, 84, 76};
	int lower[] = {97, 101, 111, 116, 108};
	int num[] = {52, 51, 48, 55, 49};
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == upper[j] || str[i] == lower[j])
			{
				str[i] = num[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
