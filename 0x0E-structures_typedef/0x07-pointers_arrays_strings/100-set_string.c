#include "main.h"

/**
 * print_chessboard -  prints the chessboard.
 * @: String to be checked
 * @accept: Bytes that will determine the length
 * Return: Length of the bytes given
 */
void print_chessboard(char (*a)[8])
{
	int i;
	unsigned int j;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == accept[i])
				return (j + 1);
		}
	}
	return (0);
}
