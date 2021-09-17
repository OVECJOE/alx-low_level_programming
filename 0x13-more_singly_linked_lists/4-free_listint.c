#include "lists.h"

/**
 * free_listint -  frees a listint_t list.
 * @head: a pointer to the listint_t list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}
}

