#include "holberton.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 * @n: The parameter to be worked on.
 *
 * Return: Always n.
 */
int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
		n = -n;

	_putchar(n + '0');
	return (n);
}
