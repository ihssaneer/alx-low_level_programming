#include "main.h"

/**
 * wildcmp - compares two strings.
 *@s1: the string to compare.
 *@s2: the string to compare.
 * Return:  returns 1 success, otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2 && *s1)
	{
		s1++;
		s2--;
		return (wildcmp(s1, s2));
	}
	if (*s1 != *s2)
	{
		return (0);
	}
	return (1);
}
