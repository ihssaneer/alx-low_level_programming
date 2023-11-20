#include "lists.h"
/**
 * sum_listint - Calculate the sum of all the data (n)
 * of a listint_t linked list.
 * @head: a pointer to a listint_t linked list.
 * Return: returns the sum of all the data (n)
 * of a listint_t linked list or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = NULL;

	if (!head)
		return (0);
	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
