#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase
 *
 * Return: Always (0)
 */

int main(void)
{
	char m;

	for (m = 'a' ; m <= 'z' ; m++)
	{
		if (m != 'q' && m != 'e')
		{
			putchar(m);
		}
	}
	putchar ('\n');
	return (0);
}
