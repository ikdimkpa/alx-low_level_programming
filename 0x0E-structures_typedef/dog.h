#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure containing members of types char and float.
 * @name: first member of the structure.
 * @age: second member of the structure.
 * @owner: third member of the structure.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
