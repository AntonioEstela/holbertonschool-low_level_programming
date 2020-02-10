#include "holberton.h"
/**
 * _abs - function that prints the absolute value of a number
 * @num: takes in an integer
 * Return: 1 if > 0, 0 if == 0, positive if negative
 */
int _abs(int num)
{
	if (num < 0)
	{
		int abs = (num * -1);

		return (abs);
	}
	return (num);
}
