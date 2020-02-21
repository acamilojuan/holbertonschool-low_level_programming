#include "holberton.h"
/**
 * reverse_array - function
 * @a: pointer
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int c, b;

	for (c = 0; c < (n - 1); c++)
	{
	b = a[c];
	a[c] = a[n - 1];
	a[n - 1] = b;
	n--;
	}
}
