#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: the head of the linked list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *temp = h;

	while (temp)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}

	return (count);
}

