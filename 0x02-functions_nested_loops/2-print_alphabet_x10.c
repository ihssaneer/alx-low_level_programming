#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 * Return: 0 success.
 */
void print_alphabet_x10(void)
{
	int count, i = 0;

	while (i < 10)
	{
		for (count = 'a'; count <= 'z'; count++)
		{
			_putchar(count);
		}
		_putchar('\n');
		i++;
	}
}

