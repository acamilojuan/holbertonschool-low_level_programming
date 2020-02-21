#include "holberton.h"
/**
 * rev_string - function
 * @a: pointer
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
