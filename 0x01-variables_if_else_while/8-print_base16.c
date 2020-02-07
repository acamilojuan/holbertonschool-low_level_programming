#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char numberhex = '0';

	while (numberhex <= '9')
	{
		putchar(numberhex);
		numberhex++;
	}
	numberhex = 'a';

	while (numberhex <= 'f')
	{
		putchar(numberhex);
		numberhex++;
	}
	putchar('\n');
	return (0);
}
