#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - function
 * @name: pointer to char
 * @f: pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != '\0' && name != '\0')
	f(name);
}
