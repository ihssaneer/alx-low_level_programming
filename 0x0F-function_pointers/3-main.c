#include "3-calc.h"
/**
 * main -  prints the result of the operation, followed by a new line.
 * @ac: the number of arguments pased to the program.
 * @av: the values of arguments pased to the program.
 * Return: void
 */
int main(int ac, char **av)
{
    int result = 0, num1, num2;
    char OP;

    if (ac != 4)
    {
        printf("Error\n");
        exit(98);
    }
    num1 = atoi(av[1]);
    num2 = atoi(av[3]);
    OP = av[2][0];
    if (av[2][1] != '\0' || (OP != '/' && OP != '%' && OP != '+' && OP != '-' && OP != '*'))
    {
        printf("Error\n");
        return (99);
    }
    if (num2 == 0 || (OP == '/' && OP == '%'))
    {
        printf("Error\n");
        exit(100);
    }
    result = (get_op_func(av[2]))(num1, num2);
    printf("%d\n", result);
    return (0);
}
