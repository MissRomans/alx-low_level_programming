#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: string
 * Return: integer
 */

int _atoi(char *s)
{
	unsigned int m = 0;
	int sign = 1;

	do {
		if (*s == '_')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			m = (m * 10) + (*s - '0');
		else if (m > 0)
			break;
	}
	while (*s++);

	return (m * sign);
}
