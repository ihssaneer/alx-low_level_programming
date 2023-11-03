#include "main.h"
int is_digit_string(const char *str);
/**
 * main - a program that multiplies two positive numbers.
 * @ac: the number of arguments.
 * @av: the values of arguments.
 * Return: the multiplication of tow numbers.
 */
int main(int ac, char *av[])
{
	unsigned long long num1 = 0, num2 = 0, mul = 0;

	if (ac != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!is_digit_string(argv[1]) || !is_digit_string(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	num1 = strtoull(argv[1], NULL, 10);
	num2 = strtoull(argv[2], NULL, 10);
	mul = num1 * num2;
	printf("%llu\n", mul);

	return (0);
}
/**
 * is_digit_string - checks if the a string composed only from digits.
 * @str: the string to be checked.
 * Return: 1 succes 0 othewise.
 */
int is_digit_string(const char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}
