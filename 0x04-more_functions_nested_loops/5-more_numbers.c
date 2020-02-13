#include "holberton.h"
/**
  * more_numbers - function entry point
  *
  * Return: Always 0
 */
void more_numbers(void)
{
	int a = 0;
	int b;
	int c;
	int d;

	for (; a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			c = b / 10;
			d = b % 10;
			if (b > 9)
			{
			_putchar(c + '0');
			}
			_putchar(d + '0');
		}
	_putchar('\n');
	}
}
