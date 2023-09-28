#include "main.h"

/**
 * flip_bits - Returns the number of bits
 * you would need to flip to get from one number to another
 * @n: number to compare
 * @m: second number to compare
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int r, count = 0;
	unsigned long int exclusive = n ^ m;
	unsigned long int current;

	for (r = 63; r >= 0; r--)
	{
		current = exclusive >> r;
		if (current & 1)
			count++;
	}
	return (count);
}

