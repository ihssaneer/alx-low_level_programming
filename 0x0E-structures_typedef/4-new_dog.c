#include "dog.h"
/**
 * new_dog - creates a new dog.
 * @name: the dog name.
 * @age: the dog age.
 * @owner: the dog owner.
 * Return: pointer to the newly allocated memory.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_ptr = NULL;

	dog_ptr = (dog_t *)malloc(sizeof(dog_t));
	if (dog_ptr == NULL)
		return (NULL);
	dog_ptr->name = (char *)malloc(sizeof(char) * (strlen(name) + 1));
		if (dog_ptr->name == NULL)
			return (NULL);
	strcpy(dog_ptr->name, name);
	dog_ptr->age = age;
	dog_ptr->owner = strdup(owner);
	return (dog_ptr);
}
