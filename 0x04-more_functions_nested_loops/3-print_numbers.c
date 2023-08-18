#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9
 * Return: Always 0
 */

void print_numbers(void)
{
	char m;

	for (m = 0; m <= 9; m++)
	{
		_putchar(m);
	}
	_putchar('\n');
}
