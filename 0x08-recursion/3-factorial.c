#include "holberton.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: the number whose factorial is wanted.
 *
 * Return: n! if n > 0, 0 if n == 0, otherwise, -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}

