#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog.
 * @d: a pointer to a variable of type struct dog.
 * @name: the name of a variable of type struct dog.
 * @age: the age of a variable of type struct dog.
 * @owner: the owner of a variable of type struct dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
