#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: a double pointer to the starting node of a listint_t list
 *
 * Return: the head node’s data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (!*head)
		return (0);

	temp = *head;
	*head = (*head)->next;
	n = temp->n;

	free(temp);

	return (n);
}

