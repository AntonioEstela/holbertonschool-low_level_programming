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
 * create_file - function that creates a file.
 * @filename: name of the file to create.
 * @text_content: content of the file
 * Return: 1 on success or 0 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int op, num_char;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (op == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}

	num_char = write(op, text_content, _strlen(text_content));
	if (num_char == -1)
	{
		close(op);
		return (-1);
	}

	close(op);
	return (1);
}
