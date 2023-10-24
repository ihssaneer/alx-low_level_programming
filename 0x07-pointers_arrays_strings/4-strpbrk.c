#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: String to be checked.
 * @accept: The string to look for.
 * Return: Returns a pointer to the byte in s that
 * matches one of the bytes in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	unsigned int j;
	char *tmp = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		tmp = s;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				tmp = &s[i];
				return (tmp);
			}
			tmp++;
		}
	}
	tmp = NULL;
	return (tmp);
}
