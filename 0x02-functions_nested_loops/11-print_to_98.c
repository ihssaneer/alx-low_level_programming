#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: the number to start with.
 * Return: void.
 */
void print_to_98(int n)
{
	for (; n < 99; n++)
	{
		if (n < 10)
		{
			if (n < 0)
			{
				_putchar(45);
				_putchar((n * -1) + '0');
			}
			else 
				_putchar(n + '0');
		}
		if (n >= 10 && n < 99)
			_putchar((n / 10) + '0'), _putchar((n % 10) + '0');
		if (n != 98)
			_putchar(','), _putchar(' ');
	}
	_putchar('\n');
}
