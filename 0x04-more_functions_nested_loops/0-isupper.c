#include "holberton.h"
/**
 * _isupper - funcion that checks for uppercase character.
 * @c: take an integer
 * Return: Returns 1 or 0 depends for the character
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
