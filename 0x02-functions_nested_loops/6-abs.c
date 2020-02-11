#include "holberton.h"
/**
 * _abs - is the function to use the absolute value
 * @number: is the variable to be checked
 * Return: depends on the condition
 */

int _abs(int number)
{
	if (number < 0)
	{
		return (number = number * (-1));
	}
	else if (number == 0)
	{
		return (0);
	}
	else
	{
		return (number);
	}
}
