#include "lists.h"

/**
 * listint_len - finds the number of elements in a linked listint_t list.
 * @h: the head node of a linked listint_t list
 *
 * Return: the number of elements present in h
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *temp = h;

	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}

