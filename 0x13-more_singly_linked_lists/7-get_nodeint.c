#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: a pointer to a listint_t linked list.
 * @index: the index of the node to return.
 * Return: a pointer to the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = NULL;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	tmp = head;
	while (count <= index && tmp->next)
	{
		if (count == index)
			return (tmp);
		count++;
		tmp = tmp->next;
	}
	return (NULL);
}
