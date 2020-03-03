#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - function
 * @str: variable to be used
 * Return: Null or pointer to array
 */
char *_strdup(char *str)
{
	int a;
	int b;
	char *memstrr;

	if (str == '\0')
	{
		return ('\0');
	}
	for (a = 0; str[a] != '\0';)
	{
	a++;
	}
	memstrr = malloc(sizeof(char) * a);

	if (!memstrr)
		return (NULL);

	for (b = 0; b < a; b++)
	{
		memstrr[b] = str[b];
	}
		return (memstrr);
}
