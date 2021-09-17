#include "holberton.h"

/**
 * set_string - set the value of a pointer to a character.
 * @s: pointer to a pointer to a char
 * @to: the string s should point to.
 *
 * Return: nothing.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
