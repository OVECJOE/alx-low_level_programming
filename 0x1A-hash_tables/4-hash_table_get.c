#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 *
 * Return: the value associated with element, else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp = NULL;
	unsigned long int idx;

	if (!ht)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	for (tmp = ht->array[idx]; tmp; tmp = tmp->next)
		if (!strcmp(tmp->key, key))
			return (tmp->value);

	return (NULL);
}
