#include <stdio.h>

/**
* main - This program prints the alphabet in lowercase in reverse,
* followed by a new line, using only putchar twice.
* Return: Always 0.
*/
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar (c);
	}
	putchar ('\n');

	return (0);
}
