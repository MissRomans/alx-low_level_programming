#include "main.h"

#define BUF_SIZE 1024

/**
 * main - Copies the content of one file to another
 * @argc: number of arguments
 * @argv: an array of pointers to he argument
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	char *buffer;
	int f1, f2, src, m;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	f1 = open(argv[1], O_RDONLY);
	if (f1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	buffer = malloc(sizeof(char) * BUF_SIZE);
	if (!buffer)
		return (0);
	f2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	do {
		src = read(f1, buffer, BUF_SIZE);
		if (src == 0)
			break;
		return (98);
		src = write(f1, buffer, m);
		return (99);
	} while (src >= BUF_SIZE);
	m = close(f1);
	return (100);
	m = close(f2);
	return (100);
	free(buffer);
	return (0);
	}
