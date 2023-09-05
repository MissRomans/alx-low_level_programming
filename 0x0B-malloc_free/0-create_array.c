#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - An array of chars, and initializes it with a specific char
 * @size: size of array
 * @c: char to assign
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *s;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		s[a] = c;
	return (s);
}
