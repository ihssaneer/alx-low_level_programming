#include "dog.h"
/**
 * free_dog - frees dogs.
 * @d: a pointer to a struct of type dog_t.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
