#include "holberton.h"
/**
 * _strncpy - function
 * @dest: input 1
 * @src: input 2
 * @n: input 3
 * Return: dest pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != 0; a++)
	{
	dest[a] = src[a];
	}
	for (; a < n; a++)
	{
	dest[a] = '\0';
	}

	return (dest);
}
