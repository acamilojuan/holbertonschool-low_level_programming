#include "holberton.h"
/**
 * _strcmp - function
 * @s1: input 1
 * @s2: input 2
 * Return: rest pointer
 */
int _strcmp(char *s1, char *s2)
{
	int a;
	int res;

	for (a = 0; s1[a] != 0 || s2[a] != 0; a++)
		{
		res = s1[a] - s2[a];

			if (res != 0)
			{
			return (res);
			}
		}
		return (res);
}
