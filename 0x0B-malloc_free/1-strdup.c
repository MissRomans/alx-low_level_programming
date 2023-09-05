#include "main.h"
#include <stdlib.h>

/**
 * _strdup - new string which is a duplicate of the string
 * @str: string to duplicate
 * Return: Always 0
 */

char *_strdup(char *str)
{
	int a, b = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;
	s = malloc((sizeof(char) * a) + 1);
	if (s == NULL)
		return (NULL);
	for (b = 0; str[b]; b++)
		s[b] = str[b];
	return (s);
}
