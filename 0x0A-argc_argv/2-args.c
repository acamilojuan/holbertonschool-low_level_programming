#include "holberton.h"
#include <stdio.h>
/**
 * main - function
 * @argc: input argument
 * @argv: input string to be used
 * Return: Allways zero
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
	printf("%s\n", argv[a]);
	}
	return (0);
}
