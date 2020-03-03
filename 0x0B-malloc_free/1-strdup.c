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
	unsigned int a;
	unsigned int b;
	char *memstrr;

	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; str[a] != '\0';)
	{
	a++;
	}
	a++;
	memstrr = malloc(sizeof(char) * a);
	
	if (!memstrr)
		return (NULL);

	for (b = 0; b <= a; b++)
	{
		memstrr[b] = str[b];
	}
		return (memstrr);
}
