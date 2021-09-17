#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of ints containing all numbers
 * from min to max
 * @min: the first element of the array
 * @max: the last element of the array
 *
 * Return: a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *n_array;
	int i, j, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	n_array = malloc(sizeof(int) * size);
	if (n_array == NULL)
		return (NULL);

	for (i = min, j = 0; i <= max; i++, j++)
		n_array[j] = i;

	return (n_array);
}

