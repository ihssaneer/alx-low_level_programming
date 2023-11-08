#include "function_pointers.h"
/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array.
 * @array: an array of values to element.
 * @size: the size of the array.
 * @action: a pointer to the function you need to use.
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < (int)size; i++)
	{
		(*action)(array[i]);
	}
}
