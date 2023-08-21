#include "main.h"

/**
 * print_rev - Prints a string
 * @s: String
 * Return: Always 0
 */

void print_rev(char *s)
{
	int start = 0;

	while (s[start] != '\0')
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}

