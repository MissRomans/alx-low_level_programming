#include <stdio.h>

/**
 * main -  prints the first 50 Fibonacci numbers
 * starting with 1 and 2
 * Return: Always 0
 */

int main(void)
{
	int a, b, sum;

	a = 1, b = 2;
	printf("%d, %d", a, b);
	for (int i = 2; i < 50; i++)
	{
	sum = a + b;
	printf(", %d", sum);

	a = b;
	b = sum;
	}
	printf("\n");

	return (0);
}


