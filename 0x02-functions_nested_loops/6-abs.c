#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @m: Number to be computed
 * Return: The absolute value of an integer
 */

int _abs(int m)
{
	if (m < 0)
	{
	int abs_val;

	abs_val = m * -1;
	return (abs_val);
	}
	return (m);
}
