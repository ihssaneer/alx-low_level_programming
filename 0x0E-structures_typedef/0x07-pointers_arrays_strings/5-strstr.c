#include "main.h"
#include <stddef.h>
#include <stdbool.h>
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
	char *tmp = NULL, *hay, *need;
	bool same = 0;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (haystack[j] == needle[i])
			{
				tmp = &haystack[j];
				hay = tmp, need = &needle[i];
				while (*hay != '\0' && *need != '\0')
				{
					if (*hay++ == *need++)
						{same = 1;
						continue;
						}
					else if (*hay++ != *need++)
						{same = 0;
						break;
						}
				}
				if (same == 1)
				return (tmp);
			}
		}
	}
	tmp = NULL;
	return (tmp);
}
