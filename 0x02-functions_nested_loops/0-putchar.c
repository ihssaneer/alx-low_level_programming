#include "main.h"

/**
 * main - prints the word _putchar, followed by a new line.
 * 
 * Return: 0 success.
 */
int main(void)
{
	int count;
	char P_array[] = "_putchar";

	for (count = 0; count <= 7; count++)
	{
		_putchar(P_array[count]);
	}
		_putchar('\n');
	return (0);
}