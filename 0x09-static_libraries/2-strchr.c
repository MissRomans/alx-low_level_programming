#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: string
 * @c: character to be located
 * Return: Pointer to the first occurrence of the character
 * NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int m;

	for (m = 0; s[m] >= '\0'; m++)
	{
		if (s[m] == c)
			return (s + m);
	}
	return ('\0');
}
