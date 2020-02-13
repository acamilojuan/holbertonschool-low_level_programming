#include "holberton.h"
/**
 * print_line - function entry point
 * @n: number of times to print
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
