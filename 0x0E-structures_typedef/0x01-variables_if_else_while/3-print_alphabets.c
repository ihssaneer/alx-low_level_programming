#include <stdio.h>

/**
* main - This program prints the alphabet in lowercase then in uppercase,
* followed by a new line, using only putchar three times.
* Return: Always 0.
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar (c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar (c);
	}
	putchar ('\n');

	return (0);
}
