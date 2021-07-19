#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: The pointer to the variable
 * @name: The value of the struct dog's name field
 * @age: The value of the struct dog's age field
 * @owner: The value of the struct dog's owner field
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
