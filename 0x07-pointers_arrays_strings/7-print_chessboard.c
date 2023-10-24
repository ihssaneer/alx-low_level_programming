#include "main.h"
#include <stddef.h>
#include <stdbool.h>
/**
 * print_chessboard - prints the chessboard.
 * @a: String to be checked.
 * Return: void.
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	while (i < 8)
	{
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		i++;
		j = 0;
	_putchar('\n');
	}
}
