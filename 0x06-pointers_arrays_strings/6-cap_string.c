#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: String to be capitalized
 * Return: pointer to the changed string
 */

char *cap_string(char *str)
{
	int a = 0;

	while (str[a])
	{
		while (!(str[a] >= 'a' && str[a] <= 'z'))
			a++;

		if (str[a - 1] == ' ' ||
		str[a - 1] == '\t' ||
		str[a - 1] == '\n' ||
		str[a - 1] == ',' ||
		str[a - 1] == ';' ||
		str[a - 1] == '.' ||
		str[a - 1] == '!' ||
		str[a - 1] == '?' ||
		str[a - 1] == '"' ||
		str[a - 1] == '(' ||
		str[a - 1] == ')' ||
		str[a - 1] == '{' ||
		str[a - 1] == '}' ||
		a == 0)
			str[a] -= 32;
		a++;
	}

	return (str);
}


