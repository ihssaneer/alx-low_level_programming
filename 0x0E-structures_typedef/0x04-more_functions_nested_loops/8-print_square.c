#include "main.h"

/*ihssaneer*/
/**
 * print_square - that prints a square.
 * @size: size of the square.
 * Return: void.
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
			if (j == size)
			_putchar('\n');
		}
	}
	}
	else
	_putchar('\n');
}
