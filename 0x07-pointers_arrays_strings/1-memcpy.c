#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: memory area
 * @src: bytes from memory area
 * @n: function copies
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m = 0;

	while (m < n)
	{
		dest[m] = src[m];
		m++;
	}
	return (dest);
}
