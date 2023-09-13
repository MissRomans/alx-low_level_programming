#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Function that prints a name
 * @name: name to be printed
 * @f: pointer to function
 * Return: Always 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	f(name);
}

