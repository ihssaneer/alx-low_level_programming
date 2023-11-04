#ifndef STRUCT_H
#define STRUCT_H
/**
 * struct dog - a structer dog atrributs.
 * @name: the name of member.
 * @age: the age of member.
 * @owner: the owner of member.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif /*STRUCT_H*/
