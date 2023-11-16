#include "lists.h"
/*ihssaneer*/
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to a linked list_t list.
 * Return: the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
