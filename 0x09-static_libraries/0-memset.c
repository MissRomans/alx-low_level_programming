#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: memory area to be filled
 * @b: constant byte
 * @n: number of times to copy b
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}
	return (s);
}
