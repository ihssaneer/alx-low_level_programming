#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: unsigned int type.
 * @size: unsigned int type.
 * Return: return pointer or a Null if it fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *t_array = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);
	t_array = (void *)calloc(nmemb, size);
	if (t_array == NULL)
		return (NULL);
	return (t_array);
}
