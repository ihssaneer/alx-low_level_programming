#include "main.h"

/**
 *_puts_recursion - prints a string, followed by a new line.
 *@s: the string to print.
 *Return:  void.
 */
void _puts_recursion(char *s)
{
	char *tmp = s;

	if (*tmp != '\0')
	{
		_putchar(*tmp);
		_puts_recursion(++tmp);
	}
	else
		_putchar('\n');
}
