#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - searches a value in a sorted array of integers using
 * the interpolation search algorithm.
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where @value is located, else -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0, h = size - 1, m;

	if (!array)
		return (-1);

	while (*(array + h) != *(array + l))
	{
		m = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		if (m >= size)
		{
			printf("Value checked array[%ld] is out of range\n", m);
			break;
		}

		printf("Value checked array[%ld] = [%d]\n", m, array[m]);
		if (*(array + m) < value)
			l = m + 1;
		else if (value < *(array + m))
			h = m - 1;
		else
			return (m);
	}

	return ((array[l] == value) ? (int)l : -1);
}
