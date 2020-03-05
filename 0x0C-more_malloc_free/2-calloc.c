#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_calloc - function
 * @nmemb: variable to be used
 * @size: variable 2 to be used
 * Return: Null or pointer to the new array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	str = malloc(size * nmemb);
	if (!str)
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
		str[a] = 0;
	return (str);
}
