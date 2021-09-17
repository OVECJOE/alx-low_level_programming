#include "holberton.h"

/**
 * _strchr - locates a character in a string.
 * @s: the string to search through.
 * @c: the character to be searched for.
 *
 * Return: a pointer to the first occurrence of c in s.
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
		if (!*s++)
			return (0);
	return (s);
}

