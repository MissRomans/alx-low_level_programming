#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: Always 0
 */

void print_all(const char * const format, ...)
{
	char *str, *separator = "";
	int m = 0;

	va_list list;

	va_start(list, format);

	if (format)
		while (format[m])
		{
			switch (format[m])
			{
				case 'c':
					printf("%s%c", separator, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "nil";
					printf("%s%s", separator, str);
					break;
				default:
					m++;
					continue;
			}
			separator = ", ";
			m++;
		}
	printf("\n");
	va_end(list);
}
