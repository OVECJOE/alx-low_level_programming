#include "function_pointers.h"

/**
 * int_index - searches an int within an array using the cmp function
 * for the search condition
 * @array: an array of integers.
 * @size: the number of array elements
 * @cmp: a pointer to the function used as search condition
 *
 * Return: the index of the first element for which the cmp
 * function does not return 0, else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || size <= 0 || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}

