#include <stdio.h>

/**
 * main -  prints the first 50 Fibonacci numbers
 * starting with 1 and 2
 * Return: Always 0
 */

int main(void)
{
	int a, b;

	a = 1, b = 2, sum;
	printf("%d, %d", a, b);
	for (a = 2; a < 50; a++)
	{
	sum = a + b;
	printf(", %d", sum);

	a + b;
	b + sum;
	}
	printf("\n");

	return (0);
}


