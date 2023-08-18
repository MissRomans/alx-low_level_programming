#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: Number of times
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int m, b;

	if (n <= 0)
		_putchar('\n');
	for (m = 0; m < n; m++)
	{
		for (b = 0; b < m; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

