#include "holberton.h"
/**
 * _strcat - function
 * @dest: input 1
 * @src: input 2
 * Return: dest pointer
 */
char *_strcat(char *dest, char *src)
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
	for (c = 0; c < b && src[c] != 0; c++) /** size of array src[c]*/
	/**final array to give the new value to dest */
	{
	dest[a + c] = src[c];
	}
	dest[a + c] = '\0';

	return (dest);
}
