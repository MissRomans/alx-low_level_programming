#include "main.h"
#include <stddef.h>

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: number to search
 * @index: index of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int m;

	if (index > sizeof(size_t) * 8)
		return (-1);
	for (m = 0; m < index; m++)
		n = n >> 1;
	return ((n & 1));
}
