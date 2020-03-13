#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_them_all - function
 * @n: variable to be used
 * @...: ellipsis
 * Return: zero or sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list param;
	unsigned int a;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(param, n);
	for (a = 0; a < n; a++)
	{
		sum += va_arg(param, int);
	}
	va_end(param);
	return (sum);
}
