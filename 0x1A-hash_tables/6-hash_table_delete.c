#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table given
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL, *next = NULL;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			next = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = next;
		}
		free(tmp);
	}

	free(ht->array);
	free(ht);
}
