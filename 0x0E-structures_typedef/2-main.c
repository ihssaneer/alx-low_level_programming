#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = NULL;
    my_dog.age = 4.75;
    my_dog.owner = "Jon Snow";
    print_dog(&my_dog);
    return (0);
}
