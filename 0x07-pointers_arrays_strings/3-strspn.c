#include "holberton.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: character.
 * @accept: character.
 * Return: the value of i.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, length;

	for (i = 0; s[i] != '\0'; i++)
	{
		length = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				length = 1;
				break;
			}
		}
		if (length == 0)
		{
			break;
		}
	}
	return (i);
}
