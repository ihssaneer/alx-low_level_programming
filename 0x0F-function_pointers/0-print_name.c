#include "function_pointers.h"
/**
 * print_name -  prints a name.
 * @name: the name to print.
 * @f: a pointer to a function that take a string as an arguments.
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
