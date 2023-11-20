#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: a pointer to a listint_t linked list.
 * Return: returns the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = NULL;
	int n = 0;

	if (head == NULL)
		return (0);
    tmp = *head;
	n = tmp->n;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
