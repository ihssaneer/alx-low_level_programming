#include "main.h"

int prime_rf(int n, int i);

/**
 * is_prime_number - returns 1 if the input integer is a prime number.
 * @n: the number to check.
 * Return: 1 is success 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_rf(n, 2));
}
/**
 * prime_rf - checks if n is prime number.
 * @n: input number.
 * @i: input number.
 * Return: the natural square.
 */
int prime_rf(int n, int i)
{
	if (i == n - 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime_rf(n, ++i));
}

