#include "main.h"
/**
* main - prints all arguments it receives.
* @argc: The number of command-line arguments
* @argv: An array of strings representing the arguments
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
int i = 0;

for (; i <= (argc - 1); i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
