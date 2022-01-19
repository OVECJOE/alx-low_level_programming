#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches a value in a sorted array using jump search algo
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where @value is found, else -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size), low = 0, i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i += jump)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		if (array[i] < value)
			low = i;
		else
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
					i, i + jump);
			break;
		}
	}

	for (; low < size; low++)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);
	}
	return (-1);
}
