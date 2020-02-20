#include "holberton.h"
/**
 * _strncat - function
 * @dest: input 1
 * @src: input 2
 * @n: input 3
 * Return: dest pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;
	int c;

	for (a = 0; dest[a] != 0;) /** size of dest[] */
	{
	a++;
	}
	for (b = 0; src[b] != 0;) /** size of src[] */
	{
	b++;
	}
	for (c = 0; c < n && src[c] != 0; c++) /** size of array src[c]*/
	/**final array to give the new value to dest */
	{
	dest[a + c] = src[c];
	}
	dest[a + c] = '\0';

	return (dest);
}
