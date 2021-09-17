#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: a pointer to the address of the head node
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (!head)
		return;

	while (*head)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}

	head = NULL;
}

