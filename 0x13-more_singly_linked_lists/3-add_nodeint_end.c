#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: a double pointer to the starting node of the linked list
 * @n: the data to be stored in the new element
 *
 * Return: a pointer to the newly created node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head)
	{
		current = *head;
		while (current->next)
			current = current->next;

		current->next = new_node;
	}
	else
	{
		*head = new_node;
		return (*head);
	}

	return (current);
}

