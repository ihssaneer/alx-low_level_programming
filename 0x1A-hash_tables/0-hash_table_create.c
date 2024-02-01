#include "hash_tables.h"

/**
 * hash_table_create - hhd
 * @size: sdjhj
 * Return: jhdj
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_tab = NULL;

	if (size == 0)
		return (NULL);
	hash_tab = malloc(sizeof(hash_table_t *) * size);
	if (hash_tab == NULL)
		return (NULL);
	hash_tab->size = size;
	hash_tab->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_tab->array == NULL)
		return (NULL);
	return (hash_tab);
}
