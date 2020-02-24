#include "holberton.h"
/**
 * _memcpy - function
 * @n: variable to be used
 * @dest: input pointer 1
 * @src: input pointer 2
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
	dest[a] = src[a];
	}
	return (dest);
}
