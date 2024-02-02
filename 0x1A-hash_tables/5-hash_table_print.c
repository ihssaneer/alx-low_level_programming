#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table to look into it.
 * Return: void.
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp = NULL;

	if (!ht)
		return;
	printf("{");
	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
			if (tmp)
				printf(", ");
		}
		i++;
	}
	printf("}\n");
}
