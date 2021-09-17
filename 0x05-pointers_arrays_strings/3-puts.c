#include "holberton.h"

/**
 * _puts - prints a string to the standard output.
 * @str: the string to be printed.
 *
 * Return: nothing.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

