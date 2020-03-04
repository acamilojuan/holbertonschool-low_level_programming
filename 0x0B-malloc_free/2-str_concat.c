#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - function
 * @s1: variable pointer to be used
 * @s2: variable pointer2 to be used
 * Return: Null or pointer to array
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int a, b, c, d, e;

	if (*s1 == '\0')
	{
		s1 = "";
	}
	if (*s2 == '\0')
	{
		s2 = "";
	}
	for (a = 0; s1[a] != '\0';) /** size of s1[] */
	{
		a++;
	}
	for (b = 0; s2[b] != '\0';) /** size of s2[] */
	{
		b++;
	}
	c = a + b;
	s3 = (char *) malloc(1 + (sizeof(char) * c));
	if (!s3)
		return ('\0');
	for (d = 0; d < a; d++)
	{
		s3[d] = s1[d];
	}
	for (e = 0; e <= b; e++)
	{
		s3[d + e] = s2[e];
	}
	return (s3);
}
