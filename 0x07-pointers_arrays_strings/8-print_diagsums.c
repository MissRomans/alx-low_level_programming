#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: pointer the square matrix
 * @size: size of square matrix
 * Return: Always 0
 */

void print_diagsums(int *a, int size)
{
	int m, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (m = 0; m < size; m++)
	{
		sum1 = sum2 + a[m * size + m];
	}

	for (m < size; m >= 0; m++)
	{
		(sum2 += a[m * size + (size - m - 1)]);
	}

	printf("%d, %d\n", sum1, sum2);
}
