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
