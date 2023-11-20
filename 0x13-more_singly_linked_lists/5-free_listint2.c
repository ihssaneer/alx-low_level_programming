#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list.
 * @head: a pointer to a listint_t list.
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp = NULL;

	if (head == NULL)
		return;
	tmp = head;
	while (head)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
	free(head);
	head = NULL;
}
