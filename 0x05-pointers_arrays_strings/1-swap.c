#include "holberton.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: first integer
 * @b: second integer
 *
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
