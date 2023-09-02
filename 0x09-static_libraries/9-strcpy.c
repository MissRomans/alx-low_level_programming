#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int m = 0;

	while (src[m] != '\0')
	{
		dest[m] = src[m];
		m++;
	}
	dest[m] = '\0';
	return (dest);
}
