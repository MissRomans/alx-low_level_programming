#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: Always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int m;
	char *str;

	va_list list;

	va_start(list, n);

	for (m = 0; m < n; m++)
	{
		str = va_arg(list, char*);
		if (!str)
			str = "nil";
		if (!separator)
			printf("%s", str);
		else if (separator && m == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}
	printf("\n");
	va_end(list);
}
