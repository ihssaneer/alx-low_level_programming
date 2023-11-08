#include "main.h"

int natural_sqr(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (n < 0)
		return (-1);
	else
		return (natural_sqr(n, 2));
}
/**
* natural_sqr - returns the natural square root of a number.
* @n: input number.
* @i: input number.
* Return: the natural square.
*/

int natural_sqr(int n, int i)
{
	if (i > (n / 2))
		return (-1);
	if (n == i * i)
		return (i);
	return (natural_sqr(n, ++i));
}

