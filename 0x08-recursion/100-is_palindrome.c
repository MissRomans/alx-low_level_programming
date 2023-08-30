#include "main.h"

/**
 * is_palindrome - Returns 1 if a string is a palindrome and 0 if not
 * @s: string
 * Return: 1 if string is palindrome, 0 if otherwise
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (
