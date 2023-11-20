#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @n: the value of n to insert in the new node.
 * @head: a pointer to the beginning of a listint_t list.
 * Return: a pointer to the new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
