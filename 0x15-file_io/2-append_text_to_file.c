#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: NULL terminated string to add at the end of the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, fd = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (fd = 0; text_content[fd];)
			fd++;
	}
	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, fd);

	if (a == -1 || b == -1)
		return (-1);
	close(a);
	return (1);
}
