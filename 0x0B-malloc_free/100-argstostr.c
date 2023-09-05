#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int a, b, c = 0, d = 0;
	char *string;

	if (ac == 0)
		return (NULL);
	if (av == 0)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			d++;
	}
	d += ac;

	string = malloc(sizeof(char) * (d + 1));

	if (string == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
	for (b = 0; av[a][b]; b++)
	{
		string[c] = av[a][b];
		c++;
	}
	if (string[c] == '\0')
	{
		string[c++] = '\n';
	}
	}
	return (string);
}
