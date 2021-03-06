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
	int a, b;

	if (min > max)
		return (NULL);
	a = max - min + 1;
	array = malloc(sizeof(int) * a);
	if (!array)
		return (NULL);
	for (b = 0; b < a; b++, min++)
		array[b] = min;
	return (array);
}
