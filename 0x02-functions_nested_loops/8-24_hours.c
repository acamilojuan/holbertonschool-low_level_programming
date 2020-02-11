#include "holberton.h"
/**
 * jack_bauer - Void function
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int mins;
	int hs;

	for (hs = 0; hs <= 23; hs++)
	{
		for (mins = 0; mins <= 59; mins++)
		{
			_putchar(hs / 10 + '0');
			_putchar(hs % 10 + '0');
			_putchar(58);
			_putchar(mins / 10 + '0');
			_putchar(mins % 10 + '0');
			_putchar('\n');
		}
	}
}
