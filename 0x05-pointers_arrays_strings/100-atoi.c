#include "holberton.h"
/**
 * _atoi - function that convert a string to an integer.
 * @s: string to convert to an integer.
 * Return: The String converted to an integer
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int signo = 1, i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')

			signo *= -1;

		else if (s[i] >= '0' && s[i] <= '9')

			num = (num * 10) + (s[i] - 48);

		i++;
	}
	return (num * signo);
}
