#include "holberton.h"
/**
 * _strlen - function that returns the length of a string..
 * @s: string
 * Return: the value of the variable count.
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
/**
 * _strdup - function that returns a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string.
 * Return: Returns NULL if str = NULL or if insufficient memory was available
 */
char *_strdup(char *str)
{
	int i;
	char *dest;

	if (str == 0)
	{
		return (NULL);
	}

	dest = malloc(sizeof(str) * _strlen(str + 1))

	if (dest == NULL)
	{
		return (NULL);
	}

	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			dest[i] = str[i];
		}
		dest[i] = '\0';
	}
	return (dest);
}
