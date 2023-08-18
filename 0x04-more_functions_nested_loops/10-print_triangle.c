#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: Size of the triangle
 * Return: Always 0
 */

void print_triangle(int size)
{
	int row, column, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (c = size - row; c >= 1; c--)
			{
				_putchar(' ');
			}
			for (column = 1; column <= row; column++)
			{
				_putchar ('#');
			}
		}
		_putchar('\n');
	}
}
