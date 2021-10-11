#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: the hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp = NULL;
	int FLAG = 0;

	if (!ht)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
		if (ht->array[i])
		{
			printf("%s", (FLAG) ? ", " : "");
			tmp = ht->array[i];
			while (tmp)
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
				if (tmp)
					printf(", ");
			}

			FLAG = 1;
		}

	printf("}\n");
}

