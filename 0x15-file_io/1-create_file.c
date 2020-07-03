#include "holberton.h"
/**
 * create_file - Function to create a file.
 * @filename: Pointer to the file to be read.
 * @text_content: Pointer to the text content.
 * Return: -1 if error, 1 if succeeds.
 */
int create_file(const char *filename, char *text_content)
{
	int content, a, wr;

	content = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (text_content == '\0')
		text_content = "";
	if (content == -1)
		return (-1);
	for (a = 0; text_content[a];)
		a++;
	wr = write(content, text_content, a);
	if (wr == -1)
	{
		return (-1);
	}
	close(content);
	return (1);
}
