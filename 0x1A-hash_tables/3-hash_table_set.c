#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: a pointer to the hash table we want to update.
 * @key: s the key. It can not be an empty string.
 * @value: is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *tmp = NULL;

	if (!ht || !key || !*key)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (!strncmp(key, tmp->key, (strlen(tmp->key) + 1)))
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	tmp = malloc(sizeof(hash_node_t));
	if (tmp)
		return (0);
	tmp->key = strdup(key);
	tmp->value = strdup(value);
	tmp->next = ht->array[index];
	ht->array[index] = tmp;
	return (1);
}
