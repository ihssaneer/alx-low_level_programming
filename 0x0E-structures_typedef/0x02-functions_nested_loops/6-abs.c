#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @num: the number to computes.
 * Return: Returns the computes value of num.
 */
int _abs(int num)
{
	if (num >= 0)
	{
		return (num);
	}
	else if (num <= -1)
	{
		num *= -1;
		return (num);
	}
	return (0);
}
