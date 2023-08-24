#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Function that prints a buffer
 * @b: the buffer
 * @size: size of the buffer
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int i, k, l;

	i = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (i < size)
	{
		k = size - i < 10 ? size - i : 10;
		printf("%08x: ", i);
		for (l = 0; l < 10; l++)
		{
		if (l < k)
			printf("%02x", *(b + i + l));
		else
			printf(" ");
		if (l % 2)
		{
			printf(" ");
		}
		}
		for (l = 0; l < k; l++)
		{
			int c = *(b + i + l);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		i += 10;
	}
}
