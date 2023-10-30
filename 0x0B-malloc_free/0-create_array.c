#include "main.h"
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of te array.
 * @c: the special caracter to initialize the array with.
 * Return: Returns a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	arr = (char *) malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		printf("failed to allocate memory\n");
		return (NULL);
	}
	while (i < size)
	{
	arr[i] = c;
	i++;
	}
	return (arr);
}
