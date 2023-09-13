#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes of itself
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 * Return:Always 0
 */

int main(int argc, char *argv[])
{
	int bytes, m;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[m]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;
	for (m = 0; m < bytes; m++)
	{
		printf("%02hhx\n", arr[m]);
		if (m == bytes - 1)
			break;
		printf(" ");
		arr++;
	}
	printf("\n");
	return (0);
}
