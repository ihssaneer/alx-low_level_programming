#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 * Return: 0 success.
 */
void print_alphabet(void)
{
	int count;

	for (count = 'a'; count <= 'z'; count++)
	{
		_putchar(count);
	}
		_putchar('\n');
}
