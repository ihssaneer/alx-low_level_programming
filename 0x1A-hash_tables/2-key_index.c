#include "hash_tables.h"
/**
 * key_index - jjj
 * @key: kd
 * @size: ijjd
 * Return: jddn
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	if (key ==  NULL || size == 0)
		return (-1);
	index = hash_djb2(key) % size;
	return (index);
}
