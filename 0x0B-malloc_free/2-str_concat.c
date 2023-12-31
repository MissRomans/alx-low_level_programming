#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the concatenated two strings, or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int a, b, c;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	c = a + b;
	s = malloc((sizeof(char) * c) + 1);

	if (s == NULL)
		return (NULL);
	while (s2[b] != '\0')
	{
		s[a] = s2[b];
		a++, b++;
	}
	s[a] = '\0';
	return (s);
}
