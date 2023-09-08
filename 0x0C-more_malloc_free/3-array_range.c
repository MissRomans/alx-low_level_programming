#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: minimum values stored
 * @max: maximum values stored
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int a, b;

	if (min > max)
		return (NULL);
	b = max - min + 1;
	ptr = malloc(sizeof(int) * b);
	if (ptr == NULL)
		return (NULL);
	for (a = 0; min <= max; a++)
		ptr[a] = min++;
	return (ptr);
}
