#include "main.h"
#define INT_SIZE (sizeof(int) * 8)

/**
 * print_binary - print the binary representation of a positive integer
 * @n: the number to be converted
 *
 * Return: binary representation of n
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}

