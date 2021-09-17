#include "holberton.h"

/**
 * is_prime_number - checks if the input integer is a prime number.
 * @n: the integer to be checked
 *
 * Return: 1 if prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	else if (n < 2)
		return (0);
	return (_is_prime(n, 2));
}

/**
 * _is_prime - tests for prime
 * @n: number to test
 * @i: the counter
 *
 * Return: 1 if prime, otherwise 0
 */
int _is_prime(int n, int i)
{
	if (i >= n / 2)
		return (1);
	if (n % i)
		return (_is_prime(n, i + 1));
	return (0);
}
