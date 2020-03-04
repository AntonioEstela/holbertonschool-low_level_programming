#include "holberton.h"
/**
 * _strdup - function that returns a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string.
 * Return: Returns NULL if str = NULL or if insufficient memory was available
 */
char *_strdup(char *str)
{
	int i, count;
	char *dest;

	if (str == 0)
	{
		return (NULL);
	}

	count = 0;

	while (*(str + count) != '\0')
	{
		count++;
	}

	dest = malloc(sizeof(char) * (count + 1));
	
	if (dest == 0)
	{
		return (NULL);
	}
	
	for (i = 0; *(str + i) != '\0'; i++)
	{
		*(dest + i) = *(str + i);
	}
	*(dest + i) = '\0';
	return (dest);
}
