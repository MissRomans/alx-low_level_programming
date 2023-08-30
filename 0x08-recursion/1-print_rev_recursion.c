#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: string to be reversed
 * Return: Always 0
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_print_rev_recursion(s + 1);
	}
}

