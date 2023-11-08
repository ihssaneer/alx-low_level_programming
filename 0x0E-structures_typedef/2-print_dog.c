#include "dog.h"
/**
 * print_dog - prints a struct dog.
 * @d: a pointer to a variable of type struct dog.
 */
void print_dog(struct dog *d)
{
<<<<<<< HEAD
	if (d == NULL)
		return;
	if ((*d).name != NULL)
		printf("Name: %s\n", (*d).name);
	else
		printf("Name: (nil)\n");
	printf("Age: %.6f\n", (*d).age);
	if ((*d).owner != NULL)
		printf("Owner: %s\n", (*d).owner);
	else
		printf("Owner: (nil)\n");
=======
	if (d)
	{
		if (!(d->name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (!(d->owner))
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
>>>>>>> b4ea1ccc259da838cf6965c70a35d5994319d4ed
}
