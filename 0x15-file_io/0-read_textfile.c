#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX STDOUT
 * @filename: the text file to be read
 * @letters: number of letters
 * Return: the actual number of letters it could read and print
 * 0,if the file cannot be opened or read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t m, fd;
	int a;

	if (filename == NULL)
		return (0);
	a = open(filename, O_RDONLY);

	if (a == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	fd = read(a, buffer, letters);
	m = write(STDOUT_FILENO, buffer, letters);
	buffer[letters] = '\0';
	free(buffer);
	close(fd);
	return (m);
}
