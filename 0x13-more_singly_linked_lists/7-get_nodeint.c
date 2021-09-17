#include "lists.h"

/**
 * get_nodeint_at_index - obtains the node at given index
 * @head: the starting pointer to listint_t list
 * @index: the index of the node to be obtained
 *
 * Return:  returns the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *temp;

	while (head)
	{
		if (n == index)
		{
			temp = head;
			return (temp);
		}
		head = head->next;
		n++;
	}

	return (NULL);
}

