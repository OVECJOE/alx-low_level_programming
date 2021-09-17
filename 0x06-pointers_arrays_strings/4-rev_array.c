#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array of integers
 * @n: the number of elements of the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int low, high, tmp;

	for (low = 0, high = n - 1; low < high; low++, high--)
	{
		tmp = a[low];
		a[low] = a[high];
		a[high] = tmp;
	}
}
