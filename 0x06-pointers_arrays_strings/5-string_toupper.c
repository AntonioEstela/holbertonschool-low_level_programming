#include "holberton.h"
/**
 * *string_toupper - function that changes all lowercase to uppercase.
 * @str: character
 * Return: the value of str
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
