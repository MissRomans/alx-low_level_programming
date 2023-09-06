#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * count_word - count of words in a string
 * @str: to evaluate words
 * Return: number of words
 */

int count_word(char *str)
{
	int a;
	int count = 0;
	int words = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] == ' ')
			count = 0;
		else if (count == 0)
		{
			count = 1;
			words++;
		}
	}
	return (words);
}

/**
 * strtow - Splits a string into words
 * @str: strings input
 * Return: pointer to an array of strings
 */

char **strtow(char *str)
{
	int **words;
	int a, b, c, d;

	if (str == NULL || *str == '\0')
		return (NULL);
	words = malloc(sizeof(char *) * (b + 1));
	if (words == NULL)
	{
		free(words);
		return (NULL);
	}
	for (a = 0; a <= str; a++)
	{
		words[a] = malloc(sizeof(int) * str);
			if (words[a]  == NULL)
			{
				for (b = a; b >= 0; b--)
				{
					free(words[b]);
				}
				free(words);
				return (NULL);
			}
	}
	for (c = 0; c <= str; c++)
	{
		for (d = 0; d <= str; d++)
		{
			words[c][d] = 0;
		}
	}
	return (**words);
}
