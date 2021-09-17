#include "holberton.h"

/**
 * _islower - checks for lowercase character.
 * @c: the character to be checked.
 *
 * Return: 1 if lowercase else 0.
 */
int _islower(int c)
{
	if (c >= 97 && c < 123)
		return (1);
	else
		return (0);
}

