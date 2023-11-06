#include "dog.h"
/**
 * print_dog - prints a struct dog.
 * @d: a pointer to a variable of type struct dog.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name != NULL)
		printf("Name: %s\n", (*d).name);
	else
		printf("Name: (nil)");
	printf("Age: %.6f\n", (*d).age);
	if ((*d).owner != NULL)
		printf("Owner: %s\n", (*d).owner);
	else
		printf("Owner: (nil)");
}
