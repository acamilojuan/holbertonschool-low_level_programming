#include "holberton.h"
/**
 * times_table - Void function
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int y;
	int x;
	char a;
	char b;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			a = ((y * x) % 10);
			b = ((y * x) / 10);
			if (b == 0)
			{
			if (x != 0)
			{
				_putchar(32);
			}
			_putchar(a + '0');
			if (x < 9)
			{
				_putchar(44);
				_putchar(32);
			}
			}
			else
			{
				_putchar(b + '0');
				_putchar(a + '0');
				if (x < 9)
				{
				_putchar(44);
				_putchar(32);
				}
			}
		}
	_putchar('\n');
	}
}
