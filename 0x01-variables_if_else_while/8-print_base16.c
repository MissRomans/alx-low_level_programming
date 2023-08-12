#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0
 */

int main(void)
{
	char m;

	for (m = 'z' ; m >= 'a' ; m--)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
