#include "holberton.h"
/**
 * _strspn - function
 * @accept: pointer input variable
 * @s: input pointer
 * Return: value of cont
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, cont = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			break;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				cont++;
			}
		}
	}
	return (cont);
}
