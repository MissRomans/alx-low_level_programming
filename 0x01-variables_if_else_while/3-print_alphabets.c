#include <stdio.h>

/**
 * main - prints the alphabetic in lowercase and then uppercase
 *
 * Return: Always (0)
 */

int main(void)
{
	char m;

	char n;

	for (m = 'a' ; m <= 'z' ; m++)
		putchar (m);
	for (n = 'A' ; n <= 'Z' ; n++)
		putchar (n);
	putchar('\n');
	return (0);
}
