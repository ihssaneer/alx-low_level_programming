#include "main.h"

/*ihssaneer*/
/**
 * print_line - draws a straight line in the terminal.
 * @n: the times the _ should be printed.
 * Return: void.
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');

}
