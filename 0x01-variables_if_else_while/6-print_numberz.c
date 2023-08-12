#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0
 */

int main(void)
{
	int m;

	for (m = 0 ; m < 10 ; m++)
	{
		putchar(m + '0');
	}
	putchar ('\n');
	return (0);
}
