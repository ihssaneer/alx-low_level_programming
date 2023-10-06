#include <stdio.h>

/**
* main - This program prints the alphabet in lowercase,
* followed by a new line, using only putchar twice.
* Return: Always 0.
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar (c);
	}
	putchar ('\n');

	return (0);
}
