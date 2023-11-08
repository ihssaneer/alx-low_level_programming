#include "main.h"

/**
 * _isalpha - checks for alphabetic character, lowercase or uppercase.
 * @c: the caracter to check.
 * Return: 1 success 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	else
		return (0);
}

