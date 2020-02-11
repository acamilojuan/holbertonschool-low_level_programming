#include "holberton.h"
/**
 * print_sign - is a counter
 *
 * @n: is the variable to be checked
 *
 * Return: is 1 or 0 depends of the condition
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
