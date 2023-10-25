#include "main.h"

int _str_len(char *s);
int compare_2_str(char *sorg, char *srcp);
/**
*is_palindrome - returns 1 if a string is a palindrome and 0 if not.
*@s: the string to check.
*Return:  returns 1 if a string is a palindrome and 0 if not.
*/
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	_str_len(s);
	return (compare_2_str(s, s + (_str_len(s) - 1)));
}
/**
*_str_len - returns the length of a string.
*@s: the string to mesure.
*Return:  the length of a string.
*/
int _str_len(char *s)
{
	if (*s != '\0')
		return (1 + _str_len(s + 1));
	else
		return (0);
}
/**
*compare_2_str - compare tow strings.
*@sorg: the originale string.
*@srcp: reversed pointer.
*Return:  1 success 0 othewise.
*/
int compare_2_str(char *sorg, char *srcp)
{
	if (*sorg == *srcp && *sorg)
	{
		sorg++;
		srcp--;
		return (compare_2_str(sorg, srcp));
	}
	if (*sorg != *srcp)
		return (0);
	return (1);
}

