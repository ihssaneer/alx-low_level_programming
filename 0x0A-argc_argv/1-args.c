#include "main.h"

/**
* main - prints the number of arguments passed into it, followed by a new line.
* @argc: The number of command-line arguments
* @argv: An array of strings representing the arguments
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
(void) argv;

if (!argc)
{
return (0);
}
printf("%d\n", (argc - 1));
return (0);
}
