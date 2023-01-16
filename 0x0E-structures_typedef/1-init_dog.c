#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog.
 * @d: pointer to type struct dog.
 * @name: first member of struct dog.
 * @age: second member of struct dog.
 * @owner: third member of struct dog.
 *
 * Return: pointer to type struct dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
