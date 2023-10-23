#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to the memory area to be filled.
 * @b: Constant byte to fill the memory with.
 * @n: Number of bytes to be filled.
 *
 * Return: Pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
