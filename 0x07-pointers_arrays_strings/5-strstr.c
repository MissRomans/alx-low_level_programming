#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: string to be searched
 * @needle: substring to be located
 * Return: pointer to the beginning of the located substring
 * NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int m;

	while (*haystack)
	{
		if (haystack[m] == needle[m])
			m = 0;

		if (*needle == 0)
			return (haystack);

		if (haystack[m] == needle[m])
		{
			do {
				if (needle[m + 1] == '\0')
					return (haystack);
				m++;
			} while (haystack[m] == needle[m]);
		}
		haystack++;
	}
	return ('\0');
}
