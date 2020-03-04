#include "holberton.h"
/**
 * str_concat - function that conatenates two strings
 * @s1: string 1.
 * @s2: string 2.
 * Return: NULL or the value of dest.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, l;
	char *dest;
/* code to find the length of s1 and s2 */
	i = 0;
	while (*(s1 + i) != '\0')
	{
		i++;
	}
	j = 0;
	while (*(s2 + j) != '\0')
	{
		j++;
	}
/* code for concatenates two strings. */
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	dest = malloc(sizeof(char) * (i + j + 1));
	if (dest == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		*(dest + k) = *(s1 + k);
	}
	for (l = 0; l < j; l++)
	{
		*(dest + (i + l)) = *(s2 + l);
	}
	return (dest);
}
