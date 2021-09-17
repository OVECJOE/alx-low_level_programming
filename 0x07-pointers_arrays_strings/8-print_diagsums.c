#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: the 2D array or square matrix
 * @size: the size of the square matrix
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	unsigned int sum = 0, sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		sum1 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", sum, sum1);
}
