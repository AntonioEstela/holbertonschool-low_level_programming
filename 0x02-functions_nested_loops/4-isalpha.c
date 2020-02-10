#include "holberton.h"
/**
 * _isalpha: checks for alphabetic character.
 *
 * Return: Returns 0 only when the result of the program it's false
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return(1);
	}
	if(c >= 'a' && c <= 'z')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
