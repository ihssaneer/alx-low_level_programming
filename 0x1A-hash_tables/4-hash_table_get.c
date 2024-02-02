#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table to look into it.
 * @key: is the key to looking for it.
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *tmp = NULL;

	if (!ht || !key || !*key)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp)
	{
		if (!strncmp(key, tmp->key, strlen(tmp->key)))
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
