#include "holberton.h"
/**
 * _strpbrk - function
 * @accept: pointer input variable
 * @s: input pointer
 * Return: bytes that matches 
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == accept[a])
			return (s + a);
	}
	if (s[a] == accept[a])
		return (s + a);
		
	return ('\0');
}
