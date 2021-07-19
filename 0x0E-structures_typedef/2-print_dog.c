#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints a variable of type struct dog
 * @d: The pointer to the variable
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	if ((void *)d->age != NULL)
		printf("Age: %f\n", d->age);
	else
		printf("Age: %s\n", "(nil)");
	printf("Owner: %s\n", d->name != NULL ? d->owner : "(nil)");
}
