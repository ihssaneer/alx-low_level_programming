#include "main.h"
/**
* main - prints the minimum number of
* coins to make change for an amount of money.
* @argc: The number of command-line arguments
* @argv: An array of strings representing the arguments
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
unsigned int change = 0;
int coins[5] = {25, 10, 5, 2, 1};
int i = 0, cents = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents <= 0)
{
printf("0\n");
return (1);
}
for (i = 0; i < 5; i++)
{
change += cents / coins[i];
cents %= coins[i];
if (cents == 0)
{
printf("%u\n", change);
return (0);
}
}
return (0);
}
