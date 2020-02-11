#include "holberton.h"
/**
 * _isalpha(int c) is a counter
 * c is the variable to be checked
 * return is 1 or 0 depends of the condition
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
