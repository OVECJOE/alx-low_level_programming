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
	size_t step, a = 0, b = 0;

	if (!array)
		return (-1);
	step = (size_t)sqrt(size);
	while ((b < size) && (*(array + b) < value))
	{
		printf("Value checked array[%d] = [%d]\n", (int)b, *(array + b));
		a = b;
		b += step;
		if (a >= size)
			return (-1);
	}
	printf("Value found between indexes [%d] and [%d]\n", (int)a, (int)b);
	b = b >= size ? size - 1 : b;
	for (; (a <= b) && (*(array + a) <= value); a++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)a, *(array + a));
		if (*(array + a) == value)
			return ((int)a);
	}
	return (-1);
}
