#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: a pointer to a listint_t list.
 * @idx: the index of the position where the new node will be inserted.
 * @n: the value of the new node.
 * Return: a pointer to the new node or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = NULL, *new = NULL;
	unsigned int count = 0;

	if (!*head && idx != 0)
		return (NULL);
	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	tmp = *head;
	while (count <= (idx - 1))
	{
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (new);
		}
		if (count == (idx - 1) || idx == 0)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		else
			count++, tmp = tmp->next;
		if (!tmp->next)
		{
			free(new);
			return (NULL);
		}
	}
	free(new);
	return (NULL);
}
