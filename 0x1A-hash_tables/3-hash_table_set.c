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
	unsigned long int index = -1;
	hash_node_t *tmp = NULL;

	if (ht == NULL || ht->array == NULL || key == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = malloc(sizeof(hash_node_t));
		if (!ht->array[index])
			return (0);
		ht->array[index]->key = strdup(key);
		ht->array[index]->value = strdup(value);
		ht->array[index]->next = NULL;
		return (1);
	}
	tmp = ht->array[index];
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = malloc(sizeof(hash_node_t));
	if (tmp->next == NULL)
		return (0);
	tmp->next->key = strdup(key);
	tmp->next->value = strdup(value);
	return (1);
}
