#include "lists.h"
/*ihssaneer*/
/**
 * free_list - frees a list_t list.
 * @head: pointer to list_t list.
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *tmp = NULL;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
	free(head);
}
