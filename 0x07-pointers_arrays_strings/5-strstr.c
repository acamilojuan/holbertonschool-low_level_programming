#include "holberton.h"
/**
 * _strstr - function
 * @haystack: pointer input 1
 * @needle: input pointer 2
 * Return: pointer to first b occurrence
 */
char *_strstr(char *haystack, char *needle)
{
	int a;
	int b;
	int c;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0, c = a; needle[b] != '\0'; b++, c++)
		{
		if (needle[b] != haystack[c] || haystack[c] == '\0')
			break;
		}
		if (needle[b] == '\0')
			return (haystack + a);
	}
	return (0);
}
