#include "holberton.h"

/**
 * print_alphabet_x10 - A function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int n = 0;

	for (; n < 10; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
