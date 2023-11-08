#include "main.h"
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
		sum1 += a[x * size + x];
		sum2 += a[y * size + (size - (x - 1))];
{
        for (i = size - 1, j = 0; j < size ; j++, i--)
        {
                sum2 = sum2 + a[j * size +  i];
        }
        printf("%d, %d\n", sum1, sum2);
})];
		x++;
	}
	printf("%u, ", sum1);
	printf("%u\n", sum2);
	void print_diagsums(int *a, int size)
{
        int i, j;
        int sum1 = 0;
        int sum2 = 0;

        for (i = 0 ; i < size ; i++)
        {
                sum1 = sum1 + a[i * size +  i];
        }
        for (i = size - 1, j = 0; j < size ; j++, i--)
        {
                sum2 = sum2 + a[j * size +  i];
        }
        printf("%d, %d\n", sum1, sum2);
}
}
