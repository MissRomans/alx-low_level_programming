#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: string allocated
 * @s2: string to be concatenated
 * @n: number of bytes from s2 concatenated to s1
 * Return: pointer to resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int a = 0, b = 0, length1 = 0, length2 = 0;

	if (s1 == NULL || s2 == NULL)
		return ("");
	while (s1 && s1[length1])
		length1++;
	while (s2 && s2[length2])
		length2++;
	if (n < length2)
		str = malloc(sizeof(char) * (length1 + n + 1));
	else
		str = malloc(sizeof(char) * (length1 + length2 + 1));
	if (!str)
		return (NULL);
	while (n < length2 && a < (length1 + n))
		str[a++] = s2[b++];
	while (n >= length2 && a < (length1 + length2))
		str[a++] = s2[b++];
	str[a] = '\0';
	return (str);
}
