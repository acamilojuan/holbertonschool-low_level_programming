#include "holberton.h"
/**
 * _isalpha - is a counter
 *
 * @c: is the variable to be checked
 *
 * Return: is 1 or 0 depends of the condition
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122 && !(c >= 91 && c <= 96))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
