#include "holberton.h"
/**
  * print_binary - Function to print binary representation of an integer
  * @n: Variable integer to use
  * Return: Number converted in binary or 0
 */
void print_binary(unsigned long int n)
{
	int a, numb;

	for (a = 63; a >= 0; a--)
	{
		numb = n >> a;
		if (numb & 1)
			_putchar('1');
		else if (numb | 0)
			_putchar('0');
	}
	if (n == 0)
		_putchar('0');
}
