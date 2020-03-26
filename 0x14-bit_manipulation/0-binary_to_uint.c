#include "holberton.h"
/**
  * binary_to_uint - Function to convert binaries to unsigned integers
  * @b: Pointer to a string
  * Return: Number converted or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a, numb = 0;

	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
		numb <<= 1;
		if (b[a] == '1')
			numb += 1;
	}
	return (numb);
	if (b == '\0')
		return (0);
}
