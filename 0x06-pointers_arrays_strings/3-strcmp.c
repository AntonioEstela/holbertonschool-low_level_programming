#include "holberton.h"
/**
 * _strcmp - function that compares two strings.
 * @s1: character.
 * @s2: character.
 * Return: the value of j.
 */
int _strcmp(char *s1, char *s2)
{
	int i, j = 0;

	for (i = 0; s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'; i++)
	{
	}
	if (s1[i] != s2[i])
	{
		j = (s1[i] - s2[i]);
	}
	return (j);
}
