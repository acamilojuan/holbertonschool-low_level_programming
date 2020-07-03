#include "holberton.h"
/**
 * read_textfile - Fuction to read a text file and prints in the stdout.
 * @filename: Pointer to the file to be read.
 * @letters: Variable to know the chars to be read and print.
 * Return: The number of chars read and to print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t chars, content;
	char *fd;

	if (filename == '\0')
		return (0);
	fd = malloc(letters);
	if (fd == '\0')
		return (0);
	content = open(filename, O_RDONLY);
	if (content < 0)
	{
		free(fd);
		return (0);
	}
	chars = read(content, fd, letters);
	write(STDOUT_FILENO, fd, chars);
	close(content);
	return (chars);
}
