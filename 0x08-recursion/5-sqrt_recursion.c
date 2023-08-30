#include "main.h"

int actual_sqrt_recursion(int n, int a);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: number to calculate the square root
 * Return: result of square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - calculates square root
 * square root of a number
 * @n: number to calculate the square root
 * @a: iterator
 * Return: result of square root
 */

int actual_sqrt_recursion(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (actual_sqrt_recursion(n, a + 1));
}
