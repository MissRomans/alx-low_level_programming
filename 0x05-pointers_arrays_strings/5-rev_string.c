#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string
 * Return: Always 0
 */

void rev_string(char *s)
{
	int length = 0;
	int i;
	char rev;

	while (s[length] != '\0')
		length++;

	for (i = 0; i < length; i++)
	{
		length--;
		rev = s[i];
		s[i] = s[length];
		s[length] = rev;
	}
}
