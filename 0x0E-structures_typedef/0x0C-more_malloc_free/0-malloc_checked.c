#include "main.h"
/**
 * malloc_checked - allocates memory using malloc.
 * @b: the size to allocate.
 * Return: a pointer or 98 if it fails.
*/
void *malloc_checked(unsigned int b)
{
void *pointer;

pointer = (void *)malloc(b);
if (pointer == NULL)
{
exit(98);
}
return (pointer);
}
