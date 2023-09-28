#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: string containing binary
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int m;

	num = 0;
	if (!b)
		return (0);
	for (m = 0; b[m] != '\0'; m++)
	{
		if (b[m] != '0' || b[m] != '1')
			return (0);
	}
	for (m = 0; b[m] != '\0'; m++)
	{
		num <<= 1;
		if (b[m] == '1')
			num += 1;
	}
	return (num);
}
