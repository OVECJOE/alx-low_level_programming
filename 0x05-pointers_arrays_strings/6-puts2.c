#include "holberton.h"

/**
 * puts2 - prints every other character starting with the first
 * character, followed by a new line.
 * @str: the string to manipulate.
 *
 * Return: nothing.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if (!(i % 2))
			_putchar(str[i]);
	_putchar(10);
}

