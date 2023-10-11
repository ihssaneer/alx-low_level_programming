#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: the number to check.
 * Return: Returns 1 if n is positive, 0 if n is zero
 * and -1 if n is negative
 */
int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar(43);
		return (1);
	}
	else if (n <= -1)
	{
		_putchar(45);
		return (-1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	return (0);
}
