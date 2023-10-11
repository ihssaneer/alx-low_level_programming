#include "main.h"

/**
 * main - prints the alphabet, in lowercase, followed by a new line.
 * Return: 0 success.
 */
int main(void)
{
	int count;

	for (count = 'a'; count <= 'z'; count++)
	{
		_putchar(count);
	}
		_putchar('\n');
	return (0);
}
