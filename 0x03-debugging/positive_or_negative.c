#include "main.h"

/**
 * main - If a number is positive, negative or zero
 * i: Number to be checked
 * Return: Always 0
 */

void positive_or_negative(int i)
{
	if (i <0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else if (i > 0)
	{
		printf("%d is %s\n", i, "positive");
	}
	else
	{
		printf("%d is %s\n", i, "zero");
	}
}
