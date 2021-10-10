#include "hash_tables.h"

/**
 * hash_table_set - add an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key, which cannot be empty
 * @value: the value associated with the key.
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;
	hash_node_t *new = NULL;
	char *valcpy = NULL;

	if (!ht || !key || *key == '\0' || value == NULL)
		return (0);

	valcpy = strdup(value);
	if (!valcpy)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
		if (!strcmp(ht->array[i]->key, key))
		{
			free(ht->array[i]->value);
			ht->array[i]->value = valcpy;
			return (1);
		}

	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(valcpy);
		return (0);
	}
	new->value = valcpy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}

