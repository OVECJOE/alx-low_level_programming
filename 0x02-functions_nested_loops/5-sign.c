#include "holberton.h"

/**
 * print_sign - prints the sign of a number.
 * @n: the number whose sign is to be printed.
 *
 * Return: 1 if +ve, -1 if -ve otherwise 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

