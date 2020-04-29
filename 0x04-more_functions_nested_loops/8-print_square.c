#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * print_square - Function to print squares of # chars
 * @size: Input integer to know the size of the squares
*/
void print_square(int size)
{
	int a, b;

	if (size == 0)
		_putchar('\n');
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
