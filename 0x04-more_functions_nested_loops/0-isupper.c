#include "main.h"

/*ihssaneer*/
/**
 * _isupper - checks for uppercase character.
 * @c: the character to check.
 * Return: 1 if true 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}