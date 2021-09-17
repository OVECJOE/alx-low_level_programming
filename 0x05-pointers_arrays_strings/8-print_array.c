#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: the array to be printed.
 * @n: the number of elements of the array to be printed.
 *
 * Return: nothing.
 */
void print_array(int *a, int n)
{
	int i = 0, j = 0;

	for (; a[j] != '\0'; j++)
		;

	for (; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
