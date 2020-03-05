#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc_checked - function
 * @b: variable to be used
 * Return: Always zero
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
		if (!a)
			exit (98);
	
	return (a);
}
