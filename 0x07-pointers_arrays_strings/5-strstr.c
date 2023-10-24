#include "main.h"
#include <stddef.h>
/**
 * _strstr - function that locates a substring.
 * @haystack: String to be checked.
 * @needle: The string to look for.
 * Return: Returns a pointer to the beginning of
 * the located substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	unsigned int j;
	char *tmp = NULL;

	for (i = 0; needle[i] != '\0'; i++)
	{
		tmp = needle;
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (haystack[j] == needle[i])
			{
				tmp = &needle[i];
				return (tmp);
			}
			tmp++;
		}
	}
	tmp = NULL;
	return (tmp);
}
