#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string.
 * @s: String to be checked.
 * @c: The character c to look for.
 * Return: Returns a pointer to the first occurrence
 * of the character c in the string s, or NULL
 * if the character is not found.
 */
char *_strchr(char *s, char c)
{
	if (s == NULL)
		return (s);
	while (*s != '\0')
	{
		if (*s == c)
			break;
	s++;
	}
	if (*s == '\0')
		s = NULL;
return (s);
}
