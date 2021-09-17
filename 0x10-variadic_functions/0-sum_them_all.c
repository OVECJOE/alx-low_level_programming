#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: required parameter
 *
 * Return: return the sum of all given arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum, num;
	unsigned int i;
	va_list args;

	sum = 0;
	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		sum += num;
	}
	return (sum);
}

