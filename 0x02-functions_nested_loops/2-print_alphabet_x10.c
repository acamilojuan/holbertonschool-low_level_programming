#include "holberton.h"
/**
 * print_alphabet_x10 - Void function
 */
void print_alphabet_x10(void)
{
	int lrep;
	char letter;

	for (lrep = 0; lrep < 10; lrep++)
	{
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
	}
}
