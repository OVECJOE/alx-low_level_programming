#include "lists.h"

/**
 * print_list - prints the contents of a linked list
 * @h: the given linked list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int num_nodes = 0;
	const list_t *current = h;

	while (current)
	{
		if (current->str)
			printf("[%d] %s\n", current->len, current->str);
		else
			printf("[0] (nil)\n");

		num_nodes++;
		current = current->next;
	}

	return (num_nodes);
}

