#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _strcpy - Function to copy a string to another string
 * @dest: Pointer to a char input
 * @src: Pointer to a char input
 * Return: Variable dest rebuild
*/
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
