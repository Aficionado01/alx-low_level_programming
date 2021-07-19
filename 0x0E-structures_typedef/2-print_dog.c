#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints a variable of type struct dog
 * @d: The pointer to the variable
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
