#include "main.h"

/**
 * _puts - Prints a string
 * @str: String to print
 * Return: Always 0
 */

void _puts(char *str)
{
	int m = 0;

	while (str[m])
	{
		_putchar(str[m]);
		m++;
	}
	_putchar('\n');
}
