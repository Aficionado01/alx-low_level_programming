#include "dog.h"
#include <stdlib.h>

/**
* new_dog - creates a new dog
* @name: new dog name
* @age: new dog age
* @owner: new dog owner
*
* Return: newdog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
int i, name_len, owner_len;
dog_t *newdog = malloc(sizeof(dog_t));

for (name_len = 0; name[name_len]; name_len++)
;
for (owner_len = 0; owner[owner_len]; owner_len++)
;
if (newdog == NULL)
return (NULL);
newdog->name = malloc(sizeof(char) * (name_len + 1));
if (newdog->name == NULL)
{
free(newdog);
return (NULL);
}
newdog->owner = malloc(sizeof(char) * (owner_len + 1));
if (newdog->owner == NULL)
{
free(newdog->name);
free(newdog);
return (NULL);
}
for (i = 0; i <= name_len; i++)
newdog->name[i] = name[i];
newdog->age = age;
for (i = 0; i <= owner_len; i++)
newdog->owner[i] = owner[i];
return (newdog);
}
