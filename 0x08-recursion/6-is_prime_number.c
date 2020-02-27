#include "holberton.h"
/**
 * _operation - function that checks for a prime number
 * @num: integer.
 * @i: integer.
 * Return: 1 if prime; 0 if not prime.
 */
int _operation(int num, int i)
{
	if (i == 1)
	{
	return (1);
	}
	else
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (_operation(num, i - 1));
		}
	}
}
/**
 * is_prime_number - function that checks for a prime number
 * @n: integer.
 * Return: 1 if prime; 0 if not prime.
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}

	return (_operation(n, n / 2));

}
