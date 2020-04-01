#include "holberton.h"
/**
 * main - program that copies the content of a file to another file.
 * @argc: number of arguments.
 * @argv: arguments.
 * Return: always 0 :D
 */
int main(int argc, char *argv[])
{
	int file1, file2, rd1, num_char;
	char buffer[1024];

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(97);
	}
	file2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	rd1 = read(file1, buffer, 1024);
	if (rd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	num_char = write(file2, buffer, rd1);
	if (num_char == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if ((close(file1)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1);
		exit(100);
	}
	if ((close(file2)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file2);
		exit(100);
	}
	return (0);
}
