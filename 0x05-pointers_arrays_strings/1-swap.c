#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: Integer to swap
 * @b: Integer to swap
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
