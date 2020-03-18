#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - function
 * @n: number of strings
 * @...: ellipsis
 * @separator: Pointer to the data
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list param;
	unsigned int a;
	char *str;

	va_start(param, n);
	for (a = 1; a <= n; a++)
	{
		str = va_arg(param, char *);
		if (str != '\0')
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (a < n)
		{
			if (separator != '\0')
			{
				printf("%s", separator);
			}
		}
	}
	putchar('\n');
	va_end(param);
}
