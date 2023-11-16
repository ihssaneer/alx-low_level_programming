#include "lists.h"
/*ihssaneer*/
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: a double pointer to a list_t list.
 * @str: a pointer to the value of the new str.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;

	new = (list_t *)malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}
