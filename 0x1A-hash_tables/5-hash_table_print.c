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
			printf("'%s': ", tmp->key);
			if (tmp->next)
			{
				printf("'%s'", tmp->value);
				for (tmp = tmp->next; tmp; tmp = tmp->next)
					printf(", '%s'", tmp->value);
			}
			else
				printf("'%s'", tmp->value);

			FLAG = 1;
		}

	printf("}\n");
}

