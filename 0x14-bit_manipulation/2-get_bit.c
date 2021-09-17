#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number whose bit value is to be obtained from an index
 * @index: the position of the bit
 *
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	bit = (n >> index) & 1;
	return (bit);
}

