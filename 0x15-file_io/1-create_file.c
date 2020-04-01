#include "holberton.h"
/**
 * read_textfile - Fuction to read a text file and prints in the stdout.
 * @filename: Pointer to the file to be read.
 * @letters: Variable to know the chars to be read and print.
 * Return: The number of chars read and to print.
 */
int create_file(const char *filename, char *text_content)
{
	int content, a, wr;

	if (filename == '\0')
		return (-1);
	if (text_content == '\0')
		text_content = "";
	content = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	for (a = 0; text_content[a]; a++)
	wr = write(content, text_content, a);
	if (wr == -1)
	{
		return (-1);
	}
	close(content);
	return (1);
}
