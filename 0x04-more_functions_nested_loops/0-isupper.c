#include "holberton.h"
/**
 * _isupper - Int function entry point
 *
 * @c: parameter in ASCII
 *
 * Return: Dependens on the condition
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
