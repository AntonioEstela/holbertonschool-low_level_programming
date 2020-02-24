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
	int i, j, p;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (p = i, j = 0; needle[j] != '\0'; j++, p++)
		{
			if (haystack[p] != needle[j] || haystack[p] == '\0')
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);
}
