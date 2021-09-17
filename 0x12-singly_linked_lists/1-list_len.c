#include "lists.h"

/**
 * list_len - Determines the number of elements in a linked list_t list
 * @h: the list_t linked list.
 * 
 * Return: the number of elements in h
 */
size_t list_len(const list_t *h)
{
    int no_elems = 0;
    const list_t *current = h;

    while (current)
    {
        no_elems++;
        current = current->next;
    }
    return (no_elems);
}
