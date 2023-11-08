#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: reallocates a memory block using malloc and free.
 * @old_size: the size, in bytes, of the allocated space for ptr.
 * @new_size: the new size, in bytes of the new memory block.
 * Return: a pointer to the newly allocated memory or NULL otherwise.
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pointer = NULL, *pointer2 = NULL;
	unsigned int limit = 0, i = 0;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);
	pointer = malloc(new_size);
	if (pointer == NULL)
		return (NULL);
	pointer2 = ptr;
	if (new_size > old_size)
		limit = old_size;
	if (new_size < old_size)
		limit = new_size;
	for (i = 0; i < limit; i++)
		pointer[i] = pointer2[i];

	free(ptr);
	return (pointer);
}
