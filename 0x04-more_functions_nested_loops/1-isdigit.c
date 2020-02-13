#include "holberton.h"
/**
 * _isdigit - is a counter
 *
 * @c: is the variable to be checked
 *
 * Return: is 1 or 0 depends of the condition
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
