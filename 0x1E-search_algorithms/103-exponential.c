#include <stdio.h>
#include "search_algos.h"

/**
 * custom_bsearch - find the index of the value using binary search
 * @array: a pointer to the array to be searched
 * @l: the starting index
 * @h: the end index
 * @value: value that is searched for
 *
 * Return: int
 */
int custom_bsearch(int *array, size_t l, size_t h, int value)
{
	size_t i, m;

	if (array == NULL)
		return (-1);

	printf("Searching in array: ");
	for (i = l; i < (h + 1); i++)
		printf("%d%s", array[i], i < h ? ", " : "\n");

	m = l + ((h - l) / 2);
	if (l == h)
		return (array[m] == value ? (int)m : -1);
	if (value < array[m])
		return (custom_bsearch(array, l, m - 1, value));
	else if (value > array[m])
		return (custom_bsearch(array, m + 1, h, value));
	else
		return ((int)m);
}

/**
 * exponential_search - searches value in a sorted array of ints using the
 * exponential search algo
 * @array: a pointer to the first element of the array to be searched
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: first index where value is located, else -1 on failure
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t l = 1, h = 2;

	if (!array || !size)
		return (-1);

	if (size < 2)
		l = 0, h = 1;
	else
	{
		while (l < size)
		{
			printf("Value checked array[%ld] = [%d]\n", l, array[l]);
			if (((array[l] <= value) && (array[h] >= value)) || ((l * 2) >= size))
				break;
			l *= 2;
			h = (h * 2 < size) ? h * 2 : size - 1;
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n", l, h);
	return (custom_bsearch(array, l, h, value));
}
