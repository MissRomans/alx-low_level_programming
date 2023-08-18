#include "main.h"

/**
 * print_number - Prints an integer
 * @n: Input integer
 * Return: Always 0
 */

void print_number(int n)
{
	unsigned int a = n;

	if (n < 0)
	{
		_putchar(' ');
		a = -a;
	}
	if (a / 10)
	{
		print_number(a / 10);
	}
	_putchar(a % 10 + '0');
}
