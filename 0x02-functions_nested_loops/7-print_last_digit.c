#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @m: Number to extract digit
 * Return: value of the last digit
 */

int print_last_digit(int m)
{
	int last_digit;

	last_digit = m % 10;
	if (last_digit < 0)
	{
	last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
