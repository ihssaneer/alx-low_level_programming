#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers.
 * @a: a square matrix of integers.
 * @size: the size of the square.
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int x = 0;
	unsigned int sum1 = 0, sum2 = 0;

	while (x < size)
	{
		sum1 += a[x * size + i];
		sum2 += a[i * size + (size - i - 1)];
		i++;
	}
	printf("%u, ", sum1);
	printf("%u\n", sum2);
}
