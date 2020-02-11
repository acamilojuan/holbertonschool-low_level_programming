#include "holberton.h"
/**
 * print_last_digit - is the function to print
 * @n: integer input
 * Return: depends on the condition
 */

int print_last_digit(int n)
{
	int lastd = (n % 10);
	int numr;

	if (lastd < 0)
	{
		numr = lastd * (-1);
	}
	else
	{
		numr = lastd;
	}
	_putchar(numr + '0');
	return (numr);
}
