#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: input argument
 * @argv: input string to be used
 * Return: Allways zero
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int result;

	if (argc != 3)
	{
	puts("Error");
	return (0);
	}
	else
	{
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	result = x * y;
	printf("%d\n", result);
	}
	return (0);
}
