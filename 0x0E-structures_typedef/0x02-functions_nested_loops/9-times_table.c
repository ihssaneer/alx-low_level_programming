#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: void.
 */
void times_table(void)
{
	int x, y, T9;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			T9 = x * y;
			if (T9 > 9)
				_putchar((T9 / 10) + '0'), _putchar((T9 % 10) + '0');
			else
				_putchar(T9 + '0');
			if (y != 9)
			{
				_putchar(','), _putchar(' ');
				if ((T9 < 10) && (x * (y + 1)) < 10)
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
