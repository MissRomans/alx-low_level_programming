#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * starting with the first character
 * @str: String
 * Return: Always 0
 */

void puts2(char *str)
{
	int m = 0;

	while (str[m] != '\0')
	{
		if (m % 2 == 0)
		{
			_putchar(str[m]);
		}
		m++;
	}
	_putchar('\n');
}
