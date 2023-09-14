#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers
 * @separator: string to be printed
 * @n: number of argument
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int m;
	va_list list;

	va_start(list, n);

	for (m = 0; m < n; m++)
	{
		printf("%d", va_arg(list, int));
		if (m != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
