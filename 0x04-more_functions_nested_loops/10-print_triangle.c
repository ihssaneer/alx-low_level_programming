#include "main.h"

/*ihssaneer*/
/**
 * print_triangle - prints a triangle.
 * @size: the size of the triangle.
 * Return: void.
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
	for (i = 1; i <= size; i++)
	{
		for (j = size; j > 0; j--)
		{
			if (j <= i)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
	}
	else
	_putchar('\n');
}
