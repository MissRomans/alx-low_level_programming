#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: String to print
 * Return: Always 0
 */

void puts_half(char *str)
{
	int full_length;
	int half_length;

	while (str[full_length] != '\0')
		full_length++;

	half_length = full_length / 2;

	if (full_length % 2 == 1)
		half_length++;
	while (half_length < full_length)
	{
		_putchar(str[half_length]);
		half_length++;
	}
	_putchar('\n');
}

