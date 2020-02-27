#include "holberton.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: string.
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_palindrome - function that checks if s is palindrome.
 * @s: string.
 * @i: initial position
 * @j: end position
 * Return: 1 if s is palindrome otherwise returns 0
 */
int check_palindrome(char *s, int i, int j)
{
	if (*(s + i) == *(s + j))
	{
		if (i == j || i == j + 1)
		{
			return (1);
		}
		else
		{
			return (0 + check_palindrome(s, i + 1, j - 1));
		}
	}
	return (0);
}
/**
 * is_palindrome - function that checks if s is palindrome.
 * @s: string to check.
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}

	return (check_palindrome(s, 0, _strlen_recursion(s) - 1));
}
