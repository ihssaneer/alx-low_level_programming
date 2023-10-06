#include <stdio.h>

/**
* main - This program  prints all the numbers of
* base 16 in lowercase, followed by a new line.
* Return: Always 0.
*/
int main(void)
{
	int d = '0';
	char c = 'a';

	for (; d <= '9'; d++)
	{
		putchar (d);
	}
	for (; c <= 'f'; c++)
	{
		putchar (c);
	}

	putchar ('\n');

	return (0);
}
