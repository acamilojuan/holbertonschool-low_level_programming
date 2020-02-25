#include "holberton.h"
/**
 * _strchr - function
 * @c: input variable
 * @s: input pointer
 * Return: pointer to first c occurrence
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}
	return ('\0');
}
