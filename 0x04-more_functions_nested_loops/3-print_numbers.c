#include "holberton.h"
/**
  * print_numbers - function entry point
  *
  * Return: Always 0
 */
void print_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
