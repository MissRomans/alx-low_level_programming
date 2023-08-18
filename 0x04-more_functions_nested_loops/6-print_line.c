#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: number of times
 * Return: Always 0
 */

void print_line(int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
