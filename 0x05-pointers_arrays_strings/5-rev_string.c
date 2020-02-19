#include "holberton.h"
/**
 * rev_string - function that reverses a string
 * @s: character
 *
 */
void rev_string(char *s)
{
	int status, change;
	char temp;

	for (status = 0; s[status] != '\0';)
	{
		status++;
	}
	status = status - 1;
	for (change = 0; change <= status; change++)
	{
		temp = s[change];
		s[change] = s[status];
		s[status] = temp;
		status = status - 1;
	}
}
