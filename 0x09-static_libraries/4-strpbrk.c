#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: bytes to be searched
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
				s++;
		}
		return (s);
	}
	return ('\0');
}
