#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - function
 * @size: variable to be used
 * @c: char to be used
 * Return: Null or pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int a;

	if (size == 0)
	{
		return ('\0');
	}
	array = malloc(sizeof(char) * size);

	if (!array)
		return (NULL);

	for (a = 0; a < size; a++)
	{
		array[a] = c;
	}
		return (array);
}
