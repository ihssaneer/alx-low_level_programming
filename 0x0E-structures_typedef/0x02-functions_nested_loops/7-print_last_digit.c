#include "main.h"
#include "stdio.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @num: the number to computes.
 * Return: Returns the computes value of num.
 */
int print_last_digit(int num)
{
	int modulo = num % 10;

	if (modulo < 0)
	{
		modulo *= -1;
	}
	_putchar(modulo + '0');
	return (modulo);
}
