#include "main.h"
#include <ctype.h>


/**
 *_isupper - checks for uppercase characht
 *
 *@c: checked character
 *
 *Return: 1 if true
 */


int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);

}

