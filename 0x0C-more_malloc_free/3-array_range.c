#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *array_range - function
 * @min: variable to be used
 * @max: variable 2 to be used
 * Return: NULL or pointer to the array
 */
int *array_range(int min, int max)
{
	int *array;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	if (!array)
		return (NULL);
	return (array);
}
