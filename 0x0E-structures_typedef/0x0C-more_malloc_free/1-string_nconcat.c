#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1 : the first string.
 * @s2 : the second string.
 * @n : the first n strings to concatenate.
 * Return: return pointer or Null if it fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr = NULL;
	int size = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > strlen(s2))
		n = strlen(s2);
	size = (int)strlen(s1) + n + 1;
	newstr = (char *)malloc(sizeof(char) * size);
	if (newstr == NULL)
		return (NULL);
	for (; i < (int)strlen(s1); i++)
	{
		newstr[j] = s1[i];
		j++;
	}
	for (i = 0; i < (int)n; i++)
	{
		newstr[j] = s2[i];
		j++;
	}
	newstr[j] = '\0';
	return (newstr);
}
