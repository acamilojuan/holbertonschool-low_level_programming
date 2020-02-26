#include "holberton.h"
/**
 * _strpbrk - function
 * @accept: pointer input variable
 * @s: input pointer
 * Return: bytes that matches
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a;
	unsigned int b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				return (&s[a]);
			}
		}
	}
	if (s[a] == 0)
	{
		return ('\0');
	}
	return (&s[a]);
}
