#include <stdio.h>

/**
 * main - program that prints alphabet in lowercase
 *
 * Return: Always (0)
 */

int main(void)
{
	char m;

	for (m = 'a' ; m <= 'z' ; m++)
		putchar(m);
	putchar('\n');
	return (0);
}
