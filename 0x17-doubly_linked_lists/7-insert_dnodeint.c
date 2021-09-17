#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: a pointer to the starting node
 * @idx: the index where the new node is to be inserted
 * @n: the data to be inserted in that node
 *
 * Return: the address of the new node, else NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new_node, *next, *temp = *h;

	if (!*h)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	while (temp->prev)
		temp = temp->prev;

	if (!idx)
		return (add_dnodeint(h, n));

	while (temp && count < idx)
	{
		if (count == idx - 1)
		{
			next = temp->next;
			temp->next = new_node;
			new_node->prev = temp;
			new_node->next = next;
			return (new_node);
		}

		count++;
		temp = temp->next;
	}

	if (!temp && count == idx)
		return (add_dnodeint_end(h, n));

	return (NULL);
}

