#include "lists.h"

int _putchar(char c);
size_t print_listint(const listint_t *h);
/**
 * print_listint - prints all the elements of a listint_t list,
 * followed by new line.
 * @h: a pointer to a listint_t list.
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}

/**
 * _putchar - write a character to the stdout.
 * @c: charachter to print.
 * Return: 1 on sucess.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
