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
	printf("Name: %s", d->name ? d->name : "(nil)");
	if (d->age)
		printf("Age: %f", d->age);
	else
		printf("Age: %s", "(nil)");
	printf("Owner: %s", d->name ? d->owner : "(nil)");
}
