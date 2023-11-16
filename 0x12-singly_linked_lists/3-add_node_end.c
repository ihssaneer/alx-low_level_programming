#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: a double pointer to a list_t list.
 * @str: a pointer to the value of the new str.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL, *tmp = NULL;

	new = (list_t *)malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (!*head)
		*head = new;
	else
	{
		tmp = *head;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}

	return (new);
}
