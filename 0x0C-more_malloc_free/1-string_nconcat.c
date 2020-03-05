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
 * string_nconcat - function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: integer
 * Return: the value of dest or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	int size;
	char *dest;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	i = _strlen(s1);
	j = _strlen(s2);
	size = i + j;

	if (n >= j)
		n = j;

	dest = malloc(sizeof(char) * size + 1);
	if (dest == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		*(dest + k) = *(s1 + k);
	}
	for (l = 0; l < n; l++)
	{
		*(dest + (i + l)) = *(s2 + l);
	}
	*(dest + (i + l)) = '\0';
	return (dest);
}
