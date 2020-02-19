#include "holberton.h"
/**
 * puts_half - function
 * @str: pointer to be used
 */
void puts_half(char *str)
{
	int a;
	int b;

	for (a = 0; str[a] != '\0'; a++)
	{
	b = a / 2;
	{
	_putchar(str[a]);
	}
	}
	_putchar('\n');
}
