#include "main.h"

/**
* main - adds positive numbers.
* @argc: The number of command-line arguments
* @argv: An array of strings representing the arguments
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
int i = 0;
unsigned int sum = 0, j = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
for (j = 0; j < strlen(argv[i]); j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%u\n", sum);
return (0);
}
