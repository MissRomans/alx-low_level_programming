#include "main.h"

/**
  * actual_prime - calculate a prime number
  * @n: number to be checked
  * @a: iterator
  * Return: 1 if prime, 0 otherwise
  */

int actual_prime(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);

	return (actual_prime(n, a - 1));
}

/**
  * is_prime_number - Returns 1 if the input integer is a prime number
  * @n: number to be checked
  * Return: 1 if prime, 0 otherwise
  */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
