#include "main.h"
/**
 * *array_range - creates an array of integers.
 * @min:  the start number.
 * @max: the end number.
 *  Return: pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *int_array = NULL;
	int i = 0, size = 0;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	int_array = (int *)malloc(sizeof(int) * size);
	if (int_array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		int_array[i] = min++;
	}
	return (int_array);
}
