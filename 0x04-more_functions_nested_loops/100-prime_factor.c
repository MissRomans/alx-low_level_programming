#include "main.h"
#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor of the number 612852475143
 * Return: Always 0
 */

int main(void)
{
	unsigned long int a, b = 612852475143;

	for (a = 3; a * a <= b; a = a + 2)
	{
		while ((b % a == 0) && (b != a))
			b = b / a;
	}
	printf("%lu\n", b);
	return (0);
}

