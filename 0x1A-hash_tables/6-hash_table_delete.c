#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table to look into it.
 * Return: void.
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp = NULL;

	if (!ht)
		return;
	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			ht->array[i] = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = ht->array[i];
		}
		i++;
	}
	free(ht->array);
	free(ht);
}

