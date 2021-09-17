#include "holberton.h"

/**
 * _strlen - returns the length of a string.
 * @c: the string to be operated on.
 *
 * Return: int
 */
int _strlen(char *c)
{
	int i = 0;

	while (c[i] != '\0')
		i++;
	return (i);
}

