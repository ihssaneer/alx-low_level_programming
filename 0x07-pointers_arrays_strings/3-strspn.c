#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String to be checked
 * @accept: Bytes that will determine the length
 * Return: Length of the bytes given
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int j;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == accept[i])
				return (j + 1);
		}
	}
	return (j);
}
