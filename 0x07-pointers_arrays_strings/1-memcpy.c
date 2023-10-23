#include "main.h"

/**
 * _memcpy - function copies n bytes from
 * memory area src to memory area dest.
 * @dest: Pointer to the memory area to be filled.
 * @src: Pointer to the memory area to filled dest with.
 * @n: Number of bytes to be filled.
 * Return: Returns a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*dest++ = *src++;
		i++;
	}
	return (dest);
}
