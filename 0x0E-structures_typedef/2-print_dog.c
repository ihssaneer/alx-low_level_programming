#include "dog.h"
/**
 * print_dog - prints a struct dog.
 * @d: a pointer to a variable of type struct dog.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", (*d).name);
	printf("Age: %.6f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}
