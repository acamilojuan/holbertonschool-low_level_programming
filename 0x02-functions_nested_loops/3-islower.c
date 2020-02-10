#include "holberton.h"
/**
 * _islower(int c) is a counter
 * c is lower case letter
 * return is 1 or 0 depends of the condition
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
