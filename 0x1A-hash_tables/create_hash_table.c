#include "hash_tables.h"

/**
 * node_handler - If item at index is a linked list, tranverse it to ensure
 * that there is not already an item with the key passed. If there is,
 * reassign the value of the preexisting node to the current instead of adding
 * the new node.
 *
 * @ht: the hash table of linked lists
 * @node: The linked list to add a node to or update
 *
 * Return: void
 */
void node_handler(hash_table_t *ht, hash_node_t *node)
{
	unsigned long int i = key_index((const unsigned char *)node->key, ht->size);
	hash_node_t *tmp = ht->array[i];

	if (ht->array[i])
	{
		tmp = ht->array[i];
		while (!tmp)
		{
			if (!strcmp(tmp->key, node->key))
				break;
			tmp = tmp->next;
		}

		if (!tmp)
		{
			node->next = ht->array[i];
			ht->array[i] = node;
		}
		else
		{
			free(tmp->value);
			tmp->value = strdup(node->value);
			free(node->value);
			free(node->key);
			free(node);
		}
	}
	else
	{
		node->next = NULL;
		ht->array[i] = node;
	}
}

/**
 * hash_table_set - Allocates memory for a new node and calls the node_handler
 * function to either insert the node if the key does not exist, or update
 * a pre-existing node in the case that it has the same key as that passed
 * to this function.
 * @key: the key to add to the hash table
 * @value: the corresponding value to add to the node
 *
 * Return: 1 if memory allocation fails, and 0 if the function returns
 * successfully.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;

	if (!ht)
		return (1);

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (1);

	node->key = strdup(key);
	node->value = strdup(value);

	node_handler(ht, node);

	return (0);
}
