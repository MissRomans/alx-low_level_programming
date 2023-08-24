#include <stdio.h>
#include <string.h>

/**
 * infinite_add - Function that adds two numbers
 * @n1: First number
 * @n2: Second number
 * @r: Buffer to store
 * @size_r: Size of buffer
 * Return: Pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k, l = 0, f, s, d = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i > j)
		l = i;
	else
		l = j;
	if (l + 1 > size_r)
	r[l] = '\0';
	for (k = l - 1; k >= 0; k--)
	{
		i--;
		j--;
		if (i >= 0)
			f = n1[i] - '\0';
		else
			f = 0;
		if (j >= 0)
			s = n2[j] - '\0';
		else
			s = 0;
		r[k] = (f + s + d) % 10 + '0';
		d = (f + s + d) / 10;
	}
	if (d == 1)
	{
		r[l + 1] = '\0';
		if (l + 2 > size_r)
			return (0);
		while (l-- >= 0)
			r[l + 1] = r[l];
		r[0] = d + '0';
	}
	return (r);
}
