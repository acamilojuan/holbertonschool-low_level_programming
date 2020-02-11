#include "holberton.h"
/**
 * _isalpha(int c) is a counter
 * c is the variable to be checked
 * return is 1 or 0 depends of the condition
 */

int print_sign(int n)
{
	if (n > 48)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 48)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
