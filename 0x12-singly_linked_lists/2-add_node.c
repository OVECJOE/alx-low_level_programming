#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: a double pointer to a list_t linked list
 * @str: string to be copied to the str member of head
 * 
 * Return: returns a pointer to newly created node.
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *temp;

    if (head && str)
    {
        temp = malloc(sizeof(list_t));
        if (!temp)
            return (NULL);

        temp->str = strdup(str);
        temp->len = _strlen(str);
        temp->next = *head;

        *head = temp;
    }

    return (temp);
}

/**
 * _strlen - finds the length of a string
 * @s: the string whose length is to be calculated
 * Return: the length of s
 */
int _strlen(const char *s)
{
    int i = 0;

    while (*s++)
        i++;
    
    return (i);
}