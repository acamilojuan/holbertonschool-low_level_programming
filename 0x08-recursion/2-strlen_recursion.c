#include "holberton.h"
/**
 * _strlen_recursion - Function
 * @s: input pointer variable to be used
 * Return: counter
 */
int _strlen_recursion(char *s)
{
	int a = 0;

	if (s[a] != '\0')
	{
	a = _strlen_recursion((void *)(s + 1));
	a++;
	}
	return (a);
}
