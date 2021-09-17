#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer.
 *@n: the number whose absolute value is to be determine.
 *
 * Return: the absolute value.
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

