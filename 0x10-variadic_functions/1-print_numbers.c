#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - function
 * @n: variable to be used
 * @...: ellipsis
 * @separator: Pointer to the data
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list param;
	unsigned int a;
	unsigned int num = 0;

	va_start(param, n);
	for (a = 1; a <= n; a++)
	{
		if (separator != '\0')
		{
			num = va_arg(param, unsigned int);
			printf("%d", num);
			if (a < n)
				printf("%s", separator);
		}
		else
			printf("%d", va_arg(param, unsigned int));
	}
	putchar('\n');
	va_end(param);
}
