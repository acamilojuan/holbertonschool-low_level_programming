#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *string_nconcat - function
 * @s1: pointer variable to be used
 * @s2: pointer variable 2 to be used
 * @n: uns int variable to be used
 * Return: Null or pointer to s3
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c, d, size;
	char *s3;

	a = b = c = d = size = 0;

	if (s1 == '\0')
	{
		s1 = "";
	}
	for (a = 0; s1[a] != '\0';)
	{
		a++;
	}
	for (b = 0; b < n;)
	{
		b++;
	}
	size = a + b;
	if (b > n)
		b = n;
	s3 = (char *) malloc(1 + (sizeof(char) * size));

	if (!s3)
		return (NULL);

	for (c = 0; c < a; c++)
	{
		s3[c] = s1[c];
	}
	for (d = 0; d < b; d++)
	{
		s3[c + d] = s2[d];
	}
	return (s3);
}
