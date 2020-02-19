#include "holberton.h"
/**
 * _strcpy - function that copies the string scr to dest
 * @dest: character
 * @src: character
 * Return: empty
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	for (; src[count] != '\0'; count++)
	{
		dest[count] = src[count];
	}
	dest[count] = '\0';
	return (dest);
}
