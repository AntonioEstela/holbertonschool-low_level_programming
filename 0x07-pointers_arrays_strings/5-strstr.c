#include "holberton.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: character.
 * @needle: character.
 * Return:  a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; i++)
		{
			if (haystack[i] == needle[j])
			{
				return (haystack + i);
			}
		}
		if (haystack[i] == needle[j])
		{
			return (haystack + i);
		}
	}
	return (0);
}
