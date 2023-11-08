#include <stdio.h>

/**
* main - This program that prints all single digit numbers of
* base 10 starting from 0, followed by a new line.
* Return: Always 0.
*/
int main(void)
{
	int d = '0';

	for (; d <= '9'; d++)
	{
		putchar (d);
	}
	putchar ('\n');

	return (0);
}
