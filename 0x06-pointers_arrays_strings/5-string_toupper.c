#include "holberton.h"

/**
 * string_toupper - changes all lowercase of a string to uppercase.
 * @s: the string given as argument.
 *
 * Return: char *
 */
char *string_toupper(char *s)
{
	int len, i;

	for (len = 0; s[len] != '\0'; len++)
		;

	for (i = 0; i < len; i++)
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	return (s);
}

