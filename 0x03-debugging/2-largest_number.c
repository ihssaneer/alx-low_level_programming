#include "main.h"

/*ihssaneer*/
/**
 * largest_number - returns the largest of 3 numbers
 * @a: 1st integer
 * @b: 2nd integer
 * @c: 3th integer
 * Return: biggest number
 */
int largest_number(int a, int b, int c)
{
	int biggest;

	if (a >= b && a >= c)
	{
		biggest = a;
	}
	else if (b >= a && b >= c)
	{
		biggest = b;
	}
	else
	{
		biggest = c;
	}
	return (biggest);
}
