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
/**
 * str_concat - function that conatenates two strings
 * @s1: string 1.
 * @s2: string 2.
 * Return: NULL or the value of dest.
 */
char *str_concat(char *s1, char *s2)
{
    int i = _strlen(s1);
    int j = _strlen(s2);
    int k, l;
    char *dest;

    if (s1 == NULL)
    {
        s1 = "";
    }
    if (s2 == NULL)
    {
        s2 = "";
    }
    
    dest = malloc(sizeof(char) * (i + j + 1));

    if (dest == NULL)
    {
        return (NULL);
    }
    
    for (k = 0; k < i; k++)
    {
        *(dest + k) = *(s1 + k);
    }

    for (l = 0; l < j; l++)
    {
        *(dest + (i + l)) = *(s2 + l);
    }
    
    return (dest);
}