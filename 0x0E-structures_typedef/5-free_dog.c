#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees a previously allocated dog
 * @d: The dog to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
