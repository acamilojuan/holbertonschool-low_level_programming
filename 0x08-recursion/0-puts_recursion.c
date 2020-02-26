#include "holberton.h"
/**
 * _puts_recursion - creation of the function
 * @s: input pointer variable to be used
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
	_putchar(*s);
	_puts_recursion((void *)(s + 1));
	}
	else
	_putchar('\n');
}
