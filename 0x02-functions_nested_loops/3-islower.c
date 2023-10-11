#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: the caracter to check.
 * Return: 1 success 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c < 123)
	{
		return (1);
	}
	else
		return (0);
}

