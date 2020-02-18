#include "holberton.h"
/**
 * rev_string - function
 * @s: variable to be used
 */
void rev_string(char *s)
{
	int a, c;
	char b;

	for (a = 0; s[a] != '\0';)
	{
	a++;
	}
	a--;
	
	for (c = 0; c < a; c++)
	{
	b = s[c];
	s[c] = s[a];
	s[a] = b;
	a--;
	}
}
