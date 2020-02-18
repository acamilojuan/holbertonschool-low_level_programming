#include "holberton.h"
/**
 * swap_int - swaps the integers
 * @a: variable 1
 * @b: variable 2
 */
void swap_int(int *a, int *b)
{
	int c;
	int d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
