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
	int count;
	char *dest;

	if (str == 0)
	{
		return (NULL);
	}
	
	dest = malloc(sizeof(str) * _strlen(str));

	if (str == NULL)
	{
		return (NULL);
	}
	
	else
	{
		for (count = 0; *(str + count); count++)
		{
			*(dest + count) = *(str + count);
		}
		*(dest + count) = '\0';
	}
	return (dest);
}
