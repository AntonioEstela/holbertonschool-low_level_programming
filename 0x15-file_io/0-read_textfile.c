#include "holberton.h"
/**
 * read_textfile - function that reads a text file
 * and prints it to the standard output.
 * @filename: the file to read.
 * @letters: is the number of letters it should read and print
 * Return: returns the actual number of letters it could read and print or 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, num_char;
	char *buffer;

	buffer = malloc(sizeof(buffer) * letters);
	if (buffer == NULL || filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	rd = read(fd, buffer, letters);
	if (rd == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	num_char = write(STDOUT_FILENO, buffer, rd);
	if (num_char == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (num_char);
}
