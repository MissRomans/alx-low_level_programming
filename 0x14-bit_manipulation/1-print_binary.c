#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: number to be printed
 */

void print_binary(unsigned long int n)
{
	unsigned long int num;
	int m, count = 0;

	for (m = 63; m >= 0; m--)
	{
		num = n >> m;
		if (num & 1)
		{
			_putchar('1');
			count++;
		}
		else if (num)
		{
			_putchar('0');
		}
	}
	if (!num)
		_putchar ('0');
}
