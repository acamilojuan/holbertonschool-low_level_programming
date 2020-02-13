#include "holberton.h"
/**
  * print_most_numbers - function entry point
  *
  * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int a = 0;

	for (; a <= 9; a++)
	{
		if (a == 2 || a == 4)
		{
			a++;
		}
		_putchar(a + '0');
		}
	_putchar('\n');
}
