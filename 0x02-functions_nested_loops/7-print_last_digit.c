#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @m: Number to extract digit
 * Return: value of the last digit
 */

int print_last_digit(int m)
{
	int last_digit;

	if (m < 0)
	{
	last_digit = m % 10;

	last_digit = last_digit * -1;
	}
	return (last_digit);
}
