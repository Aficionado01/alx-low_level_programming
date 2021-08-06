#include "dog.h"

/**
* init_dog - initializes a var type struct dog
* @d: pointer to struct dog
* @name: name of dog to init
* @age: age of dog to init
* @owner: owner of dog to init
*
* Return void
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
