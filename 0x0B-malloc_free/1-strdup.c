#include "main.h"
int _strlenth(char *str);
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to copy.
 * Return: On success, a pointer to the duplicated string and NULL otherwise.
 */
char *_strdup(char *str)
{
	char *arr;
	unsigned int i = 0, size;

	if (str == NULL)
		return (NULL);
	size = _strlenth(str);
	if (size == 0)
		return (NULL);
	arr = (char *) malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		printf("failed to allocate memory\n");
		return (NULL);
	}
	while (i <= size)
	{
	arr[i] = str[i];
	i++;
	}
	return (arr);
}
/**
 * _strlenth - Calculate the lenth of a string.
 * @str: The string to mesure.
 * Return: Returns the lenth of the str.
 */
int _strlenth(char *str)
{
	int i = 0;

	if (!str)
		return (0);
	while (str[i])
	{
		i++;
	}
	return (i);
}
