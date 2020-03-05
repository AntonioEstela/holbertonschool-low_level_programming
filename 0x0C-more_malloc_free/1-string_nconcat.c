#include "holberton.h"

/**
 * string_nconcat -
 *
 * Return: 
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
	size = i + j;

	dest = malloc(sizeof(char) * size);
	if (dest == NULL)
	{
		return (NULL);
	}
	if (n >= j)
	{
		for (l = 0; l < n; l++)
		{
			*(dest + l) = *(s2 + l);
		}
		*(dest + l) = '\0';
	}
	else
	{	
		for (k= 0; k < i; k++)
		{
			*(dest + k) = *(s1 + k);
		}
		for (l = 0; l < n; l++)
		{
			*(dest + (k + l)) = *(s2 + l);
		}
		*(dest + (k + l)) = '\0';
	}
	return (dest);
}
