#include "holberton.h"
/**
 * _memset - function
 * @n: variable related to bytes to be used
 * @s: input variable pointer 1 that points to 
 * @b: input variable 2
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
	s[a] = b;
	}
	return (s);
}
