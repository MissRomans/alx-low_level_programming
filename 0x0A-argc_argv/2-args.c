#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argc: number of argument
 * @argv: array of argument
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
	return(0);
}
