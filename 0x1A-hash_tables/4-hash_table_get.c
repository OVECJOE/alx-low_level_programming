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
	unsigned long int idx, i;

	idx = key_index((const unsigned char *)key, ht->size);
	for (i = idx; ht->array[i]; i++)
		if (!strcmp(ht->array[i]->key, key))
			return (ht->array[i]->value);

	return (NULL);
}
