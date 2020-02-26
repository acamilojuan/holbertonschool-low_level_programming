#include "holberton.h"
/**
 * _print_rev_recursion - creation of the function
 * @s: input pointer variable to be used
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_print_rev_recursion((void *)(s + 1));
	_putchar(*s);
	}
}
