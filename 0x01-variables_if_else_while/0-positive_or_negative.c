#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
* main - This program will assign a random number
* to the variable n and print it, each time it is executed.
* Return: Always 0.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative", n);
	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	else
		printf("%d is positive", n);

	return (0);
}
