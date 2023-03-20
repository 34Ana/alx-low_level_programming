#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialises variable of type struct dog
 * @d: dog to bee initialised
 * @name: dogs name
 * @age: dogs age
 * @owner: the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
