#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a function on each element of an array
 * @size: size of array
 * @array: array
 * @action: pointer to the function
 * Return: Always 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int m;

	if (array == NULL || action == NULL)
		return;
	for (m = 0; m < size; m++)
	{
		action(array[m]);
		array++;
	}
}
