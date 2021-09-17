#include "lists.h"

/**
 * add_node_end - at new node to the end of a linked list
 * @head: a double pointer to the head of a linked list
 * @str: the string to be copied to str member of the linked list
 * Return: a pointer to the newly created node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup_str;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	dup_str = strdup(str);
	if (!str)
	{
		free(new);
		return (NULL);
	}

	new->str = dup_str;
	new->len = _strlen(str);
	new->next = NULL;

	if (!*head)
		*head = new;

	else
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = new;
	}

	return (*head);
}

/**
 * _strlen - returns the length of a string
 * @s: the string whose length is to be determined
 * Return: the length of s
 */
int _strlen(const char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}