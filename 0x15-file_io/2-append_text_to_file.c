#include "holberton.h"
/**
 * append_text_to_file - Function append text at the end of a file.
 * @filename: Pointer to the file to be read.
 * @text_content: Pointer to the text to append.
 * Return: -1 if error, 1 if succeeds.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int content, a, wr;

	if (filename == '\0')
		return (-1);
	if (text_content)
	{
		a = 0;
		while (text_content[a] != '\0')
			a++;
	}
	content = open(filename, O_APPEND | O_WRONLY);
	if (content < 0)
		return (-1);
	if (text_content)
	{
		wr = write(content, text_content, a);
		if (wr < 0)
			return (-1);
	}
	close(content);
	return (1);
}
